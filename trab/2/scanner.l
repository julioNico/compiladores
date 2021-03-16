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
void process_indent(int length);

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
                process_indent(yyleng-1);
            }

<<EOF>>     { process_token(ENDMARKER); return -1;
                /*
                  Faz return para encerrar orig_yylex(). Não dê return em nenhuma
                  outra regra, caso contrário você vai encerrar orig_yylex() antes
                  da hora e não vai processar toda a entrada. Use só process_token().
                */
            }

%%

/*
   O código abaixo modifica totalmente o funcionamento do scanner. Nos códigos
   do labs, o scanner era ativado por demanda do parser. Aqui, vamos fazer o
   scanner ler toda a entrada e armazenar os tokens todos em uma estrutura.
   A implementação abaixo é bem miserável, com um vetor hard-coded como
   armazenamento. Fique à vontade para melhorar como preferir.
*/

// Pilha de identação

int stack[100] = {[0] = 0};
int sp = -1;

bool is_empty() {
    return sp == -1;
}

void push(int x) {
    stack[++sp] = x;
}

int pop() {
    if (is_empty())
        return INT_MIN;
    return stack[sp--];
}

int peek() {
    if (is_empty())
        return INT_MIN;
    return stack[sp];
}

// Função que analisa a identação sempre que uma nova linha começa.
void process_indent(int length) {
    // Analisa a indentação e chama process_token(INDENT) e process_token(DEDENT) conforme for necessário.
    if (is_empty()) {
        push(0);
        //printf("Pilha estava vazia ... adicioando 0 na pilha\n");
    }
    if (length > peek()) {
        push(length);
        // Adiciona token INDENT
        process_token(INDENT);
        //printf("Token INDENT emitido\n");
    } else if (length < peek()) {
        while(!is_empty() && length < peek()) {
            //printf("Length: %d é menor que Topo da Pilha: %d ... Fazendo pop(root)\n", length, peek(*root));
            pop();
            process_token(DEDENT);
            //printf("Token DEDENT emitido\n");
        }
        if (is_empty() || peek() != length) {
            printf("Erro de Indentação\nEncerrando o scanner...\n");
            exit(EXIT_FAILURE);
        }
    } else {
        //printf("Indentação igual anterior\n");
    }
    //printf("    Topo da Pilha: %d\n", peek(*root));
}

// Vetor de tokens já lidos.
#define MAX_TOKEN_COUNT 1000
Token tokens[MAX_TOKEN_COUNT];

// Número de tokens já armazenados no vetor.
int token_count = 0;

// Contador que indica o próximo token que deve ser retornado para o parser.
int next_token = 0;

// Função pré-definida do flex que é executada uma única vez quando o scanner
// é inicializado. Chamamos a função orig_yylex() porque é ela que de fato
// implementa o scanner. Assim, lemos a entrada toda neste ponto pelas regras
// do scanner acima.
void lex_init(void) {
    orig_yylex();
}

// Função que sempre é chamada quando um novo token deve ser gerado.
// Armazena o tipo do token passado no vetor de tokens para que
// ele seja retornado depois quando o parser pedir.
void process_token_real(int type) {
    // Adiciona 'type' no vetor de tokens e incrementa o contador token_count.
    int pos = token_count++;
    tokens[pos].type = type;
    tokens[pos].lexeme = strdup(yytext);
    tokens[pos].lineno = yylineno;
}

// Função que é chamada pelo parser. Retorna os tokens por demanda, um por um,
// conforme a ordem que eles forem armazenados.
int yylex(void) {
    if (next_token < token_count) {
        return tokens[next_token++].type;
    } else {
        return EOF;
    }
}

Token get_last_token() {
    return tokens[next_token-1];
}
