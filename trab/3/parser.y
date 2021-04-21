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
Token get_penultimate_token();
AST* tokenToAST(int kind);
AST* tokenToAST_2(int kind);
void check_vars(AST*arv);

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

file_input: fk_NEWLINE_stmt ENDMARKER { 
  root = new_subtree(PROGRAM_NODE, 1, $1); 
  check_vars(root); 
};

fk_NEWLINE_stmt:
%empty %prec LOW  { $$ = new_subtree(LOW_NODE, 0); }         
| NL_stmt fk_NEWLINE_stmt   {
  if(get_child_count($2) == 0){
    $$ = new_subtree(BLOCK_NODE, 1, $1); 
  } else {
    add_child($2, $1);
    $$ = $2; 
  } 
}
;

NL_stmt: 
  NEWLINE   { $$ = new_subtree(LOW_NODE, 0); } 
| stmt      { $$ = $1; }
;

stmt: simple_stmt { $$ = $1; } | compound_stmt  { $$ = $1; };
simple_stmt:  small_stmt fk_SEMI_small_stmt opc_SEMI NEWLINE  { add_child($1, $2); $$ = $1; 
}
;

fk_SEMI_small_stmt:
%empty %prec LOW                      { $$ = new_subtree(LOW_NODE, 0); }
|   SEMI small_stmt fk_NEWLINE_stmt   { add_child($2, $3); $$ = $2; }
;

small_stmt: 
  expr_stmt       { $$ = $1; }
| del_stmt        { $$ = $1; }
| pass_stmt       { $$ = $1; }
| flow_stmt       { $$ = $1; }
| global_stmt     { $$ = $1; }
| nonlocal_stmt   { $$ = $1; }
;

compound_stmt: 
  if_stmt     { $$ = $1; }
| while_stmt  { $$ = $1; }
| for_stmt    { $$ = $1; }
| with_stmt   { $$ = $1; }
| funcdef     { $$ = $1; }
| classdef    { $$ = $1; }
;


funcdef: DEF NAME { $2 = tokenToAST(NAME_NODE); } parameters opc_RARROW_test COLON func_body_suite {
  $$ = new_subtree(FUNK_NODE, 4, $2, $4, $5, $7);
}
;

opc_RARROW_test:
%empty     { $$ = new_node(LOW_NODE, ""); }
|   RARROW { $1 = tokenToAST(RARROW_NODE); } test { add_child($1, $3); $$ = $1; }
;

parameters: LPAR opc_argslist RPAR  { $$ = new_subtree(PARAMETERS_NODE, 1, $2);  }
;

opc_argslist:
%empty    { $$ = new_node(LOW_NODE, ""); }
|   NAME { $1 = tokenToAST_2(NAME_NODE); } COMMA opc_argslist {
    if(get_child_count($4) == 0){
      $4 = new_subtree(NAME_LIST_NODE, 1, $4); 
    }; 
    add_child($4, $1);
    $$ = $4;
}
|   NAME { $$ = tokenToAST_2(NAME_NODE); }
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
%empty                        { $$ = new_node(LOW_NODE, ""); }
|   expr_stmt_3 fk_EQ_YE_TSE  { add_child($1, $2); $$ = $1; }
;


expr_stmt_3: EQUAL expr_stmt_4  { $$ = new_subtree(EQUAL_NODE, 1, $2); }
;

expr_stmt_4: 
  yield_expr          { $$ = $1; }
| testlist_star_expr  { $$ = $1; }
;

annassign: COLON test opc_EQUAL_MALUCO  { add_child($3, $2); $$ = $3; }
;

opc_EQUAL_MALUCO:
%empty                        { $$ = new_node(LOW_NODE, ""); }
|   EQUAL yield_expr          { $$ = new_subtree(EQUAL_NODE, 1, $2); }
|   EQUAL testlist_star_expr  { $$ = new_subtree(EQUAL_NODE, 1, $2); }
;

testlist_star_expr: TSE_stmt fk_COMMA_T_SE opc_COMMA { add_child($1, $2); $$ = $1; }
; 

