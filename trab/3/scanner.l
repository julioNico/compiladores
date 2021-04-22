/* Opções do flex. */
 /* Flex output */
%option outfile="scanner.c"
 /* Auto increment variable yylineno every time a '\n' is read. */
%option yylineno
 /* Unused functions */
%option noyywrap
%option nounput
%option noinput


%{
/* Includes, etc */
// C program for linked list implementation of stack
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "token.h"
#include "ast.h"
#include "parser.h"

// Macros are fun... :P
// #define DEBUG
#ifdef DEBUG
#define process_token(TOKEN)                          \
{                                                     \
  printf("%d: %s -> %s\n", yylineno, yytext, #TOKEN); \
  process_token_real(TOKEN);                          \
}
#else
#define process_token(TOKEN)                          \
{                                                     \
  process_token_real(TOKEN);                          \
}
#endif

/*
   Usando a macro abaixo, podemos modificar a declaração da função yylex.
   No caso, ela passa a se chamar orig_yylex e vai ser uma função interna
   do nosso scanner. Com isso, podemos redeclarar a função yylex como a
   gente quiser.
*/
#define YY_DECL int orig_yylex (void)


// Explicações destas funções estão abaixo.
void process_token_real(int type);
void indent();

%}

/* Fragmentos de expressões regulares, etc. */
id              [a-zA-Z_][0-9a-zA-Z_]*

digit 		    [0-9]
nonzerodigit	[1-9]
bindigit 	    0|1
octdigit	    [0-7]
hexdigit 	    {digit}|[a-f]|[A-F]

hexinteger      0(x|X)([_]?{hexdigit})+
octinteger      0(o|O)([_]?{octdigit})+
bininteger      0(b|B)([_]?{bindigit})+
decinteger      ({nonzerodigit}([_]?{digit})*)|(0+([_]?0)*)
integer         {decinteger}|{bininteger}|{octinteger}|{hexinteger}

digitpart       {digit}([_]?{digit})*
fraction        "."{digitpart}

pointfloat      ({digitpart}?{fraction})|({digitpart}".")
exponent        (e|E)("+"|"-")?{digitpart}
exponentfloat   ({digitpart}|{pointfloat}){exponent}
floatnumber	    ({pointfloat}|{exponentfloat})

imagnumber 	    ({floatnumber}|{digitpart})("j"|"J")

stringerror     (\"[^"]*)|(\'[^']*)$

%%

 /* Regras do flex, seguem alguns exemplos. */

"False"     { process_token(FALSE); }
"None"      { process_token(NONE); }
"True"      { process_token(TRUE); }
"and"       { process_token(AND); }
"as"        { process_token(AS); }
"assert"    { process_token(ASSERT); }
"async"     { process_token(ASYNC); }
"await"     { process_token(AWAIT); }
"break"     { process_token(BREAK); }
"class"     { process_token(CLASS); }
"continue"  { process_token(CONTINUE); }
"def"       { process_token(DEF); }
"del"       { process_token(DEL); }
"elif"      { process_token(ELSE_IF); }
"else"      { process_token(ELSE); }
"for"		{ process_token(FOR); }
"from"		{ process_token(FROM); }
"global"	{ process_token(GLOBAL); }
"if"		{ process_token(IF); }
"in"		{ process_token(IN); }
"is" 		{ process_token(IS); }
"lambda"	{ process_token(LAMBDA); }
"nonlocal"	{ process_token(NONLOCAL); }
"not"		{ process_token(NOT); }
"or"		{ process_token(OR); }
"pass"		{ process_token(PASS); }
"raise"		{ process_token(RAISE); }
"return"	{ process_token(RETURN); }
"while"		{ process_token(WHILE); }
"with"		{ process_token(WITH); }
"yield"     { process_token(YIELD); }


"+"		    { process_token(PLUS); }
"-"		    { process_token(MINUS); }
"*"		    { process_token(STAR); }
"**"	    { process_token(DOUBLESTAR); }
"/"		    { process_token(SLASH); }
"//"	    { process_token(DOUBLESLASH); }
"%"		    { process_token(PERCENT); }
"@"		    { process_token(AT); }
"<<"	    { process_token(LEFTSHIFT); }
">>"	    { process_token(RIGHTSHIFT); }
"&"		    { process_token(AMPER); }
"|"		    { process_token(VBAR); }
"^"		    { process_token(CIRCUMFLEX); }
"~"		    { process_token(TILDE); }
":="	    { process_token(COLONEQUAL); }
"<"		    { process_token(LESS); }
">"		    { process_token(GREATER); }
"<="	    { process_token(LESSEQUAL); }
">="	    { process_token(GREATEREQUAL); }
"=="	    { process_token(EQEQUAL); }
"!="	    { process_token(NOTEQUAL); }


