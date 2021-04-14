/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 6 "parser.y"

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

AST* tokenToAST(int kind);

void yyerror(char const *s);

StrTable *st;
VarTable *vt;

AST *root;

#line 95 "parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    NAME = 294,
    NUMBER = 295,
    STRING = 296,
    INDENT = 297,
    DEDENT = 298,
    NEWLINE = 299,
    LPAR = 300,
    RPAR = 301,
    LSQB = 302,
    RSQB = 303,
    COLON = 304,
    COMMA = 305,
    SEMI = 306,
    PLUS = 307,
    MINUS = 308,
    STAR = 309,
    SLASH = 310,
    VBAR = 311,
    AMPER = 312,
    LESS = 313,
    GREATER = 314,
    LESSGREATER = 315,
    EQUAL = 316,
    DOT = 317,
    PERCENT = 318,
    LBRACE = 319,
    RBRACE = 320,
    EQEQUAL = 321,
    NOTEQUAL = 322,
    LESSEQUAL = 323,
    GREATEREQUAL = 324,
    TILDE = 325,
    CIRCUMFLEX = 326,
    LEFTSHIFT = 327,
    RIGHTSHIFT = 328,
    DOUBLESTAR = 329,
    PLUSEQUAL = 330,
    MINEQUAL = 331,
    STAREQUAL = 332,
    SLASHEQUAL = 333,
    PERCENTEQUAL = 334,
    AMPEREQUAL = 335,
    VBAREQUAL = 336,
    CIRCUMFLEXEQUAL = 337,
    LEFTSHIFTEQUAL = 338,
    RIGHTSHIFTEQUAL = 339,
    DOUBLESTAREQUAL = 340,
    DOUBLESLASH = 341,
    DOUBLESLASHEQUAL = 342,
    AT = 343,
    ATEQUAL = 344,
    RARROW = 345,
    ELLIPSIS = 346,
    COLONEQUAL = 347,
    ENDMARKER = 348,
    LOW = 349
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef AST* YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
# define YYCOPY_NEEDED 1
#endif


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  110
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   812

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  135
/* YYNRULES -- Number of rules.  */
#define YYNRULES  261
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  395

#define YYUNDEFTOK  2
#define YYMAXUTOK   349


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   140,   140,   144,   145,   154,   154,   157,   157,   158,
     163,   164,   168,   169,   170,   171,   172,   173,   177,   178,
     179,   180,   181,   182,   186,   186,   192,   193,   193,   196,
     200,   201,   201,   208,   213,   217,   218,   219,   223,   224,
     228,   229,   233,   237,   238,   241,   245,   246,   247,   250,
     254,   255,   259,   260,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   280,   281,   285,
     286,   288,   291,   292,   293,   294,   297,   300,   303,   307,
     310,   314,   315,   318,   318,   321,   321,   325,   326,   326,
     335,   338,   339,   341,   343,   346,   347,   349,   352,   353,
     355,   358,   359,   361,   361,   363,   366,   367,   370,   371,
     375,   376,   380,   381,   384,   387,   390,   394,   395,   398,
     402,   403,   407,   408,   411,   415,   416,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   433,   435,
     439,   440,   448,   451,   452,   452,   456,   459,   460,   460,
     464,   468,   469,   473,   474,   477,   481,   482,   486,   487,
     490,   494,   495,   499,   500,   501,   502,   503,   507,   508,
     512,   513,   514,   517,   522,   523,   523,   528,   529,   529,
     534,   535,   539,   540,   541,   542,   543,   543,   551,   552,
     553,   554,   558,   559,   560,   565,   566,   570,   571,   571,
     579,   583,   584,   585,   589,   590,   594,   595,   600,   601,
     606,   607,   611,   615,   616,   621,   622,   630,   631,   635,
     636,   639,   642,   646,   647,   657,   658,   661,   665,   666,
     674,   677,   678,   679,   681,   684,   685,   688,   688,   688,
     688,   688,   691,   692,   694,   694,   695,   698,   699,   701,
     704,   705,   707,   708,   714,   715,   718,   719,   723,   724,
     734,   735
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IMPORT", "FROM", "AS", "CLASS", "DEF",
  "LAMBDA", "NOT", "AND", "OR", "IF", "ELSE_IF", "ELSE", "IS", "TRUE",
  "FALSE", "ASSERT", "FOR", "IN", "WHILE", "PASS", "BREAK", "CONTINUE",
  "TRY", "EXCEPT", "FINALLY", "WITH", "RETURN", "RAISE", "YIELD", "GLOBAL",
  "NONLOCAL", "NONE", "DEL", "EXEC", "ASYNC", "AWAIT", "NAME", "NUMBER",
  "STRING", "INDENT", "DEDENT", "NEWLINE", "LPAR", "RPAR", "LSQB", "RSQB",
  "COLON", "COMMA", "SEMI", "PLUS", "MINUS", "STAR", "SLASH", "VBAR",
  "AMPER", "LESS", "GREATER", "LESSGREATER", "EQUAL", "DOT", "PERCENT",
  "LBRACE", "RBRACE", "EQEQUAL", "NOTEQUAL", "LESSEQUAL", "GREATEREQUAL",
  "TILDE", "CIRCUMFLEX", "LEFTSHIFT", "RIGHTSHIFT", "DOUBLESTAR",
  "PLUSEQUAL", "MINEQUAL", "STAREQUAL", "SLASHEQUAL", "PERCENTEQUAL",
  "AMPEREQUAL", "VBAREQUAL", "CIRCUMFLEXEQUAL", "LEFTSHIFTEQUAL",
  "RIGHTSHIFTEQUAL", "DOUBLESTAREQUAL", "DOUBLESLASH", "DOUBLESLASHEQUAL",
  "AT", "ATEQUAL", "RARROW", "ELLIPSIS", "COLONEQUAL", "ENDMARKER", "LOW",
  "$accept", "file_input", "fk_NEWLINE_stmt", "NL_stmt", "stmt",
  "simple_stmt", "fk_SEMI_small_stmt", "small_stmt", "compound_stmt",
  "funcdef", "$@1", "opc_RARROW_test", "$@2", "parameters", "opc_argslist",
  "$@3", "expr_stmt", "expr_stmt_1", "expr_stmt_2", "fk_EQ_YE_TSE",
  "expr_stmt_3", "expr_stmt_4", "annassign", "opc_EQUAL_MALUCO",
  "testlist_star_expr", "TSE_stmt", "fk_COMMA_T_SE", "augassign",
  "opc_SEMI", "opc_COMMA", "del_stmt", "flow_stmt", "pass_stmt",
  "break_stmt", "continue_stmt", "return_stmt", "yield_stmt",
  "opc_testlist_star_expr", "global_stmt", "$@4", "nonlocal_stmt", "$@5",
  "fk_COMMA_NAME", "$@6", "if_stmt", "fk_ELIF_NT_COLON_SUITE",
  "while_stmt", "for_stmt", "opc_ELSE_COLON_suite", "with_stmt",
  "fk_COMMA_WI", "with_item", "opc_AS_expr", "suite", "namedexpr_test",
  "opc_COLONEQUAL_test", "test", "opc_IF_or_test_ELSE_test", "test_nocond",
  "lambdef", "lambdef_nocond", "or_test", "fk_OR_AT", "and_test",
  "fk_AND_NT", "not_test", "comparison", "fk_CO_EXPR", "comp_op",
  "star_expr", "expr", "fk_VBAR_XE", "xor_expr", "fk_CIRCUMFLEX_EXPR",
  "$@7", "and_expr", "fk_AMPER_SE", "$@8", "shift_expr", "fk_LS_RS_AE",
  "SE_stmt", "arith_expr", "fk_T_PLUS_MINUS", "AE_stmt", "term", "fk_MATH",
  "term_stmt", "factor", "factor_stmt", "power", "opc_DOUBLESTAR_factor",
  "$@9", "atom_expr", "$@10", "fk_trailer", "atom", "$@11",
  "opc_atom_stmt", "opc_testlist_comp", "fk_STRING", "$@12",
  "testlist_comp", "trailer", "opc_arglist", "fk_COMMA_NT_SE",
  "trailer_stmt", "trailer_stmt_1", "subscriptlist", "fk_COMMA_S",
  "subscript", "opc_test", "opc_sliceop", "sliceop", "exprlist",
  "fk_COMMA_E_SE", "exprlist_stmt", "testlist", "fk_COMMA_test",
  "classdef", "opc_LPAR_arglist_RPAR", "arglist", "fk_COMMA_A", "argument",
  "opc_comp_for", "comp_iter", "sync_comp_for", "opc_comp_iter",
  "comp_for", "opc_ASYNC", "comp_if", "yield_expr", "opc_yield_arg",
  "yield_arg", "func_body_suite", "fk_stmt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349
};
# endif

