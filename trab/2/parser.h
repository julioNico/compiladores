/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IMPORT = 258,
    FROM = 259,
    AS = 260,
    CLASS = 261,
    DEF = 262,
    LAMBDA = 263,
    NOT = 264,
    AND = 265,
    OR = 266,
    IF = 267,
    ELSE_IF = 268,
    ELSE = 269,
    IS = 270,
    TRUE = 271,
    FALSE = 272,
    ASSERT = 273,
    FOR = 274,
    IN = 275,
    WHILE = 276,
    PASS = 277,
    BREAK = 278,
    CONTINUE = 279,
    TRY = 280,
    EXCEPT = 281,
    FINALLY = 282,
    WITH = 283,
    RETURN = 284,
    RAISE = 285,
    YIELD = 286,
    GLOBAL = 287,
    NONLOCAL = 288,
    NONE = 289,
    DEL = 290,
    EXEC = 291,
    ASYNC = 292,
    AWAIT = 293,
    TYPE_COMMENT = 294,
    NAME = 295,
    NUMBER = 296,
    STRING = 297,
    INDENT = 298,
    DEDENT = 299,
    NEWLINE = 300,
    LPAR = 301,
    RPAR = 302,
    LSQB = 303,
    RSQB = 304,
    COLON = 305,
    COMMA = 306,
    SEMI = 307,
    PLUS = 308,
    MINUS = 309,
    STAR = 310,
    SLASH = 311,
    VBAR = 312,
    AMPER = 313,
    LESS = 314,
    GREATER = 315,
    LESSGREATER = 316,
    EQUAL = 317,
    DOT = 318,
    PERCENT = 319,
    LBRACE = 320,
    RBRACE = 321,
    EQEQUAL = 322,
    NOTEQUAL = 323,
    LESSEQUAL = 324,
    GREATEREQUAL = 325,
    TILDE = 326,
    CIRCUMFLEX = 327,
    LEFTSHIFT = 328,
    RIGHTSHIFT = 329,
    DOUBLESTAR = 330,
    PLUSEQUAL = 331,
    MINEQUAL = 332,
    STAREQUAL = 333,
    SLASHEQUAL = 334,
    PERCENTEQUAL = 335,
    AMPEREQUAL = 336,
    VBAREQUAL = 337,
    CIRCUMFLEXEQUAL = 338,
    LEFTSHIFTEQUAL = 339,
    RIGHTSHIFTEQUAL = 340,
    DOUBLESTAREQUAL = 341,
    DOUBLESLASH = 342,
    DOUBLESLASHEQUAL = 343,
    AT = 344,
    ATEQUAL = 345,
    RARROW = 346,
    ELLIPSIS = 347,
    COLONEQUAL = 348,
    ENDMARKER = 349
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
