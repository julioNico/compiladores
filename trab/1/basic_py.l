%option yylineno
%{

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//estruturas
typedef enum {
    NAME, NUMBER, STRING,
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
    TYPE_COMMENT,
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
    case NAME:
        tokenR.type = token;
        tokenR.nome = "NAME"; 
        break;

    case NUMBER:
        tokenR.type = token;
        tokenR.nome = "NUMBER"; 
        break;
    
    case STRING:
        tokenR.type = token;
        tokenR.nome = "STRING"; 
        break;

    case INDENT:
        tokenR.type = token;
        tokenR.lexeme = "\\t";
        tokenR.nome = "INDENT"; 
        break;
    
    case DEDENT:
        tokenR.type = token;
        tokenR.lexeme = "\\b";
        tokenR.nome = "DEDENT"; 
        break;
    
    case NEWLINE:
        tokenR.type = token;
        tokenR.lexeme = "\\n";
        tokenR.nome = "NEWLINE"; 
        break;

    case LPAR:
        tokenR.type = token;
        tokenR.lexeme = "(";
        tokenR.nome = "LPAR"; 
        break;

    case RPAR:
        tokenR.type = token;
        tokenR.lexeme = ")";
        tokenR.nome = "RPAR"; 
        break;

    case LSQB:
        tokenR.type = token;
        tokenR.lexeme = "[";
        tokenR.nome = "LSQB"; 
        break;

    case RSQB:
        tokenR.type = token;
        tokenR.lexeme = "]";
        tokenR.nome = "RSQB"; 
        break;

    case COLON:
        tokenR.type = token;
        tokenR.lexeme = ":";
        tokenR.nome = "COLON"; 
        break;

    case COMMA:
        tokenR.type = token;
        tokenR.lexeme = ",";
        tokenR.nome = "COMMA"; 
        break;
    
    case SEMI:
        tokenR.type = token;
        tokenR.lexeme = ";";
        tokenR.nome = "SEMI"; 
        break;

    case PLUS:
        tokenR.type = token;
        tokenR.lexeme = "+";
        tokenR.nome = "PLUS"; 
        break;
    
    case MINUS:
        tokenR.type = token;
        tokenR.lexeme = "-";
        tokenR.nome = "MINUS"; 
        break;

    case STAR:
        tokenR.type = token;
        tokenR.lexeme = "*";
        tokenR.nome = "STAR"; 
        break;

    case SLASH:
        tokenR.type = token;
        tokenR.lexeme = "/";
        tokenR.nome = "SLASH"; 
        break;

    case VBAR:
        tokenR.type = token;
        tokenR.lexeme = "|";
        tokenR.nome = "VBAR"; 
        break;

    case AMPER:
        tokenR.type = token;
        tokenR.lexeme = "&";
        tokenR.nome = "AMPER"; 
        break;

    case LESS:
        tokenR.type = token;
        tokenR.lexeme = "<";
        tokenR.nome = "LESS"; 
        break;

    case GREATER:
        tokenR.type = token;
        tokenR.lexeme = ">";
        tokenR.nome = "GREATER"; 
        break;

    case EQUAL:
        tokenR.type = token;
        tokenR.lexeme = "=";
        tokenR.nome = "EQUAL"; 
        break;

    case DOT:
        tokenR.type = token;
        tokenR.lexeme = ".";
        tokenR.nome = "DOT"; 
        break;

    case PERCENT:
        tokenR.type = token;
        tokenR.lexeme = "%";
        tokenR.nome = "PERCENT"; 
        break;

    case LBRACE:
        tokenR.type = token;
        tokenR.lexeme = "{";
        tokenR.nome = "LBRACE"; 
        break;

    case RBRACE:
        tokenR.type = token;
        tokenR.lexeme = "}";
        tokenR.nome = "RBRACE"; 
        break;

    case EQEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "==";
        tokenR.nome = "EQEQUAL"; 
        break;

    case NOTEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "=!";
        tokenR.nome = "NOTEQUAL"; 
        break;

    case LESSEQUA:
        tokenR.type = token;
        tokenR.lexeme = "<=";
        tokenR.nome = "LESSEQUA"; 
        break;

    case GREATEREQUAL:
        tokenR.type = token;
        tokenR.lexeme = ">=";
        tokenR.nome = "GREATEREQUAL"; 
        break;

    case TILDE:
        tokenR.type = token;
        tokenR.lexeme = "~";
        tokenR.nome = "TILDE"; 
        break;

    case CIRCUMFLEX:
        tokenR.type = token;
        tokenR.lexeme = "^";
        tokenR.nome = "CIRCUMFLEX"; 
        break;

    case LEFTSHIFT:
        tokenR.type = token;
        tokenR.lexeme = "<<";
        tokenR.nome = "LEFTSHIFT"; 
        break;

    case RIGHTSHIFT:
        tokenR.type = token;
        tokenR.lexeme = ">>";
        tokenR.nome = "RIGHTSHIFT"; 
        break;

    case DOUBLESTAR:
        tokenR.type = token;
        tokenR.lexeme = "**";
        tokenR.nome = "DOUBLESTAR"; 
        break;

    case PLUSEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "+=";
        tokenR.nome = "PLUSEQUAL"; 
        break;

    case MINEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "-=";
        tokenR.nome = "MINEQUAL"; 
        break;

    case STAREQUAL:
        tokenR.type = token;
        tokenR.lexeme = "*=";
        tokenR.nome = "STAREQUAL"; 
        break;

    case SLASHEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "/=";
        tokenR.nome = "SLASHEQUAL"; 
        break;

    case PERCENTEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "%=";
        tokenR.nome = "PERCENTEQUAL"; 
        break;

    case AMPEREQUAL:
        tokenR.type = token;
        tokenR.lexeme = "&=";
        tokenR.nome = "AMPEREQUAL"; 
        break;

    case VBAREQUAL:
        tokenR.type = token;
        tokenR.lexeme = "|=";
        tokenR.nome = "VBAREQUAL"; 
        break;

    case CIRCUMFLEXEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "^=";
        tokenR.nome = "CIRCUMFLEXEQUAL"; 
        break;

    case LEFTSHIFTEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "<<=";
        tokenR.nome = "LEFTSHIFTEQUAL"; 
        break;

    case RIGHTSHIFTEQUAL:
        tokenR.type = token;
        tokenR.lexeme = ">>=";
        tokenR.nome = "RIGHTSHIFTEQUAL"; 
        break;

    case DOUBLESTAREQUAL:
        tokenR.type = token;
        tokenR.lexeme = "**=";
        tokenR.nome = "DOUBLESTAREQUAL"; 
        break;

    case DOUBLESLASH:
        tokenR.type = token;
        tokenR.lexeme = "//";
        tokenR.nome = "DOUBLESLASH"; 
        break;

    case DOUBLESLASHEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "//=";
        tokenR.nome = "DOUBLESLASHEQUAL"; 
        break;

    case AT:
        tokenR.type = token;
        tokenR.lexeme = "@";
        tokenR.nome = "AT"; 
        break;

    case ATEQUAL:
        tokenR.type = token;
        tokenR.lexeme = "@=";
        tokenR.nome = "ATEQUAL"; 
        break;

    case RARROW:
        tokenR.type = token;
        tokenR.lexeme = "->";
        tokenR.nome = "RARROW"; 
        break;

    case ELLIPSIS:
        tokenR.type = token;
        tokenR.lexeme = "...";
        tokenR.nome = "ELLIPSIS"; 
        break;

    case COLONEQUAL:
        tokenR.type = token;
        tokenR.lexeme = ":=";
        tokenR.nome = "COLONEQUAL"; 
        break;

    case TYPE_COMMENT:
        tokenR.type = token;
        tokenR.nome = "TYPE_COMMENT"; 
        break;

            
//===========//Finish//===============
    case ENDMARKER:
        tokenR.type = token;
        tokenR.lexeme = "<<EOF>>";
        tokenR.nome = "ENDMARKER"; 
        
    }
    return tokenR;
}

