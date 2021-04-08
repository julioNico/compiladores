%output "parser.c"          // File name of generated parser.
%defines "parser.h"         // Produces a 'parser.h'
%define parse.error verbose // Give proper messages when a syntax error is found.
%define parse.lac full      // Enable LAC to improve syntax error handling.

%{
#include <stdio.h>
#include <stdlib.h>
#include "token.h"
#include "tables.h"
#include "ast.h"

int yylex(void);
int orig_yylex(void);
Token get_last_token();
void yyerror(char const *s);

AST* new_var();

StrTable *st;
VarTable *vt;

AST *root;
%}

%define api.value.type {AST*}

%token IMPORT
%token FROM
%token AS

%token CLASS
%token DEF
%token LAMBDA

%token NOT
%token AND
%token OR

%token IF
%token ELSE_IF
%token ELSE
%token IS
%token TRUE
%token FALSE
%token ASSERT

%token FOR
%token IN
%token WHILE
%token PASS
%token BREAK
%token CONTINUE

%token TRY
%token EXCEPT
%token FINALLY
%token WITH

%token RETURN
%token RAISE
%token YIELD

%token GLOBAL
%token NONLOCAL

%token NONE
%token DEL
%token EXEC

%token ASYNC
%token AWAIT

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
%token LESSGREATER
%token EQUAL
%token DOT
%token PERCENT
%token LBRACE
%token RBRACE
%token EQEQUAL
%token NOTEQUAL
%token LESSEQUAL
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
%token ENDMARKER


%precedence LOW // Prioridade artificial para resolver conflitos de S/R. Todos os tokens conflitantes entram na prioridade maior abaixo.
%precedence LAMBDA NOT TRUE FALSE NONE AWAIT NAME NUMBER STRING LPAR LSQB PLUS MINUS STAR TILDE ELLIPSIS NEWLINE SEMI COMMA IF

%%

file_input: fk_NEWLINE_stmt ENDMARKER { printf("1"); root = new_subtree(PROGRAM_NODE, 1, $1); printf("2");};

fk_NEWLINE_stmt:
%empty %prec LOW 
|   NL_stmt fk_NEWLINE_stmt
;

NL_stmt: NEWLINE | stmt { $$ = $1; };

funcdef: DEF NAME parameters opc_RARROW_test COLON func_body_suite { printf("145"); $$ = new_subtree(BLOCK_NODE, 1, $2); }
;

opc_RARROW_test:
%empty
|   RARROW test;

parameters: LPAR opc_argslist RPAR;
opc_argslist:
%empty
|   NAME COMMA { printf("155"); $1 = new_var(); $$ = new_subtree(VAR_LIST_NODE, 1, $1); } opc_argslist { add_child($3, $1); $$ = $3; }
|   NAME { printf("156"); $1 = new_var(); $$ = new_subtree(VAR_LIST_NODE, 1, $1); }
;



stmt: simple_stmt | compound_stmt;
simple_stmt: small_stmt fk_SEMI_small_stmt opc_SEMI NEWLINE;
fk_SEMI_small_stmt:
%empty %prec LOW
|   SEMI small_stmt fk_NEWLINE_stmt;

small_stmt: expr_stmt | del_stmt | pass_stmt | flow_stmt | global_stmt | nonlocal_stmt;
expr_stmt: testlist_star_expr expr_stmt_1;
expr_stmt_1: annassign | augassign expr_stmt_2 | opc_fk_EQ_YE_TSE_TC;
expr_stmt_2: yield_expr|testlist;

opc_fk_EQ_YE_TSE_TC:
%empty
|   expr_stmt_3 fk_EQ_YE_TSE;

fk_EQ_YE_TSE:
%empty
|   expr_stmt_3 fk_EQ_YE_TSE;
expr_stmt_3: EQUAL expr_stmt_4;
expr_stmt_4: yield_expr|testlist_star_expr;

annassign: COLON test opc_COLON_test;
testlist_star_expr: TSE_stmt fk_COMMA_T_SE opc_COMMA;
TSE_stmt: test | star_expr;
fk_COMMA_T_SE:
%empty %prec LOW
|   COMMA TSE_stmt fk_COMMA_T_SE;

augassign: PLUSEQUAL | MINEQUAL | STAREQUAL | ATEQUAL | SLASHEQUAL | PERCENTEQUAL | AMPEREQUAL | VBAREQUAL | CIRCUMFLEXEQUAL | LEFTSHIFTEQUAL | RIGHTSHIFTEQUAL | DOUBLESTAREQUAL | DOUBLESLASHEQUAL;
opc_SEMI:
%empty
|   SEMI;
opc_COLON_test:
%empty
|   EQUAL yield_expr
|   EQUAL testlist_star_expr;
opc_COMMA:
%empty
|   COMMA;

del_stmt: DEL exprlist { $$ = $2; };
pass_stmt: PASS;
flow_stmt: 
  break_stmt      { printf("204"); $$ = $1; }