"("		    { process_token(LPAR); }
")"		    { process_token(RPAR); }
"["		    { process_token(LSQB); }
"]"		    { process_token(RSQB); }
"{"		    { process_token(LBRACE); }
"}"		    { process_token(RBRACE); }
","		    { process_token(COMMA); }
":"		    { process_token(COLON); }
"."		    { process_token(DOT); }
";"		    { process_token(SEMI); }
"="		    { process_token(EQUAL); }
"->"	    { process_token(RARROW); }
"+="	    { process_token(PLUSEQUAL); }
"-="	    { process_token(MINEQUAL); }
"*="	    { process_token(STAREQUAL); }
"/="	    { process_token(SLASHEQUAL); }
"//="	    { process_token(DOUBLESLASHEQUAL); }
"%="	    { process_token(PERCENTEQUAL); }
"@="	    { process_token(ATEQUAL); }
"&="	    { process_token(AMPEREQUAL); }
"|="	    { process_token(VBAREQUAL); }
"^="	    { process_token(CIRCUMFLEXEQUAL); }
">>="	    { process_token(RIGHTSHIFTEQUAL); }
"<<="	    { process_token(LEFTSHIFTEQUAL); }
"**="	    { process_token(DOUBLESTAREQUAL); }

"..."       { process_token(ELLIPSIS); }

(\"([^\\]*\\\n)*[^\"]*\")  { process_token(STRING); }
(\'([^\\]*\\\n)*[^\']*\')  { process_token(STRING); }

(\'\'\')(.*\n)*(.*)(\'\'\')   { process_token(STRING); }
(\"\"\")(.*\n)*(.*)(\"\"\")   { process_token(STRING); }

{stringerror}       {   printf("Erro: Final da linha enquanto escaneava uma string\nEncerrando o scanner...\n");
                        exit(1);
                    }

(\n)?[ ]*#.*$        {  }

{id}        { process_token(NAME); }

{integer}     { process_token(NUMBER); }
{floatnumber} { process_token(NUMBER); }
{imagnumber}  { process_token(NUMBER); }

\n[ \t]*$   { }

[ \t]+      { }

\n[ ]*      {
                process_token(NEWLINE);
                indent();
            }

<<EOF>>     { process_token(NEWLINE); process_token(ENDMARKER); return -1;
                /*
                  Faz return para encerrar orig_yylex(). Não dê return em nenhuma
                  outra regra, caso contrário você vai encerrar orig_yylex() antes
                  da hora e não vai processar toda a entrada. Use só process_token().
                */
            }

%%


void imprime_token(int type) {

    switch(type) {
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
            printf("NAME    ");
            break;

        case NUMBER:
            printf("NUMBER    ");
            break;

        case STRING:
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
}

Token *vTokens=NULL;
int tamVT=0;
int indexVT=0;

void removerAspas(){
    int i, j;
    int tamNew;

    char *new = (char*) malloc(sizeof(char));
    int tamText = strlen(yytext);

    for(i=0, j=0; i<tamText; i++){
        if(yytext[i] != '\"'){
            tamNew = strlen(new);
            new = (char*) realloc(new, tamNew + sizeof(char));
            new[j]=yytext[i];
            j++;
        }
    }
    yytext = new;
}

void addListaTokens(int type){
    vTokens = (Token*) realloc(vTokens, (tamVT+1)*sizeof(Token));
    vTokens[tamVT].type=type;

    if(type == STRING){
        removerAspas();
        //printf("\n\nSTRING: %s\n", yytext);
    }

    vTokens[tamVT].lexeme = strdup(yytext);
    vTokens[tamVT].lineno = yylineno;
    tamVT++;
}

void cleanTokens(){
    free(vTokens);
    vTokens=NULL;
    tamVT=0;
}


void lex_init(void) {
    orig_yylex();
}

// Função que sempre é chamada quando um novo token deve ser gerado.
// Armazena o tipo do token passado no vetor de tokens para que
// ele seja retornado depois quando o parser pedir.
void process_token_real(int type) {
    imprime_token(type);
    addListaTokens(type);
}

// Função que é chamada pelo parser. Retorna os tokens por demanda, um por um,
// conforme a ordem que eles forem armazenados.
int yylex(void) {
    if (indexVT < tamVT) {
        return vTokens[indexVT++].type;
    } else {
        cleanTokens();
        return EOF;
    }
}

Token get_last_token() {
    return vTokens[indexVT-1];
}

Token get_penultimate_token() {
    return vTokens[indexVT-2];
}

///


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
    bool notNL=false;

    for (i = 0; i < lenTT; i++)
    {
        char c = textTab[i];

        qtdEnter = qtdChar(textTab, '\n');
        if (qtdEnter > 0)
        {
            qtd_tab_l = qtdChar(textTab, '\t');
            int diff;
            if (qtd_tab_l > qtd_tab_l_ant) //INDENT
            {
                notNL=true;
                diff = qtd_tab_l - qtd_tab_l_ant;
                
                for(j=0; j<diff; j++){
                    process_token(INDENT);
                }

                qtd_indent += diff;
            }
            else if (qtd_tab_l < qtd_tab_l_ant) //DEDENT
            {   
                notNL=true;
                diff = qtd_tab_l_ant - qtd_tab_l;
                
                for(j=0; j<diff; j++){
                    process_token(DEDENT);
                }

                qtd_indent -= diff;
            }
        }

        if (c == '\n' && !notNL)
        {   
            //process_token(NEWLINE);
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