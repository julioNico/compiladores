%output "parser.c"          // File name of generated parser.
%defines "parser.h"         // Produces a 'parser.h'
%define parse.error verbose // Give proper messages when a syntax error is found.
%define parse.lac full      // Enable LAC to improve syntax error handling.

%{
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include "token.h"
#include "tables.h"
#include "ast.h"
#include "parser.h"


int yylex(void);
int yylex_destroy(void);
int orig_yylex(void);
Token get_last_token();

AST* new_name();

void yyerror(char const *s);

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

file_input: fk_NEWLINE_stmt ENDMARKER { root = new_subtree(PROGRAM_NODE, 1, $1); }
;

fk_NEWLINE_stmt:
%empty %prec LOW  { $$ = new_subtree(LOW_NODE, 0); }         
| NL_stmt fk_NEWLINE_stmt   { 
  if(get_child_count($2) == 0){
    $2 = new_subtree(BLOCK_NODE, 1, $2); 
  }; 
  add_child($2, $1); $$ = $2; 
}
; 

NL_stmt: NEWLINE | stmt { $$ = $1; }
;

stmt: simple_stmt { $$ == $1; } | compound_stmt  { $$ == $1; };
simple_stmt:  small_stmt fk_SEMI_small_stmt opc_SEMI NEWLINE  { 
    add_child($1, $2); $$ = $1; 
}
;

fk_SEMI_small_stmt:
%empty %prec LOW  { $$ = new_subtree(LOW_NODE, 0); }
|   SEMI small_stmt fk_NEWLINE_stmt   { 
  if (get_child_count($3) == 0) {
    $3 = new_subtree(SMALL_STMT_NODE, 1, $3); 
  }; 
  add_child($3, $2); $$ = $3; 
}
;

small_stmt: 
  expr_stmt       { $$ = $1; }
| del_stmt        { $$ = $1; }
| pass_stmt       { $$ = $1; }
| flow_stmt       { $$ = new_subtree(SUB_NODE, 0); }
| global_stmt     { $$ = new_subtree(SUB_NODE, 0); }
| nonlocal_stmt   { $$ = new_subtree(SUB_NODE, 0); }
;

compound_stmt: 
  if_stmt     { $$ = new_subtree(SUB_NODE, 0); }
| while_stmt  { $$ = new_subtree(SUB_NODE, 0); }
| for_stmt    { $$ = new_subtree(SUB_NODE, 0); }
| with_stmt   { $$ = new_subtree(SUB_NODE, 0); }
| funcdef     { $$ = new_subtree(SUB_NODE, 0); }
| classdef    { $$ = new_subtree(SUB_NODE, 0); }
;


funcdef: DEF NAME parameters opc_RARROW_test COLON func_body_suite
;

opc_RARROW_test:
%empty
|   RARROW test;

parameters: LPAR opc_argslist RPAR;

opc_argslist:
%empty    { $$ = new_node(LOW_NODE, ""); }
|   NAME { $1 = new_name(); } COMMA opc_argslist {
    if(get_child_count($4) == 0){
      $4 = new_subtree(NAME_NODE_LIST, 1, $4); 
    }; 
    add_child($4, $1);
    $$ = $4;
}
|   NAME { $$ = new_name(); }
;



expr_stmt: testlist_star_expr expr_stmt_1 { add_child($2, $1); $$ = $2; }
;

expr_stmt_1: 
  annassign               { $$ = $1; }
| augassign expr_stmt_2   { add_child($2, $1); $$ = $2; }
| fk_EQ_YE_TSE     { $$ = $1; }
;

expr_stmt_2: 
  yield_expr  { $$ = $1; } 
| testlist    { $$ = $1; }
;

fk_EQ_YE_TSE:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   expr_stmt_3 fk_EQ_YE_TSE  { add_child($1, $2); $$ = $1; }
;


expr_stmt_3: EQUAL expr_stmt_4  { $$ = new_subtree(EQ_NODE, 1, $2); }
;

expr_stmt_4: 
  yield_expr          { $$ = $1; }
| testlist_star_expr  { $$ = $1; }
;

annassign: COLON test opc_EQUAL_MALUCO  { $$ = new_subtree(ANNASSIGN_NODE, 2, $2, $3); }
;

opc_EQUAL_MALUCO:
%empty                        { $$ = new_node(LOW_NODE, ""); }
|   EQUAL yield_expr          { $$ = new_subtree(EQ_NODE, 1, $2); }
|   EQUAL testlist_star_expr  { $$ = new_subtree(EQ_NODE, 1, $2); }
;

testlist_star_expr: TSE_stmt fk_COMMA_T_SE opc_COMMA { add_child($1, $2); $$ = $1; }
; 

TSE_stmt: 
  test      { $$ = $1; }
| star_expr { $$ = $1; }
;

fk_COMMA_T_SE:
%empty %prec LOW  { $$ = new_subtree(LOW_NODE, 0); }
|   COMMA TSE_stmt fk_COMMA_T_SE  { $$ = new_subtree(TSE_NODE, 2, $2, $3); }
;

augassign: 
  PLUSEQUAL           { Token token = get_last_token(); $$ = new_node(OP_EQUAL_NODE, token.lexeme); }
| MINEQUAL            { Token token = get_last_token(); $$ = new_node(OP_EQUAL_NODE, token.lexeme); }
| STAREQUAL           { Token token = get_last_token(); $$ = new_node(OP_EQUAL_NODE, token.lexeme); }
| ATEQUAL             { Token token = get_last_token(); $$ = new_node(OP_EQUAL_NODE, token.lexeme); }
| SLASHEQUAL          { Token token = get_last_token(); $$ = new_node(OP_EQUAL_NODE, token.lexeme); }
| PERCENTEQUAL        { Token token = get_last_token(); $$ = new_node(OP_EQUAL_NODE, token.lexeme); }
| AMPEREQUAL          { Token token = get_last_token(); $$ = new_node(OP_EQUAL_NODE, token.lexeme); }
| VBAREQUAL           { Token token = get_last_token(); $$ = new_node(OP_EQUAL_NODE, token.lexeme); }
| CIRCUMFLEXEQUAL     { Token token = get_last_token(); $$ = new_node(OP_EQUAL_NODE, token.lexeme); }
| LEFTSHIFTEQUAL      { Token token = get_last_token(); $$ = new_node(OP_EQUAL_NODE, token.lexeme); }
| RIGHTSHIFTEQUAL     { Token token = get_last_token(); $$ = new_node(OP_EQUAL_NODE, token.lexeme); }
| DOUBLESTAREQUAL     { Token token = get_last_token(); $$ = new_node(OP_EQUAL_NODE, token.lexeme); }
| DOUBLESLASHEQUAL    { Token token = get_last_token(); $$ = new_node(OP_EQUAL_NODE, token.lexeme); }
;

opc_SEMI:
%empty
|   SEMI
;

opc_COMMA:
%empty
|   COMMA;

del_stmt: DEL exprlist;

flow_stmt: 
  break_stmt      { $$ = $1; }
| continue_stmt   { $$ = $1; }
| return_stmt     { $$ = $1; }
| yield_stmt      { $$ = $1; }
;

pass_stmt: PASS { Token token = get_last_token(); $$ = new_node(FLOW_NODE, token.lexeme); }
;

break_stmt: BREAK { Token token = get_last_token(); $$ = new_node(FLOW_NODE, token.lexeme); }
;

continue_stmt: CONTINUE { Token token = get_last_token(); $$ = new_node(FLOW_NODE, token.lexeme); }
;


return_stmt: RETURN opc_testlist_star_expr  { $$ = new_subtree(RETURN_NODE, 1, $1); }
;

yield_stmt: yield_expr  { $$ = $1; }
;

opc_testlist_star_expr:
%empty %prec LOW  { $$ = new_subtree(LOW_NODE, 0); }
|   testlist_star_expr  {$$ = $1; }
;

global_stmt: GLOBAL NAME fk_COMMA_NAME
;

nonlocal_stmt: NONLOCAL NAME fk_COMMA_NAME
;

fk_COMMA_NAME:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   COMMA NAME fk_COMMA_NAME;

if_stmt: IF namedexpr_test COLON suite fk_ELIF_NT_COLON_SUITE opc_ELSE_COLON_suite;

fk_ELIF_NT_COLON_SUITE:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   ELSE_IF namedexpr_test COLON suite fk_ELIF_NT_COLON_SUITE;

while_stmt: WHILE namedexpr_test COLON suite opc_ELSE_COLON_suite;

for_stmt: FOR exprlist IN testlist COLON suite opc_ELSE_COLON_suite;

opc_ELSE_COLON_suite:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   ELSE COLON suite;

with_stmt: WITH with_item fk_COMMA_WI  COLON suite;

fk_COMMA_WI:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   COMMA with_item fk_COMMA_WI;

with_item: test opc_AS_expr;

opc_AS_expr:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   AS expr;

suite: simple_stmt | NEWLINE INDENT stmt fk_stmt DEDENT;

namedexpr_test: test opc_COLONEQUAL_test;

opc_COLONEQUAL_test:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   COLONEQUAL test;

test: 
  or_test opc_IF_or_test_ELSE_test  { $$ = $1; }
| lambdef                           { $$ = $1; }
;


opc_IF_or_test_ELSE_test:
%empty %prec LOW  { $$ = new_subtree(LOW_NODE, 0); }
|   IF or_test ELSE test  { $$ = new_subtree(IF_ELSE_NODE, 2, $2, $4); }
;

test_nocond: 
  or_test         { $$ = $1; }
| lambdef_nocond  { $$ = $1; }
;

lambdef: LAMBDA opc_argslist COLON test { $$ = new_subtree(LAMBDA_NODE, 2, $2, $4); }
;

lambdef_nocond: LAMBDA opc_argslist COLON test_nocond { $$ = new_subtree(LAMBDA_NODE, 2, $2, $4); }
;

or_test: and_test fk_OR_AT { add_child($1, $2); $$ = $1; }
;

fk_OR_AT:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   OR and_test fk_OR_AT { $$ = new_subtree(OR_NODE, 2, $2, $3); }
;

and_test: not_test fk_AND_NT { add_child($1, $2); $$ = $1; }
;

fk_AND_NT:
%empty   { $$ = new_node(LOW_NODE, ""); }
|   AND not_test fk_AND_NT { $$ = new_subtree(AND_NODE, 2, $2, $3); }
;

not_test: 
NOT not_test    { $$ = new_subtree(NOT_NODE, 1, $2); }
| comparison    { $$ = $1; }
;

comparison: expr fk_CO_EXPR { add_child($1, $2); $$ = $1; }
;

fk_CO_EXPR:
%empty %prec LOW              { $$ = new_subtree(LOW_NODE, 0); }
|   comp_op expr fk_CO_EXPR   { add_child($1, $2); add_child($1, $3); $$ = $1; }
;

comp_op: 
  LESS              { Token token = get_last_token(); $$ = new_node(COMP_NODE, token.lexeme); }
| GREATER           { Token token = get_last_token(); $$ = new_node(COMP_NODE, token.lexeme); }
| EQEQUAL           { Token token = get_last_token(); $$ = new_node(COMP_NODE, token.lexeme); }
| GREATEREQUAL      { Token token = get_last_token(); $$ = new_node(COMP_NODE, token.lexeme); }
| LESSEQUAL         { Token token = get_last_token(); $$ = new_node(COMP_NODE, token.lexeme); }
| LESSGREATER       { Token token = get_last_token(); $$ = new_node(COMP_NODE, token.lexeme); }
| NOTEQUAL          { Token token = get_last_token(); $$ = new_node(COMP_NODE, token.lexeme); }
| IN                { Token token = get_last_token(); $$ = new_node(COMP_NODE, token.lexeme); }
| NOT IN            { Token token = get_last_token(); $$ = new_node(COMP_NODE, token.lexeme); }
| IS                { Token token = get_last_token(); $$ = new_node(COMP_NODE, token.lexeme); }
| IS NOT            { Token token = get_last_token(); $$ = new_node(COMP_NODE, token.lexeme); }
;

star_expr: STAR expr { $$ = new_subtree(STAR_NODE, 1, $2); };

expr: xor_expr fk_VBAR_XE { add_child($1, $2); $$ = $1; }
;

fk_VBAR_XE:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   VBAR xor_expr fk_VBAR_XE { 
  if (get_child_count($3) == 0) {
    $3 = new_subtree(VBAR_NODE, 1, $3); 
  }; 
  add_child($3, $2); $$ = $3; 
}
;

xor_expr: and_expr fk_CIRCUMFLEX_EXPR { $$ = new_subtree(SUB_NODE, 0); }
;

fk_CIRCUMFLEX_EXPR:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   CIRCUMFLEX and_expr fk_CIRCUMFLEX_EXPR;

and_expr: shift_expr fk_AMPER_SE;
fk_AMPER_SE:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   AMPER shift_expr fk_AMPER_SE;

shift_expr: arith_expr fk_LS_RS_AE;
fk_LS_RS_AE:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   SE_stmt arith_expr fk_LS_RS_AE;

SE_stmt: LEFTSHIFT | RIGHTSHIFT;

arith_expr: term fk_T_PLUS_MINUS;

fk_T_PLUS_MINUS:
%empty %prec LOW  { $$ = new_subtree(LOW_NODE, 0); }
|   AE_stmt term fk_T_PLUS_MINUS;

AE_stmt: PLUS | MINUS;

term: factor fk_MATH;
fk_MATH:
%empty %prec LOW  { $$ = new_subtree(LOW_NODE, 0); }
|   term_stmt factor fk_MATH;

term_stmt: STAR | AT | SLASH | PERCENT | DOUBLESLASH;

factor: factor_stmt factor | power;
factor_stmt: PLUS | MINUS | TILDE;

power: atom_expr opc_DOUBLESTAR_factor;
opc_DOUBLESTAR_factor:
%empty  { $$ = new_node(LOW_NODE, ""); }
| DOUBLESTAR factor;

atom_expr: atom fk_trailer
|   AWAIT atom fk_trailer;

fk_trailer:
%empty %prec LOW  { $$ = new_subtree(LOW_NODE, 0); }
|   trailer fk_trailer;

atom: LPAR opc_atom_stmt RPAR | LSQB opc_testlist_comp RSQB | NAME | NUMBER | STRING fk_STRING | ELLIPSIS | NONE | TRUE | FALSE;
opc_atom_stmt:
  %empty  { $$ = new_node(LOW_NODE, ""); }
| yield_expr
| testlist_comp;


opc_testlist_comp:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   testlist_comp;

fk_STRING:
%empty %prec LOW  { $$ = new_subtree(LOW_NODE, 0); };
|   STRING fk_STRING;

testlist_comp: trailer_stmt trailer_stmt_1;
trailer: LPAR opc_arglist RPAR | LSQB subscriptlist RSQB | DOT NAME;

opc_arglist:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   arglist;

fk_COMMA_NT_SE:
%empty %prec LOW  { $$ = new_subtree(LOW_NODE, 0); }
|   COMMA trailer_stmt fk_COMMA_NT_SE;


trailer_stmt: namedexpr_test | star_expr;
trailer_stmt_1: comp_for | fk_COMMA_NT_SE opc_COMMA;

subscriptlist: subscript fk_COMMA_S opc_COMMA;
fk_COMMA_S:
%empty %prec LOW  { $$ = new_subtree(LOW_NODE, 0); }
|   COMMA subscript fk_COMMA_S;


subscript: test | opc_test COLON opc_test opc_sliceop;

opc_test:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   test;

opc_sliceop:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   sliceop;

sliceop: COLON opc_test;

exprlist: exprlist_stmt fk_COMMA_E_SE opc_COMMA  { $$ = new_subtree(EXPR_STMT_LIST_NODE, 2, $1, $2); }
;

fk_COMMA_E_SE:
%empty %prec LOW  { $$ = new_subtree(LOW_NODE, 0); }
|   COMMA exprlist_stmt fk_COMMA_E_SE { 
  if (get_child_count($3) == 0) {
    $3 = new_subtree(LIST_NODE, 1, $3); 
  }; 
  add_child($3, $2); $$ = $3; 
}
;


exprlist_stmt: 
  expr        { $$ = $1; }
| star_expr   { $$ = $1; }
;

testlist: test fk_COMMA_test opc_COMMA  { $$ = new_subtree(TEST_NODE_LIST, 2, $1, $2); }
;

fk_COMMA_test:
%empty %prec LOW              { $$ = new_subtree(LOW_NODE, 0); }
|   COMMA test fk_COMMA_test  { 
  if (get_child_count($3) == 0) {
    $3 = new_subtree(LIST_NODE, 1, $3); 
  }; 
  add_child($3, $2); $$ = $3; 
}
;

classdef: CLASS NAME opc_LPAR_arglist_RPAR COLON suite;
opc_LPAR_arglist_RPAR:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   LPAR RPAR
|   LPAR arglist RPAR;

arglist: argument fk_COMMA_A opc_COMMA;
fk_COMMA_A:
%empty %prec LOW  { $$ = new_subtree(LOW_NODE, 0); }
|   COMMA argument fk_COMMA_A;

                                          // ***SIMPLIFICAR*** //
argument: test opc_comp_for | test COLONEQUAL test | test EQUAL test | DOUBLESTAR test | STAR test;

opc_comp_for:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   comp_for;

comp_iter: comp_for | comp_if;
sync_comp_for: FOR exprlist IN or_test opc_comp_iter;

opc_comp_iter:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   comp_iter;

comp_for: opc_ASYNC sync_comp_for;

opc_ASYNC:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   ASYNC;

comp_if: IF test_nocond opc_comp_iter;
yield_expr: YIELD opc_yield_arg { 
  $1 = new_subtree(YIELD_EXPR_NODE, 1, $2); 
  $$ = $1; 
}
;
opc_yield_arg:
%empty %prec LOW  { $$ = new_subtree(LOW_NODE, 0); }
|   yield_arg { $$ = $1; };

yield_arg: 
  FROM test { 
  $1 = new_subtree(FROM_NODE, 1, $2); 
  $$ = $1; 
} | testlist_star_expr { $$ = $1; }
;

func_body_suite: simple_stmt | NEWLINE INDENT stmt fk_stmt DEDENT;

fk_stmt:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   stmt fk_stmt;

%%

AST* new_name() {
    Token token = get_last_token();
    return new_node(NAME_NODE, token.lexeme);
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

  FILE *arq_dot = fopen("test.dot", "w+");

  if(arq_dot == NULL)
  {
    printf("Erro na abertura do arquivo!");
    return 1;
  }

  print_dot(root, arq_dot);
  fclose(arq_dot);

  free_str_table(st);
  free_var_table(vt);
  free_tree(root);
  yylex_destroy();  
}
