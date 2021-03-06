%option outfile="scanner.c"
%option noyywrap
%option nounput
%option noinput
%{
#include "parser.h" // For the token types from bison.
%}

%%

[0-9]+      { yylval = atoi(yytext); return NUMBER; }
"+"         { return PLUS; }
"-"         { return MINUS; }
"*"         { return TIMES; }
"/"         { return OVER; }
"\n"        { return ENTER; }
" "         { /* ignore spaces */ }
"if"        { return IF; }
"elif"      { return ELSE_IF; }
"else"      { return ELSE; }
":"         { return COLON; }
.           { printf("LEXICAL ERROR: Unknown symbol %s\n", yytext); exit(EXIT_FAILURE); }