TSE_stmt: 
  test      { $$ = $1; }
| star_expr { $$ = $1; }
;

fk_COMMA_T_SE:
%empty %prec LOW  { $$ = new_subtree(LOW_NODE, 0); }
|   COMMA TSE_stmt fk_COMMA_T_SE  { add_child($2, $3); $$ = $2; }
;

augassign: 
  PLUSEQUAL           { $$ = tokenToAST(OP_EQUAL_NODE); }
| MINEQUAL            { $$ = tokenToAST(OP_EQUAL_NODE); }
| STAREQUAL           { $$ = tokenToAST(OP_EQUAL_NODE); }
| ATEQUAL             { $$ = tokenToAST(OP_EQUAL_NODE); }
| SLASHEQUAL          { $$ = tokenToAST(OP_EQUAL_NODE); }
| PERCENTEQUAL        { $$ = tokenToAST(OP_EQUAL_NODE); }
| AMPEREQUAL          { $$ = tokenToAST(OP_EQUAL_NODE); }
| VBAREQUAL           { $$ = tokenToAST(OP_EQUAL_NODE); }
| CIRCUMFLEXEQUAL     { $$ = tokenToAST(OP_EQUAL_NODE); }
| LEFTSHIFTEQUAL      { $$ = tokenToAST(OP_EQUAL_NODE); }
| RIGHTSHIFTEQUAL     { $$ = tokenToAST(OP_EQUAL_NODE); }
| DOUBLESTAREQUAL     { $$ = tokenToAST(OP_EQUAL_NODE); }
| DOUBLESLASHEQUAL    { $$ = tokenToAST(OP_EQUAL_NODE); }
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

pass_stmt: PASS { $$ = tokenToAST(FLOW_NODE); };
break_stmt: BREAK { $$ = tokenToAST(FLOW_NODE); };
continue_stmt: CONTINUE { $$ = tokenToAST(FLOW_NODE); };


return_stmt: RETURN opc_testlist_star_expr  { $$ = new_subtree(RETURN_NODE, 1, $2); }
;

yield_stmt: yield_expr  { $$ = $1; }
;

opc_testlist_star_expr:
%empty %prec LOW        { $$ = new_subtree(LOW_NODE, 0); }
|   testlist_star_expr  {$$ = $1; }
;

global_stmt: GLOBAL NAME { $2 = tokenToAST(NAME_NODE); } fk_COMMA_NAME  { add_child($4, $2); $$ = $4; }
;

nonlocal_stmt: NONLOCAL NAME { $2 = tokenToAST(NAME_NODE); } fk_COMMA_NAME  { add_child($4, $2); $$ = $4; }
;

fk_COMMA_NAME:
%empty  { $$ = new_node(NAME_LIST_NODE, ""); }
|   COMMA NAME { $2 = tokenToAST(NAME_NODE); } fk_COMMA_NAME  { 
  if (get_child_count($4) == 0) {
    $4 = new_subtree(NAME_LIST_NODE, 1, $4); 
  }; 
  add_child($4, $2); $$ = $4; 
}
;

if_stmt: IF { $1 = tokenToAST(IF_NODE); } namedexpr_test COLON suite fk_ELIF_NT_COLON_SUITE opc_ELSE_COLON_suite {
  add_child($1, $7);
  add_child($1, $6);
  add_child($1, $5);
  add_child($1, $3);
  $$ = $1;
};

fk_ELIF_NT_COLON_SUITE:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   ELSE_IF { $1 = tokenToAST(ELSE_IF_NODE); } namedexpr_test COLON suite fk_ELIF_NT_COLON_SUITE {
  add_child($1, $3);
  add_child($1, $5);
  add_child($1, $6);
  $$ = $1;
}
;

while_stmt: WHILE namedexpr_test COLON suite opc_ELSE_COLON_suite {
  $$ = new_subtree(FOR_IN_NODE, 3, $2, $4, $5);
};

