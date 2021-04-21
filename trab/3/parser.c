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
Token get_penultimate_token();
AST* tokenToAST(int kind);
AST* tokenToAST_2(int kind);
void check_vars(AST*arv);

void yyerror(char const *s);

StrTable *st;
VarTable *vt;

AST *root;

#line 97 "parser.c"

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
#define YYLAST   815

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  141
/* YYNRULES -- Number of rules.  */
#define YYNRULES  267
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  401

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
       0,   142,   142,   148,   149,   160,   161,   164,   164,   165,
     170,   171,   175,   176,   177,   178,   179,   180,   184,   185,
     186,   187,   188,   189,   193,   193,   199,   200,   200,   203,
     207,   208,   208,   215,   220,   224,   225,   226,   230,   231,
     235,   236,   240,   244,   245,   248,   252,   253,   254,   257,
     261,   262,   266,   267,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   287,   288,   292,
     293,   295,   298,   299,   300,   301,   304,   305,   306,   309,
     312,   316,   317,   320,   320,   323,   323,   327,   328,   328,
     336,   336,   345,   346,   346,   354,   358,   363,   364,   364,
     367,   377,   378,   386,   390,   391,   395,   396,   405,   415,
     416,   416,   422,   423,   427,   428,   432,   433,   436,   439,
     442,   451,   452,   455,   464,   465,   469,   470,   473,   482,
     483,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   500,   502,   506,   507,   515,   518,   519,   519,
     523,   526,   527,   527,   531,   535,   536,   540,   541,   544,
     553,   554,   558,   559,   562,   566,   567,   578,   579,   580,
     581,   582,   586,   587,   591,   592,   593,   596,   601,   602,
     602,   608,   609,   609,   614,   615,   619,   620,   621,   622,
     623,   623,   631,   632,   633,   634,   638,   639,   640,   644,
     645,   649,   650,   650,   658,   662,   663,   664,   668,   669,
     673,   674,   679,   680,   685,   686,   690,   694,   695,   700,
     701,   709,   710,   714,   715,   718,   721,   725,   726,   735,
     736,   739,   743,   744,   751,   751,   756,   757,   758,   761,
     770,   771,   777,   778,   779,   780,   781,   785,   786,   790,
     791,   794,   799,   800,   803,   807,   808,   811,   811,   817,
     823,   824,   827,   828,   832,   833,   843,   844
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
  "fk_COMMA_NAME", "$@6", "if_stmt", "$@7", "fk_ELIF_NT_COLON_SUITE",
  "$@8", "while_stmt", "for_stmt", "opc_ELSE_COLON_suite", "$@9",
  "with_stmt", "fk_COMMA_WI", "with_item", "opc_AS_expr", "suite",
  "namedexpr_test", "opc_COLONEQUAL_test", "$@10", "test",
  "opc_IF_or_test_ELSE_test", "test_nocond", "lambdef", "lambdef_nocond",
  "or_test", "fk_OR_AT", "and_test", "fk_AND_NT", "not_test", "comparison",
  "fk_CO_EXPR", "comp_op", "star_expr", "expr", "fk_VBAR_XE", "xor_expr",
  "fk_CIRCUMFLEX_EXPR", "$@11", "and_expr", "fk_AMPER_SE", "$@12",
  "shift_expr", "fk_LS_RS_AE", "SE_stmt", "arith_expr", "fk_T_PLUS_MINUS",
  "AE_stmt", "term", "fk_MATH", "term_stmt", "factor", "factor_stmt",
  "power", "opc_DOUBLESTAR_factor", "$@13", "atom_expr", "$@14",
  "fk_trailer", "atom", "$@15", "opc_atom_stmt", "opc_testlist_comp",
  "fk_STRING", "$@16", "testlist_comp", "trailer", "opc_arglist",
  "fk_COMMA_NT_SE", "trailer_stmt", "trailer_stmt_1", "subscriptlist",
  "fk_COMMA_S", "subscript", "opc_test", "opc_sliceop", "sliceop",
  "exprlist", "fk_COMMA_E_SE", "exprlist_stmt", "testlist",
  "fk_COMMA_test", "classdef", "$@17", "opc_LPAR_arglist_RPAR", "arglist",
  "fk_COMMA_A", "argument", "opc_comp_for", "comp_iter", "sync_comp_for",
  "opc_comp_iter", "comp_for", "opc_ASYNC", "comp_if", "$@18",
  "yield_expr", "opc_yield_arg", "yield_arg", "func_body_suite", "fk_stmt", YY_NULLPTR
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

