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
int indentDedentSpaceNl()
{
    int i, qtdEnter;
    int lenTT = strlen(textTab);
    for (i = 0; i < lenTT; i++)
    {
        char c = textTab[i];

        if (c == '\n')
        {   
            return NEWLINE;
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
                char str[64];
                sprintf (str, "%d", diff);
                values = strdup(str);
                return INDENT;
            }
            else if (qtd_tab_l < qtd_tab_l_ant) //DEDENT
            {
                diff = qtd_tab_l_ant - qtd_tab_l;
                qtd_indent -= diff;
                char str[64];
                sprintf (str, "%d", diff);
                values = strdup(str);
                return DEDENT;
            }
        }

        if (c == '\n')
        {
            qtd_tab_l_ant = qtd_tab_l;
            qtd_tab_l = 0;
        }
    }
    return 0;
}

int indent()
{

    textTab = (char *)malloc(sizeof(yytext));

    //funcoes principais
    tratamentoIndentacao();
    indentDedentSpaceNl();
    free(textTab);
    return 0;
}

%}


%%


"import"                        { return IMPORT; } 
"from"                          { return FROM; } 
"as"                            { return AS; }

"class"                         { return CLASS; }
"def"                           { return DEF; }
"lambda"                        { return LAMBDA; }

"not"                           { return NOT; }
"and"                           { return AND; }
"or"                            { return OR; }

"if"                            { return IF; }
"elif"                          { return ELSE_IF; }
"else"                          { return ELSE; }
"is"                            { return IS; }   
"True"                          { return TRUE; } 
"False"                         { return FALSE; } 
"assert"                        { return ASSERT; }    

"for"                           { return FOR; }   
"in"                            { return IN; }   
"while"                         { return WHILE; } 
"pass"                          { return PASS; } 
"break"                         { return BREAK; } 
"continue"                      { return CONTINUE; } 

"try"                           { return TRY; } 
"except"                        { return EXCEPT; } 
"finally"                       { return FINALLY; } 
"with"                          { return WITH; }

"return"                        { return RETURN; }
"raise"                         { return RAISE; }
"yield"                         { return YIELD; }

"global"                        { return GLOBAL; }
"nonlocal"                      { return NONLOCAL; }

"None"                          { return NONE; }
"del"                           { return DEL; }
"exec"                          { return EXEC; }

"async"                          { return ASYNC; }
"await"                          { return AWAIT; }


#[^\n$]*                        { values = strdup(yytext); return TYPE_COMMENT; }
[0-9]+"."?[0-9]*                { values = strdup(yytext); return NUMBER; }
["""][^"""\n]*["""]             { values = strdup(yytext); return STRING; }
['][^'\n]*[']                   { values = strdup(yytext); return STRING; }
[\n\t ]+                        { indent(); }
[(]                             { return LPAR; }
[)]                             { return RPAR; }
"["                             { return LSQB; }
"]"                             { return RSQB; }
:                               { return COLON; }
,                               { return COMMA; }
;                               { return SEMI; }
"+"                             { return PLUS; }
"-"                             { return MINUS; }
"*"                             { return STAR; }
"/"                             { return SLASH; }
"|"                             { return VBAR; }
"&"                             { return AMPER; }
"<"                             { return LESS; }
">"                             { return GREATER; }
"<>"                            { return LESSGREATER; }
"="                             { return EQUAL; }
"."                             { return DOT; }
"%"                             { return PERCENT; }
[{]                             { return LBRACE; }
[}]                             { return RBRACE; }
"=="                            { return EQEQUAL; }
"!="                            { return NOTEQUAL; }
"<="                            { return LESSEQUAL; }
">="                            { return GREATEREQUAL; }
"~"                             { return TILDE; }
"^"                             { return CIRCUMFLEX; }
"<<"                            { return LEFTSHIFT; }
">>"                            { return RIGHTSHIFT; }
"**"                            { return DOUBLESTAR; }
"+="                            { return PLUSEQUAL; }
"-="                            { return MINEQUAL; }
"*="                            { return STAREQUAL; }
"/="                            { return SLASHEQUAL; }
"%="                            { return PERCENTEQUAL; }
"&="                            { return AMPEREQUAL; }
"|="                            { return VBAREQUAL; }
"^="                            { return CIRCUMFLEXEQUAL; }
"<<="                           { return LEFTSHIFTEQUAL; }
">>="                           { return RIGHTSHIFTEQUAL; }
"**="                           { return DOUBLESTAREQUAL; }
"//"                            { return DOUBLESLASH; }
"//="                           { return DOUBLESLASHEQUAL; }
"@"                             { return AT; }
"@="                            { return ATEQUAL; }
"->"                            { return RARROW; }
"..."                           { return ELLIPSIS; }
":="                            { return COLONEQUAL; }
[a-zA-Z_]+[a-zA-Z0-9_]*         { values = strdup(yytext); return NAME; }
<<EOF>>                         { return ENDMARKER; }

.   {   printf("LEXICAL ERROR (%d): Unknown symbol %s\n", 
        yylineno, yytext);
        exit(EXIT_FAILURE); 
    }

%%