for_stmt: FOR exprlist IN testlist COLON suite opc_ELSE_COLON_suite {
  $$ = new_subtree(FOR_IN_NODE, 4, $2, $4, $6, $7);
};

opc_ELSE_COLON_suite:
%empty   { $$ = new_node(LOW_NODE, ""); }
|   ELSE { $1 = tokenToAST(ELSE_NODE); } COLON suite { add_child($1, $4);  $$ = $1; }
;

with_stmt: WITH with_item fk_COMMA_WI  COLON suite { 
  if (get_child_count($3)==0){
    $3 = $2;
  } else {
    add_child($3, $2);
  }
  $$ = new_subtree(WITH_NODE, 2, $3, $5);
};

fk_COMMA_WI:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   COMMA with_item fk_COMMA_WI { 
  if (get_child_count($3) == 0){
    $3 = new_subtree(WITH_ITEM_NODE, 1, $3);
  }
  add_child($3, $1);
  $$ = $3;
};

with_item: test opc_AS_expr { add_child($2, $1); $$ = $2; }
;

opc_AS_expr:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   AS expr { $$ = new_subtree(AS_NODE, 1, $2); };
;

suite: 
  simple_stmt { $$ = $1; }
| NEWLINE INDENT stmt fk_stmt DEDENT { 
  if (get_child_count($4) == 0) {
    $$ = $3;
  } else {
    add_child($4, $3); $$ = $4; 
  };
}
;

namedexpr_test: test opc_COLONEQUAL_test { 
    if (get_child_count($2)==0){
      $$ = $1;
    } else {
      add_child($2, $1); $$ = $2; 
    };
  }
;

opc_COLONEQUAL_test:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   COLONEQUAL { $1 = tokenToAST(NAME_NODE); } test { 
  add_child($1, $3); $$ = $1; 
}
;

test: 
  or_test opc_IF_or_test_ELSE_test  { add_child($1, $2); $$ = $1; }
| lambdef                           { $$ = $1; }
;

opc_IF_or_test_ELSE_test:
%empty %prec LOW          { $$ = new_subtree(LOW_NODE, 0); }
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

or_test: and_test fk_OR_AT { 
  if(get_child_count($2)==0){
    $$ = $1; 
  } else {
    add_child($2, $1); $$ = $2; 
  }
};

fk_OR_AT:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   OR and_test fk_OR_AT { $$ = new_subtree(OR_NODE, 2, $2, $3); }
;

and_test: not_test fk_AND_NT { 
  if(get_child_count($2)==0){
    $$ = $1; 
  } else {
    add_child($2, $1); $$ = $2; 
  }
};

fk_AND_NT:
%empty   { $$ = new_node(LOW_NODE, ""); }
|   AND not_test fk_AND_NT { $$ = new_subtree(AND_NODE, 2, $2, $3); }
;

not_test: 
NOT not_test    { $$ = new_subtree(NOT_NODE, 1, $2); }
| comparison    { $$ = $1; }
;

comparison: expr fk_CO_EXPR { 
  if(get_child_count($2)==0) {
    $$ = $1; 
  } else {
    add_child($2, $1); $$ = $2; 
  };
};

fk_CO_EXPR:
%empty %prec LOW              { $$ = new_subtree(LOW_NODE, 0); }
|   comp_op expr fk_CO_EXPR   { add_child($1, $2); add_child($1, $3); $$ = $1; }
;

comp_op: 
  LESS              { $$ = tokenToAST(COMP_NODE); } 
| GREATER           { $$ = tokenToAST(COMP_NODE); } 
| EQEQUAL           { $$ = tokenToAST(COMP_NODE); } 
| GREATEREQUAL      { $$ = tokenToAST(COMP_NODE); } 
| LESSEQUAL         { $$ = tokenToAST(COMP_NODE); } 
| LESSGREATER       { $$ = tokenToAST(COMP_NODE); } 
| NOTEQUAL          { $$ = tokenToAST(COMP_NODE); } 
| IN                { $$ = tokenToAST(COMP_NODE); } 
| NOT IN            { $$ = tokenToAST(COMP_NODE); } 
| IS                { $$ = tokenToAST(COMP_NODE); } 
| IS NOT            { $$ = tokenToAST(COMP_NODE); } 
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

