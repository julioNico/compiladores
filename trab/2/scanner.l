%option outfile="scanner.c"
%option noyywrap
%option nounput
%option noinput
%option yylineno

%{
#include "parser.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

extern char* values;

//variáveis
int qtd_tokens = 0;

int *lisTks=NULL;
int tamLT=0;

void addListaTokens(int token){
    //printf(" --TOKEN: %d, tamLT: %d-- ", token, tamLT);
    lisTks = (int*) realloc(lisTks, (tamLT+1)*sizeof(int));
    lisTks[tamLT]=token;
    tamLT++;
}

void cleanlisTks(){
    free(lisTks);
    lisTks=NULL;
    tamLT=0;
}

/* INDENT */
char *textTab;
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
            addListaTokens(NEWLINE);
        } 

        qtdEnter = qtdChar(textTab, '\n');
        if (qtdEnter > 0)
        {
            qtd_tab_l = qtdChar(textTab, '\t');
            int diff;
            if (qtd_tab_l > qtd_tab_l_ant) //INDENT
            {
                diff = qtd_tab_l - qtd_tab_l_ant;
                
                for(j=0; j<diff; j++){
                    addListaTokens(INDENT);
                }

                qtd_indent += diff;
            }
            else if (qtd_tab_l < qtd_tab_l_ant) //DEDENT
            {
                diff = qtd_tab_l_ant - qtd_tab_l;
                
                for(j=0; j<diff; j++){
                    addListaTokens(DEDENT);
                }

                qtd_indent -= diff;
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

int process_token(int token) {
    //printf("(TOKEN: %d)", token);
    switch(token) {
        case IMPORT:
            printf("IMPORT    ");
            break;

        case FROM:
            printf("FROM    ");
            break;

        case AS:
            printf("AS    ");
            break;

        case CLASS:
            printf("CLASS    ");
            break;

        case DEF:
            printf("DEF    ");
            break;

        case LAMBDA:
            printf("LAMBDA    ");
            break;

        case NOT:
            printf("NOT    ");
            break;

        case AND:
            printf("AND    ");
            break;

        case OR:
            printf("OR    ");
            break;

        case IF:
            printf("IF    ");
            break;

        case ELSE_IF:
            printf("ELSE_IF    ");
            break;

        case ELSE:
            printf("ELSE    ");
            break;

        case IS:
            printf("IS    ");
            break;

        case TRUE:
            printf("TRUE    ");
            break;

        case FALSE:
            printf("FALSE    ");
            break;

        case ASSERT:
            printf("ASSERT    ");
            break;

        case FOR:
            printf("FOR    ");
            break;

        case IN:
            printf("IN    ");
            break;

        case WHILE:
            printf("WHILE    ");
            break;

        case PASS:
            printf("PASS    ");
            break;

        case BREAK:
            printf("BREAK    ");
            break;

        case CONTINUE:
            printf("CONTINUE    ");
            break;

        case TRY:
            printf("TRY    ");
            break;

        case EXCEPT:
            printf("EXCEPT    ");
            break;

        case FINALLY:
            printf("FINALLY    ");
            break;

        case WITH:
            printf("WITH    ");
            break;

        case RETURN:
            printf("RETURN    ");
            break;

        case RAISE:
            printf("RAISE    ");
            break;

        case YIELD:
            printf("YIELD    ");
            break;

        case GLOBAL:
            printf("GLOBAL    ");
            break;

        case NONLOCAL:
            printf("NONLOCAL    ");
            break;

        case NONE:
            printf("NONE    ");
            break;

        case DEL:
            printf("DEL    ");
            break;

        case EXEC:
            printf("EXEC    ");
            break;

        case ASYNC:
            printf("ASYNC    ");
            break;

        case AWAIT:
            printf("AWAIT    ");
            break;

        case TYPE_COMMENT:
            values = strdup(yytext);
            printf("TYPE_COMMENT    ");
            break;

        case NAME:
            values = strdup(yytext); 
            printf("NAME    ");
            break;

        case NUMBER:
            values = strdup(yytext);
            printf("NUMBER    ");
            break;

        case STRING:
            values = strdup(yytext);
            printf("STRING    ");
            break;

        case INDENT:
            printf("INDENT    ");
            break;

        case DEDENT:
            printf("DEDENT    ");
            break;

        case NEWLINE:
            printf("NEWLINE\n");
            break;

        case LPAR:
            printf("LPAR    ");
            break;

        case RPAR:
            printf("RPAR    ");
            break;

        case LSQB:
            printf("LSQB    ");
            break;

        case RSQB:
            printf("RSQB    ");
            break;

        case COLON:
            printf("COLON    ");
            break;

        case COMMA:
            printf("COMMA    ");
            break;

        case SEMI:
            printf("SEMI    ");
            break;

        case PLUS:
            printf("PLUS    ");
            break;

        case MINUS:
            printf("MINUS    ");
            break;

        case STAR:
            printf("STAR    ");
            break;

        case SLASH:
            printf("SLASH    ");
            break;

        case VBAR:
            printf("VBAR    ");
            break;

        case AMPER:
            printf("AMPER    ");
            break;

        case LESS:
            printf("LESS    ");
            break;

        case GREATER:
            printf("GREATER    ");
            break;

        case LESSGREATER:
            printf("LESSGREATER    ");
            break;

        case EQUAL:
            printf("EQUAL    ");
            break;

        case DOT:
            printf("DOT    ");
            break;

        case PERCENT:
            printf("PERCENT    ");
            break;

        case LBRACE:
            printf("LBRACE    ");
            break;

        case RBRACE:
            printf("RBRACE    ");
            break;

        case EQEQUAL:
            printf("EQEQUAL    ");
            break;

        case NOTEQUAL:
            printf("NOTEQUAL    ");
            break;

        case LESSEQUAL:
            printf("LESSEQUAL    ");
            break;

        case GREATEREQUAL:
            printf("GREATEREQUAL    ");
            break;

        case TILDE:
            printf("TILDE    ");
            break;

        case CIRCUMFLEX:
            printf("CIRCUMFLEX    ");
            break;

        case LEFTSHIFT:
            printf("LEFTSHIFT    ");
            break;

        case RIGHTSHIFT:
            printf("RIGHTSHIFT    ");
            break;

        case DOUBLESTAR:
            printf("DOUBLESTAR    ");
            break;

        case PLUSEQUAL:
            printf("PLUSEQUAL    ");
            break;

        case MINEQUAL:
            printf("MINEQUAL    ");
            break;

        case STAREQUAL:
            printf("STAREQUAL    ");
            break;

        case SLASHEQUAL:
            printf("SLASHEQUAL    ");
            break;

        case PERCENTEQUAL:
            printf("PERCENTEQUAL    ");
            break;

        case AMPEREQUAL:
            printf("AMPEREQUAL    ");
            break;

        case VBAREQUAL:
            printf("VBAREQUAL    ");
            break;

        case CIRCUMFLEXEQUAL:
            printf("CIRCUMFLEXEQUAL    ");
            break;

        case LEFTSHIFTEQUAL:
            printf("LEFTSHIFTEQUAL    ");
            break;

        case RIGHTSHIFTEQUAL:
            printf("RIGHTSHIFTEQUAL    ");
            break;

        case DOUBLESTAREQUAL:
            printf("DOUBLESTAREQUAL    ");
            break;

        case DOUBLESLASH:
            printf("DOUBLESLASH    ");
            break;

        case DOUBLESLASHEQUAL:
            printf("DOUBLESLASHEQUAL    ");
            break;

        case AT:
            printf("AT    ");
            break;

        case ATEQUAL:
            printf("ATEQUAL    ");
            break;

        case RARROW:
            printf("RARROW    ");
            break;

        case ELLIPSIS:
            printf("ELLIPSIS    ");
            break;

        case COLONEQUAL:
            printf("COLONEQUAL    ");
            break;

        case ENDMARKER:
            printf("ENDMARKER    ");
            break;

    }
    return token;
}

%}

%%


"import"                        { process_token(IMPORT); } 
"from"                          { process_token(FROM); } 
"as"                            { process_token(AS); }

"class"                         { process_token(CLASS); }
"def"                           { process_token(DEF); }
"lambda"                        { process_token(LAMBDA); }

"not"                           { process_token(NOT); }
"and"                           { process_token(AND); }
"or"                            { process_token(OR); }

"if"                            { process_token(IF); }
"elif"                          { process_token(ELSE_IF); }
"else"                          { process_token(ELSE); }
"is"                            { process_token(IS); }   
"True"                          { process_token(TRUE); } 
"False"                         { process_token(FALSE); } 
"assert"                        { process_token(ASSERT); }

"for"                           { process_token(FOR); }   
"in"                            { process_token(IN); }   
"while"                         { process_token(WHILE); } 
"pass"                          { process_token(PASS); } 
"break"                         { process_token(BREAK); } 
"continue"                      { process_token(CONTINUE); }

"try"                           { process_token(TRY); } 
"except"                        { process_token(EXCEPT); } 
"finally"                       { process_token(FINALLY); } 
"with"                          { process_token(WITH); }

"return"                        { process_token(RETURN); }
"raise"                         { process_token(RAISE); }
"yield"                         { process_token(YIELD); }

"global"                        { process_token(GLOBAL); }
"nonlocal"                      { process_token(NONLOCAL); }

"None"                          { process_token(NONE); }
"del"                           { process_token(DEL); }
"exec"                          { process_token(EXEC); }

"async"                         { process_token(ASYNC); }
"await"                         { process_token(AWAIT); }

[a-zA-Z_]+[a-zA-Z0-9_]*         { process_token(NAME); }
#[^\n$]*                        { process_token(TYPE_COMMENT); }
[0-9]+"."?[0-9]*                { process_token(NUMBER); }
["""][^"""\n]*["""]             { process_token(STRING); }
['][^'\n]*[']                   { process_token(STRING); }
[\n\t ]+                        { indent(); for(int z=0; z<tamLT; z++){process_token(lisTks[z]);}; cleanlisTks(); }
[(]                             { process_token(LPAR); }
[)]                             { process_token(RPAR); }
"["                             { process_token(LSQB); }
"]"                             { process_token(RSQB); }
:                               { process_token(COLON); }
,                               { process_token(COMMA); }
;                               { process_token(SEMI); }
"+"                             { process_token(PLUS); }
"-"                             { process_token(MINUS); }
"*"                             { process_token(STAR); }
"/"                             { process_token(SLASH); }
"|"                             { process_token(VBAR); }
"&"                             { process_token(AMPER); }
"<"                             { process_token(LESS); }
">"                             { process_token(GREATER); }
"<>"                            { process_token(LESSGREATER); }
"="                             { process_token(EQUAL); }
"."                             { process_token(DOT); }
"%"                             { process_token(PERCENT); }
[{]                             { process_token(LBRACE); }
[}]                             { process_token(RBRACE); }
"=="                            { process_token(EQEQUAL); }
"!="                            { process_token(NOTEQUAL); }
"<="                            { process_token(LESSEQUAL); }
">="                            { process_token(GREATEREQUAL); }
"~"                             { process_token(TILDE); }
"^"                             { process_token(CIRCUMFLEX); }
"<<"                            { process_token(LEFTSHIFT); }
">>"                            { process_token(RIGHTSHIFT); }
"**"                            { process_token(DOUBLESTAR); }
"+="                            { process_token(PLUSEQUAL); }
"-="                            { process_token(MINEQUAL); }
"*="                            { process_token(STAREQUAL); }
"/="                            { process_token(SLASHEQUAL); }
"%="                            { process_token(PERCENTEQUAL); }
"&="                            { process_token(AMPEREQUAL); }
"|="                            { process_token(VBAREQUAL); }
"^="                            { process_token(CIRCUMFLEXEQUAL); }
"<<="                           { process_token(LEFTSHIFTEQUAL); }
">>="                           { process_token(RIGHTSHIFTEQUAL); }
"**="                           { process_token(DOUBLESTAREQUAL); }
"//"                            { process_token(DOUBLESLASH); }
"//="                           { process_token(DOUBLESLASHEQUAL); }
"@"                             { process_token(AT); }
"@="                            { process_token(ATEQUAL); }
"->"                            { process_token(RARROW); }
"..."                           { process_token(ELLIPSIS); }
":="                            { process_token(COLONEQUAL); }
<<EOF>>                         { process_token(ENDMARKER); yyterminate(); }


.   {   
        printf("LEXICAL ERROR (%d): Unknown symbol %s\n", yylineno, yytext);
        exit(EXIT_FAILURE); 
    }

%%