| continue_stmt   { printf("205"); $$ = $1; }
| return_stmt     { printf("206"); $$ = $1; }
| yield_stmt      { printf("207"); $$ = $1; }
;
break_stmt: BREAK;
continue_stmt: CONTINUE;
return_stmt: RETURN opc_testlist_star_expr;
yield_stmt: yield_expr;
opc_testlist_star_expr:
%empty %prec LOW
|   testlist_star_expr
;

global_stmt: GLOBAL NAME { printf("218"); $2 = new_var(); $$ = new_subtree(VAR_LIST_NODE, 1, $2); } fk_COMMA_NAME { add_child($3, $2); $$ = $3; }
; 

nonlocal_stmt: NONLOCAL NAME { printf("221"); $2 = new_var(); $$ = new_subtree(VAR_LIST_NODE, 1, $2); } fk_COMMA_NAME { add_child($3, $2); $$ = $3; }
; 
fk_COMMA_NAME:
%empty
|   COMMA NAME { printf("225"); $2 = new_var(); $$ = new_subtree(VAR_LIST_NODE, 1, $2); } fk_COMMA_NAME { add_child($3, $2); $$ = $3; }
;

compound_stmt: 
  if_stmt     { printf("229"); $$ = new_subtree(COND_NODE, 1, $1); } 
| while_stmt  { printf("229"); $$ = new_subtree(LOOP_NODE, 1, $1); } 
| for_stmt    { printf("229"); $$ = new_subtree(LOOP_NODE, 1, $1); } 
| with_stmt   { printf("229"); $$ = new_subtree(WITH_NODE, 1, $1); } 
| funcdef     { printf("229"); $$ = new_subtree(FUNCTION_NODE, 1, $1); } 
| classdef    { printf("229"); $$ = new_subtree(CLASS_NODE, 1, $1); } 
;

if_stmt: IF namedexpr_test COLON suite fk_ELIF_NT_COLON_SUITE opc_ELSE_COLON_suite;
fk_ELIF_NT_COLON_SUITE:
%empty
|   ELSE_IF namedexpr_test COLON suite fk_ELIF_NT_COLON_SUITE;

while_stmt: WHILE namedexpr_test COLON suite opc_ELSE_COLON_suite;
for_stmt: FOR exprlist IN testlist COLON suite opc_ELSE_COLON_suite;
opc_ELSE_COLON_suite:
%empty
|   ELSE COLON suite;

with_stmt: WITH with_item fk_COMMA_WI  COLON suite;
fk_COMMA_WI:
%empty
|   COMMA with_item fk_COMMA_WI;

with_item: test opc_AS_expr;
opc_AS_expr:
%empty
|   AS expr;

suite: simple_stmt | NEWLINE INDENT stmt fk_stmt DEDENT;

namedexpr_test: test opc_COLONEQUAL_test;
opc_COLONEQUAL_test:
%empty
|   COLONEQUAL test;

test: or_test opc_IF_or_test_ELSE_test | lambdef;
opc_IF_or_test_ELSE_test:
%empty %prec LOW
|   IF or_test ELSE test;

test_nocond: or_test | lambdef_nocond;
lambdef: LAMBDA opc_argslist COLON test;
lambdef_nocond: LAMBDA opc_argslist COLON test_nocond;
or_test: and_test fk_OR_AT;
fk_OR_AT:
%empty
|   OR and_test fk_OR_AT;

and_test: not_test fk_AND_NT;
fk_AND_NT:
%empty
|   AND not_test fk_AND_NT;

not_test: NOT not_test | comparison;
comparison: expr fk_CO_EXPR;
fk_CO_EXPR:
%empty %prec LOW
|   comp_op expr fk_CO_EXPR;

comp_op: LESS | GREATER | EQEQUAL | GREATEREQUAL | LESSEQUAL | LESSGREATER | NOTEQUAL | IN | NOT IN | IS | IS NOT;
star_expr: STAR expr { $$ = $2; }
;


expr: xor_expr { printf("294"); $$ = new_subtree(EXPR_NODE, 1, $1); } fk_VBAR_XE { add_child($1, $2); $$ = $1; }
;

fk_VBAR_XE:
%empty
|   VBAR xor_expr { printf("299"); $$ = new_subtree(EXPR_NODE, 1, $2); } fk_VBAR_XE  { add_child($2, $3); $$ = $2; }
;

xor_expr: and_expr fk_CIRCUMFLEX_EXPR;
fk_CIRCUMFLEX_EXPR:
%empty
|   CIRCUMFLEX and_expr fk_CIRCUMFLEX_EXPR;

and_expr: shift_expr fk_AMPER_SE;
fk_AMPER_SE:
%empty
|   AMPER shift_expr fk_AMPER_SE;

shift_expr: arith_expr fk_LS_RS_AE;
fk_LS_RS_AE:
%empty
|   SE_stmt arith_expr fk_LS_RS_AE;

SE_stmt: LEFTSHIFT | RIGHTSHIFT;

arith_expr: term fk_T_PLUS_MINUS;
fk_T_PLUS_MINUS:
%empty %prec LOW
|   AE_stmt term fk_T_PLUS_MINUS;

