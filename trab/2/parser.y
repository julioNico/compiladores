
%output "parser.c"          // File name of generated parser.
%defines "parser.h"         // Produces a 'parser.h'
%define parse.error verbose // Give proper messages when a syntax error is found.
%define parse.lac full      // Enable LAC to improve syntax error handling.

%{
#include <stdio.h>
int yylex(void);
void yyerror(char const *s);
int result = 0;
char *values;

%}

%token TYPE_COMMENT
%token NAME
%token NUMBER
%token STRING
%token INDENT
%token DEDENT
%token NEWLINE
%token LPAR
%token RPAR
%token LSQB
%token RSQB
%token COLON
%token COMMA
%token SEMI
%token PLUS
%token MINUS
%token STAR
%token SLASH
%token VBAR
%token AMPER
%token LESS
%token GREATER
%token EQUAL
%token DOT
%token PERCENT
%token LBRACE
%token RBRACE
%token EQEQUAL
%token NOTEQUAL
%token LESSEQUA
%token GREATEREQUAL
%token TILDE
%token CIRCUMFLEX
%token LEFTSHIFT
%token RIGHTSHIFT
%token DOUBLESTAR
%token PLUSEQUAL
%token MINEQUAL
%token STAREQUAL
%token SLASHEQUAL
%token PERCENTEQUAL
%token AMPEREQUAL
%token VBAREQUAL
%token CIRCUMFLEXEQUAL
%token LEFTSHIFTEQUAL
%token RIGHTSHIFTEQUAL
%token DOUBLESTAREQUAL
%token DOUBLESLASH
%token DOUBLESLASHEQUAL
%token AT
%token ATEQUAL
%token RARROW
%token ELLIPSIS
%token COLONEQUAL

%token BOOL
%token AND
%token OR
%token NOT

%token IF
%token ELSE_IF
%token ELSE

%left OR
%left AND
%left PLUS MINUS
%left STAR SLASH

%%

line: %empty | line expr | line cond; 

expr:
    expr PLUS expr                      { printf("PLUS\n"); }
|   expr MINUS expr                     { printf("MINUS\n"); }
|   expr STAR expr                      { printf("TIMES\n"); }
|   expr SLASH expr                     { printf("OVER\n"); }
|   NUMBER                              { printf("NUMBER\n"); };

expr_bool:      
    expr_bool AND expr_bool             { printf("AND\n"); }
|   expr_bool OR expr_bool              { printf("OR\n"); }
|   NOT expr_bool                       { printf("NOT\n"); }
|   BOOL                                { printf("BOOL\n"); };

cond:
    IF expr_bool COLON                  { printf("IF\n"); }
|   IF expr_bool COLON expr             { printf("IF_EXP\n"); }
|   ELSE_IF expr_bool COLON             { printf("ELIF\n"); }
|   ELSE_IF expr_bool COLON expr        { printf("ELIF_EXP\n"); }
|   ELSE COLON                          { printf("ELSE\n"); }
|   ELSE COLON expr                     { printf("ELSE_EXP\n"); };

%%

int main(void) {
    if (yyparse() == 0) printf("PARSE SUCCESSFUL!\n");
    else                printf("PARSE FAILED!\n");
    return 0;
}