#define YYPACT_NINF (-336)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-251)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     312,    10,    24,    27,   674,   634,  -336,  -336,   694,   634,
    -336,  -336,  -336,   634,   587,    37,    29,    31,  -336,   694,
    -336,  -336,  -336,  -336,  -336,   519,   587,  -336,  -336,   721,
    -336,  -336,    26,   -49,   312,  -336,  -336,    21,  -336,  -336,
    -336,   718,    35,  -336,  -336,  -336,  -336,  -336,  -336,  -336,
    -336,  -336,  -336,  -336,  -336,  -336,  -336,  -336,    69,    82,
      88,  -336,  -336,   302,    45,    34,    42,     7,    43,    60,
     721,  -336,    32,     5,  -336,  -336,    57,  -336,    59,    63,
    -336,    64,    25,  -336,  -336,    96,    71,    70,    74,   120,
    -336,  -336,   634,  -336,  -336,  -336,  -336,  -336,  -336,    17,
      85,  -336,  -336,    81,  -336,    23,  -336,    83,  -336,  -336,
    -336,  -336,  -336,   443,    79,   634,   519,  -336,  -336,  -336,
    -336,  -336,  -336,  -336,  -336,  -336,  -336,  -336,  -336,  -336,
    -336,  -336,    72,  -336,   614,   587,    84,   674,  -336,   674,
    -336,   674,  -336,   112,   126,  -336,  -336,  -336,  -336,  -336,
    -336,  -336,  -336,  -336,   721,   721,  -336,  -336,  -336,  -336,
    -336,  -336,  -336,  -336,   721,  -336,  -336,  -336,   721,  -336,
    -336,  -336,  -336,  -336,  -336,   721,  -336,  -336,  -336,   546,
     634,    97,  -336,     5,   477,    89,    92,    90,   634,   211,
     634,  -336,   634,   694,    84,   211,   634,    93,   721,  -336,
    -336,    95,    95,     5,  -336,  -336,  -336,  -336,   587,    84,
    -336,  -336,   124,  -336,   312,  -336,   103,    91,  -336,  -336,
    -336,  -336,  -336,    99,  -336,  -336,    35,  -336,  -336,   136,
      82,    88,  -336,  -336,   302,    45,   721,   721,     7,    43,
      60,   721,   634,   634,     0,   105,  -336,   106,   109,   111,
     110,   114,  -336,  -336,  -336,   115,   211,    27,    75,    27,
    -336,   122,  -336,   154,  -336,   119,    71,  -336,   155,    74,
     211,  -336,   131,  -336,  -336,  -336,    85,   123,  -336,   694,
    -336,  -336,  -336,   519,  -336,   634,    84,  -336,   634,  -336,
    -336,  -336,  -336,    34,    42,  -336,  -336,  -336,  -336,  -336,
    -336,   634,   634,  -336,  -336,  -336,   546,    84,  -336,   634,
      84,   634,  -336,  -336,   130,  -336,   128,  -336,   367,   634,
     155,   211,  -336,   129,  -336,  -336,  -336,  -336,  -336,  -336,
     152,  -336,  -336,    99,  -336,  -336,  -336,  -336,  -336,  -336,
     106,  -336,   110,  -336,  -336,   132,  -336,   634,   401,   367,
     133,  -336,   155,   211,    95,   674,  -336,  -336,  -336,   634,
    -336,  -336,  -336,   138,  -336,  -336,   367,   141,   211,  -336,
    -336,  -336,    28,  -336,   367,  -336,  -336,   154,   654,  -336,
    -336,  -336,  -336,   367,  -336,    27,    28,  -336,  -336,   150,
     146,  -336,  -336,   654,  -336
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     0,     0,    30,     0,     0,   190,   191,     0,     0,
      76,    77,    78,     0,    81,   254,     0,     0,   189,     0,
     178,   184,   185,   186,     5,   192,   195,   170,   171,     0,
     172,   188,     0,     0,     3,     6,     7,    10,     8,    22,
      12,    40,    52,    13,    15,    14,    72,    73,    74,    75,
      16,    17,    18,    19,    20,    21,    50,   109,   110,   117,
     120,   123,    51,   125,   140,   143,   147,   151,   156,   161,
       0,   169,   174,   180,    23,    80,   231,    24,    33,     0,
     122,     0,   106,   226,   225,     0,   223,     0,    98,   101,
      82,    79,     0,   257,   253,   255,    83,    85,    71,     0,
     197,   208,   209,     0,   194,   206,   193,     0,   196,   138,
       1,     2,     4,     0,    67,     0,     0,    54,    55,    56,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    57,
      34,    37,    40,    35,     0,     0,    69,     0,   108,     0,
     116,     0,   119,     0,   136,   134,   127,   128,   132,   129,
     133,   131,   130,   124,     0,     0,   139,   144,   142,   148,
     146,   153,   154,   150,     0,   158,   159,   155,     0,   163,
     165,   166,   167,   164,   160,     0,   168,   175,   173,   204,
     217,     0,   177,   180,     0,     0,     0,     0,     0,     0,
       0,   105,     0,     0,    69,     0,     0,     0,     0,   100,
     256,    87,    87,   180,   198,   187,   182,   251,     0,    69,
     200,   210,     0,   183,     3,    68,     0,    46,    42,    44,
      43,    41,    36,   228,    39,    38,    52,    70,    49,     0,
     117,   120,   135,   137,   125,   140,     0,     0,   151,   156,
     161,     0,     0,     0,   242,     0,   205,   235,   215,     0,
     213,     0,   203,   181,   232,     0,     0,    30,    26,    30,
     114,     0,   103,    91,   107,     0,   223,   222,    95,    98,
       0,   102,     0,    84,    86,   179,   197,   206,   211,     0,
     249,    11,     9,     0,    45,     0,    69,    53,     0,   118,
     121,   126,   141,   143,   147,   152,   157,   162,   176,   241,
     240,     0,     0,   237,   243,   201,     0,    69,   202,   217,
      69,   217,   233,   230,     0,    27,     0,    32,     0,     0,
      95,     0,   224,     0,    93,    99,    97,    88,   199,   207,
       0,    48,    47,   228,   227,   111,   145,   149,   239,   238,
     235,   234,   213,   212,   218,   219,    29,     0,     0,   260,
       0,    90,    95,     0,    87,     0,   229,   236,   214,   217,
     216,   220,    28,     0,   258,    25,   260,     0,     0,    94,
      96,    89,   247,   221,     0,   261,   104,    91,     0,   248,
     246,   244,   245,   260,    92,    30,   247,   113,   112,     0,
       0,   252,   259,     0,   115
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -336,  -336,   -24,  -336,  -280,  -159,  -336,    86,  -336,  -336,
    -336,  -336,  -336,  -336,  -230,  -336,  -336,  -336,  -336,    65,
    -336,  -336,  -336,  -336,   -12,    67,   -28,  -336,  -336,  -166,
    -336,  -336,  -336,  -336,  -336,  -336,  -336,  -336,  -336,  -336,
    -336,  -336,  -188,  -336,  -336,  -177,  -336,  -336,  -297,  -336,
     -65,     9,  -336,  -182,    -4,  -336,    -5,  -336,  -187,  -336,
    -336,  -125,   -22,    73,   -21,    12,  -336,   -23,  -336,    -1,
       3,   -20,    58,   -79,  -336,   -19,   -78,  -336,   -15,   -17,
    -336,    54,   -14,  -336,    55,   -11,  -336,   -53,  -336,  -336,
    -336,  -336,  -336,  -336,  -144,   125,  -336,  -336,  -336,   -50,
    -336,   205,  -336,  -336,   -45,    33,  -336,  -336,  -106,   -70,
    -276,  -336,  -336,   -13,   -18,    61,    68,   -86,  -336,  -336,
      77,   -83,   -47,  -336,  -336,  -336,  -124,   -90,  -336,  -336,
     -16,  -336,  -336,  -336,  -335
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,    35,    36,   114,    37,    38,    39,
     186,   316,   347,   258,    79,   187,    40,   130,   222,   131,
     132,   218,   133,   284,    41,    42,   136,   134,   216,   228,
      43,    44,    45,    46,    47,    48,    49,    91,    50,   201,
      51,   202,   273,   354,    52,   320,    53,    54,   324,    55,
     197,    88,   199,   263,   101,   191,    56,   138,   386,    57,
     387,    58,   140,    59,   142,    60,    61,   153,   154,    62,
      63,   156,    64,   158,   236,    65,   160,   237,    66,   163,
     164,    67,   167,   168,    68,   174,   175,    69,    70,    71,
     178,   241,    72,    99,   182,    73,   100,   103,   107,   205,
     276,   104,   183,   245,   209,   105,   210,   249,   310,   250,
     251,   360,   361,    85,   194,    86,   224,   286,    74,   185,
     246,   307,   247,   303,   379,   280,   380,   381,   212,   382,
      75,    94,    95,   365,   367
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,    81,    90,    93,    82,    87,    98,    83,    89,   106,
     112,    84,   229,   268,   274,   211,    80,   176,    83,  -250,
      82,    82,    84,   351,   102,   102,   110,   314,   267,   317,
     262,   375,   109,     6,     7,   345,   262,   207,   349,   253,
     378,    92,  -250,   278,   111,     3,     4,  -250,   389,    76,
     179,    18,   180,     6,     7,   369,    21,    22,    23,   275,
     207,   301,    25,    77,    26,   207,    78,   181,    96,   366,
      97,    18,   113,   208,   313,    20,    21,    22,    23,   161,
     162,   137,    25,   373,    26,   135,   366,   200,   326,    27,
      28,    29,   302,   139,   383,   165,   166,   262,   141,   159,
     220,   155,   184,   366,   219,   157,   177,    30,    31,   -31,
     217,   262,   188,   189,   169,   170,   192,   190,   225,   195,
     334,   193,   240,   171,   196,   198,   204,   206,    31,   223,
     215,   213,   232,   116,   227,   233,   252,   257,   256,   352,
     259,   341,   270,   279,   343,   272,   172,   282,   173,   285,
     288,   305,   283,   231,   304,   390,   306,   234,  -218,   308,
     309,   312,   262,   311,   318,   315,   371,   319,   321,   323,
     327,   370,   355,   208,   244,   248,   346,   348,   353,   244,
     374,   359,   368,   260,   376,   264,   377,   223,   298,   364,
     281,    89,    83,   392,   262,   393,    84,   221,   287,   214,
     384,   271,   226,    82,   325,   269,   394,   102,   289,   262,
     290,   291,   230,   235,   336,   292,   337,   293,   238,     3,
       4,   295,   294,   239,   203,   296,   328,     6,     7,   297,
     372,   108,   329,    10,    11,    12,   358,   299,   300,   342,
      14,   277,    15,    16,    17,    18,    19,   356,   322,    20,
      21,    22,    23,   388,   266,   261,    25,   357,    26,   340,
     265,   255,   391,    27,    28,    29,   330,   332,   388,     0,
       0,   331,     0,     0,     0,     0,     0,     0,    83,     0,
     333,    30,    84,   335,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   338,   339,     0,     0,
       0,   244,    31,     0,   248,     0,   344,     0,     0,     0,
       0,   143,     0,     0,    82,   350,     0,   144,     1,     2,
       3,     4,   145,     0,     5,     0,     0,     0,     6,     7,
       0,     8,     0,     9,    10,    11,    12,     0,     0,     0,
      13,    14,   362,    15,    16,    17,    18,    19,     0,     0,
      20,    21,    22,    23,   344,     0,    24,    25,     0,    26,
     146,   147,   148,     0,    27,    28,    29,     0,   149,   150,
     151,   152,     0,     1,     2,     3,     4,     0,     0,     5,
       0,     0,    30,     6,     7,     0,     8,     0,     9,    10,
      11,    12,     0,     0,     0,    13,    14,     0,    15,    16,
      17,    18,    19,    31,     0,    20,    21,    22,    23,     3,
       4,     0,    25,     0,    26,     0,     0,     6,     7,    27,
      28,    29,     0,    10,    11,    12,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    30,     0,    20,
      21,    22,    23,     0,     0,   363,    25,     0,    26,     0,
       0,     3,     4,    27,    28,    29,     0,     0,    31,     6,
       7,     0,     0,     0,     0,    10,    11,    12,     0,     0,
       0,    30,    14,     0,    15,    16,    17,    18,    19,     0,
       0,    20,    21,    22,    23,     3,     4,     0,    25,     0,
      26,     0,    31,     6,     7,    27,    28,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,    30,     0,    20,    21,    22,    23,     0,
       0,     0,    25,   254,    26,     0,     0,     3,     4,    27,
      28,   242,     0,     0,    31,     6,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,     0,     0,
      15,   243,     0,    18,     3,     4,     0,    20,    21,    22,
      23,     0,     6,     7,    25,     0,    26,     0,    31,     0,
       0,    27,    28,    29,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,    20,    21,    22,    23,     0,    30,
       0,    25,     0,    26,     0,     3,     4,     0,    27,    28,
     242,     0,     0,     6,     7,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,     0,    30,     0,     0,     0,
     243,    18,     3,     4,     0,    20,    21,    22,    23,     0,
       6,     7,    25,     0,    26,     0,     0,    31,     0,    27,
      28,    29,     3,     4,     0,    15,     0,     0,    18,     0,
       6,     7,    20,    21,    22,    23,     0,    30,     0,    25,
       0,    26,   385,     4,     0,     0,    27,    28,    18,     0,
       6,     7,    20,    21,    22,    23,     0,     0,    31,    25,
       0,    26,     0,     4,    30,     0,    27,    28,    18,     0,
       6,     7,    20,    21,    22,    23,     0,     0,     0,    25,
       0,    26,     0,     0,    30,    31,    27,    28,    18,     0,
       6,     7,    20,    21,    22,    23,     0,     0,     0,    25,
       0,    26,     0,     0,    30,    31,    27,    28,    18,     0,
       0,     0,    20,    21,    22,    23,     0,     6,     7,    25,
       0,    26,     0,     0,    30,    31,    27,    28,    29,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,    20,
      21,    22,    23,     0,    30,    31,    25,   115,    26,     0,
       0,     0,     0,    27,    28,     0,     0,     0,     0,   116,
       0,     0,     0,     0,     0,    31,     0,     0,     0,     0,
       0,    30,     0,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,   128,     0,   129,     0,     0,
       0,     0,    31
};

