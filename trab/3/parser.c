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

AST* new_name();

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
#define YYFINAL  111
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   806

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  124
/* YYNRULES -- Number of rules.  */
#define YYNRULES  250
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  384

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
       0,   140,   140,   144,   145,   153,   153,   156,   156,   157,
     163,   164,   173,   174,   175,   176,   177,   178,   182,   183,
     184,   185,   186,   187,   191,   195,   196,   198,   201,   202,
     202,   209,   214,   218,   219,   220,   224,   225,   229,   230,
     234,   238,   239,   242,   246,   247,   248,   251,   255,   256,
     260,   261,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   281,   282,   286,   287,   289,
     292,   293,   294,   295,   298,   301,   304,   308,   311,   315,
     316,   319,   322,   326,   327,   329,   332,   333,   335,   337,
     340,   341,   343,   346,   347,   349,   352,   353,   355,   355,
     357,   360,   361,   364,   365,   370,   371,   375,   376,   379,
     382,   385,   389,   390,   393,   397,   398,   402,   403,   406,
     410,   411,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   428,   430,   434,   435,   443,   447,   448,
     450,   452,   453,   455,   457,   458,   460,   460,   462,   465,
     466,   468,   468,   470,   472,   473,   475,   475,   475,   475,
     475,   477,   477,   478,   478,   478,   480,   482,   483,   485,
     486,   489,   490,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   494,   495,   496,   500,   501,   504,   505,   507,
     508,   508,   508,   511,   512,   515,   516,   519,   519,   520,
     520,   522,   524,   525,   528,   528,   531,   532,   535,   536,
     538,   540,   544,   545,   555,   556,   559,   563,   564,   572,
     574,   575,   576,   578,   580,   581,   584,   584,   584,   584,
     584,   587,   588,   590,   590,   591,   594,   595,   597,   600,
     601,   603,   604,   610,   611,   614,   617,   620,   620,   623,
     624
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
  "funcdef", "opc_RARROW_test", "parameters", "opc_argslist", "$@1",
  "expr_stmt", "expr_stmt_1", "expr_stmt_2", "fk_EQ_YE_TSE", "expr_stmt_3",
  "expr_stmt_4", "annassign", "opc_EQUAL_MALUCO", "testlist_star_expr",
  "TSE_stmt", "fk_COMMA_T_SE", "augassign", "opc_SEMI", "opc_COMMA",
  "del_stmt", "flow_stmt", "pass_stmt", "break_stmt", "continue_stmt",
  "return_stmt", "yield_stmt", "opc_testlist_star_expr", "global_stmt",
  "nonlocal_stmt", "fk_COMMA_NAME", "if_stmt", "fk_ELIF_NT_COLON_SUITE",
  "while_stmt", "for_stmt", "opc_ELSE_COLON_suite", "with_stmt",
  "fk_COMMA_WI", "with_item", "opc_AS_expr", "suite", "namedexpr_test",
  "opc_COLONEQUAL_test", "test", "opc_IF_or_test_ELSE_test", "test_nocond",
  "lambdef", "lambdef_nocond", "or_test", "fk_OR_AT", "and_test",
  "fk_AND_NT", "not_test", "comparison", "fk_CO_EXPR", "comp_op",
  "star_expr", "expr", "fk_VBAR_XE", "xor_expr", "fk_CIRCUMFLEX_EXPR",
  "and_expr", "fk_AMPER_SE", "shift_expr", "fk_LS_RS_AE", "SE_stmt",
  "arith_expr", "fk_T_PLUS_MINUS", "AE_stmt", "term", "fk_MATH",
  "term_stmt", "factor", "factor_stmt", "power", "opc_DOUBLESTAR_factor",
  "atom_expr", "fk_trailer", "atom", "opc_atom_stmt", "opc_testlist_comp",
  "fk_STRING", "testlist_comp", "trailer", "opc_arglist", "fk_COMMA_NT_SE",
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