#define YYPACT_NINF (-321)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-256)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     280,   -17,     4,    13,   178,  -321,  -321,  -321,   697,   657,
    -321,  -321,  -321,   657,   610,    24,    18,    29,  -321,   697,
    -321,  -321,  -321,  -321,  -321,   542,   610,  -321,  -321,   724,
    -321,  -321,    74,    -7,   280,  -321,  -321,    31,  -321,  -321,
    -321,   721,    47,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,    87,    90,
      92,  -321,  -321,   193,    51,    37,    52,   -27,    36,    41,
     724,  -321,    38,   -11,  -321,  -321,  -321,  -321,    60,    68,
    -321,   657,  -321,  -321,    98,    69,    72,    32,    73,   117,
    -321,  -321,   657,  -321,  -321,  -321,  -321,  -321,  -321,    14,
      85,  -321,  -321,    84,  -321,    10,  -321,    83,  -321,  -321,
    -321,  -321,  -321,   466,    81,   657,   542,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,    75,  -321,   637,   610,    88,   178,  -321,   178,
    -321,   178,  -321,   113,   126,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,   724,   724,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,   724,  -321,  -321,  -321,   724,  -321,
    -321,  -321,  -321,  -321,  -321,   724,  -321,  -321,  -321,   569,
     657,   101,  -321,   -11,    97,   100,    93,   657,    99,   657,
     697,    88,   390,  -321,  -321,   657,   102,   724,  -321,  -321,
      96,    96,   -11,  -321,  -321,  -321,  -321,   610,    88,  -321,
    -321,   118,  -321,   280,  -321,   103,    89,  -321,  -321,  -321,
    -321,  -321,   105,  -321,  -321,    47,  -321,  -321,   138,    90,
      92,  -321,  -321,   193,    51,   724,   724,   -27,    36,    41,
     724,   657,   657,    19,   107,  -321,   110,   108,   114,   111,
     115,  -321,  -321,   500,   119,    13,    76,    13,  -321,   390,
     123,    69,  -321,   121,  -321,   153,   657,    73,   390,  -321,
     134,  -321,  -321,  -321,    85,   124,  -321,   697,  -321,  -321,
    -321,   542,  -321,   657,    88,  -321,   657,  -321,  -321,  -321,
    -321,    37,    52,  -321,  -321,  -321,  -321,  -321,  -321,   657,
     657,  -321,  -321,  -321,   569,    88,  -321,   657,    88,   657,
    -321,   129,   390,   130,  -321,   128,  -321,   168,   390,  -321,
     356,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,   162,
    -321,  -321,   105,  -321,  -321,  -321,  -321,  -321,  -321,   110,
    -321,   111,  -321,  -321,   141,  -321,  -321,  -321,   657,   432,
    -321,   153,   153,   356,   142,    96,   178,  -321,  -321,  -321,
     657,  -321,  -321,  -321,   151,  -321,  -321,   657,  -321,  -321,
     356,   140,   390,  -321,    30,  -321,   356,   147,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,   356,   390,   677,   154,
     168,    13,    30,  -321,  -321,  -321,  -321,   150,  -321,   677,
    -321
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     0,     0,    30,     0,    90,   194,   195,     0,     0,
      76,    77,    78,     0,    81,   260,     0,     0,   193,     0,
     182,   188,   189,   190,     5,   196,   199,   174,   175,     0,
     176,   192,     0,     0,     3,     6,     7,    10,     8,    22,
      12,    40,    52,    13,    15,    14,    72,    73,    74,    75,
      16,    17,    18,    19,    20,    21,    50,   113,   114,   121,
     124,   127,    51,   129,   144,   147,   151,   155,   160,   165,
       0,   173,   178,   184,    23,    80,   234,    24,    33,     0,
     126,     0,   230,   229,     0,   227,     0,   109,   101,   104,
      82,    79,     0,   263,   259,   261,    83,    85,    71,     0,
     201,   212,   213,     0,   198,   210,   197,     0,   200,   142,
       1,     2,     4,     0,    67,     0,     0,    54,    55,    56,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    57,
      34,    37,    40,    35,     0,     0,    69,     0,   112,     0,
     120,     0,   123,     0,   140,   138,   131,   132,   136,   133,
     137,   135,   134,   128,     0,     0,   143,   148,   146,   152,
     150,   157,   158,   154,     0,   162,   163,   159,     0,   167,
     169,   170,   171,   168,   164,     0,   172,   179,   177,   208,
     221,     0,   181,   184,   236,     0,     0,     0,     0,     0,
       0,    69,     0,   110,   108,     0,     0,     0,   103,   262,
      87,    87,   184,   202,   191,   186,   256,     0,    69,   204,
     214,     0,   187,     3,    68,     0,    46,    42,    44,    43,
      41,    36,   232,    39,    38,    52,    70,    49,     0,   121,
     124,   139,   141,   129,   144,     0,     0,   155,   160,   165,
       0,     0,     0,   247,     0,   209,   240,   219,     0,   217,
       0,   207,   185,     0,     0,    30,    26,    30,   118,     0,
       0,   227,   226,     0,   106,    97,     0,   101,     0,   105,
       0,    84,    86,   183,   201,   210,   215,     0,   254,    11,
       9,     0,    45,     0,    69,    53,     0,   122,   125,   130,
     145,   147,   151,   156,   161,   166,   180,   246,   245,     0,
       0,   242,   248,   205,     0,    69,   206,   221,    69,   221,
     237,     0,     0,     0,    27,     0,    32,    92,     0,   228,
       0,    98,    95,   111,   102,   100,    88,   203,   211,     0,
      48,    47,   232,   231,   115,   149,   153,   244,   243,   240,
     239,   217,   216,   222,   223,   238,   235,    29,     0,     0,
      93,    97,    97,   266,     0,    87,     0,   233,   241,   218,
     221,   220,   224,    28,     0,   264,    25,     0,    91,    96,
     266,     0,     0,    89,   252,   225,     0,     0,   267,   107,
      99,   257,   253,   251,   249,   250,   266,     0,     0,     0,
      92,    30,   252,   117,   116,   265,    94,     0,   258,     0,
     119
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -321,  -321,   -24,  -321,  -283,  -184,  -321,    91,  -321,  -321,
    -321,  -321,  -321,  -321,  -232,  -321,  -321,  -321,  -321,    77,
    -321,  -321,  -321,  -321,    -3,    65,   -20,  -321,  -321,  -164,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -186,  -321,  -321,  -321,  -183,  -321,  -321,  -321,
    -260,  -321,  -321,   -57,    11,  -321,  -233,    -8,  -321,  -321,
      -9,  -321,  -188,  -321,  -321,  -132,   -15,    82,   -10,    17,
    -321,    -4,  -321,    -6,    -5,   -19,    67,   -65,  -321,    -1,
     -64,  -321,     0,    -2,  -321,    63,     1,  -321,    70,     2,
    -321,   -61,  -321,  -321,  -321,  -321,  -321,  -321,  -102,   143,
    -321,  -321,  -321,   -37,  -321,   214,  -321,  -321,   -32,    39,
    -321,  -321,   -96,   -60,  -270,  -321,  -321,   -13,   -12,    64,
      61,   -77,  -321,  -321,  -321,     5,   -74,   -38,  -321,  -321,
    -321,  -124,   -87,  -321,  -321,  -321,   -18,  -321,  -321,  -321,
    -320
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,    35,    36,   114,    37,    38,    39,
     185,   315,   348,   256,    79,   186,    40,   130,   221,   131,
     132,   217,   133,   282,    41,    42,   136,   134,   215,   227,
      43,    44,    45,    46,    47,    48,    49,    91,    50,   200,
      51,   201,   271,   355,    52,    81,   351,   367,    53,    54,
     322,   354,    55,   196,    88,   198,   265,   101,   194,   266,
      56,   138,   392,    57,   393,    58,   140,    59,   142,    60,
      61,   153,   154,    62,    63,   156,    64,   158,   235,    65,
     160,   236,    66,   163,   164,    67,   167,   168,    68,   174,
     175,    69,    70,    71,   178,   240,    72,    99,   182,    73,
     100,   103,   107,   204,   274,   104,   183,   244,   208,   105,
     209,   248,   308,   249,   250,   361,   362,    84,   191,    85,
     223,   284,    74,   184,   254,   245,   305,   246,   301,   382,
     278,   383,   384,   211,   385,   388,    75,    94,    95,   366,
     371
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      87,    86,    82,    83,    89,   228,    98,   106,   264,   176,
     112,    90,    93,    82,    83,   272,    87,    87,   210,   102,
     102,    80,    76,   313,   109,   316,   317,   262,    92,  -255,
       6,     7,     3,     4,   179,   325,   180,   353,  -255,   344,
       6,     7,   381,    77,   276,   161,   162,   206,    18,  -255,
     378,   181,    78,    21,    22,    23,   206,    96,    18,    25,
     207,    26,    20,    21,    22,    23,   389,   206,    97,    25,
     370,    26,    87,   188,   110,   264,    27,    28,    29,   346,
     299,   252,   113,   199,   264,   352,   111,   370,   165,   166,
     375,   368,   369,   386,    30,   169,   170,   135,   219,   137,
     273,   139,   141,   370,   171,    31,   216,   155,   157,   159,
     -31,   300,   177,   218,   239,    31,   224,   187,   189,   190,
     333,   192,   197,   195,   193,   222,   203,   172,   264,   173,
     205,   212,   214,   231,   264,   232,   116,   277,   226,   380,
     251,   340,   253,   257,   342,   255,   270,   280,   259,   233,
     281,   268,   286,   303,   390,   283,   302,  -222,   230,   397,
     304,   307,   306,   320,   309,   365,   314,   321,   312,   373,
     243,   247,   318,   326,   207,   345,   347,   349,   258,   296,
     222,   350,   356,   379,    82,    83,    89,     4,   264,   279,
     360,   372,   269,   376,     6,     7,   387,   395,    87,   399,
     225,   102,   143,   264,   213,   285,   267,   396,   144,   220,
     324,   400,    18,   145,   287,   290,    20,    21,    22,    23,
     288,   229,   234,    25,   374,    26,   335,   237,   336,   289,
      27,    28,   297,   298,   291,   293,   292,   327,   238,   294,
     108,   295,   202,   328,   243,   359,   275,   341,    30,   319,
     260,   146,   147,   148,   261,   357,   394,   323,   311,   149,
     150,   151,   152,   331,   329,   358,   339,   394,   398,    31,
       0,    82,    83,     0,   332,     0,     0,   334,   330,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
     337,   338,     5,     0,     0,   243,     6,     7,   247,     8,
     343,     9,    10,    11,    12,     0,     0,     0,    13,    14,
       0,    15,    16,    17,    18,    19,     0,     0,    20,    21,
      22,    23,     0,     0,    24,    25,     0,    26,     0,     0,
       0,     0,    27,    28,    29,     0,     0,     0,     0,   363,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,   343,     0,     0,     0,     0,     0,     0,    87,   377,
       0,     0,     1,     2,     3,     4,     0,     0,     5,     0,
       0,    31,     6,     7,     0,     8,     0,     9,    10,    11,
      12,     0,     0,     0,    13,    14,     0,    15,    16,    17,
      18,    19,     0,     0,    20,    21,    22,    23,     3,     4,
       0,    25,     0,    26,     0,     0,     6,     7,    27,    28,
      29,     0,    10,    11,    12,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    30,     0,    20,    21,
      22,    23,     0,     0,   263,    25,     0,    26,     0,     0,
       3,     4,    27,    28,    29,     0,     0,    31,     6,     7,
       0,     0,     0,     0,    10,    11,    12,     0,     0,     0,
      30,    14,     0,    15,    16,    17,    18,    19,     0,     0,
      20,    21,    22,    23,     3,     4,   364,    25,     0,    26,
       0,    31,     6,     7,    27,    28,    29,     0,    10,    11,
      12,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    30,     0,    20,    21,    22,    23,     3,     4,
       0,    25,     0,    26,     0,     0,     6,     7,    27,    28,
      29,     0,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,     0,    30,     0,    20,    21,
      22,    23,     0,     0,     0,    25,   310,    26,     0,     0,
       3,     4,    27,    28,   241,     0,     0,    31,     6,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,     0,    15,   242,     0,    18,     3,     4,     0,
      20,    21,    22,    23,     0,     6,     7,    25,     0,    26,
       0,    31,     0,     0,    27,    28,    29,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,    20,    21,    22,
      23,     0,    30,     0,    25,     0,    26,     0,     3,     4,
       0,    27,    28,   241,     0,     0,     6,     7,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,     0,    30,
       0,     0,     0,   242,    18,     3,     4,     0,    20,    21,
      22,    23,     0,     6,     7,    25,     0,    26,     0,     0,
      31,     0,    27,    28,    29,     3,     4,     0,    15,     0,
       0,    18,     0,     6,     7,    20,    21,    22,    23,     0,
      30,     0,    25,     0,    26,   391,     4,     0,     0,    27,
      28,    18,     0,     6,     7,    20,    21,    22,    23,     0,
       0,    31,    25,     0,    26,     0,     0,    30,     0,    27,
      28,    18,     0,     6,     7,    20,    21,    22,    23,     0,
       0,     0,    25,     0,    26,     0,     0,    30,    31,    27,
      28,    18,     0,     0,     0,    20,    21,    22,    23,     0,
       6,     7,    25,     0,    26,     0,     0,    30,    31,    27,
      28,    29,     0,     0,     0,     0,     0,     0,    18,     0,
       0,     0,    20,    21,    22,    23,     0,    30,    31,    25,
     115,    26,     0,     0,     0,     0,    27,    28,     0,     0,
       0,     0,   116,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,     0,    30,     0,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,     0,
     129,     0,     0,     0,     0,    31
};

