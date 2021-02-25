%option yylineno
%{

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//estruturas
typedef enum {
    INDENT, DEDENT, NEWLINE, LPAR, RPAR, LSQB, RSQB, ENDMARKER
} TokenType;

typedef struct {
    TokenType type;
    char* lexeme;
    char* nome;
    int value;
} TokenRecord;

TokenRecord createToken(TokenType token){
    TokenRecord tokenR;
    switch((int) token)
    {
    case INDENT:
        tokenR.type = token;
        tokenR.lexeme = "\\t";
        tokenR.nome = "INDENT"; 
        return tokenR;
    
    case DEDENT:
        tokenR.type = token;
        tokenR.lexeme = "\\b";
        tokenR.nome = "DEDENT"; 
        return tokenR;
    
    case NEWLINE:
        tokenR.type = token;
        tokenR.lexeme = "\\n";
        tokenR.nome = "NEWLINE"; 
        return tokenR;

    case LPAR:
        tokenR.type = token;
        tokenR.lexeme = "(";
        tokenR.nome = "LPAR"; 
        return tokenR;

    case RPAR:
        tokenR.type = token;
        tokenR.lexeme = ")";
        tokenR.nome = "RPAR"; 
        return tokenR;

    case LSQB:
        tokenR.type = token;
        tokenR.lexeme = "[";
        tokenR.nome = "LSQB"; 
        return tokenR;

    case RSQB:
        tokenR.type = token;
        tokenR.lexeme = "]";
        tokenR.nome = "RSQB"; 
        return tokenR;
    
    case ENDMARKER:
        tokenR.type = token;
        tokenR.lexeme = "<<EOF>>";
        tokenR.nome = "ENDMARKER"; 
        return tokenR;
    }
}

TokenRecord *tokens;

void createAllTokens(){
    int i;
    tokens = (TokenRecord*) malloc(sizeof(TokenRecord)*(ENDMARKER+1));
    for(i=0; i<ENDMARKER+1; i++){
        tokens[i]=createToken(i);
    }
}

//variáveis
int qtd_tokens = 0;

char *textTab;
/* INDENT */
int qtd_indent = 0;
int qtd_tab_l = 0;
int qtd_tab_l_ant = 0;

//Contando tabs da string tratada(textTab).
int qtdChar(char *textTab, char my_c)
{
    int lenTT = strlen(textTab);
    int i, count = 0;
    for (i = 0; i < lenTT; i++)
    {
        char c = textTab[i];
        if (c == my_c)
        {
            count++;
        }
    }
    return count;
}

void tratamentoIndentacao()
{
    int i, j, k;
    int cSpace = 0;
    int numTab = 0;

    // TROCA SEQUENCIA DE 4 ESPACOS POR TAB E
    // REMOVE TUDO QUE VEM ANTES DE ENTER.
    int lenYY = strlen(yytext);
    for (i = 0; i < lenYY; i++)
    {
        char c = yytext[i];
        if (c == ' ')
        {
            cSpace++;
            if (cSpace == 4)
            {
                numTab++;
                cSpace = 0;
                strcat(textTab, "\t");
            }
        }
        else //EH ENTER!
        {
            cSpace = 0;
            strcpy(textTab, "\n");
        }
    }

    //TRATAMENTO PARA yytext
    //SOMENTE COM ESPACOS(SEM ENTER)
    if (cSpace > 0)
    {
        for (j = 0; j < cSpace; j++)
        {
            strcat(textTab, " ");
        }
    }
}

void processToken(TokenType token){
    TokenRecord tokenR = tokens[(int)token];
    printf("\n%d: %s -> %s\n", (yylineno-1), tokenR.lexeme, tokenR.nome);
}

//INDENT DEDENT SPACE E NEW LINE
void indentDedentSpaceNl()
{
    int i, j, k, qtdSpace, qtdEnter, qtdTab;
    int lenTT = strlen(textTab);
    for (i = 0; i < lenTT; i++)
    {
        char c = textTab[i];
        /*
        if (c == ' ')
        {
            printf(" ESPACO ");
        }
        */

        if (c == '\n')
        {   
            processToken(NEWLINE);
        } 
        /* 
        else
        {   
            /*
            qtdSpace = qtdChar(textTab, ' ');
            qtdTab = qtdChar(textTab, '\t');
            if ((qtdTab + qtdSpace) == lenTT)
            {
                printf(" TAB ");
            }
            
        }
        */

        qtdEnter = qtdChar(textTab, '\n');
        if (lenTT > 1 && qtdEnter > 0)
        {
            qtd_tab_l = qtdChar(textTab, '\t');
            int diff;
            if (qtd_tab_l > qtd_tab_l_ant) //INDENT
            {
                diff = qtd_tab_l - qtd_tab_l_ant;
                qtd_indent += diff;
                for (j = 0; j < diff; j++)
                {
                    processToken(INDENT);
                }
            }
            else if (qtd_tab_l < qtd_tab_l_ant) //DEDENT
            {
                diff = qtd_tab_l_ant - qtd_tab_l;
                qtd_indent -= diff;
                for (j = 0; j < diff; j++)
                {
                    processToken(DEDENT);
                }
            }
        }

        if (c == '\n')
        {
            qtd_tab_l_ant = qtd_tab_l;
            qtd_tab_l = 0;
        }
    }
}

void indent()
{
    int i, j, k;
    int cSpace = 0;
    int numTab = 0;
    int lenYY = strlen(yytext);
    textTab = (char *)malloc(sizeof(yytext));

    //funcoes principais
    tratamentoIndentacao();
    indentDedentSpaceNl();

    /*
    int lenTT = strlen(textTab);
    printf("\n\n\n INI_TEXT_TAB \n");
    printf("Numtab: %d\n", numTab);
    printf("lenYY: %d, lenTT: %d\n", lenYY, lenTT);
    for(i=0; i<lenTT; i++){
        int new_c = textTab[i];
        printf("@%d@\n", new_c);
    }
    printf("END_TEXT_TAB\n");
    */
}

%}

%%
[\n\t ]+     { indent(); }
[(]          { processToken(LPAR); }
[)]          { processToken(RPAR); }
"["          { processToken(LSQB); }
"]"          { processToken(RSQB); }


<<EOF>>      { processToken(ENDMARKER); return 0;}

%%
int main() {
    createAllTokens();
    yylex();
    //printf("\n\nqtd_indent: %d.\n", qtd_indent);
    return 0;
}