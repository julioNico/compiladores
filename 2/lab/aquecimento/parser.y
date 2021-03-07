
%output "parser.c"          // File name of generated parser.
%defines "parser.h"         // Produces a 'parser.h'
%define parse.error verbose // Give proper messages when a syntax error is found.
%define parse.lac full      // Enable LAC to improve syntax error handling.

%{
#include <stdio.h>
int yylex(void);
void yyerror(char const *s);
int result = 0;

%}
%token ENTER NUMBER PLUS MINUS TIMES OVER
%left PLUS MINUS
%left TIMES OVER

%token IF ELSE_IF ELSE COLON

%%

line: %empty | line expr ENTER | line cond | line ENTER; 

expr:
    expr PLUS expr {printf("PLUS\n");}
|   expr MINUS expr {printf("MINUS\n");}
|   expr TIMES expr {printf("TIMES\n");}
|   expr OVER expr {printf("OVER\n");}
|   NUMBER {result+=$1;};

cond:
    IF NUMBER COLON ENTER
|   IF NUMBER COLON expr ENTER
|   ELSE_IF NUMBER COLON ENTER
|   ELSE_IF NUMBER COLON expr ENTER
|   ELSE COLON ENTER
|   ELSE COLON expr ENTER ;

%%

int main(void) {
    if (yyparse() == 0) printf("PARSE SUCCESSFUL!\n");
    else                printf("PARSE FAILED!\n");
    printf("Result: %d\n", result);
    return 0;
}