TokenRecord *tokens;

void createAllTokens(){
    int i;
    tokens = (TokenRecord*) malloc(sizeof(TokenRecord)*(ENDMARKER+1));
    for(i=0; i<ENDMARKER+1; i++){
        tokens[i]=createToken(i);
    }
}

void destroyAllTokens(){
    free(tokens);
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
    int i, j;
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

    if( token == NUMBER 
        || token == STRING 
        || token == NAME  
        || token == TYPE_COMMENT
    ) 
    {
        tokenR.lexeme = yytext;
    }

    printf("\n%d: %s -> %s\n", (yylineno), tokenR.lexeme, tokenR.nome);
}

//INDENT DEDENT SPACE E NEW LINE
void indentDedentSpaceNl()
{
    int i, j, qtdEnter;
    int lenTT = strlen(textTab);
    for (i = 0; i < lenTT; i++)
    {
        char c = textTab[i];

        if (c == '\n')
        {   
            processToken(NEWLINE);
        } 

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

    textTab = (char *)malloc(sizeof(yytext));

    //funcoes principais
    tratamentoIndentacao();
    indentDedentSpaceNl();
    free(textTab);
}

%}

%%

#[^\n$]*                                { processToken(TYPE_COMMENT); }

<<EOF>>      { processToken(ENDMARKER); yyterminate();}
[a-zA-Z_]+[a-zA-Z0-9_]*                 { processToken(NAME); }
[0-9]+"."?[0-9]*                        { processToken(NUMBER); }
["""][^"""\n]*["""]                     { processToken(STRING); }
['][^'\n]*[']                           { processToken(STRING); }
[\n\t ]+                                { indent(); }
[(]                                     { processToken(LPAR); }
[)]                                     { processToken(RPAR); }
"["                                     { processToken(LSQB); }
"]"                                     { processToken(RSQB); }
:                                       { processToken(COLON); }
,                                       { processToken(COMMA); }
;                                       { processToken(SEMI); }
"+"                                     { processToken(PLUS); }
"-"                                     { processToken(MINUS); }
"*"                                     { processToken(STAR); }
"/"                                     { processToken(SLASH); }
"|"                                     { processToken(VBAR); }
"&"                                     { processToken(AMPER); }
"<"                                     { processToken(LESS); }
">"                                     { processToken(GREATER); }
"="                                     { processToken(EQUAL); }
"."                                     { processToken(DOT); }
"%"                                     { processToken(PERCENT); }
[{]                                     { processToken(LBRACE); }
[}]                                     { processToken(RBRACE); }
"=="                                    { processToken(EQEQUAL); }
"=!"                                    { processToken(NOTEQUAL); }
"<="                                    { processToken(LESSEQUA); }
">="                                    { processToken(GREATEREQUAL); }
"~"                                     { processToken(TILDE); }
"^"                                     { processToken(CIRCUMFLEX); }
"<<"                                    { processToken(LEFTSHIFT); }
">>"                                    { processToken(RIGHTSHIFT); }
"**"                                    { processToken(DOUBLESTAR); }
"+="                                    { processToken(PLUSEQUAL); }
"-="                                    { processToken(MINEQUAL); }
"*="                                    { processToken(STAREQUAL); }
"/="                                    { processToken(SLASHEQUAL); }
"%="                                    { processToken(PERCENTEQUAL); }
"&="                                    { processToken(AMPEREQUAL); }
"|="                                    { processToken(VBAREQUAL); }
"^="                                    { processToken(CIRCUMFLEXEQUAL); }
"<<="                                   { processToken(LEFTSHIFTEQUAL); }
">>="                                   { processToken(RIGHTSHIFTEQUAL); }
"**="                                   { processToken(DOUBLESTAREQUAL); }
"//"                                    { processToken(DOUBLESLASH); }
"//="                                   { processToken(DOUBLESLASHEQUAL); }
"@"                                     { processToken(AT); }
"@="                                    { processToken(ATEQUAL); }
"->"                                    { processToken(RARROW); }
"..."                                   { processToken(ELLIPSIS); }
":="                                    { processToken(COLONEQUAL); }





%%
int main() {
    createAllTokens();
    yylex();
    //printf("\n\nqtd_indent: %d.\n", qtd_indent);
    destroyAllTokens();
    yylex_destroy();
    return 0;
}