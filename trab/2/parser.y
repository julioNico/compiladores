%output "parser.c"          // File name of generated parser.
%defines "parser.h"         // Produces a 'parser.h'
%define parse.error verbose // Give proper messages when a syntax error is found.
%define parse.lac full      // Enable LAC to improve syntax error handling.

%{
#include <stdio.h>
#include <stdlib.h>
#include "token.h"

int yylex(void);
int orig_yylex(void);
Token get_last_token();

void yyerror(char const *s);
extern int yylineno;
%}

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

// single_input: NEWLINE | simple_stmt | compound_stmt NEWLINE
// eval_input: testlist NEWLINE* ENDMARKER

// decorator: '@' dotted_name [ LPAR [arglist] RPAR ] NEWLINE
// decorators: decorator+
// decorated: decorators (classdef | funcdef | async_funcdef)

//  async_funcdef: ASYNC funcdef

/*
typedargslist: (
  (tfpdef [EQUAL test] (COMMA opc_TYPE_COMMENT tfpdef [EQUAL test])* COMMA opc_TYPE_COMMENT '/' [COMMA [ opc_TYPE_COMMENT tfpdef [EQUAL test] (
        COMMA opc_TYPE_COMMENT tfpdef [EQUAL test])* (TYPE_COMMENT | [COMMA opc_TYPE_COMMENT [
        STAR [tfpdef] (COMMA opc_TYPE_COMMENT tfpdef [EQUAL test])* (TYPE_COMMENT | [COMMA opc_TYPE_COMMENT [DOUBLESTAR tfpdef opc_COMMA opc_TYPE_COMMENT]])
      | DOUBLESTAR tfpdef opc_COMMA opc_TYPE_COMMENT]])
  | STAR [tfpdef] (COMMA opc_TYPE_COMMENT tfpdef [EQUAL test])* (TYPE_COMMENT | [COMMA opc_TYPE_COMMENT [DOUBLESTAR tfpdef opc_COMMA opc_TYPE_COMMENT]])
  | DOUBLESTAR tfpdef opc_COMMA opc_TYPE_COMMENT]] )
|  (tfpdef [EQUAL test] (COMMA opc_TYPE_COMMENT tfpdef [EQUAL test])* (TYPE_COMMENT | [COMMA opc_TYPE_COMMENT [
   STAR [tfpdef] (COMMA opc_TYPE_COMMENT tfpdef [EQUAL test])* (TYPE_COMMENT | [COMMA opc_TYPE_COMMENT [DOUBLESTAR tfpdef opc_COMMA opc_TYPE_COMMENT]])
  | DOUBLESTAR tfpdef opc_COMMA opc_TYPE_COMMENT]])
  | STAR [tfpdef] (COMMA opc_TYPE_COMMENT tfpdef [EQUAL test])* (TYPE_COMMENT | [COMMA opc_TYPE_COMMENT [DOUBLESTAR tfpdef opc_COMMA opc_TYPE_COMMENT]])
  | DOUBLESTAR tfpdef opc_COMMA opc_TYPE_COMMENT)
)
tfpdef: NAME [COLON test]
*/

/*
varargslist: vfpdef [EQUAL test ](COMMA vfpdef [EQUAL test])* COMMA '/' [COMMA [ (vfpdef [EQUAL test] (COMMA vfpdef [EQUAL test])* [COMMA [
        STAR [vfpdef] (COMMA vfpdef [EQUAL test])* [COMMA [DOUBLESTAR vfpdef opc_COMMA]]
      | DOUBLESTAR vfpdef opc_COMMA]]
  | STAR [vfpdef] (COMMA vfpdef [EQUAL test])* [COMMA [DOUBLESTAR vfpdef opc_COMMA]]
  | DOUBLESTAR vfpdef opc_COMMA) ]] | (vfpdef [EQUAL test] (COMMA vfpdef [EQUAL test])* [COMMA [
        STAR [vfpdef] (COMMA vfpdef [EQUAL test])* [COMMA [DOUBLESTAR vfpdef opc_COMMA]]
      | DOUBLESTAR vfpdef opc_COMMA]]
  | STAR [vfpdef] (COMMA vfpdef [EQUAL test])* [COMMA [DOUBLESTAR vfpdef opc_COMMA]]
  | DOUBLESTAR vfpdef opc_COMMA
)
vfpdef: NAME
*/