static const yytype_int16 yycheck[] =
{
       9,     9,     8,     8,    13,   137,    19,    25,   192,    70,
      34,    14,    15,    19,    19,   201,    25,    26,   105,    25,
      26,     4,    39,   255,    29,   257,   259,   191,     4,    19,
      16,    17,     8,     9,    45,   268,    47,   320,    19,   309,
      16,    17,    12,    39,   208,    72,    73,    37,    34,    19,
     370,    62,    39,    39,    40,    41,    37,    39,    34,    45,
      50,    47,    38,    39,    40,    41,   386,    37,    39,    45,
     353,    47,    81,    81,     0,   259,    52,    53,    54,   312,
      61,   183,    51,    92,   268,   318,    93,   370,    52,    53,
     360,   351,   352,   376,    70,    54,    55,    50,   116,    12,
     202,    11,    10,   386,    63,    91,   115,    56,    71,    57,
      50,    92,    74,   116,   175,    91,   134,    49,    20,    50,
     284,    49,     5,    50,    92,   134,    41,    86,   312,    88,
      46,    48,    51,    20,   318,     9,    61,    19,    50,   372,
      39,   305,    45,    50,   308,    45,    50,    44,    49,   154,
      61,    49,    14,    46,   387,    50,   243,    49,   141,   391,
      50,    50,    48,    42,    49,   349,    90,    14,    49,   355,
     179,   180,    49,    39,    50,    46,    46,    49,   187,   240,
     189,    13,    20,    43,   190,   190,   195,     9,   372,   213,
      49,    49,   197,    42,    16,    17,    49,    43,   207,    49,
     135,   207,     9,   387,   113,   225,   195,   390,    15,   132,
     267,   399,    34,    20,   229,   234,    38,    39,    40,    41,
     230,   139,   155,    45,   356,    47,   291,   164,   292,   233,
      52,    53,   241,   242,   235,   237,   236,   274,   168,   238,
      26,   239,    99,   275,   253,   341,   207,   307,    70,   261,
     189,    58,    59,    60,   190,   332,   388,   266,   253,    66,
      67,    68,    69,   281,   277,   339,   304,   399,   392,    91,
      -1,   277,   277,    -1,   283,    -1,    -1,   286,   281,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
     299,   300,    12,    -1,    -1,   304,    16,    17,   307,    19,
     309,    21,    22,    23,    24,    -1,    -1,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    -1,    38,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    47,    -1,    -1,
      -1,    -1,    52,    53,    54,    -1,    -1,    -1,    -1,   348,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,   360,    -1,    -1,    -1,    -1,    -1,    -1,   367,   367,
      -1,    -1,     6,     7,     8,     9,    -1,    -1,    12,    -1,
      -1,    91,    16,    17,    -1,    19,    -1,    21,    22,    23,
      24,    -1,    -1,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    -1,    38,    39,    40,    41,     8,     9,
      -1,    45,    -1,    47,    -1,    -1,    16,    17,    52,    53,
      54,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    70,    -1,    38,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    47,    -1,    -1,
       8,     9,    52,    53,    54,    -1,    -1,    91,    16,    17,
      -1,    -1,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,
      70,    29,    -1,    31,    32,    33,    34,    35,    -1,    -1,
      38,    39,    40,    41,     8,     9,    44,    45,    -1,    47,
      -1,    91,    16,    17,    52,    53,    54,    -1,    22,    23,
      24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    70,    -1,    38,    39,    40,    41,     8,     9,
      -1,    45,    -1,    47,    -1,    -1,    16,    17,    52,    53,
      54,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    70,    -1,    38,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    -1,    -1,
       8,     9,    52,    53,    54,    -1,    -1,    91,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    31,    74,    -1,    34,     8,     9,    -1,
      38,    39,    40,    41,    -1,    16,    17,    45,    -1,    47,
      -1,    91,    -1,    -1,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,    40,
      41,    -1,    70,    -1,    45,    -1,    47,    -1,     8,     9,
      -1,    52,    53,    54,    -1,    -1,    16,    17,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    74,    34,     8,     9,    -1,    38,    39,
      40,    41,    -1,    16,    17,    45,    -1,    47,    -1,    -1,
      91,    -1,    52,    53,    54,     8,     9,    -1,    31,    -1,
      -1,    34,    -1,    16,    17,    38,    39,    40,    41,    -1,
      70,    -1,    45,    -1,    47,     8,     9,    -1,    -1,    52,
      53,    34,    -1,    16,    17,    38,    39,    40,    41,    -1,
      -1,    91,    45,    -1,    47,    -1,    -1,    70,    -1,    52,
      53,    34,    -1,    16,    17,    38,    39,    40,    41,    -1,
      -1,    -1,    45,    -1,    47,    -1,    -1,    70,    91,    52,
      53,    34,    -1,    -1,    -1,    38,    39,    40,    41,    -1,
      16,    17,    45,    -1,    47,    -1,    -1,    70,    91,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    38,    39,    40,    41,    -1,    70,    91,    45,
      49,    47,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    -1,    87,    -1,
      89,    -1,    -1,    -1,    -1,    91
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
     133,   135,   139,   143,   144,   147,   155,   158,   160,   162,
     164,   165,   168,   169,   171,   174,   177,   180,   183,   186,
     187,   188,   191,   194,   217,   231,    39,    39,    39,   109,
     164,   140,   168,   169,   212,   214,   152,   155,   149,   155,
     119,   132,     4,   119,   232,   233,    39,    39,   212,   192,
     195,   152,   168,   196,   200,   204,   231,   197,   200,   169,
       0,    93,    97,    51,   101,    49,    61,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    87,    89,
     112,   114,   115,   117,   122,    50,   121,    12,   156,    11,
     161,    10,   163,     9,    15,    20,    58,    59,    60,    66,
      67,    68,    69,   166,   167,    56,   170,    71,   172,    57,
     175,    72,    73,   178,   179,    52,    53,   181,   182,    54,
      55,    63,    86,    88,   184,   185,   186,    74,   189,    45,
      47,    62,   193,   201,   218,   105,   110,    49,   152,    20,
      50,   213,    49,    92,   153,    50,   148,     5,   150,   155,
     134,   136,   194,    41,   198,    46,    37,    50,   203,   205,
     227,   228,    48,   102,    51,   123,   155,   116,   119,   231,
     114,   113,   155,   215,   231,   120,    50,   124,   160,   162,
     164,    20,     9,   169,   171,   173,   176,   180,   183,   186,
     190,    54,    74,   155,   202,   220,   222,   155,   206,   208,
     209,    39,   193,    45,   219,    45,   108,    50,   155,    49,
     215,   214,   124,    44,   100,   151,   154,   149,    49,   169,
      50,   137,   137,   193,   199,   204,   124,    19,   225,    97,
      44,    61,   118,    50,   216,   121,    14,   161,   163,   166,
     170,   174,   177,   178,   181,   184,   186,   155,   155,    61,
      92,   223,   227,    46,    50,   221,    48,    50,   207,    49,
      46,   220,    49,   109,    90,   106,   109,   151,    49,   213,
      42,    14,   145,   155,   148,   151,    39,   198,   203,   212,
     119,   231,   155,   124,   155,   172,   175,   155,   155,   222,
     124,   208,   124,   155,   209,    46,   151,    46,   107,    49,
      13,   141,   151,    99,   146,   138,    20,   216,   221,   207,
      49,   210,   211,   155,    44,   100,   234,   142,   145,   145,
      99,   235,    49,   137,   160,   209,    42,   152,   235,    43,
     151,    12,   224,   226,   227,   229,    99,    49,   230,   235,
     151,     8,   157,   159,   160,    43,   141,   109,   226,    49,
     157
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
     140,   139,   141,   142,   141,   143,   144,   145,   146,   145,
     147,   148,   148,   149,   150,   150,   151,   151,   152,   153,
     154,   153,   155,   155,   156,   156,   157,   157,   158,   159,
     160,   161,   161,   162,   163,   163,   164,   164,   165,   166,
     166,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   168,   169,   170,   170,   171,   172,   173,   172,
     174,   175,   176,   175,   177,   178,   178,   179,   179,   180,
     181,   181,   182,   182,   183,   184,   184,   185,   185,   185,
     185,   185,   186,   186,   187,   187,   187,   188,   189,   190,
     189,   191,   192,   191,   193,   193,   194,   194,   194,   194,
     195,   194,   194,   194,   194,   194,   196,   196,   196,   197,
     197,   198,   199,   198,   200,   201,   201,   201,   202,   202,
     203,   203,   204,   204,   205,   205,   206,   207,   207,   208,
     208,   209,   209,   210,   210,   211,   212,   213,   213,   214,
     214,   215,   216,   216,   218,   217,   219,   219,   219,   220,
     221,   221,   222,   222,   222,   222,   222,   223,   223,   224,
     224,   225,   226,   226,   227,   228,   228,   230,   229,   231,
     232,   232,   233,   233,   234,   234,   235,   235
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
       0,     7,     0,     0,     6,     5,     7,     0,     0,     4,
       5,     0,     3,     2,     0,     2,     1,     5,     2,     0,
       0,     3,     2,     1,     0,     4,     1,     1,     4,     4,
       2,     0,     3,     2,     0,     3,     2,     1,     2,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     2,     0,     3,     2,     0,     0,     4,
       2,     0,     0,     4,     2,     0,     3,     1,     1,     2,
       0,     3,     1,     1,     2,     0,     3,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     2,     0,     0,
       3,     2,     0,     4,     0,     2,     3,     3,     1,     1,
       0,     3,     1,     1,     1,     1,     0,     1,     1,     0,
       1,     0,     0,     3,     2,     3,     3,     2,     0,     1,
       0,     3,     1,     1,     1,     2,     3,     0,     3,     1,
       4,     0,     1,     0,     1,     2,     3,     0,     3,     1,
       1,     3,     0,     3,     0,     6,     0,     2,     3,     3,
       0,     3,     2,     3,     3,     2,     2,     0,     1,     1,
       1,     5,     0,     1,     2,     0,     1,     0,     4,     2,
       0,     1,     2,     1,     1,     5,     0,     2
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
#line 142 "parser.y"
                                      { 
  root = new_subtree(PROGRAM_NODE, 1, yyvsp[-1]); 
  check_vars(root); 
}
#line 2088 "parser.c"
    break;

  case 3:
#line 148 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 2094 "parser.c"
    break;

  case 4:
#line 149 "parser.y"
                            {
  if(get_child_count(yyvsp[0]) == 0){
    yyval = new_subtree(BLOCK_NODE, 1, yyvsp[-1]); 
  } else {
    add_child(yyvsp[0], yyvsp[-1]);
    yyval = yyvsp[0]; 
  } 
}
#line 2107 "parser.c"
    break;

  case 5:
#line 160 "parser.y"
            { yyval = new_subtree(LOW_NODE, 0); }
#line 2113 "parser.c"
    break;

  case 6:
#line 161 "parser.y"
            { yyval = yyvsp[0]; }
#line 2119 "parser.c"
    break;

  case 7:
#line 164 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2125 "parser.c"
    break;

  case 8:
#line 164 "parser.y"
                                                { yyval = yyvsp[0]; }
#line 2131 "parser.c"
    break;

  case 9:
#line 165 "parser.y"
                                                              { add_child(yyvsp[-3], yyvsp[-2]); yyval = yyvsp[-3]; 
}
#line 2138 "parser.c"
    break;

  case 10:
#line 170 "parser.y"
                                      { yyval = new_subtree(LOW_NODE, 0); }
#line 2144 "parser.c"
    break;

  case 11:
#line 171 "parser.y"
                                      { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2150 "parser.c"
    break;

  case 12:
#line 175 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2156 "parser.c"
    break;

  case 13:
#line 176 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2162 "parser.c"
    break;

  case 14:
#line 177 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2168 "parser.c"
    break;

  case 15:
#line 178 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2174 "parser.c"
    break;

  case 16:
#line 179 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2180 "parser.c"
    break;

  case 17:
#line 180 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2186 "parser.c"
    break;

  case 18:
#line 184 "parser.y"
              { yyval = yyvsp[0]; }
#line 2192 "parser.c"
    break;

  case 19:
#line 185 "parser.y"
              { yyval = yyvsp[0]; }
#line 2198 "parser.c"
    break;

  case 20:
#line 186 "parser.y"
              { yyval = yyvsp[0]; }
#line 2204 "parser.c"
    break;

  case 21:
#line 187 "parser.y"
              { yyval = yyvsp[0]; }
#line 2210 "parser.c"
    break;

  case 22:
#line 188 "parser.y"
              { yyval = yyvsp[0]; }
#line 2216 "parser.c"
    break;

  case 23:
#line 189 "parser.y"
              { yyval = yyvsp[0]; }
#line 2222 "parser.c"
    break;

  case 24:
#line 193 "parser.y"
                  { yyvsp[0] = tokenToAST(NAME_NODE); }
#line 2228 "parser.c"
    break;

  case 25:
#line 193 "parser.y"
                                                                                                   {
  yyval = new_subtree(FUNK_NODE, 4, yyvsp[-5], yyvsp[-3], yyvsp[-2], yyvsp[0]);
}
#line 2236 "parser.c"
    break;

  case 26:
#line 199 "parser.y"
           { yyval = new_node(LOW_NODE, ""); }
#line 2242 "parser.c"
    break;

  case 27:
#line 200 "parser.y"
           { yyvsp[0] = tokenToAST(RARROW_NODE); }
#line 2248 "parser.c"
    break;

  case 28:
#line 200 "parser.y"
                                                  { add_child(yyvsp[-2], yyvsp[0]); yyval = yyvsp[-2]; }
#line 2254 "parser.c"
    break;

  case 29:
#line 203 "parser.y"
                                    { yyval = new_subtree(PARAMETERS_NODE, 1, yyvsp[-1]);  }
#line 2260 "parser.c"
    break;

  case 30:
#line 207 "parser.y"
          { yyval = new_node(LOW_NODE, ""); }
#line 2266 "parser.c"
    break;

  case 31:
#line 208 "parser.y"
         { yyvsp[0] = tokenToAST_2(NAME_NODE); }
#line 2272 "parser.c"
    break;

  case 32:
#line 208 "parser.y"
                                                              {
    if(get_child_count(yyvsp[0]) == 0){
      yyvsp[0] = new_subtree(NAME_LIST_NODE, 1, yyvsp[0]); 
    }; 
    add_child(yyvsp[0], yyvsp[-3]);
    yyval = yyvsp[0];
}
#line 2284 "parser.c"
    break;

  case 33:
#line 215 "parser.y"
         { yyval = tokenToAST_2(NAME_NODE); }
#line 2290 "parser.c"
    break;

  case 34:
#line 220 "parser.y"
                                          { add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; }
#line 2296 "parser.c"
    break;

  case 35:
#line 224 "parser.y"
                          { yyval = yyvsp[0]; }
#line 2302 "parser.c"
    break;

  case 36:
#line 225 "parser.y"
                          { add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; }
#line 2308 "parser.c"
    break;

  case 37:
#line 226 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2314 "parser.c"
    break;

  case 38:
#line 230 "parser.y"
              { yyval = yyvsp[0]; }
#line 2320 "parser.c"
    break;

  case 39:
#line 231 "parser.y"
              { yyval = yyvsp[0]; }
#line 2326 "parser.c"
    break;

  case 40:
#line 235 "parser.y"
                              { yyval = new_node(LOW_NODE, ""); }
#line 2332 "parser.c"
    break;

  case 41:
#line 236 "parser.y"
                              { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2338 "parser.c"
    break;

  case 42:
#line 240 "parser.y"
                                { yyval = new_subtree(EQUAL_NODE, 1, yyvsp[0]); }
#line 2344 "parser.c"
    break;

  case 43:
#line 244 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2350 "parser.c"
    break;

  case 44:
#line 245 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2356 "parser.c"
    break;

  case 45:
#line 248 "parser.y"
                                        { add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; }
#line 2362 "parser.c"
    break;

  case 46:
#line 252 "parser.y"
                              { yyval = new_node(LOW_NODE, ""); }
#line 2368 "parser.c"
    break;

  case 47:
#line 253 "parser.y"
                              { yyval = new_subtree(EQUAL_NODE, 1, yyvsp[0]); }
#line 2374 "parser.c"
    break;

  case 48:
#line 254 "parser.y"
                              { yyval = new_subtree(EQUAL_NODE, 1, yyvsp[0]); }
#line 2380 "parser.c"
    break;

  case 49:
#line 257 "parser.y"
                                                     { add_child(yyvsp[-2], yyvsp[-1]); yyval = yyvsp[-2]; }
#line 2386 "parser.c"
    break;

  case 50:
#line 261 "parser.y"
            { yyval = yyvsp[0]; }
#line 2392 "parser.c"
    break;

  case 51:
#line 262 "parser.y"
            { yyval = yyvsp[0]; }
#line 2398 "parser.c"
    break;

  case 52:
#line 266 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 2404 "parser.c"
    break;

  case 53:
#line 267 "parser.y"
                                  { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2410 "parser.c"
    break;

  case 54:
#line 271 "parser.y"
                      { yyval = tokenToAST(OP_EQUAL_NODE); }
#line 2416 "parser.c"
    break;

  case 55:
#line 272 "parser.y"
                      { yyval = tokenToAST(OP_EQUAL_NODE); }
#line 2422 "parser.c"
    break;

  case 56:
#line 273 "parser.y"
                      { yyval = tokenToAST(OP_EQUAL_NODE); }
#line 2428 "parser.c"
    break;

  case 57:
#line 274 "parser.y"
                      { yyval = tokenToAST(OP_EQUAL_NODE); }
#line 2434 "parser.c"
    break;

  case 58:
#line 275 "parser.y"
                      { yyval = tokenToAST(OP_EQUAL_NODE); }
#line 2440 "parser.c"
    break;

  case 59:
#line 276 "parser.y"
                      { yyval = tokenToAST(OP_EQUAL_NODE); }
#line 2446 "parser.c"
    break;

  case 60:
#line 277 "parser.y"
                      { yyval = tokenToAST(OP_EQUAL_NODE); }
#line 2452 "parser.c"
    break;

  case 61:
#line 278 "parser.y"
                      { yyval = tokenToAST(OP_EQUAL_NODE); }
#line 2458 "parser.c"
    break;

  case 62:
#line 279 "parser.y"
                      { yyval = tokenToAST(OP_EQUAL_NODE); }
#line 2464 "parser.c"
    break;

  case 63:
#line 280 "parser.y"
                      { yyval = tokenToAST(OP_EQUAL_NODE); }
#line 2470 "parser.c"
    break;

  case 64:
#line 281 "parser.y"
                      { yyval = tokenToAST(OP_EQUAL_NODE); }
#line 2476 "parser.c"
    break;

  case 65:
#line 282 "parser.y"
                      { yyval = tokenToAST(OP_EQUAL_NODE); }
#line 2482 "parser.c"
    break;

  case 66:
#line 283 "parser.y"
                      { yyval = tokenToAST(OP_EQUAL_NODE); }
#line 2488 "parser.c"
    break;

  case 72:
#line 298 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2494 "parser.c"
    break;

  case 73:
#line 299 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2500 "parser.c"
    break;

  case 74:
#line 300 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2506 "parser.c"
    break;

  case 75:
#line 301 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2512 "parser.c"
    break;

  case 76:
#line 304 "parser.y"
                { yyval = tokenToAST(FLOW_NODE); }
#line 2518 "parser.c"
    break;

  case 77:
#line 305 "parser.y"
                  { yyval = tokenToAST(FLOW_NODE); }
#line 2524 "parser.c"
    break;

  case 78:
#line 306 "parser.y"
                        { yyval = tokenToAST(FLOW_NODE); }
#line 2530 "parser.c"
    break;

  case 79:
#line 309 "parser.y"
                                            { yyval = new_subtree(RETURN_NODE, 1, yyvsp[0]); }
#line 2536 "parser.c"
    break;

  case 80:
#line 312 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2542 "parser.c"
    break;

  case 81:
#line 316 "parser.y"
                        { yyval = new_subtree(LOW_NODE, 0); }
#line 2548 "parser.c"
    break;

  case 82:
#line 317 "parser.y"
                        {yyval = yyvsp[0]; }
#line 2554 "parser.c"
    break;

  case 83:
#line 320 "parser.y"
                         { yyvsp[0] = tokenToAST(NAME_NODE); }
#line 2560 "parser.c"
    break;

  case 84:
#line 320 "parser.y"
                                                                        { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 2566 "parser.c"
    break;

  case 85:
#line 323 "parser.y"
                             { yyvsp[0] = tokenToAST(NAME_NODE); }
#line 2572 "parser.c"
    break;

  case 86:
#line 323 "parser.y"
                                                                            { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 2578 "parser.c"
    break;

  case 87:
#line 327 "parser.y"
        { yyval = new_node(NAME_LIST_NODE, ""); }
#line 2584 "parser.c"
    break;

  case 88:
#line 328 "parser.y"
               { yyvsp[0] = tokenToAST(NAME_NODE); }
#line 2590 "parser.c"
    break;

  case 89:
#line 328 "parser.y"
                                                              { 
  if (get_child_count(yyvsp[0]) == 0) {
    yyvsp[0] = new_subtree(NAME_LIST_NODE, 1, yyvsp[0]); 
  }; 
  add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; 
}
#line 2601 "parser.c"
    break;

  case 90:
#line 336 "parser.y"
            { yyvsp[0] = tokenToAST(IF_NODE); }
#line 2607 "parser.c"
    break;

  case 91:
#line 336 "parser.y"
                                                                                                                 {
  add_child(yyvsp[-6], yyvsp[0]);
  add_child(yyvsp[-6], yyvsp[-1]);
  add_child(yyvsp[-6], yyvsp[-2]);
  add_child(yyvsp[-6], yyvsp[-4]);
  yyval = yyvsp[-6];
}
#line 2619 "parser.c"
    break;

  case 92:
#line 345 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2625 "parser.c"
    break;

  case 93:
#line 346 "parser.y"
            { yyvsp[0] = tokenToAST(ELSE_IF_NODE); }
#line 2631 "parser.c"
    break;

  case 94:
#line 346 "parser.y"
                                                                                                 {
  add_child(yyvsp[-5], yyvsp[-3]);
  add_child(yyvsp[-5], yyvsp[-1]);
  add_child(yyvsp[-5], yyvsp[0]);
  yyval = yyvsp[-5];
}
#line 2642 "parser.c"
    break;

  case 95:
#line 354 "parser.y"
                                                                  {
  yyval = new_subtree(FOR_IN_NODE, 3, yyvsp[-3], yyvsp[-1], yyvsp[0]);
}
#line 2650 "parser.c"
    break;

  case 96:
#line 358 "parser.y"
                                                                    {
  yyval = new_subtree(FOR_IN_NODE, 4, yyvsp[-5], yyvsp[-3], yyvsp[-1], yyvsp[0]);
}
#line 2658 "parser.c"
    break;

  case 97:
#line 363 "parser.y"
         { yyval = new_node(LOW_NODE, ""); }
#line 2664 "parser.c"
    break;

  case 98:
#line 364 "parser.y"
         { yyvsp[0] = tokenToAST(ELSE_NODE); }
#line 2670 "parser.c"
    break;

  case 99:
#line 364 "parser.y"
                                                     { add_child(yyvsp[-3], yyvsp[0]);  yyval = yyvsp[-3]; }
#line 2676 "parser.c"
    break;

  case 100:
#line 367 "parser.y"
                                                   { 
  if (get_child_count(yyvsp[-2])==0){
    yyvsp[-2] = yyvsp[-3];
  } else {
    add_child(yyvsp[-2], yyvsp[-3]);
  }
  yyval = new_subtree(WITH_NODE, 2, yyvsp[-2], yyvsp[0]);
}
#line 2689 "parser.c"
    break;

  case 101:
#line 377 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2695 "parser.c"
    break;

  case 102:
#line 378 "parser.y"
                                { 
  if (get_child_count(yyvsp[0]) == 0){
    yyvsp[0] = new_subtree(WITH_ITEM_NODE, 1, yyvsp[0]);
  }
  add_child(yyvsp[0], yyvsp[-2]);
  yyval = yyvsp[0];
}
#line 2707 "parser.c"
    break;

  case 103:
#line 386 "parser.y"
                            { add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; }
#line 2713 "parser.c"
    break;

  case 104:
#line 390 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2719 "parser.c"
    break;

  case 105:
#line 391 "parser.y"
            { yyval = new_subtree(AS_NODE, 1, yyvsp[0]); }
#line 2725 "parser.c"
    break;

  case 106:
#line 395 "parser.y"
              { yyval = yyvsp[0]; }
#line 2731 "parser.c"
    break;

  case 107:
#line 396 "parser.y"
                                     { 
  if (get_child_count(yyvsp[-1]) == 0) {
    yyval = yyvsp[-2];
  } else {
    add_child(yyvsp[-1], yyvsp[-2]); yyval = yyvsp[-1]; 
  };
}
#line 2743 "parser.c"
    break;

  case 108:
#line 405 "parser.y"
                                         { 
    if (get_child_count(yyvsp[0])==0){
      yyval = yyvsp[-1];
    } else {
      add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; 
    };
  }
#line 2755 "parser.c"
    break;

  case 109:
#line 415 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2761 "parser.c"
    break;

  case 110:
#line 416 "parser.y"
               { yyvsp[0] = tokenToAST(NAME_NODE); }
#line 2767 "parser.c"
    break;

  case 111:
#line 416 "parser.y"
                                                    { 
  add_child(yyvsp[-2], yyvsp[0]); yyval = yyvsp[-2]; 
}
#line 2775 "parser.c"
    break;

  case 112:
#line 422 "parser.y"
                                    { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2781 "parser.c"
    break;

  case 113:
#line 423 "parser.y"
                                    { yyval = yyvsp[0]; }
#line 2787 "parser.c"
    break;

  case 114:
#line 427 "parser.y"
                          { yyval = new_subtree(LOW_NODE, 0); }
#line 2793 "parser.c"
    break;

  case 115:
#line 428 "parser.y"
                          { yyval = new_subtree(IF_ELSE_NODE, 2, yyvsp[-2], yyvsp[0]); }
#line 2799 "parser.c"
    break;

  case 116:
#line 432 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2805 "parser.c"
    break;

  case 117:
#line 433 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2811 "parser.c"
    break;

  case 118:
#line 436 "parser.y"
                                        { yyval = new_subtree(LAMBDA_NODE, 2, yyvsp[-2], yyvsp[0]); }
#line 2817 "parser.c"
    break;

  case 119:
#line 439 "parser.y"
                                                      { yyval = new_subtree(LAMBDA_NODE, 2, yyvsp[-2], yyvsp[0]); }
#line 2823 "parser.c"
    break;

  case 120:
#line 442 "parser.y"
                           { 
  if(get_child_count(yyvsp[0])==0){
    yyval = yyvsp[-1]; 
  } else {
    add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; 
  }
}
#line 2835 "parser.c"
    break;

  case 121:
#line 451 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2841 "parser.c"
    break;

  case 122:
#line 452 "parser.y"
                         { yyval = new_subtree(OR_NODE, 2, yyvsp[-1], yyvsp[0]); }
#line 2847 "parser.c"
    break;

  case 123:
#line 455 "parser.y"
                             { 
  if(get_child_count(yyvsp[0])==0){
    yyval = yyvsp[-1]; 
  } else {
    add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; 
  }
}
#line 2859 "parser.c"
    break;

  case 124:
#line 464 "parser.y"
         { yyval = new_node(LOW_NODE, ""); }
#line 2865 "parser.c"
    break;

  case 125:
#line 465 "parser.y"
                           { yyval = new_subtree(AND_NODE, 2, yyvsp[-1], yyvsp[0]); }
#line 2871 "parser.c"
    break;

  case 126:
#line 469 "parser.y"
                { yyval = new_subtree(NOT_NODE, 1, yyvsp[0]); }
#line 2877 "parser.c"
    break;

  case 127:
#line 470 "parser.y"
                { yyval = yyvsp[0]; }
#line 2883 "parser.c"
    break;

  case 128:
#line 473 "parser.y"
                            { 
  if(get_child_count(yyvsp[0])==0) {
    yyval = yyvsp[-1]; 
  } else {
    add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; 
  };
}
#line 2895 "parser.c"
    break;

  case 129:
#line 482 "parser.y"
                              { yyval = new_subtree(LOW_NODE, 0); }
#line 2901 "parser.c"
    break;

  case 130:
#line 483 "parser.y"
                              { add_child(yyvsp[-2], yyvsp[-1]); add_child(yyvsp[-2], yyvsp[0]); yyval = yyvsp[-2]; }
#line 2907 "parser.c"
    break;

  case 131:
#line 487 "parser.y"
                    { yyval = tokenToAST(COMP_NODE); }
#line 2913 "parser.c"
    break;

  case 132:
#line 488 "parser.y"
                    { yyval = tokenToAST(COMP_NODE); }
#line 2919 "parser.c"
    break;

  case 133:
#line 489 "parser.y"
                    { yyval = tokenToAST(COMP_NODE); }
#line 2925 "parser.c"
    break;

  case 134:
#line 490 "parser.y"
                    { yyval = tokenToAST(COMP_NODE); }
#line 2931 "parser.c"
    break;

  case 135:
#line 491 "parser.y"
                    { yyval = tokenToAST(COMP_NODE); }
#line 2937 "parser.c"
    break;

  case 136:
#line 492 "parser.y"
                    { yyval = tokenToAST(COMP_NODE); }
#line 2943 "parser.c"
    break;

  case 137:
#line 493 "parser.y"
                    { yyval = tokenToAST(COMP_NODE); }
#line 2949 "parser.c"
    break;

  case 138:
#line 494 "parser.y"
                    { yyval = tokenToAST(COMP_NODE); }
#line 2955 "parser.c"
    break;

  case 139:
#line 495 "parser.y"
                    { yyval = tokenToAST(COMP_NODE); }
#line 2961 "parser.c"
    break;

  case 140:
#line 496 "parser.y"
                    { yyval = tokenToAST(COMP_NODE); }
#line 2967 "parser.c"
    break;

  case 141:
#line 497 "parser.y"
                    { yyval = tokenToAST(COMP_NODE); }
#line 2973 "parser.c"
    break;

  case 142:
#line 500 "parser.y"
                     { yyval = new_subtree(STAR_NODE, 1, yyvsp[0]); }
#line 2979 "parser.c"
    break;

  case 143:
#line 502 "parser.y"
                          { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2985 "parser.c"
    break;

  case 144:
#line 506 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 2991 "parser.c"
    break;

  case 145:
#line 507 "parser.y"
                             { 
  if (get_child_count(yyvsp[0]) == 0) {
    yyvsp[0] = new_subtree(VBAR_NODE, 1, yyvsp[0]); 
  }; 
  add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; 
}
#line 3002 "parser.c"
    break;

  case 146:
#line 515 "parser.y"
                                      { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 3008 "parser.c"
    break;

  case 147:
#line 518 "parser.y"
                               { yyval = new_node(LOW_NODE, ""); }
#line 3014 "parser.c"
    break;

  case 148:
#line 519 "parser.y"
                               { yyvsp[0] = tokenToAST(OP_BIT_A_BIT_NODE); }
#line 3020 "parser.c"
    break;

  case 149:
#line 520 "parser.y"
                               { add_child(yyvsp[-3], yyvsp[-1]); add_child(yyvsp[-3], yyvsp[0]); yyval = yyvsp[-3]; }
#line 3026 "parser.c"
    break;

  case 150:
#line 523 "parser.y"
                                  { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 3032 "parser.c"
    break;

  case 151:
#line 526 "parser.y"
                          { yyval = new_node(LOW_NODE, ""); }
#line 3038 "parser.c"
    break;

  case 152:
#line 527 "parser.y"
                          { yyvsp[0] = tokenToAST(OP_BIT_A_BIT_NODE); }
#line 3044 "parser.c"
    break;

  case 153:
#line 528 "parser.y"
                          { add_child(yyvsp[-3], yyvsp[-1]); add_child(yyvsp[-3], yyvsp[0]); yyval = yyvsp[-3]; }
#line 3050 "parser.c"
    break;

  case 154:
#line 531 "parser.y"
                                    { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 3056 "parser.c"
    break;

  case 155:
#line 535 "parser.y"
                                      { yyval = new_node(LOW_NODE, ""); }
#line 3062 "parser.c"
    break;

  case 156:
#line 536 "parser.y"
                                      { add_child(yyvsp[-2], yyvsp[-1]); add_child(yyvsp[-2], yyvsp[0]); yyval = yyvsp[-2]; }
#line 3068 "parser.c"
    break;

  case 157:
#line 540 "parser.y"
              { yyval = tokenToAST(OP_BIT_A_BIT_NODE); }
#line 3074 "parser.c"
    break;

  case 158:
#line 541 "parser.y"
              { yyval = tokenToAST(OP_BIT_A_BIT_NODE); }
#line 3080 "parser.c"
    break;

  case 159:
#line 544 "parser.y"
                                  { 
  if(get_child_count(yyvsp[0])==0){ 
    yyval = yyvsp[-1]; 
  } else {
    add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; 
  };
}
#line 3092 "parser.c"
    break;

  case 160:
#line 553 "parser.y"
                                  { yyval = new_subtree(LOW_NODE, 0); }
#line 3098 "parser.c"
    break;

  case 161:
#line 554 "parser.y"
                                  { add_child(yyvsp[-2], yyvsp[-1]); add_child(yyvsp[-2], yyvsp[0]); yyval = yyvsp[-2]; }
#line 3104 "parser.c"
    break;

  case 162:
#line 558 "parser.y"
          { yyval = tokenToAST(OP_MATH_NODE); }
#line 3110 "parser.c"
    break;

  case 163:
#line 559 "parser.y"
          { yyval = tokenToAST(OP_MATH_NODE); }
#line 3116 "parser.c"
    break;

  case 164:
#line 562 "parser.y"
                      { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 3122 "parser.c"
    break;

  case 165:
#line 566 "parser.y"
                              { yyval = new_subtree(LOW_NODE, 0); }
#line 3128 "parser.c"
    break;

  case 166:
#line 567 "parser.y"
                              { 
  if(get_child_count(yyvsp[0])==0) {
    add_child(yyvsp[-2], yyvsp[-1]);
  } else {
    add_child(yyvsp[0], yyvsp[-1]);
    add_child(yyvsp[-2], yyvsp[0]);
  }
  yyval = yyvsp[-2]; 
}
#line 3142 "parser.c"
    break;

  case 167:
#line 578 "parser.y"
                { yyval = tokenToAST(OP_MATH_NODE); }
#line 3148 "parser.c"
    break;

  case 168:
#line 579 "parser.y"
                { yyval = tokenToAST(OP_MATH_NODE); }
#line 3154 "parser.c"
    break;

  case 169:
#line 580 "parser.y"
                { yyval = tokenToAST(OP_MATH_NODE); }
#line 3160 "parser.c"
    break;

  case 170:
#line 581 "parser.y"
                { yyval = tokenToAST(OP_MATH_NODE); }
#line 3166 "parser.c"
    break;

  case 171:
#line 582 "parser.y"
                { yyval = tokenToAST(OP_MATH_NODE); }
#line 3172 "parser.c"
    break;

  case 172:
#line 586 "parser.y"
                      { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 3178 "parser.c"
    break;

  case 173:
#line 587 "parser.y"
                      { yyval = yyvsp[0]; }
#line 3184 "parser.c"
    break;

  case 174:
#line 591 "parser.y"
          { yyval = tokenToAST(OP_MATH_NODE); }
#line 3190 "parser.c"
    break;

  case 175:
#line 592 "parser.y"
          { yyval = tokenToAST(OP_MATH_NODE); }
#line 3196 "parser.c"
    break;

  case 176:
#line 593 "parser.y"
          { yyval = tokenToAST(OP_BIT_A_BIT_NODE); }
#line 3202 "parser.c"
    break;

  case 177:
#line 596 "parser.y"
                                       { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 3208 "parser.c"
    break;

  case 178:
#line 601 "parser.y"
              { yyval = new_node(LOW_NODE, ""); }
#line 3214 "parser.c"
    break;

  case 179:
#line 602 "parser.y"
              { yyvsp[0] = tokenToAST(OP_MATH_NODE); }
#line 3220 "parser.c"
    break;

  case 180:
#line 603 "parser.y"
              { add_child(yyvsp[-2], yyvsp[0]); yyval = yyvsp[-2]; }
#line 3226 "parser.c"
    break;

  case 181:
#line 608 "parser.y"
                    { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 3232 "parser.c"
    break;

  case 182:
#line 609 "parser.y"
                    { yyvsp[0] = tokenToAST(OP_SINC_NODE); }
#line 3238 "parser.c"
    break;

  case 183:
#line 610 "parser.y"
                    { add_child(yyvsp[-3], yyvsp[-1]); add_child(yyvsp[-3], yyvsp[0]); yyval = yyvsp[-3]; }
#line 3244 "parser.c"
    break;

  case 184:
#line 614 "parser.y"
                            { yyval = new_subtree(LOW_NODE, 0); }
#line 3250 "parser.c"
    break;

  case 185:
#line 615 "parser.y"
                            { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 3256 "parser.c"
    break;

  case 186:
#line 619 "parser.y"
                                  { yyval = yyvsp[-1]; }
#line 3262 "parser.c"
    break;

  case 187:
#line 620 "parser.y"
                                  { yyval = yyvsp[-1]; }
#line 3268 "parser.c"
    break;

  case 188:
#line 621 "parser.y"
                                  { yyval = tokenToAST(NAME_NODE); }
#line 3274 "parser.c"
    break;

  case 189:
#line 622 "parser.y"
                                  { yyval = tokenToAST(NUMBER_NODE); }
#line 3280 "parser.c"
    break;

  case 190:
#line 623 "parser.y"
         { yyvsp[0] = tokenToAST(STRING_NODE); }
#line 3286 "parser.c"
    break;

  case 191:
#line 623 "parser.y"
                                                     { 
    if (get_child_count(yyvsp[0])==0){
      yyval = yyvsp[-2];
    } else {
      add_child(yyvsp[0], yyvsp[-2]);
      yyval = yyvsp[0]; 
    };
  }
#line 3299 "parser.c"
    break;

  case 192:
#line 631 "parser.y"
                                  { yyval = new_subtree(LOW_NODE, 0); }
#line 3305 "parser.c"
    break;

  case 193:
#line 632 "parser.y"
                                  { yyval = tokenToAST(NONE_NODE); }
#line 3311 "parser.c"
    break;

  case 194:
#line 633 "parser.y"
                                  { yyval = tokenToAST(BOOL_NODE); }
#line 3317 "parser.c"
    break;

  case 195:
#line 634 "parser.y"
                                  { yyval = tokenToAST(BOOL_NODE); }
#line 3323 "parser.c"
    break;

  case 196:
#line 638 "parser.y"
                  { yyval = new_node(LOW_NODE, ""); }
#line 3329 "parser.c"
    break;

  case 197:
#line 639 "parser.y"
                  { yyval = yyvsp[0]; }
#line 3335 "parser.c"
    break;

  case 198:
#line 640 "parser.y"
                  { yyval = yyvsp[0]; }
#line 3341 "parser.c"
    break;

  case 199:
#line 644 "parser.y"
                    { yyval = new_node(LOW_NODE, ""); }
#line 3347 "parser.c"
    break;

  case 200:
#line 645 "parser.y"
                    { yyval = yyvsp[0]; }
#line 3353 "parser.c"
    break;

  case 201:
#line 649 "parser.y"
                    { yyval = new_node(LOW_NODE, ""); }
#line 3359 "parser.c"
    break;

  case 202:
#line 650 "parser.y"
                    { yyvsp[0] = tokenToAST(STRING_NODE); }
#line 3365 "parser.c"
    break;

  case 203:
#line 651 "parser.y"
                    { 
    if(get_child_count(yyvsp[0]) == 0){
      yyvsp[0] = new_subtree(STRING_NODE, 1, yyvsp[0]); 
    };
    add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; 
  }
#line 3376 "parser.c"
    break;

  case 204:
#line 658 "parser.y"
                                            { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 3382 "parser.c"
    break;

  case 205:
#line 662 "parser.y"
                            { yyval = new_subtree(LOW_NODE, 0); }
#line 3388 "parser.c"
    break;

  case 206:
#line 663 "parser.y"
                            { yyval = new_subtree(LOW_NODE, 0); }
#line 3394 "parser.c"
    break;

  case 207:
#line 664 "parser.y"
                            { yyval = new_subtree(LOW_NODE, 0); }
#line 3400 "parser.c"
    break;

  case 208:
#line 668 "parser.y"
                { yyval = new_node(LOW_NODE, ""); }
#line 3406 "parser.c"
    break;

  case 209:
#line 669 "parser.y"
                { yyval = yyvsp[0]; }
#line 3412 "parser.c"
    break;

  case 210:
#line 673 "parser.y"
                                        { yyval = new_subtree(LOW_NODE, 0); }
#line 3418 "parser.c"
    break;

  case 211:
#line 674 "parser.y"
                                        { yyval = new_subtree(LOW_NODE, 0); }
#line 3424 "parser.c"
    break;

  case 212:
#line 679 "parser.y"
                  { yyval = yyvsp[0]; }
#line 3430 "parser.c"
    break;

  case 213:
#line 680 "parser.y"
                  { yyval = yyvsp[0]; }
#line 3436 "parser.c"
    break;

  case 214:
#line 685 "parser.y"
                              { yyval = yyvsp[0]; }
#line 3442 "parser.c"
    break;

  case 215:
#line 686 "parser.y"
                              { yyval = yyvsp[-1]; }
#line 3448 "parser.c"
    break;

  case 216:
#line 690 "parser.y"
                                  { add_child(yyvsp[-2], yyvsp[-1]); yyval = yyvsp[-2]; }
#line 3454 "parser.c"
    break;

  case 217:
#line 694 "parser.y"
                                  { yyval = new_subtree(LOW_NODE, 0); }
#line 3460 "parser.c"
    break;

  case 218:
#line 695 "parser.y"
                                  { yyval = new_subtree(LOW_NODE, 0); }
#line 3466 "parser.c"
    break;

  case 219:
#line 700 "parser.y"
                                        { yyval = yyvsp[0]; }
#line 3472 "parser.c"
    break;

  case 220:
#line 701 "parser.y"
                                        { 
  yyvsp[-2] = new_node(COLON_NODE, ":"); 
  add_child(yyvsp[-2], yyvsp[-3]); add_child(yyvsp[-2], yyvsp[-1]); 
  add_child(yyvsp[-2], yyvsp[0]); yyval = yyvsp[-2]; 
}
#line 3482 "parser.c"
    break;

  case 221:
#line 709 "parser.y"
            { yyval = new_node(LOW_NODE, ""); }
#line 3488 "parser.c"
    break;

  case 222:
#line 710 "parser.y"
            { yyval = yyvsp[0]; }
#line 3494 "parser.c"
    break;

  case 223:
#line 714 "parser.y"
              { yyval = new_node(LOW_NODE, ""); }
#line 3500 "parser.c"
    break;

  case 224:
#line 715 "parser.y"
              { yyval = yyvsp[0]; }
#line 3506 "parser.c"
    break;

  case 225:
#line 718 "parser.y"
                          { yyvsp[-1] = new_node(COLON_NODE, ":"), add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 3512 "parser.c"
    break;

  case 226:
#line 721 "parser.y"
                                                 { add_child(yyvsp[-2], yyvsp[-1]); yyval = yyvsp[-2]; }
#line 3518 "parser.c"
    break;

  case 227:
#line 725 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 3524 "parser.c"
    break;

  case 228:
#line 726 "parser.y"
                                      { 
  if (get_child_count(yyvsp[0]) == 0) {
    yyvsp[0] = new_subtree(EXPR_STMT_LIST_NODE, 1, yyvsp[0]); 
  }; 
  add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; 
}
#line 3535 "parser.c"
    break;

  case 229:
#line 735 "parser.y"
              { yyval = yyvsp[0]; }
#line 3541 "parser.c"
    break;

  case 230:
#line 736 "parser.y"
              { yyval = yyvsp[0]; }
#line 3547 "parser.c"
    break;

  case 231:
#line 739 "parser.y"
                                        { add_child(yyvsp[-2], yyvsp[-1]); yyval = yyvsp[-2]; }
#line 3553 "parser.c"
    break;

  case 232:
#line 743 "parser.y"
                              { yyval = new_subtree(LOW_NODE, 0); }
#line 3559 "parser.c"
    break;

  case 233:
#line 744 "parser.y"
                              { 
  if (get_child_count(yyvsp[0]) == 0) {
    yyvsp[0] = new_subtree(TEST_NODE, 1, yyvsp[0]); 
  }; 
  add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; 
}
#line 3570 "parser.c"
    break;

  case 234:
#line 751 "parser.y"
                     { yyvsp[0] = tokenToAST(NAME_NODE); }
#line 3576 "parser.c"
    break;

  case 235:
#line 751 "parser.y"
                                                                                       { 
  yyval = new_subtree(CLASS_NODE, 3, yyvsp[-4], yyvsp[-2], yyvsp[0]);
}
#line 3584 "parser.c"
    break;

  case 236:
#line 756 "parser.y"
                { yyval = new_node(LOW_NODE, ""); }
#line 3590 "parser.c"
    break;

  case 237:
#line 757 "parser.y"
                { yyval = new_node(LOW_NODE, ""); }
#line 3596 "parser.c"
    break;

  case 238:
#line 758 "parser.y"
                      { yyval = yyvsp[-1]; }
#line 3602 "parser.c"
    break;

  case 239:
#line 761 "parser.y"
                                       { 
  yyvsp[-2] = new_subtree(ARGUMENT_NODE, 1, yyvsp[-2]);
  if (get_child_count(yyvsp[-1]) != 0){
    add_child(yyvsp[-2], yyvsp[-1]);
  }
  yyval = yyvsp[-2];
}
#line 3614 "parser.c"
    break;

  case 240:
#line 770 "parser.y"
                                  { yyval = new_subtree(LOW_NODE, 0); }
#line 3620 "parser.c"
    break;

  case 241:
#line 771 "parser.y"
                                  {   
  add_child(yyvsp[-1], yyvsp[0]);
  yyval = yyvsp[-1];
}
#line 3629 "parser.c"
    break;

  case 242:
#line 777 "parser.y"
                          { add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0];}
#line 3635 "parser.c"
    break;

  case 243:
#line 778 "parser.y"
                          { yyval = new_subtree(COLONEQUAL_NODE, 2, yyvsp[-2], yyvsp[0]); }
#line 3641 "parser.c"
    break;

  case 244:
#line 779 "parser.y"
                          { yyval = new_subtree(EQUAL_NODE, 2, yyvsp[-2], yyvsp[0]); }
#line 3647 "parser.c"
    break;

  case 245:
#line 780 "parser.y"
                          { yyval = new_subtree(DOUBLESTAR_NODE, 1, yyvsp[0]); }
#line 3653 "parser.c"
    break;

  case 246:
#line 781 "parser.y"
                          { yyval = new_subtree(STAR_NODE, 1, yyvsp[0]); }
#line 3659 "parser.c"
    break;

  case 247:
#line 785 "parser.y"
              { yyval = new_node(LOW_NODE, ""); }
#line 3665 "parser.c"
    break;

  case 248:
#line 786 "parser.y"
              { yyval = yyvsp[0]; }
#line 3671 "parser.c"
    break;

  case 249:
#line 790 "parser.y"
            { yyval = yyvsp[0]; }
#line 3677 "parser.c"
    break;

  case 250:
#line 791 "parser.y"
            { yyval = yyvsp[0]; }
#line 3683 "parser.c"
    break;

  case 251:
#line 794 "parser.y"
                                                     { 
  yyval = new_subtree(FOR_IN_NODE, 3, yyvsp[-3], yyvsp[-1], yyvsp[0]);
}
#line 3691 "parser.c"
    break;

  case 252:
#line 799 "parser.y"
                { yyval = new_node(LOW_NODE, ""); }
#line 3697 "parser.c"
    break;

  case 253:
#line 800 "parser.y"
                { yyval = yyvsp[0]; }
#line 3703 "parser.c"
    break;

  case 254:
#line 803 "parser.y"
                                  { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 3709 "parser.c"
    break;

  case 255:
#line 807 "parser.y"
            { yyval = new_node(LOW_NODE, ""); }
#line 3715 "parser.c"
    break;

  case 256:
#line 808 "parser.y"
            { yyval = tokenToAST(OP_SINC_NODE); }
#line 3721 "parser.c"
    break;

  case 257:
#line 811 "parser.y"
            { yyvsp[0] = tokenToAST(IF_NODE); }
#line 3727 "parser.c"
    break;

  case 258:
#line 811 "parser.y"
                                                                    {
  add_child(yyvsp[-3], yyvsp[-1]);
  add_child(yyvsp[-3], yyvsp[0]);
  yyval = yyvsp[-3];
}
#line 3737 "parser.c"
    break;

  case 259:
#line 817 "parser.y"
                                {
  yyvsp[-1] = new_subtree(YIELD_EXPR_NODE, 1, yyvsp[0]); 
  yyval = yyvsp[-1]; 
}
#line 3746 "parser.c"
    break;

  case 260:
#line 823 "parser.y"
                  { yyval = new_subtree(LOW_NODE, 0); }
#line 3752 "parser.c"
    break;

  case 261:
#line 824 "parser.y"
              { yyval = yyvsp[0]; }
#line 3758 "parser.c"
    break;

  case 262:
#line 827 "parser.y"
            { yyvsp[-1] = new_subtree(FROM_NODE, 1, yyvsp[0]); yyval = yyvsp[-1]; }
#line 3764 "parser.c"
    break;

  case 263:
#line 828 "parser.y"
                     { yyval = yyvsp[0]; }
#line 3770 "parser.c"
    break;

  case 264:
#line 832 "parser.y"
              { yyval = yyvsp[0]; }
#line 3776 "parser.c"
    break;

  case 265:
#line 833 "parser.y"
                                      { 
  if (get_child_count(yyvsp[-1]) == 0) {
    yyval = new_subtree(BLOCK_NODE, 1, yyvsp[-2]);
  } else {
    add_child(yyvsp[-1], yyvsp[-2]); yyval = yyvsp[-1]; 
  }
}
#line 3788 "parser.c"
    break;

  case 266:
#line 843 "parser.y"
        { yyval = new_node(LOW_NODE, ""); }
#line 3794 "parser.c"
    break;

  case 267:
#line 844 "parser.y"
                 { 
  if (get_child_count(yyvsp[0]) == 0) {
    yyvsp[0] = new_subtree(BLOCK_NODE, 1, yyvsp[0]); 
  }
  add_child(yyvsp[0], yyvsp[-1]); yyval = yyvsp[0]; 
}
#line 3805 "parser.c"
    break;


#line 3809 "parser.c"

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
#line 852 "parser.y"


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