xor_expr: and_expr fk_CIRCUMFLEX_EXPR { add_child($1, $2); $$ = $1; }

fk_CIRCUMFLEX_EXPR:
%empty                         { $$ = new_node(LOW_NODE, ""); }
| CIRCUMFLEX                   { $1 = tokenToAST(OP_BIT_A_BIT_NODE); }
  and_expr fk_CIRCUMFLEX_EXPR  { add_child($1, $3); add_child($1, $4); $$ = $1; }
;

and_expr: shift_expr fk_AMPER_SE  { add_child($1, $2); $$ = $1; }
;
fk_AMPER_SE:
%empty                    { $$ = new_node(LOW_NODE, ""); }
| AMPER                   { $1 = tokenToAST(OP_BIT_A_BIT_NODE); }
  shift_expr fk_AMPER_SE  { add_child($1, $3); add_child($1, $4); $$ = $1; }
;

shift_expr: arith_expr fk_LS_RS_AE  { add_child($1, $2); $$ = $1; }
;

fk_LS_RS_AE:
%empty                                { $$ = new_node(LOW_NODE, ""); }
|   SE_stmt arith_expr fk_LS_RS_AE    { add_child($1, $2); add_child($1, $3); $$ = $1; }
; 

SE_stmt: 
  LEFTSHIFT   { $$ = tokenToAST(OP_BIT_A_BIT_NODE); } 
| RIGHTSHIFT  { $$ = tokenToAST(OP_BIT_A_BIT_NODE); } 
;

arith_expr: term fk_T_PLUS_MINUS  { 
  if(get_child_count($2)==0){ 
    $$ = $1; 
  } else {
    add_child($2, $1); $$ = $2; 
  };
};

fk_T_PLUS_MINUS:
%empty %prec LOW                  { $$ = new_subtree(LOW_NODE, 0); }
|   AE_stmt term fk_T_PLUS_MINUS  { add_child($1, $2); add_child($1, $3); $$ = $1; }
;

AE_stmt: 
  PLUS    { $$ = tokenToAST(OP_MATH_NODE); } 
| MINUS   { $$ = tokenToAST(OP_MATH_NODE); } 
;

term: factor fk_MATH  { add_child($1, $2); $$ = $1; }
;

fk_MATH:
%empty %prec LOW              { $$ = new_subtree(LOW_NODE, 0); }
|   term_stmt factor fk_MATH  { 
  if(get_child_count($3)==0) {
    add_child($1, $2);
  } else {
    add_child($3, $2);
    add_child($1, $3);
  }
  $$ = $1; 
};

term_stmt: 
  STAR          { $$ = tokenToAST(OP_MATH_NODE); }
| AT            { $$ = tokenToAST(OP_MATH_NODE); }
| SLASH         { $$ = tokenToAST(OP_MATH_NODE); }
| PERCENT       { $$ = tokenToAST(OP_MATH_NODE); }
| DOUBLESLASH   { $$ = tokenToAST(OP_MATH_NODE); }
;

factor: 
  factor_stmt factor  { add_child($1, $2); $$ = $1; }
| power               { $$ = $1; }
;

factor_stmt: 
  PLUS    { $$ = tokenToAST(OP_MATH_NODE); }
| MINUS   { $$ = tokenToAST(OP_MATH_NODE); }
| TILDE   { $$ = tokenToAST(OP_BIT_A_BIT_NODE); }
;

power: atom_expr opc_DOUBLESTAR_factor { add_child($1, $2); $$ = $1; }
;


opc_DOUBLESTAR_factor:
%empty        { $$ = new_node(LOW_NODE, ""); }
| DOUBLESTAR  { $1 = tokenToAST(OP_MATH_NODE); }
  factor      { add_child($1, $3); $$ = $1; }
;