AE_stmt: PLUS | MINUS;

term: factor fk_MATH;
fk_MATH:
%empty %prec LOW
|   term_stmt factor fk_MATH;

term_stmt: STAR| AT | SLASH | PERCENT | DOUBLESLASH;

factor: factor_stmt factor | power;
factor_stmt: PLUS | MINUS | TILDE;

power: atom_expr opc_DOUBLESTAR_factor;
opc_DOUBLESTAR_factor:
%empty
| DOUBLESTAR factor;

atom_expr: atom fk_trailer
|   AWAIT atom fk_trailer;

fk_trailer:
%empty %prec LOW
|   trailer fk_trailer;

atom: LPAR opc_atom_stmt RPAR | LSQB opc_testlist_comp RSQB | NAME | NUMBER | STRING fk_STRING | ELLIPSIS | NONE | TRUE | FALSE;
opc_atom_stmt:
  %empty
| yield_expr
| testlist_comp;


opc_testlist_comp:
%empty
|   testlist_comp;
fk_STRING:
%empty %prec LOW;
|   STRING fk_STRING;

testlist_comp: trailer_stmt trailer_stmt_1;
trailer: LPAR opc_arglist RPAR | LSQB subscriptlist RSQB | DOT NAME;
opc_arglist:
%empty
|   arglist;
fk_COMMA_NT_SE:
%empty %prec LOW
|   COMMA trailer_stmt fk_COMMA_NT_SE;


trailer_stmt: namedexpr_test | star_expr;
trailer_stmt_1: comp_for | fk_COMMA_NT_SE opc_COMMA;

subscriptlist: subscript fk_COMMA_S opc_COMMA;
fk_COMMA_S:
%empty %prec LOW
|   COMMA subscript fk_COMMA_S;


subscript: test | opc_test COLON opc_test opc_sliceop;
opc_test:
%empty
|   test;
opc_sliceop:
%empty
|   sliceop;

sliceop: COLON opc_test;

exprlist: 
  exprlist_stmt { printf("392"); $$ = new_subtree(EXPR_LIST_NODE, 1, $1); } 
  fk_COMMA_E_SE opc_COMMA { printf("393"); add_child($1, $2); $$ = $1; }
;

fk_COMMA_E_SE:
%empty %prec LOW
| COMMA exprlist_stmt { printf("398"); $$ = new_subtree(EXPR_LIST_NODE, 1, $2); } 
  fk_COMMA_E_SE { printf("399"); add_child($2, $3); $$ = $2; }
;


exprlist_stmt: 
  expr      { $$ = $1; }
| star_expr { $$ = $1; }
;

testlist: test fk_COMMA_test opc_COMMA;
fk_COMMA_test:
%empty %prec LOW
|   COMMA test fk_COMMA_test;

classdef: CLASS NAME opc_LPAR_arglist_RPAR COLON suite;
opc_LPAR_arglist_RPAR:
%empty
|   LPAR RPAR
|   LPAR arglist RPAR;

arglist: argument fk_COMMA_A opc_COMMA;
fk_COMMA_A:
%empty %prec LOW
|   COMMA argument fk_COMMA_A;


argument: test opc_comp_for | test COLONEQUAL test | test EQUAL test | DOUBLESTAR test | STAR test;
opc_comp_for:
%empty
|   comp_for;

comp_iter: comp_for | comp_if;
sync_comp_for: FOR exprlist IN or_test opc_comp_iter;
opc_comp_iter:
%empty
|   comp_iter;

comp_for: opc_ASYNC sync_comp_for;
opc_ASYNC:
%empty
|   ASYNC;

comp_if: IF test_nocond opc_comp_iter;
yield_expr: YIELD opc_yield_arg;
opc_yield_arg:
%empty %prec LOW
|   yield_arg;

yield_arg: FROM test | testlist_star_expr;

func_body_suite: simple_stmt | NEWLINE INDENT stmt fk_stmt DEDENT;
fk_stmt:
%empty
|   stmt fk_stmt;

%%

AST* new_var() {
  Token token = get_last_token();
  int idx = add_var(vt, token.lexeme, token.lineno);
  return new_node(VAR_DECL_NODE, idx);
}

// Primitive error handling.
void yyerror (char const *s) {
    Token token = get_last_token();
    printf("SYNTAX ERROR (%d): %s\nCurrent token is '%s'\n", token.lineno, s, token.lexeme);
    exit(EXIT_FAILURE);
}

int main(void) {
    st = create_str_table();
    vt = create_var_table();

    orig_yylex(); // Chama o scanner para acumular todos os tokens.
    if (yyparse() == 0) printf("PARSE SUCCESSFUL!\n");
    else                printf("PARSE FAILED!\n");

    printf("\n\n");
    print_str_table(st); printf("\n\n");
    print_var_table(vt); printf("\n\n");

    print_dot(root);

    free_str_table(st);
    free_var_table(vt);
    free_tree(root);

    return 0;
}