#define YYPACT_NINF (-316)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-240)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     299,     1,     9,    24,   695,   655,  -316,  -316,   180,   655,
    -316,  -316,  -316,   655,   608,    19,    26,    30,  -316,   180,
      45,  -316,  -316,    36,  -316,   540,   608,  -316,  -316,   715,
    -316,  -316,    83,     0,   299,  -316,  -316,    48,  -316,  -316,
    -316,    66,    50,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,    91,    93,
      97,  -316,  -316,   103,    53,    46,    59,   -29,    44,    -8,
     715,  -316,    47,    -6,  -316,  -316,    75,    77,    74,    76,
    -316,    80,    34,  -316,  -316,   113,    85,    89,    90,   134,
    -316,  -316,   655,  -316,  -316,  -316,   107,   107,  -316,    -6,
      36,  -316,  -316,  -316,   114,  -316,    31,  -316,   116,  -316,
    -316,  -316,  -316,  -316,   464,   117,   655,   540,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,   104,  -316,   635,   608,   123,   695,  -316,
     695,  -316,   695,  -316,   147,   165,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,   715,   715,  -316,   715,  -316,
     715,  -316,  -316,  -316,  -316,   715,  -316,  -316,  -316,   715,
    -316,  -316,  -316,  -316,  -316,  -316,   715,  -316,   715,  -316,
     567,   655,   139,  -316,    -6,   498,   130,    24,    92,   131,
     655,   388,   655,  -316,   655,   180,   123,   388,   655,   135,
     715,  -316,  -316,   144,  -316,  -316,  -316,  -316,  -316,  -316,
     608,   123,  -316,  -316,   167,  -316,   299,  -316,   146,   141,
    -316,  -316,  -316,  -316,  -316,   150,  -316,  -316,    50,  -316,
    -316,   177,    93,    97,  -316,  -316,   103,    53,    46,    59,
     -29,    44,    -8,  -316,   655,   655,    14,   158,  -316,   156,
     159,   162,   157,   163,  -316,  -316,  -316,   169,   388,   170,
     655,   164,    24,  -316,   175,  -316,   198,  -316,   173,    85,
    -316,   210,    90,   388,  -316,   107,   176,  -316,   180,  -316,
    -316,  -316,   540,  -316,   655,   123,  -316,   655,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,   655,
     655,  -316,  -316,  -316,   567,   123,  -316,   655,   123,   655,
    -316,  -316,  -316,  -316,   430,  -316,   354,   655,   210,   388,
    -316,   179,  -316,  -316,  -316,  -316,  -316,   209,  -316,  -316,
     150,  -316,  -316,  -316,  -316,   156,  -316,   157,  -316,  -316,
     181,   189,  -316,  -316,   354,   186,  -316,   210,   388,   695,
    -316,  -316,  -316,   655,  -316,  -316,   354,   354,   193,   388,
    -316,  -316,    33,  -316,   354,  -316,  -316,   198,   675,  -316,
    -316,  -316,  -316,   194,  -316,    24,    33,  -316,  -316,  -316,
     192,  -316,   675,  -316
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    28,     0,     0,   180,   181,     0,     0,
      74,    75,    76,     0,    79,   243,     0,     0,   179,     0,
       0,   175,   176,   187,     5,   182,   185,   163,   164,     0,
     165,   178,     0,     0,     3,     6,     7,    10,     8,    22,
      12,    38,    50,    13,    15,    14,    70,    71,    72,    73,
      16,    17,    18,    19,    20,    21,    48,   104,   105,   112,
     115,   118,    49,   120,   135,   138,   141,   144,   149,   154,
       0,   162,   167,   171,    23,    78,   220,     0,    31,     0,
     117,     0,   101,   215,   214,     0,   212,     0,    93,    96,
      80,    77,     0,   246,   242,   244,    83,    83,    69,   171,
     187,   177,   197,   198,     0,   184,   195,   183,     0,   186,
     133,     1,     2,     4,     0,    65,     0,     0,    52,    53,
      54,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      55,    32,    35,    38,    33,     0,     0,    67,     0,   103,
       0,   111,     0,   114,     0,   131,   129,   122,   123,   127,
     124,   128,   126,   125,   119,     0,     0,   134,     0,   137,
       0,   140,   146,   147,   143,     0,   151,   152,   148,     0,
     156,   158,   159,   160,   157,   153,     0,   161,     0,   166,
     193,   206,     0,   169,   171,     0,     0,    28,    25,     0,
       0,     0,     0,   100,     0,     0,    67,     0,     0,     0,
       0,    95,   245,     0,    81,    82,   170,   188,   173,   240,
       0,    67,   189,   199,     0,   174,     3,    66,     0,    44,
      40,    42,    41,    39,    34,   217,    37,    36,    50,    68,
      47,     0,   112,   115,   130,   132,   120,   135,   138,   141,
     144,   149,   154,   168,     0,     0,   231,     0,   194,   224,
     204,     0,   202,     0,   192,   172,   221,     0,     0,     0,
       0,     0,    28,   109,     0,    98,    86,   102,     0,   212,
     211,    90,    93,     0,    97,    83,   195,   200,     0,   238,
      11,     9,     0,    43,     0,    67,    51,     0,   113,   116,
     121,   136,   139,   142,   145,   150,   155,   230,   229,     0,
       0,   226,   232,   190,     0,    67,   191,   206,    67,   206,
     222,   219,    27,    26,     0,    30,     0,     0,    90,     0,
     213,     0,    88,    94,    92,    84,   196,     0,    46,    45,
     217,   216,   106,   228,   227,   224,   223,   202,   201,   207,
     208,     0,   247,    24,   249,     0,    85,    90,     0,     0,
     218,   225,   203,   206,   205,   209,     0,   249,     0,     0,
      89,    91,   236,   210,   249,   250,    99,    86,     0,   237,
     235,   233,   234,     0,    87,    28,   236,   108,   107,   248,
       0,   241,     0,   110
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -316,  -316,   -24,  -316,  -262,  -160,  -316,   124,  -316,  -316,
    -316,  -316,  -174,  -316,  -316,  -316,  -316,   110,  -316,  -316,
    -316,  -316,   -12,   108,    17,  -316,  -316,  -177,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,   -80,  -316,
    -121,  -316,  -316,  -280,  -316,   -25,    51,  -316,  -182,    -4,
    -316,    -5,  -316,  -134,  -316,  -316,  -126,    20,   111,    21,
      10,  -316,    22,  -316,    -1,     3,    16,   101,    23,   102,
      25,    99,    27,  -316,    98,    28,  -316,   105,    38,  -316,
     -44,  -316,  -316,  -316,  -316,   -70,   242,  -316,  -316,   168,
     246,  -316,  -316,    -3,    65,  -316,  -316,   -61,   -23,  -279,
    -316,  -316,   -13,    18,    88,    84,   -45,  -316,  -316,   106,
     -49,   -15,  -316,  -316,  -316,   -88,   -90,  -316,  -316,   -16,
    -316,  -316,  -316,  -315
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,    35,    36,   115,    37,    38,    39,
     261,   188,    79,   189,    40,   131,   224,   132,   133,   220,
     134,   283,    41,    42,   137,   135,   218,   230,    43,    44,
      45,    46,    47,    48,    49,    91,    50,    51,   204,    52,
     318,    53,    54,   322,    55,   199,    88,   201,   266,   102,
     193,    56,   139,   376,    57,   377,    58,   141,    59,   143,
      60,    61,   154,   155,    62,    63,   157,    64,   159,    65,
     161,    66,   164,   165,    67,   168,   169,    68,   175,   176,
      69,    70,    71,   179,    72,   183,    73,   104,   108,   101,
     105,   184,   247,   211,   106,   212,   251,   308,   252,   253,
     354,   355,    85,   196,    86,   226,   285,    74,   186,   248,
     305,   249,   301,   369,   279,   370,   371,   214,   372,    75,
      94,    95,   343,   358
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,    81,    90,    93,    82,    87,    98,    83,    89,   107,
     113,    84,   231,   259,    80,   271,   213,   205,    83,   270,
      82,    82,    84,    92,   103,   103,   177,     3,     4,   206,
     340,   265,   110,  -239,   277,     6,     7,   265,   346,   180,
      76,   181,   365,   162,   163,   368,   170,   171,    77,   373,
    -239,   209,  -239,    18,   344,   172,   182,    20,    21,    22,
      23,     6,     7,    78,    25,    96,    26,   360,   209,    97,
     209,    27,    28,    29,   363,   299,   311,   100,   173,    18,
     174,   210,   357,   111,    21,    22,    23,   202,   315,    30,
      25,   324,    26,   112,   364,   357,   166,   167,   265,   114,
     136,   222,   357,   138,   140,   221,   300,   142,   331,   156,
      31,   219,   144,   265,   255,   116,   160,   158,   145,   227,
     185,   178,   187,   146,   -29,   190,   192,   117,   336,   191,
     225,   338,   242,   194,   243,   195,    31,   347,   197,   200,
     198,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   233,   129,   342,   130,   302,   203,   236,   265,
     208,   147,   148,   149,   215,   117,   361,   234,   217,   150,
     151,   152,   153,   229,   235,   246,   250,   367,   254,   258,
     246,   262,   260,   275,   273,   263,   278,   267,   265,   225,
     281,   287,   280,    89,    83,   325,     6,     7,    84,   265,
     284,   380,   282,   274,   303,    82,   304,   307,  -207,   103,
     306,   317,   309,   314,    18,   310,   312,   316,    20,    21,
      22,    23,   319,   362,   321,    25,   210,    26,   348,   349,
     353,   356,    27,    28,    29,   359,   366,   379,   216,   297,
     298,   382,   378,   223,   228,   286,   374,   323,   383,   272,
      30,   232,   288,   291,   289,   313,   378,   237,   290,   239,
     238,   292,    99,   240,   293,   327,   329,   294,   207,   295,
     328,    31,   109,   326,   241,   276,   352,    83,   268,   330,
     296,    84,   332,   269,   337,   350,   351,   320,   381,   335,
       0,   257,     0,     0,   333,   334,     0,     0,     0,   246,
       0,     0,   250,     0,   339,     1,     2,     3,     4,     0,
       0,     5,    82,   345,     0,     6,     7,     0,     8,     0,
       9,    10,    11,    12,     0,     0,     0,    13,    14,     0,
      15,    16,    17,    18,    19,     0,     0,    20,    21,    22,
      23,     0,     0,    24,    25,     0,    26,     0,   339,     0,
       0,    27,    28,    29,     0,     0,     0,     0,     0,     0,
       1,     2,     3,     4,     0,     0,     5,     0,     0,    30,
       6,     7,     0,     8,     0,     9,    10,    11,    12,     0,
       0,     0,    13,    14,     0,    15,    16,    17,    18,    19,
      31,     0,    20,    21,    22,    23,     3,     4,     0,    25,
       0,    26,     0,     0,     6,     7,    27,    28,    29,     0,
      10,    11,    12,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    30,     0,    20,    21,    22,    23,
       0,     0,   264,    25,     0,    26,     0,     0,     3,     4,
      27,    28,    29,     0,     0,    31,     6,     7,     0,     0,
       0,     0,    10,    11,    12,     0,     0,     0,    30,    14,
       0,    15,    16,    17,    18,    19,     0,     0,    20,    21,
      22,    23,     3,     4,   341,    25,     0,    26,     0,    31,
       6,     7,    27,    28,    29,     0,    10,    11,    12,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      30,     0,    20,    21,    22,    23,     3,     4,     0,    25,
       0,    26,     0,     0,     6,     7,    27,    28,    29,     0,
       0,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,    30,     0,    20,    21,    22,    23,
       0,     0,     0,    25,   256,    26,     0,     0,     3,     4,
      27,    28,   244,     0,     0,    31,     6,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,     0,
       0,    15,   245,     0,    18,     3,     4,     0,    20,    21,
      22,    23,     0,     6,     7,    25,     0,    26,     0,    31,
       0,     0,    27,    28,    29,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     0,    20,    21,    22,    23,     0,
      30,     0,    25,     0,    26,     0,     3,     4,     0,    27,
      28,   244,     0,     0,     6,     7,     0,     0,     0,     0,
       0,    31,     0,     0,     0,     0,     0,    30,     0,     0,
       0,   245,    18,     3,     4,     0,    20,    21,    22,    23,
       0,     6,     7,    25,     0,    26,     0,     0,    31,     0,
      27,    28,    29,     3,     4,     0,    15,     0,     0,    18,
       0,     6,     7,    20,    21,    22,    23,     0,    30,     0,
      25,     0,    26,   375,     4,     0,     0,    27,    28,    18,
       0,     6,     7,    20,    21,    22,    23,     0,     0,    31,
      25,     0,    26,     0,     4,    30,     0,    27,    28,    18,
       0,     6,     7,    20,    21,    22,    23,     0,     0,     0,
      25,     0,    26,     0,     0,    30,    31,    27,    28,    18,
       0,     6,     7,    20,    21,    22,    23,     0,     0,     0,
      25,     0,    26,     0,     0,    30,    31,    27,    28,    18,
       0,     0,     0,    20,    21,    22,    23,     0,     0,     0,
      25,     0,    26,     0,     0,    30,    31,    27,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31
};