atom_expr: 
atom fk_trailer     { add_child($1, $2); $$ = $1; }
| AWAIT             { $1 = tokenToAST(OP_SINC_NODE); }
  atom fk_trailer   { add_child($1, $3); add_child($1, $4); $$ = $1; }
;  

fk_trailer:
%empty %prec LOW            { $$ = new_subtree(LOW_NODE, 0); }
|   trailer fk_trailer      { add_child($1, $2); $$ = $1; }
;

atom: 
  LPAR opc_atom_stmt RPAR         { $$ = $2; }
| LSQB opc_testlist_comp RSQB     { $$ = $2; }
| NAME                            { $$ = tokenToAST(NAME_NODE); }
| NUMBER                          { $$ = tokenToAST(NUMBER_NODE); }
| STRING { $1 = tokenToAST(STRING_NODE); } fk_STRING { 
    if (get_child_count($3)==0){
      $$ = $1;
    } else {
      add_child($3, $1);
      $$ = $3; 
    };
  }
| ELLIPSIS                        { $$ = new_subtree(LOW_NODE, 0); } // ALTERAR
| NONE                            { $$ = tokenToAST(NONE_NODE); }
| TRUE                            { $$ = tokenToAST(BOOL_NODE); }
| FALSE                           { $$ = tokenToAST(BOOL_NODE); }
;

opc_atom_stmt:
  %empty          { $$ = new_node(LOW_NODE, ""); }
| yield_expr      { $$ = $1; }
| testlist_comp   { $$ = $1; }
;  

opc_testlist_comp:
%empty              { $$ = new_node(LOW_NODE, ""); }
|   testlist_comp   { $$ = $1; }
;

fk_STRING:
%empty %prec LOW    { $$ = new_node(LOW_NODE, ""); }
| STRING            { $1 = tokenToAST(STRING_NODE); }
  fk_STRING         { 
    if(get_child_count($3) == 0){
      $3 = new_subtree(STRING_NODE, 1, $3); 
    };
    add_child($3, $1); $$ = $3; 
  };

testlist_comp: trailer_stmt trailer_stmt_1  { add_child($1, $2); $$ = $1; }
;

trailer: 
  LPAR opc_arglist RPAR     { $$ = new_subtree(LOW_NODE, 0); } // ALTERAR
| LSQB subscriptlist RSQB   { $$ = new_subtree(LOW_NODE, 0); } // ALTERAR
| DOT NAME                  { $$ = new_subtree(LOW_NODE, 0); } // ALTERAR
;

opc_arglist:
%empty          { $$ = new_node(LOW_NODE, ""); }
|   arglist     { $$ = $1; }
;

fk_COMMA_NT_SE:
%empty %prec LOW                        { $$ = new_subtree(LOW_NODE, 0); }
|   COMMA trailer_stmt fk_COMMA_NT_SE   { $$ = new_subtree(LOW_NODE, 0); } // ALTERAR
;


trailer_stmt: 
  namedexpr_test  { $$ = $1; }
| star_expr       { $$ = $1; }
;


trailer_stmt_1: 
  comp_for                    { $$ = $1; }
| fk_COMMA_NT_SE opc_COMMA    { $$ = $1; }
;

subscriptlist: 
  subscript fk_COMMA_S opc_COMMA  { add_child($1, $2); $$ = $1; }
;

fk_COMMA_S:
%empty %prec LOW                  { $$ = new_subtree(LOW_NODE, 0); }
|   COMMA subscript fk_COMMA_S    { $$ = new_subtree(LOW_NODE, 0); } // ALTERAR
;


subscript: 
  test                                  { $$ = $1; }
| opc_test COLON opc_test opc_sliceop   { 
  $2 = new_node(COLON_NODE, ":"); 
  add_child($2, $1); add_child($2, $3); 
  add_child($2, $4); $$ = $2; 
}
;

opc_test:
%empty      { $$ = new_node(LOW_NODE, ""); }
|   test    { $$ = $1; }
;

opc_sliceop:
%empty        { $$ = new_node(LOW_NODE, ""); }
|   sliceop   { $$ = $1; }
;

