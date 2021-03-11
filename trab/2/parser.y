%output "parser.c"          // File name of generated parser.
%defines "parser.h"         // Produces a 'parser.h'
%define parse.error verbose // Give proper messages when a syntax error is found.
%define parse.lac full      // Enable LAC to improve syntax error handling.

%{
#include <stdio.h>
int yylex(void);
void yyerror(char const *s);
int result = %token;
%}

%token IMPORT
%token FROM
%token AS

%token CLASS
%token DEF
%token LAMBDA

%token NOT
%token AND

%token IF
%token ELSE_IF
%token ELSE
%token IS
%token TRUE
%token FALSE

%token FOR
%token IN
%token WHILE
%token PASS
%token BREAK

%token TRY
%token EXCEPT
%token FINALLY
%token WITH

%token RETURN
%token RAISE

%token GLOBAL

%token NONE
%token DEL
%token EXEC

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

%left OR
%left AND
%left PLUS MINUS
%left STAR SLASH

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

%%

{ignore}    { }
{comments}  { }


file_input: (NEWLINE | stmt)* ENDMARKER;

funcdef: DEF NAME parameters opc_RARROW_test COLON opc_TYPE_COMMENT func_body_suite;
opc_RARROW_test:
%empty
|   RARROW test;
opc_TYPE_COMMENT:
%empty
|   TYPE_COMMENT;

parameters: LPAR opc_typedargslist RPAR;
opc_typedargslist:
%empty
|   NAME COMMA opc_typedargslist
|   NAME COMMA;

stmt: simple_stmt | compound_stmt;
simple_stmt: small_stmt (SEMI small_stmt)* opc_SEMI NEWLINE;
small_stmt: (expr_stmt | del_stmt | pass_stmt | flow_stmt | global_stmt | nonlocal_stmt);
expr_stmt: testlist_star_expr (annassign | augassign (yield_expr|testlist) | [(EQUAL (yield_expr|testlist_star_expr))+ opc_TYPE_COMMENT] );
annassign: COLON test opc_COLON_test;
testlist_star_expr: (test|star_expr) (COMMA (test|star_expr))* opc_COMMA;
augassign: (PLUSEQUAL | MINEQUAL | STAREQUAL | ATEQUAL | SLASHEQUAL | PERCENTEQUAL | AMPEREQUAL | VBAREQUAL | CIRCUMFLEXEQUAL | LEFTSHIFTEQUAL | RIGHTSHIFTEQUAL | DOUBLESTAREQUAL | DOUBLESLASHEQUAL);
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
flow_stmt: break_stmt | continue_stmt | return_stmt | raise_stmt | yield_stmt;
break_stmt: BREAK;
continue_stmt: CONTINUE;
return_stmt: RETURN opc_testlist_star_expr;
yield_stmt: yield_expr;
opc_testlist_star_expr:
%empty
|   testlist_star_expr;

global_stmt: GLOBAL NAME (COMMA NAME)*;
nonlocal_stmt: NONLOCAL NAME (COMMA NAME)*;

compound_stmt: if_stmt | while_stmt | for_stmt | try_stmt | with_stmt | funcdef | classdef;

if_stmt: IF namedexpr_test COLON suite (ELSE_IF namedexpr_test COLON suite)* opc_ELSE_COLON_suite;
while_stmt: WHILE namedexpr_test COLON suite opc_ELSE_COLON_suite;
for_stmt: FOR exprlist IN testlist COLON opc_TYPE_COMMENT suite opc_ELSE_COLON_suite;
opc_ELSE_COLON_suite:
%empty
|   ELSE COLON suite;
opc_TYPE_COMMENT:
%empty
|   TYPE_COMMENT;

with_stmt: WITH with_item (COMMA with_item)*  COLON opc_TYPE_COMMENT suite;
with_item: test opc_AS_expr;
opc_AS_expr:
%empty
|   AS expr;

except_clause: EXCEPT opc_test_AS_NAME;
suite: simple_stmt | NEWLINE INDENT stmt+ DEDENT;
opc_test_AS_NAME:
%empty
|   test
|   test AS NAME;

namedexpr_test: test [COLONEQUAL test];
test: or_test [IF or_test ELSE test] | lambdef;
test_nocond: or_test | lambdef_nocond;
lambdef: LAMBDA [varargslist] COLON test;
lambdef_nocond: LAMBDA [varargslist] COLON test_nocond;
or_test: and_test (OR and_test)*;
and_test: not_test (AND not_test)*;
not_test: NOT not_test | comparison;
comparison: expr (comp_op expr)*;
comp_op: LESS | GREATER | EQEQUAL | GREATEREQUAL | LESSEQUAL | LESSGREATER | NOTEQUAL | IN| NOT IN | IS | IS NOT;
star_expr: STAR expr;
expr: xor_expr (VBAR xor_expr)*;
xor_expr: and_expr (CIRCUMFLEX and_expr)*;
and_expr: shift_expr (AMPER shift_expr)*;
shift_expr: arith_expr ((LEFTSHIFT | RIGHTSHIFT) arith_expr)*; 
arith_expr: term ((PLUS | MINUS) term)*; 
term: factor ((STAR| AT | SLASH | PERCENT | DOUBLESLASH) factor)*;
factor: (PLUS | MINUS | TILDE) factor | power;
power: atom_expr [DOUBLESTAR factor];
atom_expr: atom trailer*
|   AWAIT atom trailer*;

atom: (LPAR [yield_expr|testlist_comp] RPAR | LSQB [testlist_comp] RSQB | NAME | NUMBER | STRING+ | ELLIPSIS | NONE | TRUE | FALSE);
testlist_comp: (namedexpr_test|star_expr) ( comp_for | (COMMA (namedexpr_test|star_expr))* opc_COMMA );
trailer: LPAR [arglist] RPAR | LSQB subscriptlist RSQB | DOT NAME;
subscriptlist: subscript (COMMA subscript)* opc_COMMA;
subscript: test | opc_test COLON opc_test [sliceop];
sliceop: COLON opc_test;
exprlist: (expr|star_expr) (COMMA (expr|star_expr))* opc_COMMA;
testlist: test (COMMA test)* opc_COMMA;
opc_COMMA:
%empty
|   COMMA;

classdef: CLASS NAME opc_LPAR_arglist_RPAR COLON suite;
opc_LPAR_arglist_RPAR:
%empty
|   LPAR RPAR
|   LPAR arglist RPAR;

arglist: argument (COMMA argument)*  opc_COMMA;

//SIMPLIFICAR
argument: ( test [comp_for] | test COLONEQUAL test | test EQUAL test | DOUBLESTAR test | STAR test );

comp_iter: comp_for | comp_if;
sync_comp_for: FOR exprlist IN or_test [comp_iter];
comp_for: [ASYNC] sync_comp_for;
comp_if: IF test_nocond [comp_iter];



yield_expr: YIELD [yield_arg];
yield_arg: FROM test | testlist_star_expr;

func_body_suite: simple_stmt | NEWLINE [TYPE_COMMENT NEWLINE] INDENT stmt+ DEDENT;

%%

int main(void) {
    if (yyparse() == 0) printf("PARSE SUCCESSFUL!\n");
    else                printf("PARSE FAILED!\n");
    printf("    LINHA: %d\n", yylineno);
    return 0;
}