static const yytype_int16 yycheck[] =
{
       5,     5,    14,    15,     9,     9,    19,     8,    13,    25,
      34,     8,   138,   187,     4,   197,   106,    97,    19,   196,
      25,    26,    19,     4,    25,    26,    70,     8,     9,    99,
     309,   191,    29,    19,   211,    16,    17,   197,   318,    45,
      39,    47,   357,    72,    73,    12,    54,    55,    39,   364,
      19,    37,    19,    34,   316,    63,    62,    38,    39,    40,
      41,    16,    17,    39,    45,    39,    47,   347,    37,    39,
      37,    52,    53,    54,   353,    61,   258,    41,    86,    34,
      88,    50,   344,     0,    39,    40,    41,    92,   262,    70,
      45,   273,    47,    93,   356,   357,    52,    53,   258,    51,
      50,   117,   364,    12,    11,   117,    92,    10,   285,    56,
      91,   116,     9,   273,   184,    49,    57,    71,    15,   135,
      45,    74,    45,    20,    50,    49,    92,    61,   305,    49,
     135,   308,   176,    20,   178,    50,    91,   319,    49,     5,
      50,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,   142,    87,   314,    89,   246,    50,   155,   319,
      46,    58,    59,    60,    48,    61,   348,    20,    51,    66,
      67,    68,    69,    50,     9,   180,   181,   359,    39,    49,
     185,    50,    90,    39,    49,   190,    19,   192,   348,   194,
      44,    14,   216,   198,   195,   275,    16,    17,   195,   359,
      50,   375,    61,   200,    46,   210,    50,    50,    49,   210,
      48,    13,    49,    49,    34,    46,    46,    42,    38,    39,
      40,    41,    49,   349,    14,    45,    50,    47,    49,    20,
      49,    42,    52,    53,    54,    49,    43,    43,   114,   244,
     245,    49,   368,   133,   136,   228,   367,   272,   382,   198,
      70,   140,   232,   237,   233,   260,   382,   156,   236,   160,
     158,   238,    20,   165,   239,   278,   282,   240,   100,   241,
     282,    91,    26,   276,   169,   210,   337,   278,   194,   284,
     242,   278,   287,   195,   307,   330,   335,   269,   376,   304,
      -1,   185,    -1,    -1,   299,   300,    -1,    -1,    -1,   304,
      -1,    -1,   307,    -1,   309,     6,     7,     8,     9,    -1,
      -1,    12,   317,   317,    -1,    16,    17,    -1,    19,    -1,
      21,    22,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    -1,    38,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    47,    -1,   353,    -1,
      -1,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    -1,    -1,    70,
      16,    17,    -1,    19,    -1,    21,    22,    23,    24,    -1,
      -1,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
      91,    -1,    38,    39,    40,    41,     8,     9,    -1,    45,
      -1,    47,    -1,    -1,    16,    17,    52,    53,    54,    -1,
      22,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    70,    -1,    38,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    47,    -1,    -1,     8,     9,
      52,    53,    54,    -1,    -1,    91,    16,    17,    -1,    -1,
      -1,    -1,    22,    23,    24,    -1,    -1,    -1,    70,    29,
      -1,    31,    32,    33,    34,    35,    -1,    -1,    38,    39,
      40,    41,     8,     9,    44,    45,    -1,    47,    -1,    91,
      16,    17,    52,    53,    54,    -1,    22,    23,    24,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      70,    -1,    38,    39,    40,    41,     8,     9,    -1,    45,
      -1,    47,    -1,    -1,    16,    17,    52,    53,    54,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    70,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    -1,    -1,     8,     9,
      52,    53,    54,    -1,    -1,    91,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    31,    74,    -1,    34,     8,     9,    -1,    38,    39,
      40,    41,    -1,    16,    17,    45,    -1,    47,    -1,    91,
      -1,    -1,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    38,    39,    40,    41,    -1,
      70,    -1,    45,    -1,    47,    -1,     8,     9,    -1,    52,
      53,    54,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    74,    34,     8,     9,    -1,    38,    39,    40,    41,
      -1,    16,    17,    45,    -1,    47,    -1,    -1,    91,    -1,
      52,    53,    54,     8,     9,    -1,    31,    -1,    -1,    34,
      -1,    16,    17,    38,    39,    40,    41,    -1,    70,    -1,
      45,    -1,    47,     8,     9,    -1,    -1,    52,    53,    34,
      -1,    16,    17,    38,    39,    40,    41,    -1,    -1,    91,
      45,    -1,    47,    -1,     9,    70,    -1,    52,    53,    34,
      -1,    16,    17,    38,    39,    40,    41,    -1,    -1,    -1,
      45,    -1,    47,    -1,    -1,    70,    91,    52,    53,    34,
      -1,    16,    17,    38,    39,    40,    41,    -1,    -1,    -1,
      45,    -1,    47,    -1,    -1,    70,    91,    52,    53,    34,
      -1,    -1,    -1,    38,    39,    40,    41,    -1,    -1,    -1,
      45,    -1,    47,    -1,    -1,    70,    91,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,     8,     9,    12,    16,    17,    19,    21,
      22,    23,    24,    28,    29,    31,    32,    33,    34,    35,
      38,    39,    40,    41,    44,    45,    47,    52,    53,    54,
      70,    91,    96,    97,    98,    99,   100,   102,   103,   104,
     109,   117,   118,   123,   124,   125,   126,   127,   128,   129,
     131,   132,   134,   136,   137,   139,   146,   149,   151,   153,
     155,   156,   159,   160,   162,   164,   166,   169,   172,   175,
     176,   177,   179,   181,   202,   214,    39,    39,    39,   107,
     155,   144,   146,   159,   160,   197,   199,   144,   141,   146,
     117,   130,     4,   117,   215,   216,    39,    39,   197,   181,
      41,   184,   144,   159,   182,   185,   189,   214,   183,   185,
     160,     0,    93,    97,    51,   101,    49,    61,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    87,
      89,   110,   112,   113,   115,   120,    50,   119,    12,   147,
      11,   152,    10,   154,     9,    15,    20,    58,    59,    60,
      66,    67,    68,    69,   157,   158,    56,   161,    71,   163,
      57,   165,    72,    73,   167,   168,    52,    53,   170,   171,
      54,    55,    63,    86,    88,   173,   174,   175,    74,   178,
      45,    47,    62,   180,   186,    45,   203,    45,   106,   108,
      49,    49,    92,   145,    20,    50,   198,    49,    50,   140,
       5,   142,   146,    50,   133,   133,   180,   184,    46,    37,
      50,   188,   190,   211,   212,    48,   102,    51,   121,   146,
     114,   117,   214,   112,   111,   146,   200,   214,   118,    50,
     122,   151,   153,   155,    20,     9,   160,   162,   164,   166,
     169,   172,   175,   175,    54,    74,   146,   187,   204,   206,
     146,   191,   193,   194,    39,   180,    46,   204,    49,   107,
      90,   105,    50,   146,    44,   100,   143,   146,   200,   199,
     122,   143,   141,    49,   160,    39,   189,   122,    19,   209,
      97,    44,    61,   116,    50,   201,   119,    14,   152,   154,
     157,   161,   163,   165,   167,   170,   173,   146,   146,    61,
      92,   207,   211,    46,    50,   205,    48,    50,   192,    49,
      46,   143,    46,   146,    49,   107,    42,    13,   135,    49,
     198,    14,   138,   140,   143,   133,   188,   197,   117,   214,
     146,   122,   146,   146,   146,   206,   122,   193,   122,   146,
     194,    44,   100,   217,    99,   144,   138,   143,    49,    20,
     201,   205,   192,    49,   195,   196,    42,    99,   218,    49,
     138,   143,   151,   194,    99,   218,    43,   143,    12,   208,
     210,   211,   213,   218,   135,     8,   148,   150,   151,    43,
     107,   210,    49,   148
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    97,    97,    98,    98,    99,    99,   100,
     101,   101,   102,   102,   102,   102,   102,   102,   103,   103,
     103,   103,   103,   103,   104,   105,   105,   106,   107,   108,
     107,   107,   109,   110,   110,   110,   111,   111,   112,   112,
     113,   114,   114,   115,   116,   116,   116,   117,   118,   118,
     119,   119,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   121,   121,   122,   122,   123,
     124,   124,   124,   124,   125,   126,   127,   128,   129,   130,
     130,   131,   132,   133,   133,   134,   135,   135,   136,   137,
     138,   138,   139,   140,   140,   141,   142,   142,   143,   143,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     150,   151,   152,   152,   153,   154,   154,   155,   155,   156,
     157,   157,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   159,   160,   161,   161,   162,   163,   163,
     164,   165,   165,   166,   167,   167,   168,   168,   169,   170,
     170,   171,   171,   172,   173,   173,   174,   174,   174,   174,
     174,   175,   175,   176,   176,   176,   177,   178,   178,   179,
     179,   180,   180,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   182,   182,   182,   183,   183,   184,   184,   185,
     186,   186,   186,   187,   187,   188,   188,   189,   189,   190,
     190,   191,   192,   192,   193,   193,   194,   194,   195,   195,
     196,   197,   198,   198,   199,   199,   200,   201,   201,   202,
     203,   203,   203,   204,   205,   205,   206,   206,   206,   206,
     206,   207,   207,   208,   208,   209,   210,   210,   211,   212,
     212,   213,   214,   215,   215,   216,   216,   217,   217,   218,
     218
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     2,     1,     1,     1,     1,     4,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     6,     0,     2,     3,     0,     0,
       4,     1,     2,     1,     2,     1,     1,     1,     0,     2,
       2,     1,     1,     3,     0,     2,     2,     3,     1,     1,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     0,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     0,
       1,     3,     3,     0,     3,     6,     0,     5,     5,     7,
       0,     3,     5,     0,     3,     2,     0,     2,     1,     5,
       2,     0,     2,     2,     1,     0,     4,     1,     1,     4,
       4,     2,     0,     3,     2,     0,     3,     2,     1,     2,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     2,     2,     0,     3,     2,     0,     3,
       2,     0,     3,     2,     0,     3,     1,     1,     2,     0,
       3,     1,     1,     2,     0,     3,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     2,     0,     2,     2,
       3,     0,     2,     3,     3,     1,     1,     2,     1,     1,
       1,     1,     0,     1,     1,     0,     1,     0,     2,     2,
       3,     3,     2,     0,     1,     0,     3,     1,     1,     1,
       2,     3,     0,     3,     1,     4,     0,     1,     0,     1,
       2,     3,     0,     3,     1,     1,     3,     0,     3,     5,
       0,     2,     3,     3,     0,     3,     2,     3,     3,     2,
       2,     0,     1,     1,     1,     5,     0,     1,     2,     0,
       1,     3,     2,     0,     1,     2,     1,     1,     5,     0,
       2
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
#line 2066 "parser.c"
    break;

  case 3:
#line 144 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 2072 "parser.c"
    break;

  case 4:
#line 145 "parser.y"
                            { 
  if(get_child_count(yyvsp[0]) == 0){
    yyvsp[0] = new_subtree(BLOCK_NODE, 1, yyvsp[0]); 
  }; 
  add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; 
}
#line 2083 "parser.c"
    break;

  case 6:
#line 153 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2089 "parser.c"
    break;

  case 7:
#line 156 "parser.y"
                  { yyval == yyvsp[0]; }
#line 2095 "parser.c"
    break;

  case 8:
#line 156 "parser.y"
                                                 { yyval == yyvsp[0]; }
#line 2101 "parser.c"
    break;

  case 9:
#line 157 "parser.y"
                                                              { 
    add_child(yyvsp[-3], yyvsp[-2]); yyval = yyvsp[-3]; 
}
#line 2109 "parser.c"
    break;

  case 10:
#line 163 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 2115 "parser.c"
    break;

  case 11:
#line 164 "parser.y"
                                      { 
  if (get_child_count(yyvsp[0]) == 0) {
    yyvsp[0] = new_subtree(SMALL_STMT_NODE, 1, yyvsp[0]); 
  }; 
  add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; 
}
#line 2126 "parser.c"
    break;

  case 12:
#line 173 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2132 "parser.c"
    break;

  case 13:
#line 174 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2138 "parser.c"
    break;

  case 14:
#line 175 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2144 "parser.c"
    break;

  case 15:
#line 176 "parser.y"
                  { yyval = new_subtree(SUB_NODE, 0); }
#line 2150 "parser.c"
    break;

  case 16:
#line 177 "parser.y"
                  { yyval = new_subtree(SUB_NODE, 0); }
#line 2156 "parser.c"
    break;

  case 17:
#line 178 "parser.y"
                  { yyval = new_subtree(SUB_NODE, 0); }
#line 2162 "parser.c"
    break;

  case 18:
#line 182 "parser.y"
              { yyval = new_subtree(SUB_NODE, 0); }
#line 2168 "parser.c"
    break;

  case 19:
#line 183 "parser.y"
              { yyval = new_subtree(SUB_NODE, 0); }
#line 2174 "parser.c"
    break;

  case 20:
#line 184 "parser.y"
              { yyval = new_subtree(SUB_NODE, 0); }
#line 2180 "parser.c"
    break;

  case 21:
#line 185 "parser.y"
              { yyval = new_subtree(SUB_NODE, 0); }
#line 2186 "parser.c"
    break;

  case 22:
#line 186 "parser.y"
              { yyval = new_subtree(SUB_NODE, 0); }
#line 2192 "parser.c"
    break;

  case 23:
#line 187 "parser.y"
              { yyval = new_subtree(SUB_NODE, 0); }
#line 2198 "parser.c"
    break;

  case 28:
#line 201 "parser.y"
          { yyval = new_node(LOW_NODE, ""); }
#line 2204 "parser.c"
    break;

  case 29:
#line 202 "parser.y"
         { yyvsp[0] = new_name(); }
#line 2210 "parser.c"
    break;

  case 30:
#line 202 "parser.y"
                                                 {
    if(get_child_count(yyvsp[0]) == 0){
      yyvsp[0] = new_subtree(NAME_NODE_LIST, 1, yyvsp[0]); 
    }; 
    add_child(yyvsp[0], yyvsp[-3]);
    yyval = yyvsp[0];
}
#line 2222 "parser.c"
    break;

  case 31:
#line 209 "parser.y"
         { yyval = new_name(); }
#line 2228 "parser.c"
    break;

  case 32:
#line 214 "parser.y"
                                          { add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; }
#line 2234 "parser.c"
    break;

  case 33:
#line 218 "parser.y"
                          { yyval = yyvsp[0]; }
#line 2240 "parser.c"
    break;

  case 34:
#line 219 "parser.y"
                          { add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; }
#line 2246 "parser.c"
    break;

  case 35:
#line 220 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2252 "parser.c"
    break;

  case 36:
#line 224 "parser.y"
              { yyval = yyvsp[0]; }
#line 2258 "parser.c"
    break;

  case 37:
#line 225 "parser.y"
              { yyval = yyvsp[0]; }
#line 2264 "parser.c"
    break;

  case 38:
#line 229 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2270 "parser.c"
    break;

  case 39:
#line 230 "parser.y"
                              { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2276 "parser.c"
    break;

  case 40:
#line 234 "parser.y"
                                { yyval = new_subtree(EQ_NODE, 1, yyvsp[0]); }
#line 2282 "parser.c"
    break;

  case 41:
#line 238 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2288 "parser.c"
    break;

  case 42:
#line 239 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2294 "parser.c"
    break;

  case 43:
#line 242 "parser.y"
                                        { yyval = new_subtree(ANNASSIGN_NODE, 2, yyvsp[-1], yyvsp[0]); }
#line 2300 "parser.c"
    break;

  case 44:
#line 246 "parser.y"
                              { yyval = new_node(LOW_NODE, ""); }
#line 2306 "parser.c"
    break;

  case 45:
#line 247 "parser.y"
                              { yyval = new_subtree(EQ_NODE, 1, yyvsp[0]); }
#line 2312 "parser.c"
    break;

  case 46:
#line 248 "parser.y"
                              { yyval = new_subtree(EQ_NODE, 1, yyvsp[0]); }
#line 2318 "parser.c"
    break;

  case 47:
#line 251 "parser.y"
                                                     { add_child(yyvsp[-2], yyvsp[-1]); yyval = yyvsp[-2]; }
#line 2324 "parser.c"
    break;

  case 48:
#line 255 "parser.y"
            { yyval = yyvsp[0]; }
#line 2330 "parser.c"
    break;

  case 49:
#line 256 "parser.y"
            { yyval = yyvsp[0]; }
#line 2336 "parser.c"
    break;

  case 50:
#line 260 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 2342 "parser.c"
    break;

  case 51:
#line 261 "parser.y"
                                  { yyval = new_subtree(TSE_NODE, 2, yyvsp[-1], yyvsp[0]); }
#line 2348 "parser.c"
    break;

  case 52:
#line 265 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2354 "parser.c"
    break;

  case 53:
#line 266 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2360 "parser.c"
    break;

  case 54:
#line 267 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2366 "parser.c"
    break;

  case 55:
#line 268 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2372 "parser.c"
    break;

  case 56:
#line 269 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2378 "parser.c"
    break;

  case 57:
#line 270 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2384 "parser.c"
    break;

  case 58:
#line 271 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2390 "parser.c"
    break;

  case 59:
#line 272 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2396 "parser.c"
    break;

  case 60:
#line 273 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2402 "parser.c"
    break;

  case 61:
#line 274 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2408 "parser.c"
    break;

  case 62:
#line 275 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2414 "parser.c"
    break;

  case 63:
#line 276 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2420 "parser.c"
    break;

  case 64:
#line 277 "parser.y"
                      { Token token = get_last_token(); yyval = new_node(OP_EQUAL_NODE, token.lexeme); }
#line 2426 "parser.c"
    break;

  case 70:
#line 292 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2432 "parser.c"
    break;

  case 71:
#line 293 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2438 "parser.c"
    break;

  case 72:
#line 294 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2444 "parser.c"
    break;

  case 73:
#line 295 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2450 "parser.c"
    break;

  case 74:
#line 298 "parser.y"
                { Token token = get_last_token(); yyval = new_node(FLOW_NODE, token.lexeme); }
#line 2456 "parser.c"
    break;

  case 75:
#line 301 "parser.y"
                  { Token token = get_last_token(); yyval = new_node(FLOW_NODE, token.lexeme); }
#line 2462 "parser.c"
    break;

  case 76:
#line 304 "parser.y"
                        { Token token = get_last_token(); yyval = new_node(FLOW_NODE, token.lexeme); }
#line 2468 "parser.c"
    break;

  case 77:
#line 308 "parser.y"
                                            { yyval = new_subtree(RETURN_NODE, 1, yyvsp[-1]); }
#line 2474 "parser.c"
    break;

  case 78:
#line 311 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2480 "parser.c"
    break;

  case 79:
#line 315 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 2486 "parser.c"
    break;

  case 80:
#line 316 "parser.y"
                        {yyval = yyvsp[0]; }
#line 2492 "parser.c"
    break;

  case 83:
#line 326 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2498 "parser.c"
    break;

  case 86:
#line 332 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2504 "parser.c"
    break;

  case 90:
#line 340 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2510 "parser.c"
    break;

  case 93:
#line 346 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2516 "parser.c"
    break;

  case 96:
#line 352 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2522 "parser.c"
    break;

  case 101:
#line 360 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2528 "parser.c"
    break;

  case 103:
#line 364 "parser.y"
                                    { yyval = yyvsp[-1]; }
#line 2534 "parser.c"
    break;

  case 104:
#line 365 "parser.y"
                                    { yyval = yyvsp[0]; }
#line 2540 "parser.c"
    break;

  case 105:
#line 370 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 2546 "parser.c"
    break;

  case 106:
#line 371 "parser.y"
                          { yyval = new_subtree(IF_ELSE_NODE, 2, yyvsp[-2], yyvsp[0]); }
#line 2552 "parser.c"
    break;

  case 107:
#line 375 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2558 "parser.c"
    break;

  case 108:
#line 376 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2564 "parser.c"
    break;

  case 109:
#line 379 "parser.y"
                                        { yyval = new_subtree(LAMBDA_NODE, 2, yyvsp[-2], yyvsp[0]); }
#line 2570 "parser.c"
    break;

  case 110:
#line 382 "parser.y"
                                                      { yyval = new_subtree(LAMBDA_NODE, 2, yyvsp[-2], yyvsp[0]); }
#line 2576 "parser.c"
    break;

  case 111:
#line 385 "parser.y"
                           { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2582 "parser.c"
    break;

  case 112:
#line 389 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2588 "parser.c"
    break;

  case 113:
#line 390 "parser.y"
                         { yyval = new_subtree(OR_NODE, 2, yyvsp[-1], yyvsp[0]); }
#line 2594 "parser.c"
    break;

  case 114:
#line 393 "parser.y"
                             { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2600 "parser.c"
    break;

  case 115:
#line 397 "parser.y"
         { yyval = new_node(LOW_NODE, ""); }
#line 2606 "parser.c"
    break;

  case 116:
#line 398 "parser.y"
                           { yyval = new_subtree(AND_NODE, 2, yyvsp[-1], yyvsp[0]); }
#line 2612 "parser.c"
    break;

  case 117:
#line 402 "parser.y"
                { yyval = new_subtree(NOT_NODE, 1, yyvsp[0]); }
#line 2618 "parser.c"
    break;

  case 118:
#line 403 "parser.y"
                { yyval = yyvsp[0]; }
#line 2624 "parser.c"
    break;

  case 119:
#line 406 "parser.y"
                            { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2630 "parser.c"
    break;

  case 120:
#line 410 "parser.y"
                              { yyval = new_subtree(LOW_NODE, 0); }
#line 2636 "parser.c"
    break;

  case 121:
#line 411 "parser.y"
                              { add_child(yyvsp[-2], yyvsp[-1]); add_child(yyvsp[-2], yyvsp[0]); yyval = yyvsp[-2]; }
#line 2642 "parser.c"
    break;

  case 122:
#line 415 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2648 "parser.c"
    break;

  case 123:
#line 416 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2654 "parser.c"
    break;

  case 124:
#line 417 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2660 "parser.c"
    break;

  case 125:
#line 418 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2666 "parser.c"
    break;

  case 126:
#line 419 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2672 "parser.c"
    break;

  case 127:
#line 420 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2678 "parser.c"
    break;

  case 128:
#line 421 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2684 "parser.c"
    break;

  case 129:
#line 422 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2690 "parser.c"
    break;

  case 130:
#line 423 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2696 "parser.c"
    break;

  case 131:
#line 424 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2702 "parser.c"
    break;

  case 132:
#line 425 "parser.y"
                    { Token token = get_last_token(); yyval = new_node(COMP_NODE, token.lexeme); }
#line 2708 "parser.c"
    break;

  case 133:
#line 428 "parser.y"
                     { yyval = new_subtree(STAR_NODE, 1, yyvsp[0]); }
#line 2714 "parser.c"
    break;

  case 134:
#line 430 "parser.y"
                          { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2720 "parser.c"
    break;

  case 135:
#line 434 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2726 "parser.c"
    break;

  case 136:
#line 435 "parser.y"
                             { 
  if (get_child_count(yyvsp[0]) == 0) {
    yyvsp[0] = new_subtree(VBAR_NODE, 1, yyvsp[0]); 
  }; 
  add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; 
}
#line 2737 "parser.c"
    break;

  case 137:
#line 443 "parser.y"
                                      { yyval = new_subtree(SUB_NODE, 0); }
#line 2743 "parser.c"
    break;

  case 138:
#line 447 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2749 "parser.c"
    break;

  case 141:
#line 452 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2755 "parser.c"
    break;

  case 144:
#line 457 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2761 "parser.c"
    break;

  case 149:
#line 465 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 2767 "parser.c"
    break;

  case 154:
#line 472 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 2773 "parser.c"
    break;

  case 167:
#line 482 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2779 "parser.c"
    break;

  case 171:
#line 489 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 2785 "parser.c"
    break;

  case 182:
#line 494 "parser.y"
          { yyval = new_node(LOW_NODE, ""); }
#line 2791 "parser.c"
    break;

  case 185:
#line 500 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2797 "parser.c"
    break;

  case 187:
#line 504 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 2803 "parser.c"
    break;

  case 193:
#line 511 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2809 "parser.c"
    break;

  case 195:
#line 515 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 2815 "parser.c"
    break;

  case 202:
#line 524 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 2821 "parser.c"
    break;

  case 206:
#line 531 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2827 "parser.c"
    break;

  case 208:
#line 535 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2833 "parser.c"
    break;

  case 211:
#line 540 "parser.y"
                                                 { yyval = new_subtree(EXPR_STMT_LIST_NODE, 2, yyvsp[-2], yyvsp[-1]); }
#line 2839 "parser.c"
    break;

  case 212:
#line 544 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 2845 "parser.c"
    break;

  case 213:
#line 545 "parser.y"
                                      { 
  if (get_child_count(yyvsp[0]) == 0) {
    yyvsp[0] = new_subtree(LIST_NODE, 1, yyvsp[0]); 
  }; 
  add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; 
}
#line 2856 "parser.c"
    break;

  case 214:
#line 555 "parser.y"
              { yyval = yyvsp[0]; }
#line 2862 "parser.c"
    break;

  case 215:
#line 556 "parser.y"
              { yyval = yyvsp[0]; }
#line 2868 "parser.c"
    break;

  case 216:
#line 559 "parser.y"
                                        { yyval = new_subtree(TEST_NODE_LIST, 2, yyvsp[-2], yyvsp[-1]); }
#line 2874 "parser.c"
    break;

  case 217:
#line 563 "parser.y"
                              { yyval = new_subtree(LOW_NODE, 0); }
#line 2880 "parser.c"
    break;

  case 218:
#line 564 "parser.y"
                              { 
  if (get_child_count(yyvsp[0]) == 0) {
    yyvsp[0] = new_subtree(LIST_NODE, 1, yyvsp[0]); 
  }; 
  add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; 
}
#line 2891 "parser.c"
    break;

  case 220:
#line 574 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2897 "parser.c"
    break;

  case 224:
#line 580 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 2903 "parser.c"
    break;

  case 231:
#line 587 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2909 "parser.c"
    break;

  case 236:
#line 594 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2915 "parser.c"
    break;

  case 239:
#line 600 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2921 "parser.c"
    break;

  case 242:
#line 604 "parser.y"
                                { 
  yyvsp[-1] = new_subtree(YIELD_EXPR_NODE, 1, yyvsp[0]); 
  yyval = yyvsp[-1]; 
}
#line 2930 "parser.c"
    break;

  case 243:
#line 610 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 2936 "parser.c"
    break;

  case 244:
#line 611 "parser.y"
              { yyval = yyvsp[0]; }
#line 2942 "parser.c"
    break;

  case 245:
#line 614 "parser.y"
            { 
  yyvsp[-1] = new_subtree(FROM_NODE, 1, yyvsp[0]); 
  yyval = yyvsp[-1]; 
}
#line 2951 "parser.c"
    break;

  case 246:
#line 617 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2957 "parser.c"
    break;

  case 249:
#line 623 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2963 "parser.c"
    break;


#line 2967 "parser.c"

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
#line 626 "parser.y"


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