sliceop: COLON opc_test   { $1 = new_node(COLON_NODE, ":"), add_child($1, $2); $$ = $1; }
;

exprlist: exprlist_stmt fk_COMMA_E_SE opc_COMMA  { add_child($1, $2); $$ = $1; }
;

fk_COMMA_E_SE:
%empty %prec LOW  { $$ = new_subtree(LOW_NODE, 0); }
|   COMMA exprlist_stmt fk_COMMA_E_SE { 
  if (get_child_count($3) == 0) {
    $3 = new_subtree(EXPR_STMT_LIST_NODE, 1, $3); 
  }; 
  add_child($3, $2); $$ = $3; 
}
;

exprlist_stmt: 
  expr        { $$ = $1; }
| star_expr   { $$ = $1; }
;

testlist: test fk_COMMA_test opc_COMMA  { add_child($1, $2); $$ = $1; }
;

fk_COMMA_test:
%empty %prec LOW              { $$ = new_subtree(LOW_NODE, 0); }
|   COMMA test fk_COMMA_test  { 
  if (get_child_count($3) == 0) {
    $3 = new_subtree(TEST_NODE, 1, $3); 
  }; 
  add_child($3, $2); $$ = $3; 
};

classdef: CLASS NAME { $2 = tokenToAST(NAME_NODE); } opc_LPAR_arglist_RPAR COLON suite { 
  $$ = new_subtree(CLASS_NODE, 3, $2, $4, $6);
};

opc_LPAR_arglist_RPAR:
%empty          { $$ = new_node(LOW_NODE, ""); }
|   LPAR RPAR   { $$ = new_node(LOW_NODE, ""); }
|   LPAR arglist RPAR { $$ = $2; }
;

arglist: argument fk_COMMA_A opc_COMMA { 
  $1 = new_subtree(ARGUMENT_NODE, 1, $1);
  if (get_child_count($2) != 0){
    add_child($1, $2);
  }
  $$ = $1;
};

fk_COMMA_A:
%empty %prec LOW                  { $$ = new_subtree(LOW_NODE, 0); }
|   COMMA argument fk_COMMA_A     {   
  add_child($2, $3);
  $$ = $2;
};

argument: 
  test opc_comp_for       { add_child($2, $1); $$ = $2;}
| test COLONEQUAL test    { $$ = new_subtree(COLONEQUAL_NODE, 2, $1, $3); }
| test EQUAL test         { $$ = new_subtree(EQUAL_NODE, 2, $1, $3); }
| DOUBLESTAR test         { $$ = new_subtree(DOUBLESTAR_NODE, 1, $2); }
| STAR test               { $$ = new_subtree(STAR_NODE, 1, $2); }
;

opc_comp_for:
%empty        { $$ = new_node(LOW_NODE, ""); }
|   comp_for  { $$ = $1; }
;

comp_iter: 
  comp_for  { $$ = $1; }
| comp_if   { $$ = $1; }
;

sync_comp_for: FOR exprlist IN or_test opc_comp_iter { 
  $$ = new_subtree(FOR_IN_NODE, 3, $2, $4, $5);
};

opc_comp_iter:
%empty          { $$ = new_node(LOW_NODE, ""); }
|   comp_iter   { $$ = $1; }
;

comp_for: opc_ASYNC sync_comp_for { add_child($1, $2); $$ = $1; }
;

opc_ASYNC:
%empty      { $$ = new_node(LOW_NODE, ""); }
|   ASYNC   { $$ = tokenToAST(OP_SINC_NODE); }
;

comp_if: IF { $1 = tokenToAST(IF_NODE); } test_nocond opc_comp_iter {
  add_child($1, $3);
  add_child($1, $4);
  $$ = $1;
};

yield_expr: YIELD opc_yield_arg {
  $1 = new_subtree(YIELD_EXPR_NODE, 1, $2); 
  $$ = $1; 
};

opc_yield_arg:
%empty %prec LOW  { $$ = new_subtree(LOW_NODE, 0); }
|   yield_arg { $$ = $1; };

