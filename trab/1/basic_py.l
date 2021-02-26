%option yylineno
%{

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//estruturas
typedef enum {
    INDENT, DEDENT, NEWLINE,
    LPAR, RPAR,
    LSQB, RSQB,
    COLON, COMMA, SEMI,
    PLUS, MINUS, STAR, SLASH,
    VBAR, AMPER,
    LESS, GREATER,
    EQUAL,
    DOT,
    PERCENT,
    LBRACE, RBRACE,
    EQEQUAL, NOTEQUAL,
    LESSEQUA, GREATEREQUAL,
    TILDE, CIRCUMFLEX,
    LEFTSHIFT, RIGHTSHIFT,
    DOUBLESTAR,
    PLUSEQUAL, MINEQUAL,
    STAREQUAL, SLASHEQUAL,
    PERCENTEQUAL, AMPEREQUAL,
    VBAREQUAL, CIRCUMFLEXEQUAL,
    LEFTSHIFTEQUAL, RIGHTSHIFTEQUAL,
    DOUBLESTAREQUAL, DOUBLESLASHEQUAL,
    DOUBLESLASH,
    AT, ATEQUAL, RARROW, ELLIPSIS, COLONEQUAL,

    ENDMARKER
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

    case COLON:
        tokenR.type = token;
        tokenR.lexeme = ":";
        tokenR.nome = "COLON"; 
        return tokenR;

    case COMMA:
        tokenR.type = token;
        tokenR.lexeme = ",";
        tokenR.nome = "COMMA"; 
        return tokenR;
    
    case SEMI:
        tokenR.type = token;
        tokenR.lexeme = ";";
        tokenR.nome = "SEMI"; 
        return tokenR;

    case PLUS:
        tokenR.type = token;
        tokenR.lexeme = "+";
        tokenR.nome = "PLUS"; 
        return tokenR;
    
    case MINUS:
        tokenR.type = token;
        tokenR.lexeme = "-";
        tokenR.nome = "MINUS"; 
        return tokenR;

    case STAR:
        tokenR.type = token;
        tokenR.lexeme = "*";
        tokenR.nome = "STAR"; 
        return tokenR;

    case SLASH:
        tokenR.type = token;
        tokenR.lexeme = "/";
        tokenR.nome = "SLASH"; 
        return tokenR;

    case VBAR:
        tokenR.type = token;
        tokenR.lexeme = "|";
        tokenR.nome = "VBAR"; 
        return tokenR;

    case AMPER:
        tokenR.type = token;
        tokenR.lexeme = "&";
        tokenR.nome = "AMPER"; 
        return tokenR;

    case LESS:
        tokenR.type = token;
        tokenR.lexeme = "<";
        tokenR.nome = "LESS"; 
        return tokenR;

    case GREATER:
        tokenR.type = token;
        tokenR.lexeme = ">";
        tokenR.nome = "GREATER"; 
        return tokenR;

    case EQUAL:
        tokenR.type = token;
        tokenR.lexeme = "=";
        tokenR.nome = "EQUAL"; 
        return tokenR;

    case DOT:
        tokenR.type = token;
        tokenR.lexeme = ".";
        tokenR.nome = "DOT"; 
        return tokenR;

    case PERCENT:
        tokenR.type = token;
        tokenR.lexeme = "%";
        tokenR.nome = "PERCENT"; 
        return tokenR;

    case LBRACE:
        tokenR.type = token;
        tokenR.lexeme = "{";
        tokenR.nome = "LBRACE"; 
        return tokenR;

    case RBRACE:
        tokenR.type = token;
        tokenR.lexeme = "}";
        tokenR.nome = "RBRACE"; 
        return tokenR;

    case EQEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "==";
        tokenR.nome = "EQEQUAL"; 
        return tokenR;

    case NOTEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "=!";
        tokenR.nome = "NOTEQUAL"; 
        return tokenR;

    case LESSEQUA:
        tokenR.type = token;
        tokenR.lexeme = "<=";
        tokenR.nome = "LESSEQUA"; 
        return tokenR;

    case GREATEREQUAL:
        tokenR.type = token;
        tokenR.lexeme = ">=";
        tokenR.nome = "GREATEREQUAL"; 
        return tokenR;

    case TILDE:
        tokenR.type = token;
        tokenR.lexeme = "~";
        tokenR.nome = "TILDE"; 
        return tokenR;

    case CIRCUMFLEX:
        tokenR.type = token;
        tokenR.lexeme = "^";
        tokenR.nome = "CIRCUMFLEX"; 
        return tokenR;

    case LEFTSHIFT:
        tokenR.type = token;
        tokenR.lexeme = "<<";
        tokenR.nome = "LEFTSHIFT"; 
        return tokenR;

    case RIGHTSHIFT:
        tokenR.type = token;
        tokenR.lexeme = ">>";
        tokenR.nome = "RIGHTSHIFT"; 
        return tokenR;

    case DOUBLESTAR:
        tokenR.type = token;
        tokenR.lexeme = "**";
        tokenR.nome = "DOUBLESTAR"; 
        return tokenR;

    case PLUSEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "+=";
        tokenR.nome = "PLUSEQUAL"; 
        return tokenR;

    case MINEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "-=";
        tokenR.nome = "MINEQUAL"; 
        return tokenR;

    case STAREQUAL:
        tokenR.type = token;
        tokenR.lexeme = "*=";
        tokenR.nome = "STAREQUAL"; 
        return tokenR;

    case SLASHEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "/=";
        tokenR.nome = "SLASHEQUAL"; 
        return tokenR;

    case PERCENTEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "%=";
        tokenR.nome = "PERCENTEQUAL"; 
        return tokenR;

    case AMPEREQUAL:
        tokenR.type = token;
        tokenR.lexeme = "&=";
        tokenR.nome = "AMPEREQUAL"; 
        return tokenR;

    case VBAREQUAL:
        tokenR.type = token;
        tokenR.lexeme = "|=";
        tokenR.nome = "VBAREQUAL"; 
        return tokenR;

    case CIRCUMFLEXEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "^=";
        tokenR.nome = "CIRCUMFLEXEQUAL"; 
        return tokenR;

    case LEFTSHIFTEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "<<=";
        tokenR.nome = "LEFTSHIFTEQUAL"; 
        return tokenR;

    case RIGHTSHIFTEQUAL:
        tokenR.type = token;
        tokenR.lexeme = ">>=";
        tokenR.nome = "RIGHTSHIFTEQUAL"; 
        return tokenR;

    case DOUBLESTAREQUAL:
        tokenR.type = token;
        tokenR.lexeme = "**=";
        tokenR.nome = "DOUBLESTAREQUAL"; 
        return tokenR;

    case DOUBLESLASH:
        tokenR.type = token;
        tokenR.lexeme = "//";
        tokenR.nome = "DOUBLESLASH"; 
        return tokenR;

    case DOUBLESLASHEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "//=";
        tokenR.nome = "DOUBLESLASHEQUAL"; 
        return tokenR;

    case AT:
        tokenR.type = token;
        tokenR.lexeme = "@";
        tokenR.nome = "AT"; 
        return tokenR;

    case ATEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "@=";
        tokenR.nome = "ATEQUAL"; 
        return tokenR;

    case RARROW:
        tokenR.type = token;
        tokenR.lexeme = "->";
        tokenR.nome = "RARROW"; 
        return tokenR;

    case ELLIPSIS:
        tokenR.type = token;
        tokenR.lexeme = "...";
        tokenR.nome = "ELLIPSIS"; 
        return tokenR;

    case COLONEQUAL:
        tokenR.type = token;
        tokenR.lexeme = ":=";
        tokenR.nome = "COLONEQUAL"; 
        return tokenR;

//===========//Finish//===============
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
    printf("\n%d: %s -> %s\n", (yylineno), tokenR.lexeme, tokenR.nome);
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
:            { processToken(COLON); }
,            { processToken(COMMA); }
;            { processToken(SEMI); }
"+"          { processToken(PLUS); }
"-"          { processToken(MINUS); }
"*"          { processToken(STAR); }
"/"          { processToken(SLASH); }
"|"          { processToken(VBAR); }
"&"          { processToken(AMPER); }
"<"          { processToken(LESS); }
">"          { processToken(GREATER); }
"="          { processToken(EQUAL); }
"."          { processToken(DOT); }
"%"          { processToken(PERCENT); }
[{]          { processToken(LBRACE); }
[}]          { processToken(RBRACE); }
"=="         { processToken(EQEQUAL); }
"=!"         { processToken(NOTEQUAL); }
"<="         { processToken(LESSEQUA); }
">="         { processToken(GREATEREQUAL); }
"~"          { processToken(TILDE); }
"^"          { processToken(CIRCUMFLEX); }
"<<"         { processToken(LEFTSHIFT); }
">>"         { processToken(RIGHTSHIFT); }
"**"         { processToken(DOUBLESTAR); }
"+="         { processToken(PLUSEQUAL); }
"-="         { processToken(MINEQUAL); }
"*="         { processToken(STAREQUAL); }
"/="         { processToken(SLASHEQUAL); }
"%="         { processToken(PERCENTEQUAL); }
"&="         { processToken(AMPEREQUAL); }
"|="         { processToken(VBAREQUAL); }
"^="         { processToken(CIRCUMFLEXEQUAL); }
"<<="        { processToken(LEFTSHIFTEQUAL); }
">>="        { processToken(RIGHTSHIFTEQUAL); }
"**="        { processToken(DOUBLESTAREQUAL); }
"//"         { processToken(DOUBLESLASH); }
"//="        { processToken(DOUBLESLASHEQUAL); }
"@"          { processToken(AT); }
"@="         { processToken(ATEQUAL); }
"->"         { processToken(RARROW); }
"..."        { processToken(ELLIPSIS); }
":="         { processToken(COLONEQUAL); }



<<EOF>>      { processToken(ENDMARKER); yyterminate();}

%%
int main() {
    createAllTokens();
    yylex();
    //printf("\n\nqtd_indent: %d.\n", qtd_indent);
    return 0;
}