// raise_stmt: 'raise' [test [FROM test]]
// import_stmt: import_name | import_from
// import_name: 'import' dotted_as_names
// # note below: the (DOT | ELLIPSIS) is necessary because ELLIPSIS is tokenized as ELLIPSIS
// import_from: (FROM ((DOT | ELLIPSIS)* dotted_name | (DOT | ELLIPSIS)+)
//               'import' (STAR | LPAR import_as_names RPAR | import_as_names))
// import_as_name: NAME opc_AS_NAME
// dotted_as_name: dotted_name opc_AS_NAME
// import_as_names: import_as_name (COMMA import_as_name)* opc_COMMA
// dotted_as_names: dotted_as_name (COMMA dotted_as_name)*
// dotted_name: NAME (DOT NAME)*
// assert_stmt: 'assert' test [COMMA test]

// async_stmt: ASYNC (funcdef | with_stmt | for_stmt)

// try_stmt: ('try' COLON suite((except_clause COLON suite) + opc_ELSE_COLON_suite['finally' COLON suite] | finally' COLON suite))

/*
dictorsetmaker: ( ((test COLON test | DOUBLESTAR expr)
                   (comp_for | (COMMA (test COLON test | DOUBLESTAR expr))* opc_COMMA)) |
                  ((test | star_expr)
                   (comp_for | (COMMA (test | star_expr))* opc_COMMA)) )
*/

// encoding_decl: NAME

/*
func_type_input: func_type NEWLINE* ENDMARKER
func_type: LPAR [typelist] RPAR '->' test
# typelist is a modified typedargslist (see above)
typelist: (test (COMMA test)* [COMMA
       [STAR opc_test (COMMA test)* [COMMA DOUBLESTAR test] | DOUBLESTAR test]]
     |  STAR opc_test (COMMA test)* [COMMA DOUBLESTAR test] | DOUBLESTAR test)
*/

// compound_stmt: if_stmt | while_stmt | for_stmt | try_stmt | with_stmt | funcdef | classdef | /*decorated | async_stmt*/
// small_stmt: (expr_stmt | del_stmt | pass_stmt | flow_stmt | /*import_stmt*/ | global_stmt | nonlocal_stmt | /*assert_stmt*/);

%precedence LOW // Prioridade artificial para resolver conflitos de S/R. Todos os tokens conflitantes entram na prioridade maior abaixo.
%precedence LAMBDA NOT TRUE FALSE NONE AWAIT NAME NUMBER STRING LPAR LSQB PLUS MINUS STAR TILDE ELLIPSIS NEWLINE SEMI COMMA IF

%%

file_input: fk_NEWLINE_stmt ENDMARKER;

fk_NEWLINE_stmt:
%empty %prec LOW // Fala para o bison sempre dar prioridade para a regra de baixo.
|   NL_stmt fk_NEWLINE_stmt; // Com isso, o parser funciona de forma gulosa ao consumir essa parte.

NL_stmt: NEWLINE | stmt;

funcdef: DEF NAME parameters opc_RARROW_test COLON func_body_suite;

opc_RARROW_test:
%empty
|   RARROW test;

parameters: LPAR opc_argslist RPAR;
opc_argslist:
%empty
|   NAME COMMA opc_argslist
|   NAME;

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

del_stmt: DEL exprlist;
pass_stmt: PASS;
flow_stmt: break_stmt | continue_stmt | return_stmt | yield_stmt;
break_stmt: BREAK;
continue_stmt: CONTINUE;
return_stmt: RETURN opc_testlist_star_expr;
yield_stmt: yield_expr;
opc_testlist_star_expr:
%empty %prec LOW
|   testlist_star_expr;

global_stmt: GLOBAL NAME fk_COMMA_NAME;
nonlocal_stmt: NONLOCAL NAME fk_COMMA_NAME;
fk_COMMA_NAME:
%empty
|   COMMA NAME fk_COMMA_NAME;

compound_stmt: if_stmt | while_stmt | for_stmt | with_stmt | funcdef | classdef;

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
star_expr: STAR expr;
expr: xor_expr fk_VBAR_XE;
fk_VBAR_XE:
%empty
|   VBAR xor_expr fk_VBAR_XE;

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
exprlist: exprlist_stmt fk_COMMA_E_SE opc_COMMA;
fk_COMMA_E_SE:
%empty %prec LOW
|   COMMA exprlist_stmt fk_COMMA_E_SE;


exprlist_stmt: expr | star_expr;

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

                                          // ***SIMPLIFICAR*** //
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
    return 0;
}