yield_arg: 
  FROM test { $1 = new_subtree(FROM_NODE, 1, $2); $$ = $1; } 
| testlist_star_expr { $$ = $1; }
;

func_body_suite: 
  simple_stmt { $$ = $1; }
| NEWLINE INDENT stmt fk_stmt DEDENT  { 
  if (get_child_count($4) == 0) {
    $$ = new_subtree(BLOCK_NODE, 1, $3);
  } else {
    add_child($4, $3); $$ = $4; 
  }
}
;

fk_stmt:
%empty  { $$ = new_node(LOW_NODE, ""); }
|   stmt fk_stmt { 
  if (get_child_count($2) == 0) {
    $2 = new_subtree(BLOCK_NODE, 1, $2); 
  }
  add_child($2, $1); $$ = $2; 
}
;

%%

#include "ast.h"
#include <string.h>

void check_vars(AST*dad) {
  int i, j, son_id;
  AST * son, *block_dad, *dad_aux, *son_aux;
  son = block_dad = dad_aux = son_aux = NULL;
  bool name_OK;

  for (i = 0; i < get_child_count(dad); i++) {
    name_OK = false;
    son = get_child(dad, i);
    check_vars(son);
    if  ( get_kind(son) == NAME_NODE 
          &&  (
                get_kind(dad) != EQUAL_NODE || (get_kind(dad) 
                == 
                EQUAL_NODE && (i+1 < get_child_count(dad)))
              )
          && get_kind(dad) != FUNK_NODE
        )
    { 
      //printf("\n");
      //printf("PAI: %s\n",kind2str(get_kind(dad)));
      //printf("FILHO: %s\n",get_data(son));
      //printf("ID: %d\n", get_id(son));
      //printf("i: %d\n", i);

      dad_aux = dad;
      son_id = i;
      while(true){
        if(get_kind(dad_aux) == BLOCK_NODE){
          block_dad = dad_aux;
          for(j = 0; j < get_child_count(block_dad); j++){
            if(j>son_id){
              son_aux = get_child(block_dad, j);
              if(get_kind(son_aux) == EQUAL_NODE){
                char *a, *b;
                a = get_data(get_child(son_aux, get_child_count(son_aux)-1));
                b = get_data(son);
                if(!strcmp(a,b)){
                  name_OK = true;
                  //printf("\n\nNameOK: name \'%s\'\n", get_data(son));
                  break;
                }
              }
            }
          }

          if(name_OK){
            break;
          } else {
            if(get_dad(block_dad) != NULL){
              dad_aux = get_dad(block_dad);
            } else {
              break;
            }
          }
        } else {
          if(get_dad(dad_aux) != NULL){
            dad_aux = get_dad(dad_aux);
            son_id = get_id(dad_aux);
          } else {
            break;
          }
        }
      }
      if(!name_OK){
        printf("\n\nNameError: name \'%s\' is not defined\n", get_data(son));
      }
    }
  }
  return;
}

AST* tokenToAST_2(int kind) {
  Token token = get_penultimate_token();
  return new_node(kind, token.lexeme);
}

AST* tokenToAST(int kind) {
  Token token = get_last_token();

  return new_node(kind, token.lexeme);
}

// Primitive error handling.
void yyerror (char const *s) {
    Token token = get_last_token();
    printf("SYNTAX ERROR (%d): %s\nCurrent token is '%s'\n", token.lineno, s, token.lexeme);
    exit(EXIT_FAILURE);
}

int main(void) {

  orig_yylex(); // Chama o scanner para acumular todos os tokens.
  if (yyparse() == 0) printf("PARSE SUCCESSFUL!\n");
  else                printf("PARSE FAILED!\n");

  FILE *arq_dot = fopen("test.dot", "w+");

  if(arq_dot == NULL)
  {
    printf("Erro na abertura do arquivo!");
    return 1;
  }

  print_dot(root, arq_dot);
  fclose(arq_dot);

  free_tree(root);
  yylex_destroy();  
}
