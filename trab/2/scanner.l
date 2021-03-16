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
#include<stdbool.h>

extern char* values;
bool done = false;

//variáveis
int qtd_tokens = 0;

int *lisTks=NULL;
int tamLT=0;
int indexLT=0;

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

    if(tamLT>0){
        tamLT--;
        indexLT++;
        return lisTks[indexLT-1];
    } else if (indexLT>0) {
        indexLT=0;
        cleanlisTks();
    }

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


"import"                        { return process_token(IMPORT); } 
"from"                          { return process_token(FROM); } 
"as"                            { return process_token(AS); }

"class"                         { return process_token(CLASS); }
"def"                           { return process_token(DEF); }
"lambda"                        { return process_token(LAMBDA); }

"not"                           { return process_token(NOT); }
"and"                           { return process_token(AND); }
"or"                            { return process_token(OR); }

"if"                            { return process_token(IF); }
"elif"                          { return process_token(ELSE_IF); }
"else"                          { return process_token(ELSE); }
"is"                            { return process_token(IS); }   
"True"                          { return process_token(TRUE); } 
"False"                         { return process_token(FALSE); } 
"assert"                        { return process_token(ASSERT); }

"for"                           { return process_token(FOR); }   
"in"                            { return process_token(IN); }   
"while"                         { return process_token(WHILE); } 
"pass"                          { return process_token(PASS); } 
"break"                         { return process_token(BREAK); } 
"continue"                      { return process_token(CONTINUE); }

"try"                           { return process_token(TRY); } 
"except"                        { return process_token(EXCEPT); } 
"finally"                       { return process_token(FINALLY); } 
"with"                          { return process_token(WITH); }

"return"                        { return process_token(RETURN); }
"raise"                         { return process_token(RAISE); }
"yield"                         { return process_token(YIELD); }

"global"                        { return process_token(GLOBAL); }
"nonlocal"                      { return process_token(NONLOCAL); }

"None"                          { return process_token(NONE); }
"del"                           { return process_token(DEL); }
"exec"                          { return process_token(EXEC); }

"async"                         { return process_token(ASYNC); }
"await"                         { return process_token(AWAIT); }

[a-zA-Z_]+[a-zA-Z0-9_]*         { return process_token(NAME); }
[0-9]+"."?[0-9]*                { return process_token(NUMBER); }
["""][^"""\n]*["""]             { return process_token(STRING); }
['][^'\n]*[']                   { return process_token(STRING); }
[ ]*                            {                               }
[\n\t ]+                        { indent(); return process_token(INDENT); }
[(]                             { return process_token(LPAR); }
[)]                             { return process_token(RPAR); }
"["                             { return process_token(LSQB); }
"]"                             { return process_token(RSQB); }
":"                             { return process_token(COLON); }
,                               { return process_token(COMMA); }
;                               { return process_token(SEMI); }
"+"                             { return process_token(PLUS); }
"-"                             { return process_token(MINUS); }
"*"                             { return process_token(STAR); }
"/"                             { return process_token(SLASH); }
"|"                             { return process_token(VBAR); }
"&"                             { return process_token(AMPER); }
"<"                             { return process_token(LESS); }
">"                             { return process_token(GREATER); }
"<>"                            { return process_token(LESSGREATER); }
"="                             { return process_token(EQUAL); }
"."                             { return process_token(DOT); }
"%"                             { return process_token(PERCENT); }
[{]                             { return process_token(LBRACE); }
[}]                             { return process_token(RBRACE); }
"=="                            { return process_token(EQEQUAL); }
"!="                            { return process_token(NOTEQUAL); }
"<="                            { return process_token(LESSEQUAL); }
">="                            { return process_token(GREATEREQUAL); }
"~"                             { return process_token(TILDE); }
"^"                             { return process_token(CIRCUMFLEX); }
"<<"                            { return process_token(LEFTSHIFT); }
">>"                            { return process_token(RIGHTSHIFT); }
"**"                            { return process_token(DOUBLESTAR); }
"+="                            { return process_token(PLUSEQUAL); }
"-="                            { return process_token(MINEQUAL); }
"*="                            { return process_token(STAREQUAL); }
"/="                            { return process_token(SLASHEQUAL); }
"%="                            { return process_token(PERCENTEQUAL); }
"&="                            { return process_token(AMPEREQUAL); }
"|="                            { return process_token(VBAREQUAL); }
"^="                            { return process_token(CIRCUMFLEXEQUAL); }
"<<="                           { return process_token(LEFTSHIFTEQUAL); }
">>="                           { return process_token(RIGHTSHIFTEQUAL); }
"**="                           { return process_token(DOUBLESTAREQUAL); }
"//"                            { return process_token(DOUBLESLASH); }
"//="                           { return process_token(DOUBLESLASHEQUAL); }
"@"                             { return process_token(AT); }
"@="                            { return process_token(ATEQUAL); }
"->"                            { return process_token(RARROW); }
"..."                           { return process_token(ELLIPSIS); }
":="                            { return process_token(COLONEQUAL); }
<<EOF>>                         { if (done) return EOF; else { done = true; return process_token(ENDMARKER); } }


.   {   
        printf("LEXICAL ERROR (%d): Unknown symbol %s\n", yylineno, yytext);
        exit(EXIT_FAILURE); 
    }

%%