static const yytype_int16 yycheck[] =
{
       5,     5,    14,    15,     9,     9,    19,     8,    13,    25,
      34,     8,   137,   195,   202,   105,     4,    70,    19,    19,
      25,    26,    19,   320,    25,    26,     0,   257,   194,   259,
     189,   366,    29,    16,    17,   311,   195,    37,   318,   183,
      12,     4,    19,   209,    93,     8,     9,    19,   383,    39,
      45,    34,    47,    16,    17,   352,    39,    40,    41,   203,
      37,    61,    45,    39,    47,    37,    39,    62,    39,   349,
      39,    34,    51,    50,   256,    38,    39,    40,    41,    72,
      73,    12,    45,   359,    47,    50,   366,    92,   270,    52,
      53,    54,    92,    11,   374,    52,    53,   256,    10,    57,
     116,    56,    45,   383,   116,    71,    74,    70,    91,    50,
     115,   270,    49,    49,    54,    55,    20,    92,   134,    49,
     286,    50,   175,    63,    50,     5,    41,    46,    91,   134,
      51,    48,    20,    61,    50,     9,    39,    45,    49,   321,
      50,   307,    49,    19,   310,    50,    86,    44,    88,    50,
      14,    46,    61,   141,   244,   385,    50,   154,    49,    48,
      50,    46,   321,    49,    42,    90,   354,    13,    49,    14,
      39,   353,    20,    50,   179,   180,    46,    49,    49,   184,
      42,    49,    49,   188,    43,   190,   368,   192,   241,   348,
     214,   196,   193,    43,   353,    49,   193,   132,   226,   113,
     377,   198,   135,   208,   269,   196,   393,   208,   230,   368,
     231,   234,   139,   155,   293,   235,   294,   236,   164,     8,
       9,   238,   237,   168,    99,   239,   276,    16,    17,   240,
     355,    26,   277,    22,    23,    24,   342,   242,   243,   309,
      29,   208,    31,    32,    33,    34,    35,   333,   266,    38,
      39,    40,    41,   378,   193,    44,    45,   340,    47,   306,
     192,   184,   386,    52,    53,    54,   279,   283,   393,    -1,
      -1,   283,    -1,    -1,    -1,    -1,    -1,    -1,   279,    -1,
     285,    70,   279,   288,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   301,   302,    -1,    -1,
      -1,   306,    91,    -1,   309,    -1,   311,    -1,    -1,    -1,
      -1,     9,    -1,    -1,   319,   319,    -1,    15,     6,     7,
       8,     9,    20,    -1,    12,    -1,    -1,    -1,    16,    17,
      -1,    19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      28,    29,   347,    31,    32,    33,    34,    35,    -1,    -1,
      38,    39,    40,    41,   359,    -1,    44,    45,    -1,    47,
      58,    59,    60,    -1,    52,    53,    54,    -1,    66,    67,
      68,    69,    -1,     6,     7,     8,     9,    -1,    -1,    12,
      -1,    -1,    70,    16,    17,    -1,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    32,
      33,    34,    35,    91,    -1,    38,    39,    40,    41,     8,
       9,    -1,    45,    -1,    47,    -1,    -1,    16,    17,    52,
      53,    54,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    70,    -1,    38,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    47,    -1,
      -1,     8,     9,    52,    53,    54,    -1,    -1,    91,    16,
      17,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,    -1,
      -1,    70,    29,    -1,    31,    32,    33,    34,    35,    -1,
      -1,    38,    39,    40,    41,     8,     9,    -1,    45,    -1,
      47,    -1,    91,    16,    17,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    70,    -1,    38,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    -1,    -1,     8,     9,    52,
      53,    54,    -1,    -1,    91,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      31,    74,    -1,    34,     8,     9,    -1,    38,    39,    40,
      41,    -1,    16,    17,    45,    -1,    47,    -1,    91,    -1,
      -1,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    38,    39,    40,    41,    -1,    70,
      -1,    45,    -1,    47,    -1,     8,     9,    -1,    52,    53,
      54,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      74,    34,     8,     9,    -1,    38,    39,    40,    41,    -1,
      16,    17,    45,    -1,    47,    -1,    -1,    91,    -1,    52,
      53,    54,     8,     9,    -1,    31,    -1,    -1,    34,    -1,
      16,    17,    38,    39,    40,    41,    -1,    70,    -1,    45,
      -1,    47,     8,     9,    -1,    -1,    52,    53,    34,    -1,
      16,    17,    38,    39,    40,    41,    -1,    -1,    91,    45,
      -1,    47,    -1,     9,    70,    -1,    52,    53,    34,    -1,
      16,    17,    38,    39,    40,    41,    -1,    -1,    -1,    45,
      -1,    47,    -1,    -1,    70,    91,    52,    53,    34,    -1,
      16,    17,    38,    39,    40,    41,    -1,    -1,    -1,    45,
      -1,    47,    -1,    -1,    70,    91,    52,    53,    34,    -1,
      -1,    -1,    38,    39,    40,    41,    -1,    16,    17,    45,
      -1,    47,    -1,    -1,    70,    91,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,
      39,    40,    41,    -1,    70,    91,    45,    49,    47,    -1,
      -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    -1,    87,    -1,    89,    -1,    -1,
      -1,    -1,    91
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,     8,     9,    12,    16,    17,    19,    21,
      22,    23,    24,    28,    29,    31,    32,    33,    34,    35,
      38,    39,    40,    41,    44,    45,    47,    52,    53,    54,
      70,    91,    96,    97,    98,    99,   100,   102,   103,   104,
     111,   119,   120,   125,   126,   127,   128,   129,   130,   131,
     133,   135,   139,   141,   142,   144,   151,   154,   156,   158,
     160,   161,   164,   165,   167,   170,   173,   176,   179,   182,
     183,   184,   187,   190,   213,   225,    39,    39,    39,   109,
     160,   149,   151,   164,   165,   208,   210,   149,   146,   151,
     119,   132,     4,   119,   226,   227,    39,    39,   208,   188,
     191,   149,   164,   192,   196,   200,   225,   193,   196,   165,
       0,    93,    97,    51,   101,    49,    61,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    87,    89,
     112,   114,   115,   117,   122,    50,   121,    12,   152,    11,
     157,    10,   159,     9,    15,    20,    58,    59,    60,    66,
      67,    68,    69,   162,   163,    56,   166,    71,   168,    57,
     171,    72,    73,   174,   175,    52,    53,   177,   178,    54,
      55,    63,    86,    88,   180,   181,   182,    74,   185,    45,
      47,    62,   189,   197,    45,   214,   105,   110,    49,    49,
      92,   150,    20,    50,   209,    49,    50,   145,     5,   147,
     151,   134,   136,   190,    41,   194,    46,    37,    50,   199,
     201,   222,   223,    48,   102,    51,   123,   151,   116,   119,
     225,   114,   113,   151,   211,   225,   120,    50,   124,   156,
     158,   160,    20,     9,   165,   167,   169,   172,   176,   179,
     182,   186,    54,    74,   151,   198,   215,   217,   151,   202,
     204,   205,    39,   189,    46,   215,    49,    45,   108,    50,
     151,    44,   100,   148,   151,   211,   210,   124,   148,   146,
      49,   165,    50,   137,   137,   189,   195,   200,   124,    19,
     220,    97,    44,    61,   118,    50,   212,   121,    14,   157,
     159,   162,   166,   170,   173,   174,   177,   180,   182,   151,
     151,    61,    92,   218,   222,    46,    50,   216,    48,    50,
     203,    49,    46,   148,   109,    90,   106,   109,    42,    13,
     140,    49,   209,    14,   143,   145,   148,    39,   194,   199,
     208,   119,   225,   151,   124,   151,   168,   171,   151,   151,
     217,   124,   204,   124,   151,   205,    46,   107,    49,    99,
     149,   143,   148,    49,   138,    20,   212,   216,   203,    49,
     206,   207,   151,    44,   100,   228,    99,   229,    49,   143,
     148,   137,   156,   205,    42,   229,    43,   148,    12,   219,
     221,   222,   224,    99,   140,     8,   153,   155,   156,   229,
     109,   221,    43,    49,   153
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    97,    97,    98,    98,    99,    99,   100,
     101,   101,   102,   102,   102,   102,   102,   102,   103,   103,
     103,   103,   103,   103,   105,   104,   106,   107,   106,   108,
     109,   110,   109,   109,   111,   112,   112,   112,   113,   113,
     114,   114,   115,   116,   116,   117,   118,   118,   118,   119,
     120,   120,   121,   121,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   123,   123,   124,
     124,   125,   126,   126,   126,   126,   127,   128,   129,   130,
     131,   132,   132,   134,   133,   136,   135,   137,   138,   137,
     139,   140,   140,   141,   142,   143,   143,   144,   145,   145,
     146,   147,   147,   148,   148,   149,   150,   150,   151,   151,
     152,   152,   153,   153,   154,   155,   156,   157,   157,   158,
     159,   159,   160,   160,   161,   162,   162,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   164,   165,
     166,   166,   167,   168,   169,   168,   170,   171,   172,   171,
     173,   174,   174,   175,   175,   176,   177,   177,   178,   178,
     179,   180,   180,   181,   181,   181,   181,   181,   182,   182,
     183,   183,   183,   184,   185,   186,   185,   187,   188,   187,
     189,   189,   190,   190,   190,   190,   191,   190,   190,   190,
     190,   190,   192,   192,   192,   193,   193,   194,   195,   194,
     196,   197,   197,   197,   198,   198,   199,   199,   200,   200,
     201,   201,   202,   203,   203,   204,   204,   205,   205,   206,
     206,   207,   208,   209,   209,   210,   210,   211,   212,   212,
     213,   214,   214,   214,   215,   216,   216,   217,   217,   217,
     217,   217,   218,   218,   219,   219,   220,   221,   221,   222,
     223,   223,   224,   225,   226,   226,   227,   227,   228,   228,
     229,   229
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     2,     1,     1,     1,     1,     4,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     7,     0,     0,     3,     3,
       0,     0,     4,     1,     2,     1,     2,     1,     1,     1,
       0,     2,     2,     1,     1,     3,     0,     2,     2,     3,
       1,     1,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     0,     1,     0,     4,     0,     4,     0,     0,     4,
       6,     0,     5,     5,     7,     0,     3,     5,     0,     3,
       2,     0,     2,     1,     5,     2,     0,     2,     2,     1,
       0,     4,     1,     1,     4,     4,     2,     0,     3,     2,
       0,     3,     2,     1,     2,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     2,     2,
       0,     3,     2,     0,     0,     4,     2,     0,     0,     4,
       2,     0,     3,     1,     1,     2,     0,     3,     1,     1,
       2,     0,     3,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     2,     0,     0,     3,     2,     0,     4,
       0,     2,     3,     3,     1,     1,     0,     3,     1,     1,
       1,     1,     0,     1,     1,     0,     1,     0,     0,     3,
       2,     3,     3,     2,     0,     1,     0,     3,     1,     1,
       1,     2,     3,     0,     3,     1,     4,     0,     1,     0,
       1,     2,     3,     0,     3,     1,     1,     3,     0,     3,
       5,     0,     2,     3,     3,     0,     3,     2,     3,     3,
       2,     2,     0,     1,     1,     1,     5,     0,     1,     2,
       0,     1,     3,     2,     0,     1,     2,     1,     1,     5,
       0,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        YY_LAC_DISCARD ("YYBACKUP");                              \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return 1 if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYPTRDIFF_T *yycapacity, YYPTRDIFF_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yy_state_t **yybottom,
                      yy_state_t *yybottom_no_free,
                      yy_state_t **yytop, yy_state_t *yytop_empty)
{
  YYPTRDIFF_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYPTRDIFF_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYPTRDIFF_T yyalloc = 2 * yysize_new;
      yy_state_t *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        YY_CAST (yy_state_t *,
                 YYSTACK_ALLOC (YY_CAST (YYSIZE_T,
                                         yyalloc * YYSIZEOF (*yybottom_new))));
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, int yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[+*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      {
        YYPTRDIFF_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        if (yyesp != yyes_prev)
          {
            YYPTRDIFF_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      {
        yy_state_fast_t yystate;
        {
          const int yylhs = yyr1[yyrule] - YYNTOKENS;
          const int yyi = yypgoto[yylhs] + *yyesp;
          yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                     ? yytable[yyi]
                     : yydefgoto[yylhs]);
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            YY_IGNORE_USELESS_CAST_BEGIN
            *yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return 2;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyesa, yy_state_t **yyes,
                YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
# if YYDEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

    yy_state_t yyesa[20];
    yy_state_t *yyes;
    YYPTRDIFF_T yyes_capacity;

  int yy_lac_established = 0;
  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  yyes = yyesa;
  yyes_capacity = 20;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  YY_LAC_DISCARD ("shift");
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
  case 2:
#line 140 "parser.y"
                                      { root = new_subtree(PROGRAM_NODE, 1, yyvsp[-1]); }
#line 2078 "parser.c"
    break;

  case 3:
#line 144 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 2084 "parser.c"
    break;

  case 4:
#line 145 "parser.y"
                            {
  if(get_child_count(yyvsp[0]) == 0){
    yyvsp[0] = new_subtree(BLOCK_NODE, 1, yyvsp[0]); 
  }; 
  add_child(yyvsp[0], yyvsp[-1]);
  yyval = yyvsp[0]; 
}
#line 2096 "parser.c"
    break;

  case 6:
#line 154 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2102 "parser.c"
    break;

  case 7:
#line 157 "parser.y"
                  { yyval == yyvsp[0]; }
#line 2108 "parser.c"
    break;

  case 8:
#line 157 "parser.y"
                                                 { yyval == yyvsp[0]; }
#line 2114 "parser.c"
    break;

  case 9:
#line 158 "parser.y"
                                                              { add_child(yyvsp[-3], yyvsp[-2]); yyval = yyvsp[-3]; 
}
#line 2121 "parser.c"
    break;

  case 10:
#line 163 "parser.y"
                                      { yyval = new_subtree(LOW_NODE, 0); }
#line 2127 "parser.c"
    break;

  case 11:
#line 164 "parser.y"
                                      { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2133 "parser.c"
    break;

  case 12:
#line 168 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2139 "parser.c"
    break;

  case 13:
#line 169 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2145 "parser.c"
    break;

  case 14:
#line 170 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2151 "parser.c"
    break;

  case 15:
#line 171 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2157 "parser.c"
    break;

  case 16:
#line 172 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2163 "parser.c"
    break;

  case 17:
#line 173 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2169 "parser.c"
    break;

  case 18:
#line 177 "parser.y"
              { yyval = new_subtree(SUB_NODE, 0); }
#line 2175 "parser.c"
    break;

  case 19:
#line 178 "parser.y"
              { yyval = new_subtree(SUB_NODE, 0); }
#line 2181 "parser.c"
    break;

  case 20:
#line 179 "parser.y"
              { yyval = new_subtree(SUB_NODE, 0); }
#line 2187 "parser.c"
    break;

  case 21:
#line 180 "parser.y"
              { yyval = new_subtree(SUB_NODE, 0); }
#line 2193 "parser.c"
    break;

  case 22:
#line 181 "parser.y"
              { yyval = yyvsp[0]; }
#line 2199 "parser.c"
    break;

  case 23:
#line 182 "parser.y"
              { yyval = new_subtree(SUB_NODE, 0); }
#line 2205 "parser.c"
    break;

  case 24:
#line 186 "parser.y"
                  { yyvsp[0] = tokenToAST(NAME_NODE); }
#line 2211 "parser.c"
    break;

  case 25:
#line 186 "parser.y"
                                                                                                   {
  yyval = new_subtree(FUNK_NODE, 4, yyvsp[-5], yyvsp[-3], yyvsp[-2], yyvsp[0]);
}
#line 2219 "parser.c"
    break;

  case 26:
#line 192 "parser.y"
           { yyval = new_node(LOW_NODE, ""); }
#line 2225 "parser.c"
    break;

  case 27:
#line 193 "parser.y"
           { yyvsp[0] = tokenToAST(RARROW_NODE); }
#line 2231 "parser.c"
    break;

  case 28:
#line 193 "parser.y"
                                                  { add_child(yyvsp[-2], yyvsp[0]); yyval = yyvsp[-2]; }
#line 2237 "parser.c"
    break;

  case 29:
#line 196 "parser.y"
                                    { yyval = new_subtree(PARAMETERS_NODE, 1, yyvsp[-1]);  }
#line 2243 "parser.c"
    break;

  case 30:
#line 200 "parser.y"
          { yyval = new_node(LOW_NODE, ""); }
#line 2249 "parser.c"
    break;

  case 31:
#line 201 "parser.y"
         { yyvsp[0] = tokenToAST(NAME_NODE); }
#line 2255 "parser.c"
    break;

  case 32:
#line 201 "parser.y"
                                                            {
    if(get_child_count(yyvsp[0]) == 0){
      yyvsp[0] = new_subtree(NAME_LIST_NODE, 1, yyvsp[0]); 
    }; 
    add_child(yyvsp[0], yyvsp[-3]);
    yyval = yyvsp[0];
}
#line 2267 "parser.c"
    break;

  case 33:
#line 208 "parser.y"
         { yyval = tokenToAST(NAME_NODE); }
#line 2273 "parser.c"
    break;

  case 34:
#line 213 "parser.y"
                                          { add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; }
#line 2279 "parser.c"
    break;

  case 35:
#line 217 "parser.y"
                          { yyval = yyvsp[0]; }
#line 2285 "parser.c"
    break;

  case 36:
#line 218 "parser.y"
                          { add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; }
#line 2291 "parser.c"
    break;

  case 37:
#line 219 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2297 "parser.c"
    break;

  case 38:
#line 223 "parser.y"
              { yyval = yyvsp[0]; }
#line 2303 "parser.c"
    break;

  case 39:
#line 224 "parser.y"
              { yyval = yyvsp[0]; }
#line 2309 "parser.c"
    break;

  case 40:
#line 228 "parser.y"
                              { yyval = new_node(LOW_NODE, ""); }
#line 2315 "parser.c"
    break;

  case 41:
#line 229 "parser.y"
                              { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2321 "parser.c"
    break;

  case 42:
#line 233 "parser.y"
                                { yyval = new_subtree(EQ_NODE, 1, yyvsp[0]); }
#line 2327 "parser.c"
    break;

  case 43:
#line 237 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2333 "parser.c"
    break;

  case 44:
#line 238 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2339 "parser.c"
    break;

  case 45:
#line 241 "parser.y"
                                        { add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; }
#line 2345 "parser.c"
    break;

  case 46:
#line 245 "parser.y"
                              { yyval = new_node(LOW_NODE, ""); }
#line 2351 "parser.c"
    break;

  case 47:
#line 246 "parser.y"
                              { yyval = new_subtree(EQ_NODE, 1, yyvsp[0]); }
#line 2357 "parser.c"
    break;

  case 48:
#line 247 "parser.y"
                              { yyval = new_subtree(EQ_NODE, 1, yyvsp[0]); }
#line 2363 "parser.c"
    break;

  case 49:
#line 250 "parser.y"
                                                     { add_child(yyvsp[-2], yyvsp[-1]); yyval = yyvsp[-2]; }
#line 2369 "parser.c"
    break;

  case 50:
#line 254 "parser.y"
            { yyval = yyvsp[0]; }
#line 2375 "parser.c"
    break;

  case 51:
#line 255 "parser.y"
            { yyval = yyvsp[0]; }
#line 2381 "parser.c"
    break;

  case 52:
#line 259 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 2387 "parser.c"
    break;

  case 53:
#line 260 "parser.y"
                                  { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2393 "parser.c"
    break;

  case 54:
#line 264 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2399 "parser.c"
    break;

  case 55:
#line 265 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2405 "parser.c"
    break;

  case 56:
#line 266 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2411 "parser.c"
    break;

  case 57:
#line 267 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2417 "parser.c"
    break;

  case 58:
#line 268 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2423 "parser.c"
    break;

  case 59:
#line 269 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2429 "parser.c"
    break;

  case 60:
#line 270 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2435 "parser.c"
    break;

  case 61:
#line 271 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2441 "parser.c"
    break;

  case 62:
#line 272 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2447 "parser.c"
    break;

  case 63:
#line 273 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2453 "parser.c"
    break;

  case 64:
#line 274 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2459 "parser.c"
    break;

  case 65:
#line 275 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2465 "parser.c"
    break;

  case 66:
#line 276 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2471 "parser.c"
    break;

  case 72:
#line 291 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2477 "parser.c"
    break;

  case 73:
#line 292 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2483 "parser.c"
    break;

  case 74:
#line 293 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2489 "parser.c"
    break;

  case 75:
#line 294 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2495 "parser.c"
    break;

  case 76:
#line 297 "parser.y"
                { Token token = get_last_token(); yyval = new_node(FLOW_NODE, token.lexeme); }
#line 2501 "parser.c"
    break;

  case 77:
#line 300 "parser.y"
                  { Token token = get_last_token(); yyval = new_node(FLOW_NODE, token.lexeme); }
#line 2507 "parser.c"
    break;

  case 78:
#line 303 "parser.y"
                        { Token token = get_last_token(); yyval = new_node(FLOW_NODE, token.lexeme); }
#line 2513 "parser.c"
    break;

  case 79:
#line 307 "parser.y"
                                            { yyval = new_subtree(RETURN_NODE, 1, yyvsp[0]); }
#line 2519 "parser.c"
    break;

  case 80:
#line 310 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2525 "parser.c"
    break;

  case 81:
#line 314 "parser.y"
                        { yyval = new_subtree(LOW_NODE, 0); }
#line 2531 "parser.c"
    break;

  case 82:
#line 315 "parser.y"
                        {yyval = yyvsp[0]; }
#line 2537 "parser.c"
    break;

  case 83:
#line 318 "parser.y"
                         { yyvsp[0] = tokenToAST(NAME_NODE); }
#line 2543 "parser.c"
    break;

  case 84:
#line 318 "parser.y"
                                                                        { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 2549 "parser.c"
    break;

  case 85:
#line 321 "parser.y"
                             { yyvsp[0] = tokenToAST(NAME_NODE); }
#line 2555 "parser.c"
    break;

  case 86:
#line 321 "parser.y"
                                                                            { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 2561 "parser.c"
    break;

  case 87:
#line 325 "parser.y"
        { yyval = new_node(NAME_LIST_NODE, ""); }
#line 2567 "parser.c"
    break;

  case 88:
#line 326 "parser.y"
               { yyvsp[0] = tokenToAST(NAME_NODE); }
#line 2573 "parser.c"
    break;

  case 89:
#line 326 "parser.y"
                                                              { 
  if (get_child_count(yyvsp[0]) == 0) {
    yyvsp[0] = new_subtree(NAME_LIST_NODE, 1, yyvsp[0]); 
  }; 
  add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; 
}
#line 2584 "parser.c"
    break;

  case 91:
#line 338 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2590 "parser.c"
    break;

  case 95:
#line 346 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2596 "parser.c"
    break;

  case 98:
#line 352 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2602 "parser.c"
    break;

  case 101:
#line 358 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2608 "parser.c"
    break;

  case 106:
#line 366 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2614 "parser.c"
    break;

  case 108:
#line 370 "parser.y"
                                    { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2620 "parser.c"
    break;

  case 109:
#line 371 "parser.y"
                                    { yyval = yyvsp[0]; }
#line 2626 "parser.c"
    break;

  case 110:
#line 375 "parser.y"
                          { yyval = new_subtree(LOW_NODE, 0); }
#line 2632 "parser.c"
    break;

  case 111:
#line 376 "parser.y"
                          { yyval = new_subtree(IF_ELSE_NODE, 2, yyvsp[-2], yyvsp[0]); }
#line 2638 "parser.c"
    break;

  case 112:
#line 380 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2644 "parser.c"
    break;

  case 113:
#line 381 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2650 "parser.c"
    break;

  case 114:
#line 384 "parser.y"
                                        { yyval = new_subtree(LAMBDA_NODE, 2, yyvsp[-2], yyvsp[0]); }
#line 2656 "parser.c"
    break;

  case 115:
#line 387 "parser.y"
                                                      { yyval = new_subtree(LAMBDA_NODE, 2, yyvsp[-2], yyvsp[0]); }
#line 2662 "parser.c"
    break;

  case 116:
#line 390 "parser.y"
                           { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2668 "parser.c"
    break;

  case 117:
#line 394 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2674 "parser.c"
    break;

  case 118:
#line 395 "parser.y"
                         { yyval = new_subtree(OR_NODE, 2, yyvsp[-1], yyvsp[0]); }
#line 2680 "parser.c"
    break;

  case 119:
#line 398 "parser.y"
                             { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2686 "parser.c"
    break;

  case 120:
#line 402 "parser.y"
         { yyval = new_node(LOW_NODE, ""); }
#line 2692 "parser.c"
    break;

  case 121:
#line 403 "parser.y"
                           { yyval = new_subtree(AND_NODE, 2, yyvsp[-1], yyvsp[0]); }
#line 2698 "parser.c"
    break;

  case 122:
#line 407 "parser.y"
                { yyval = new_subtree(NOT_NODE, 1, yyvsp[0]); }
#line 2704 "parser.c"
    break;

  case 123:
#line 408 "parser.y"
                { yyval = yyvsp[0]; }
#line 2710 "parser.c"
    break;

  case 124:
#line 411 "parser.y"
                            { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2716 "parser.c"
    break;

  case 125:
#line 415 "parser.y"
                              { yyval = new_subtree(LOW_NODE, 0); }
#line 2722 "parser.c"
    break;

  case 126:
#line 416 "parser.y"
                              { add_child(yyvsp[-2], yyvsp[-1]); add_child(yyvsp[-2], yyvsp[0]); yyval = yyvsp[-2]; }
#line 2728 "parser.c"
    break;

  case 127:
#line 420 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2734 "parser.c"
    break;

  case 128:
#line 421 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2740 "parser.c"
    break;

  case 129:
#line 422 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2746 "parser.c"
    break;

  case 130:
#line 423 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2752 "parser.c"
    break;

  case 131:
#line 424 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2758 "parser.c"
    break;

  case 132:
#line 425 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2764 "parser.c"
    break;

  case 133:
#line 426 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2770 "parser.c"
    break;

  case 134:
#line 427 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2776 "parser.c"
    break;

  case 135:
#line 428 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2782 "parser.c"
    break;

  case 136:
#line 429 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2788 "parser.c"
    break;

  case 137:
#line 430 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2794 "parser.c"
    break;

  case 138:
#line 433 "parser.y"
                     { yyval = new_subtree(STAR_NODE, 1, yyvsp[0]); }
#line 2800 "parser.c"
    break;

  case 139:
#line 435 "parser.y"
                          { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2806 "parser.c"
    break;

  case 140:
#line 439 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2812 "parser.c"
    break;

  case 141:
#line 440 "parser.y"
                             { 
  if (get_child_count(yyvsp[0]) == 0) {
    yyvsp[0] = new_subtree(VBAR_NODE, 1, yyvsp[0]); 
  }; 
  add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; 
}
#line 2823 "parser.c"
    break;

  case 142:
#line 448 "parser.y"
                                      { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2829 "parser.c"
    break;

  case 143:
#line 451 "parser.y"
                               { yyval = new_node(LOW_NODE, ""); }
#line 2835 "parser.c"
    break;

  case 144:
#line 452 "parser.y"
                               { Token token = get_last_token(); yyvsp[0] = new_node(OP_BIT_A_BIT_NODE, token.lexeme); }
#line 2841 "parser.c"
    break;

  case 145:
#line 453 "parser.y"
                               { add_child(yyvsp[-3], yyvsp[-1]); add_child(yyvsp[-3], yyvsp[0]); yyval = yyvsp[-3]; }
#line 2847 "parser.c"
    break;

  case 146:
#line 456 "parser.y"
                                  { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2853 "parser.c"
    break;

  case 147:
#line 459 "parser.y"
                          { yyval = new_node(LOW_NODE, ""); }
#line 2859 "parser.c"
    break;

  case 148:
#line 460 "parser.y"
                          { Token token = get_last_token(); yyvsp[0] = new_node(OP_BIT_A_BIT_NODE, token.lexeme); }
#line 2865 "parser.c"
    break;

  case 149:
#line 461 "parser.y"
                          { add_child(yyvsp[-3], yyvsp[-1]); add_child(yyvsp[-3], yyvsp[0]); yyval = yyvsp[-3]; }
#line 2871 "parser.c"
    break;

  case 150:
#line 464 "parser.y"
                                    { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2877 "parser.c"
    break;

  case 151:
#line 468 "parser.y"
                                      { yyval = new_node(LOW_NODE, ""); }
#line 2883 "parser.c"
    break;

  case 152:
#line 469 "parser.y"
                                      { add_child(yyvsp[-2], yyvsp[-1]); add_child(yyvsp[-2], yyvsp[0]); yyval = yyvsp[-2]; }
#line 2889 "parser.c"
    break;

  case 153:
#line 473 "parser.y"
              { Token token = get_last_token(); yyval = new_node(OP_BIT_A_BIT_NODE, token.lexeme); }
#line 2895 "parser.c"
    break;

  case 154:
#line 474 "parser.y"
              { Token token = get_last_token(); yyval = new_node(OP_BIT_A_BIT_NODE, token.lexeme); }
#line 2901 "parser.c"
    break;

  case 155:
#line 477 "parser.y"
                                  { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2907 "parser.c"
    break;

  case 156:
#line 481 "parser.y"
                                  { yyval = new_subtree(LOW_NODE, 0); }
#line 2913 "parser.c"
    break;

  case 157:
#line 482 "parser.y"
                                  { add_child(yyvsp[-2], yyvsp[-1]); add_child(yyvsp[-2], yyvsp[0]); yyval = yyvsp[-2]; }
#line 2919 "parser.c"
    break;

  case 158:
#line 486 "parser.y"
          { Token token = get_last_token(); yyval = new_node(OP_MATH_NODE, token.lexeme); }
#line 2925 "parser.c"
    break;

  case 159:
#line 487 "parser.y"
          { Token token = get_last_token(); yyval = new_node(OP_MATH_NODE, token.lexeme); }
#line 2931 "parser.c"
    break;

  case 160:
#line 490 "parser.y"
                      { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2937 "parser.c"
    break;

  case 161:
#line 494 "parser.y"
                              { yyval = new_subtree(LOW_NODE, 0); }
#line 2943 "parser.c"
    break;

  case 162:
#line 495 "parser.y"
                              { add_child(yyvsp[-2], yyvsp[-1]); add_child(yyvsp[-2], yyvsp[0]); yyval = yyvsp[-2]; }
#line 2949 "parser.c"
    break;

  case 163:
#line 499 "parser.y"
                { Token token = get_last_token(); yyval = new_node(OP_MATH_NODE, token.lexeme); }
#line 2955 "parser.c"
    break;

  case 164:
#line 500 "parser.y"
                { Token token = get_last_token(); yyval = new_node(OP_MATH_NODE, token.lexeme); }
#line 2961 "parser.c"
    break;

  case 165:
#line 501 "parser.y"
                { Token token = get_last_token(); yyval = new_node(OP_MATH_NODE, token.lexeme); }
#line 2967 "parser.c"
    break;

  case 166:
#line 502 "parser.y"
                { Token token = get_last_token(); yyval = new_node(OP_MATH_NODE, token.lexeme); }
#line 2973 "parser.c"
    break;

  case 167:
#line 503 "parser.y"
                { Token token = get_last_token(); yyval = new_node(OP_MATH_NODE, token.lexeme); }
#line 2979 "parser.c"
    break;

  case 168:
#line 507 "parser.y"
                      { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2985 "parser.c"
    break;

  case 169:
#line 508 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2991 "parser.c"
    break;

  case 170:
#line 512 "parser.y"
          { Token token = get_last_token(); yyval = new_node(OP_MATH_NODE, token.lexeme); }
#line 2997 "parser.c"
    break;

  case 171:
#line 513 "parser.y"
          { Token token = get_last_token(); yyval = new_node(OP_MATH_NODE, token.lexeme); }
#line 3003 "parser.c"
    break;

  case 172:
#line 514 "parser.y"
          { Token token = get_last_token(); yyval = new_node(OP_BIT_A_BIT_NODE, token.lexeme); }
#line 3009 "parser.c"
    break;

  case 173:
#line 517 "parser.y"
                                        { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 3015 "parser.c"
    break;

  case 174:
#line 522 "parser.y"
              { yyval = new_node(LOW_NODE, ""); }
#line 3021 "parser.c"
    break;

  case 175:
#line 523 "parser.y"
              { Token token = get_last_token(); yyvsp[0] = new_node(OP_MATH_NODE, token.lexeme); }
#line 3027 "parser.c"
    break;

  case 176:
#line 524 "parser.y"
              { add_child(yyvsp[-2], yyvsp[0]); yyval = yyvsp[-2]; }
#line 3033 "parser.c"
    break;

  case 177:
#line 528 "parser.y"
                    { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 3039 "parser.c"
    break;

  case 178:
#line 529 "parser.y"
                    { Token token = get_last_token(); yyvsp[0] = new_node(OP_SINC_NODE, token.lexeme); }
#line 3045 "parser.c"
    break;

  case 179:
#line 530 "parser.y"
                    { add_child(yyvsp[-3], yyvsp[-1]); add_child(yyvsp[-3], yyvsp[0]); yyval = yyvsp[-3]; }
#line 3051 "parser.c"
    break;

  case 180:
#line 534 "parser.y"
                            { yyval = new_subtree(LOW_NODE, 0); }
#line 3057 "parser.c"
    break;

  case 181:
#line 535 "parser.y"
                            { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 3063 "parser.c"
    break;

  case 182:
#line 539 "parser.y"
                                  { yyval = yyvsp[-1]; }
#line 3069 "parser.c"
    break;

  case 183:
#line 540 "parser.y"
                                  { yyval = yyvsp[-1]; }
#line 3075 "parser.c"
    break;

  case 184:
#line 541 "parser.y"
                                  { yyval = tokenToAST(NAME_NODE); }
#line 3081 "parser.c"
    break;

  case 185:
#line 542 "parser.y"
                                  { yyval = tokenToAST(NUMBER_NODE); }
#line 3087 "parser.c"
    break;

  case 186:
#line 543 "parser.y"
         { yyvsp[0] = tokenToAST(STRING_NODE); }
#line 3093 "parser.c"
    break;

  case 187:
#line 543 "parser.y"
                                                     { 
    if (get_child_count(yyvsp[0])==0){
      yyval = yyvsp[-2];
    } else {
      add_child(yyvsp[0], yyvsp[-2]);
      yyval = yyvsp[0]; 
    };
  }
#line 3106 "parser.c"
    break;

  case 188:
#line 551 "parser.y"
                                  { yyval = new_subtree(LOW_NODE, 0); }
#line 3112 "parser.c"
    break;

  case 189:
#line 552 "parser.y"
                                  { yyval = tokenToAST(NONE_NODE); }
#line 3118 "parser.c"
    break;

  case 190:
#line 553 "parser.y"
                                  { yyval = tokenToAST(BOOL_NODE); }
#line 3124 "parser.c"
    break;

  case 191:
#line 554 "parser.y"
                                  { yyval = tokenToAST(BOOL_NODE); }
#line 3130 "parser.c"
    break;

  case 192:
#line 558 "parser.y"
                  { yyval = new_node(LOW_NODE, ""); }
#line 3136 "parser.c"
    break;

  case 193:
#line 559 "parser.y"
                  { yyval = yyvsp[0]; }
#line 3142 "parser.c"
    break;

  case 194:
#line 560 "parser.y"
                  { yyval = yyvsp[0]; }
#line 3148 "parser.c"
    break;

  case 195:
#line 565 "parser.y"
                    { yyval = new_node(LOW_NODE, ""); }
#line 3154 "parser.c"
    break;

  case 196:
#line 566 "parser.y"
                    { yyval = yyvsp[0]; }
#line 3160 "parser.c"
    break;

  case 197:
#line 570 "parser.y"
                    { yyval = new_node(LOW_NODE, ""); }
#line 3166 "parser.c"
    break;

  case 198:
#line 571 "parser.y"
                    { yyvsp[0] = tokenToAST(STRING_NODE); }
#line 3172 "parser.c"
    break;

  case 199:
#line 572 "parser.y"
                    { 
    if(get_child_count(yyvsp[0]) == 0){
      yyvsp[0] = new_subtree(STRING_NODE, 1, yyvsp[0]); 
    };
    add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 3182 "parser.c"
    break;

  case 200:
#line 579 "parser.y"
                                            { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 3188 "parser.c"
    break;

  case 201:
#line 583 "parser.y"
                            { yyval = new_subtree(LOW_NODE, 0); }
#line 3194 "parser.c"
    break;

  case 202:
#line 584 "parser.y"
                            { yyval = new_subtree(LOW_NODE, 0); }
#line 3200 "parser.c"
    break;

  case 203:
#line 585 "parser.y"
                            { yyval = new_subtree(LOW_NODE, 0); }
#line 3206 "parser.c"
    break;

  case 204:
#line 589 "parser.y"
                { yyval = new_node(LOW_NODE, ""); }
#line 3212 "parser.c"
    break;

  case 205:
#line 590 "parser.y"
                { yyval = yyvsp[0]; }
#line 3218 "parser.c"
    break;

  case 206:
#line 594 "parser.y"
                                        { yyval = new_subtree(LOW_NODE, 0); }
#line 3224 "parser.c"
    break;

  case 207:
#line 595 "parser.y"
                                        { yyval = new_subtree(LOW_NODE, 0); }
#line 3230 "parser.c"
    break;

  case 208:
#line 600 "parser.y"
                  { yyval = yyvsp[0]; }
#line 3236 "parser.c"
    break;

  case 209:
#line 601 "parser.y"
                  { yyval = yyvsp[0]; }
#line 3242 "parser.c"
    break;

  case 210:
#line 606 "parser.y"
                              { yyval = yyvsp[0]; }
#line 3248 "parser.c"
    break;

  case 211:
#line 607 "parser.y"
                              { yyval = yyvsp[-1]; }
#line 3254 "parser.c"
    break;

  case 212:
#line 611 "parser.y"
                                  { add_child(yyvsp[-2], yyvsp[-1]); yyval = yyvsp[-2]; }
#line 3260 "parser.c"
    break;

  case 213:
#line 615 "parser.y"
                                  { yyval = new_subtree(LOW_NODE, 0); }
#line 3266 "parser.c"
    break;

  case 214:
#line 616 "parser.y"
                                  { yyval = new_subtree(LOW_NODE, 0); }
#line 3272 "parser.c"
    break;

  case 215:
#line 621 "parser.y"
                                        { yyval = yyvsp[0]; }
#line 3278 "parser.c"
    break;

  case 216:
#line 622 "parser.y"
                                        { 
  yyvsp[-2] = new_node(COLON_NODE, ":"); 
  add_child(yyvsp[-2], yyvsp[-3]); add_child(yyvsp[-2], yyvsp[-1]); 
  add_child(yyvsp[-2], yyvsp[0]); yyval = yyvsp[-2]; 
}
#line 3288 "parser.c"
    break;

  case 217:
#line 630 "parser.y"
            { yyval = new_node(LOW_NODE, ""); }
#line 3294 "parser.c"
    break;

  case 218:
#line 631 "parser.y"
            { yyval = yyvsp[0]; }
#line 3300 "parser.c"
    break;

  case 219:
#line 635 "parser.y"
              { yyval = new_node(LOW_NODE, ""); }
#line 3306 "parser.c"
    break;

  case 220:
#line 636 "parser.y"
              { yyval = yyvsp[0]; }
#line 3312 "parser.c"
    break;

  case 221:
#line 639 "parser.y"
                          { yyvsp[-1] = new_node(COLON_NODE, ":"), add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 3318 "parser.c"
    break;

  case 222:
#line 642 "parser.y"
                                                 { add_child(yyvsp[-2], yyvsp[-1]); yyval = yyvsp[-2]; }
#line 3324 "parser.c"
    break;

  case 223:
#line 646 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 3330 "parser.c"
    break;

  case 224:
#line 647 "parser.y"
                                      { 
  if (get_child_count(yyvsp[0]) == 0) {
    yyvsp[0] = new_subtree(EXPR_STMT_LIST_NODE, 1, yyvsp[0]); 
  }; 
  add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; 
}
#line 3341 "parser.c"
    break;

  case 225:
#line 657 "parser.y"
              { yyval = yyvsp[0]; }
#line 3347 "parser.c"
    break;

  case 226:
#line 658 "parser.y"
              { yyval = yyvsp[0]; }
#line 3353 "parser.c"
    break;

  case 227:
#line 661 "parser.y"
                                        { add_child(yyvsp[-2], yyvsp[-1]); yyval = yyvsp[-2]; }
#line 3359 "parser.c"
    break;

  case 228:
#line 665 "parser.y"
                              { yyval = new_subtree(LOW_NODE, 0); }
#line 3365 "parser.c"
    break;

  case 229:
#line 666 "parser.y"
                              { 
  if (get_child_count(yyvsp[0]) == 0) {
    yyvsp[0] = new_subtree(TEST_LIST_NODE, 1, yyvsp[0]); 
  }; 
  add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; 
}
#line 3376 "parser.c"
    break;

  case 231:
#line 677 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 3382 "parser.c"
    break;

  case 235:
#line 684 "parser.y"
                                  { yyval = new_subtree(LOW_NODE, 0); }
#line 3388 "parser.c"
    break;

  case 242:
#line 691 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 3394 "parser.c"
    break;

  case 247:
#line 698 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 3400 "parser.c"
    break;

  case 250:
#line 704 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 3406 "parser.c"
    break;

  case 253:
#line 708 "parser.y"
                                { 
  yyvsp[-1] = new_subtree(YIELD_EXPR_NODE, 1, yyvsp[0]); 
  yyval = yyvsp[-1]; 
}
#line 3415 "parser.c"
    break;

  case 254:
#line 714 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 3421 "parser.c"
    break;

  case 255:
#line 715 "parser.y"
              { yyval = yyvsp[0]; }
#line 3427 "parser.c"
    break;

  case 256:
#line 718 "parser.y"
            { yyvsp[-1] = new_subtree(FROM_NODE, 1, yyvsp[0]); yyval = yyvsp[-1]; }
#line 3433 "parser.c"
    break;

  case 257:
#line 719 "parser.y"
                     { yyval = yyvsp[0]; }
#line 3439 "parser.c"
    break;

  case 258:
#line 723 "parser.y"
              { yyval = yyvsp[0]; }
#line 3445 "parser.c"
    break;

  case 259:
#line 724 "parser.y"
                                      { 
  if (get_child_count(yyvsp[-1]) == 0) {
    yyval = yyvsp[-2];
  } else {
    add_child(yyvsp[-1], yyvsp[-2]); yyval = yyvsp[-1]; 
  }
}
#line 3457 "parser.c"
    break;

  case 260:
#line 734 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 3463 "parser.c"
    break;

  case 261:
#line 735 "parser.y"
                 { 
  if (get_child_count(yyvsp[0]) == 0) {
    yyvsp[0] = new_subtree(STMT_NODE, 1, yyvsp[0]); 
  }
  add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; 
}
#line 3474 "parser.c"
    break;


#line 3478 "parser.c"

        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
  }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 743 "parser.y"


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
