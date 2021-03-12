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
int yylex(void);
void yyerror(char const *s);
int result = %token;

#line 77 "parser.c"

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
#define YYFINAL  112
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   883

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  129
/* YYNRULES -- Number of rules.  */
#define YYNRULES  288
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  396

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
       0,   201,   201,   204,   205,   206,   208,   208,   210,   212,
     213,   215,   216,   218,   220,   221,   222,   224,   224,   225,
     227,   228,   229,   231,   231,   231,   231,   231,   231,   232,
     233,   233,   233,   234,   234,   237,   238,   239,   241,   242,
     243,   244,   245,   245,   247,   248,   249,   249,   251,   252,
     253,   254,   255,   255,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   259,   260,   262,
     263,   264,   266,   267,   269,   270,   271,   271,   271,   271,
     272,   273,   274,   275,   277,   278,   280,   281,   283,   284,
     285,   287,   287,   287,   287,   287,   287,   289,   291,   292,
     293,   295,   296,   298,   299,   301,   302,   304,   306,   307,
     308,   310,   312,   313,   316,   316,   322,   324,   325,   327,
     327,   329,   330,   332,   332,   333,   334,   335,   337,   338,
     339,   341,   343,   344,   345,   347,   347,   348,   350,   351,
     352,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   355,   356,   358,   359,   360,   362,   364,   365,
     366,   368,   370,   371,   372,   374,   376,   377,   378,   379,
     379,   381,   383,   384,   385,   386,   386,   388,   390,   391,
     392,   393,   393,   393,   393,   393,   395,   395,   396,   396,
     396,   398,   400,   401,   403,   404,   407,   408,   409,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   412,   412,
     414,   415,   417,   418,   420,   421,   422,   424,   425,   425,
     425,   427,   428,   430,   431,   432,   434,   434,   435,   435,
     437,   439,   440,   441,   443,   443,   445,   446,   448,   449,
     451,   452,   454,   455,   456,   458,   458,   460,   462,   463,
     464,   466,   467,   469,   471,   472,   473,   475,   477,   478,
     479,   482,   482,   482,   482,   482,   484,   485,   487,   487,
     488,   490,   491,   493,   495,   496,   498,   499,   501,   502,
     504,   504,   506,   506,   508,   509,   510,   513,   514
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
  "NONLOCAL", "NONE", "DEL", "EXEC", "ASYNC", "AWAIT", "TYPE_COMMENT",
  "NAME", "NUMBER", "STRING", "INDENT", "DEDENT", "NEWLINE", "LPAR",
  "RPAR", "LSQB", "RSQB", "COLON", "COMMA", "SEMI", "PLUS", "MINUS",
  "STAR", "SLASH", "VBAR", "AMPER", "LESS", "GREATER", "LESSGREATER",
  "EQUAL", "DOT", "PERCENT", "LBRACE", "RBRACE", "EQEQUAL", "NOTEQUAL",
  "LESSEQUAL", "GREATEREQUAL", "TILDE", "CIRCUMFLEX", "LEFTSHIFT",
  "RIGHTSHIFT", "DOUBLESTAR", "PLUSEQUAL", "MINEQUAL", "STAREQUAL",
  "SLASHEQUAL", "PERCENTEQUAL", "AMPEREQUAL", "VBAREQUAL",
  "CIRCUMFLEXEQUAL", "LEFTSHIFTEQUAL", "RIGHTSHIFTEQUAL",
  "DOUBLESTAREQUAL", "DOUBLESLASH", "DOUBLESLASHEQUAL", "AT", "ATEQUAL",
  "RARROW", "ELLIPSIS", "COLONEQUAL", "ENDMARKER", "$accept", "file_input",
  "fk_NEWLINE_stmt", "NL_stmt", "funcdef", "opc_RARROW_test",
  "opc_TYPE_COMMENT", "parameters", "opc_argslist", "stmt", "simple_stmt",
  "fk_SEMI_small_stmt", "small_stmt", "expr_stmt", "expr_stmt_1",
  "expr_stmt_2", "opc_fk_EQ_YE_TSE_TC", "fk_EQ_YE_TSE", "expr_stmt_3",
  "expr_stmt_4", "annassign", "testlist_star_expr", "TSE_stmt",
  "fk_COMMA_T_SE", "TSE_stmt_1", "TSE_stmt_2", "augassign", "opc_SEMI",
  "opc_COLON_test", "opc_COMMA", "del_stmt", "pass_stmt", "flow_stmt",
  "break_stmt", "continue_stmt", "return_stmt", "yield_stmt",
  "opc_testlist_star_expr", "global_stmt", "nonlocal_stmt",
  "fk_COMMA_NAME", "compound_stmt", "if_stmt", "fk_ELIF_NT_COLON_SUITE",
  "while_stmt", "for_stmt", "opc_ELSE_COLON_suite", "with_stmt",
  "fk_COMMA_WI", "with_item", "opc_AS_expr", "suite", "namedexpr_test",
  "opc_COLONEQUAL_test", "test", "opc_IF_or_test_ELSE_test", "test_nocond",
  "lambdef", "lambdef_nocond", "or_test", "fk_OR_AT", "and_test",
  "fk_AND_NT", "not_test", "comparison", "fk_CO_EXPR", "comp_op",
  "star_expr", "expr", "fk_VBAR_XE", "xor_expr", "fk_CIRCUMFLEX_EXPR",
  "and_expr", "fk_AMPER_SE", "shift_expr", "fk_LS_RS_AE", "SE_stmt",
  "arith_expr", "fk_T_PLUS_MINUS", "AE_stmt", "term", "fk_MATH",
  "term_stmt", "factor", "factor_stmt", "power", "opc_DOUBLESTAR_factor",
  "atom_expr", "fk_trailer", "atom", "atom_stmt", "opc_yield_expr",
  "opc_testlist_comp", "fk_STRING", "testlist_comp", "trailer",
  "opc_arglist", "fk_COMMA_NT_SE", "trailer_stmt", "trailer_stmt_1",
  "subscriptlist", "fk_COMMA_S", "subscript", "opc_test", "opc_sliceop",
  "sliceop", "exprlist", "fk_COMMA_E_SE", "exprlist_stmt", "testlist",
  "fk_COMMA_test", "classdef", "opc_LPAR_arglist_RPAR", "arglist",
  "fk_COMMA_A", "argument", "opc_comp_for", "comp_iter", "sync_comp_for",
  "opc_comp_iter", "comp_for", "opc_ASYNC", "comp_if", "yield_expr",
  "opc_yield_arg", "yield_arg", "func_body_suite", "fk_stmt",
  "opc_TYPE_COMMENT_NEWLINE", YY_NULLPTR
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

#define YYPACT_NINF (-323)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-275)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     314,    15,    22,    39,   748,   687,  -323,  -323,   757,   687,
    -323,  -323,  -323,   687,   619,    36,    43,    45,  -323,   757,
      17,  -323,  -323,    -3,  -323,   550,   619,  -323,  -323,   791,
    -323,  -323,    88,     4,   314,  -323,  -323,  -323,    41,  -323,
     788,    46,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,    89,    93,
      98,  -323,  -323,   161,    53,    44,    55,   -38,    42,     5,
     791,  -323,  -323,     8,  -323,  -323,    65,    72,    69,    73,
    -323,    74,    32,  -323,  -323,   102,    75,    77,    78,   125,
    -323,  -323,   687,  -323,  -323,  -323,    80,    80,  -323,     8,
      -3,  -323,  -323,  -323,    87,  -323,  -323,  -323,    49,  -323,
      91,  -323,  -323,  -323,  -323,   473,    86,   687,   550,  -323,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,  -323,  -323,  -323,   103,    79,  -323,   646,   619,    92,
      46,   748,  -323,   748,  -323,   748,  -323,   124,   136,  -323,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,   791,   791,
    -323,   791,  -323,   791,  -323,  -323,  -323,  -323,   791,  -323,
    -323,  -323,   791,  -323,  -323,  -323,  -323,  -323,  -323,   791,
    -323,  -323,   577,   687,   106,  -323,     8,   508,    99,    39,
      57,    39,   687,   395,   687,  -323,   687,   757,    92,   395,
     687,   100,   791,  -323,  -323,   111,  -323,  -323,  -323,  -323,
    -323,  -323,   619,    92,  -323,  -323,   133,  -323,   314,  -323,
     108,    94,  -323,  -323,  -323,  -323,   115,    79,  -323,   104,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,   143,    93,
      98,  -323,  -323,   161,    53,    44,    55,   -38,    42,     5,
     687,   687,    10,   112,  -323,   109,   114,   113,   116,   121,
    -323,  -323,  -323,   118,   395,   119,   687,   122,  -323,  -323,
     130,  -323,   162,  -323,   129,    75,  -323,   160,    78,   145,
    -323,    80,   134,  -323,   757,  -323,  -323,  -323,   550,  -323,
    -323,   687,    92,   687,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,  -323,  -323,  -323,  -323,   687,   687,  -323,  -323,  -323,
     577,    92,  -323,   687,    92,   687,  -323,  -323,  -323,  -323,
     145,   367,   687,   160,   145,  -323,   138,  -323,  -323,  -323,
     395,  -323,  -323,   166,  -323,  -323,   104,  -323,  -323,  -323,
    -323,   109,  -323,   116,  -323,  -323,   140,   438,   367,   142,
    -323,   395,   395,  -323,   748,  -323,  -323,  -323,   687,  -323,
    -323,   154,  -323,  -323,   367,   155,   395,   160,  -323,    29,
    -323,   158,   163,  -323,  -323,   162,  -323,   714,  -323,  -323,
    -323,  -323,  -323,   367,  -323,    39,    29,  -323,  -323,   367,
     164,  -323,   168,   714,  -323,  -323
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     0,     0,    14,     0,     0,   206,   207,     0,     0,
      75,    80,    81,     0,    84,   278,     0,     0,   205,     0,
       0,   201,   202,   214,     6,   210,   212,   188,   189,     0,
     190,   204,     0,     0,     3,    95,     7,    17,    20,    23,
      35,    48,    24,    25,    26,    76,    77,    78,    79,    27,
      28,    18,    91,    92,    93,    94,    46,   120,   121,   128,
     132,   136,    47,   138,   154,   158,   162,   166,   172,   178,
       0,   187,   192,   196,    96,    83,   254,     0,    16,     0,
     135,     0,   117,   246,   245,     0,   242,     0,   108,   112,
      85,    82,     0,   281,   277,   279,    88,    88,    74,   196,
     214,   203,   226,   227,     0,   208,   209,   213,   223,   211,
       0,   152,     1,     2,     4,     0,    67,     0,     0,    54,
      55,    56,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    57,    29,    32,     0,    38,    30,     0,     0,    72,
      48,     0,   119,     0,   127,     0,   131,     0,   150,   148,
     141,   142,   146,   143,   147,   145,   144,   137,     0,     0,
     153,     0,   157,     0,   161,   169,   170,   165,     0,   175,
     176,   171,     0,   181,   183,   184,   185,   182,   177,     0,
     186,   191,   221,   236,     0,   194,   196,     0,     0,    14,
       9,    14,     0,     0,     0,   116,     0,     0,    72,     0,
       0,     0,     0,   111,   280,     0,    86,    87,   195,   215,
     199,   275,     0,    72,   217,   228,     0,   200,     3,    68,
       0,    69,    41,    43,    42,    36,    37,    38,    31,   248,
      34,    33,    51,    52,    53,    73,    45,    49,     0,   128,
     132,   149,   151,   138,   154,   158,   162,   166,   172,   178,
       0,     0,   266,     0,   222,   258,   234,     0,   231,     0,
     220,   197,   255,     0,     0,     0,     0,     0,    15,   125,
       0,   114,    98,   118,     0,   242,   241,   103,   108,    11,
     113,    88,   223,   229,     0,   273,    21,    19,     0,    44,
      39,     0,    72,     0,   129,   133,   139,   155,   159,   163,
     167,   173,   179,   265,   264,     0,     0,   261,   267,   218,
       0,    72,   219,   236,    72,   236,   256,   253,    13,    10,
      11,     0,     0,   103,    11,   243,     0,   101,   109,    12,
       0,    89,   224,     0,    71,    70,   248,   247,   122,   263,
     262,   258,   257,   231,   230,   237,   238,     0,   284,     0,
      97,     0,     0,   107,     0,   249,   259,   232,   236,   235,
     239,   287,   282,     8,   284,     0,     0,   103,   104,   271,
     240,     0,     0,   285,   115,    98,   102,     0,   272,   270,
     268,   269,   288,     0,    99,    14,   271,   124,   123,   284,
       0,   276,     0,     0,   283,   126
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -323,  -323,   -24,  -323,  -323,  -323,  -274,  -323,  -176,  -284,
    -150,  -323,    95,  -323,  -323,  -323,  -323,  -108,   173,  -323,
    -323,   -12,  -323,    64,  -323,  -323,  -323,  -323,  -323,  -175,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,
     -83,  -323,  -323,  -167,  -323,  -323,  -292,  -323,   -63,    18,
    -323,  -183,    -4,  -323,    -5,  -323,  -174,  -323,  -323,  -129,
     -22,    81,   -17,    13,  -323,   -11,  -323,    -1,     3,   -18,
      68,   -10,    76,    -8,    70,    -7,  -323,    66,    -9,  -323,
      71,    -2,  -323,   -44,  -323,  -323,  -323,  -323,   -71,   216,
    -323,  -323,   215,   144,  -323,  -323,  -323,   -40,    37,  -323,
    -323,   -93,   -62,  -285,  -323,  -323,   -13,   -23,    56,    58,
     -81,  -323,  -323,    82,   -85,   -53,  -323,  -323,  -323,  -128,
     -89,  -323,  -323,   -16,  -323,  -323,  -323,  -322,  -323
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,    35,   267,   330,   190,    79,    36,
      37,   116,    38,    39,   132,   228,   133,   134,   227,   222,
     136,    40,    41,   139,   140,   232,   137,   220,   289,   236,
      42,    43,    44,    45,    46,    47,    48,    91,    49,    50,
     206,    51,    52,   323,    53,    54,   327,    55,   201,    88,
     203,   272,   102,   195,    56,   142,   386,    57,   387,    58,
     144,    59,   146,    60,    61,   157,   158,    62,    63,   160,
      64,   162,    65,   164,    66,   167,   168,    67,   171,   172,
      68,   178,   179,    69,    70,    71,   181,    72,   185,    73,
     104,   105,   106,   101,   107,   186,   253,   213,   108,   214,
     257,   314,   258,   259,   359,   360,    85,   198,    86,   230,
     292,    74,   188,   254,   311,   255,   307,   378,   285,   379,
     380,   216,   381,    75,    94,    95,   363,   365,   372
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,    81,    90,    93,    82,    87,    98,    83,    89,   109,
     114,    84,   238,   265,   207,   268,   277,    80,    83,   215,
      82,    82,    84,   276,   103,   103,   180,   226,   208,  -274,
     346,   350,   111,     6,     7,   165,   166,   348,   283,   100,
      92,   377,   373,   271,     3,     4,   347,   211,  -274,   271,
     351,    18,     6,     7,   182,    76,   183,    21,    22,    23,
     173,   174,    77,    25,   364,    26,   211,   392,  -274,   175,
      18,   184,   305,   370,    20,   376,    21,    22,    23,    78,
     364,   317,    25,    96,    26,    97,   211,   204,   112,    27,
      28,    29,   176,   115,   177,   169,   170,   138,   113,   389,
     212,   141,   224,   306,   143,   364,   223,    30,   145,    31,
     159,   187,   221,   163,   271,   261,   161,   337,   189,   290,
     191,   231,   196,   192,   193,   194,   197,   199,    31,   200,
     202,   205,   229,   233,   210,   249,   342,   234,   219,   344,
     217,   118,   225,   235,   241,   242,   260,   353,   266,   264,
     279,   281,   284,   287,   -39,   291,   288,   293,   240,   309,
     310,   243,   312,   308,  -237,   316,   318,   313,   367,   368,
     147,   315,   320,   321,   326,   322,   148,   252,   256,   324,
     271,   149,   252,   375,   329,   212,   354,   269,   352,   273,
     358,   229,   366,   371,   286,    89,    83,   362,   331,   374,
      84,   271,   271,   382,   237,   280,   383,    82,   384,   390,
     218,   103,   394,   135,   393,   328,   271,   294,   278,   395,
     150,   151,   152,   295,   239,   369,   297,   244,   153,   154,
     155,   156,   296,   246,   247,   298,    99,   245,   299,   301,
     300,   110,   332,   248,   209,   303,   304,   302,   388,   282,
     357,   343,   325,   275,   274,   355,   356,   341,   391,     0,
       0,   319,     0,     0,   388,     0,     0,     0,     0,   263,
       0,   333,   335,     0,     0,     0,   334,     0,     0,     0,
       0,     0,     0,    83,     0,     0,   336,    84,   338,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     339,   340,     0,     0,     0,   252,     0,     0,   256,     0,
     345,     0,     0,     0,     0,     0,     0,    82,   349,     0,
       1,     2,     3,     4,     0,     0,     5,     0,     0,     0,
       6,     7,     0,     8,     0,     9,    10,    11,    12,     0,
       0,     0,    13,    14,     0,    15,    16,    17,    18,    19,
       0,     0,    20,   345,    21,    22,    23,     0,     0,    24,
      25,     0,    26,     0,     0,     0,     0,    27,    28,    29,
       0,     0,     0,     1,     2,     3,     4,     0,     0,     5,
       0,     0,     0,     6,     7,    30,     8,     0,     9,    10,
      11,    12,     0,     0,     0,    13,    14,     0,    15,    16,
      17,    18,    19,     3,     4,    20,    31,    21,    22,    23,
       0,     6,     7,    25,     0,    26,     0,    10,    11,    12,
      27,    28,    29,     0,    14,     0,    15,    16,    17,    18,
      19,     0,     0,    20,     0,    21,    22,    23,    30,     0,
     270,    25,     0,    26,     0,     0,     3,     4,    27,    28,
      29,     0,     0,     0,     6,     7,     0,     0,     0,    31,
      10,    11,    12,     0,     0,     0,    30,    14,     0,    15,
      16,    17,    18,    19,     0,     0,    20,     0,    21,    22,
      23,     3,     4,   361,    25,     0,    26,    31,     0,     6,
       7,    27,    28,    29,     0,    10,    11,    12,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    30,
       0,    20,     0,    21,    22,    23,     3,     4,     0,    25,
       0,    26,     0,     0,     6,     7,    27,    28,    29,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,    30,     0,    20,     0,    21,    22,
      23,     0,     0,     0,    25,   262,    26,     0,     3,     4,
       0,    27,    28,   250,     0,    31,     6,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,    15,     0,   251,    18,     3,     4,     0,    20,     0,
      21,    22,    23,     6,     7,     0,    25,     0,    26,     0,
      31,     0,     0,    27,    28,    29,     0,     0,     0,     0,
       0,    18,     0,     0,     0,    20,     0,    21,    22,    23,
       0,    30,     0,    25,     0,    26,     0,     3,     4,     0,
      27,    28,   250,     0,     0,     6,     7,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,     0,    30,     0,
       0,     0,   251,    18,     3,     4,     0,    20,     0,    21,
      22,    23,     6,     7,     0,    25,     0,    26,     0,    31,
       0,     0,    27,    28,    29,     0,     0,    15,     0,     0,
      18,     0,     0,     0,    20,     0,    21,    22,    23,     0,
      30,     0,    25,     0,    26,     3,     4,     0,     0,    27,
      28,     0,     0,     6,     7,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,     0,     0,    30,     0,     0,
       0,    18,   385,     4,     0,    20,     0,    21,    22,    23,
       6,     7,     0,    25,     0,    26,     0,     0,    31,     0,
      27,    28,     0,     0,     0,     0,     0,     0,    18,     0,
       0,     0,    20,     0,    21,    22,    23,     4,    30,     0,
      25,     0,    26,     0,     6,     7,     0,    27,    28,     0,
       0,     0,     0,     6,     7,     0,     0,     0,     0,    31,
       0,     0,    18,     0,     0,    30,    20,     0,    21,    22,
      23,    18,     0,     0,    25,    20,    26,    21,    22,    23,
       0,    27,    28,    25,     0,    26,    31,     6,     7,     0,
      27,    28,    29,     0,     0,     0,     0,     0,     0,    30,
       0,     0,     0,     0,     0,    18,     0,   -38,    30,    20,
       0,    21,    22,    23,     0,     0,     0,    25,   117,    26,
      31,     0,     0,     0,    27,    28,     0,     0,     0,    31,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,     0,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,     0,   130,     0,   131,     0,
       0,     0,     0,    31
};

static const yytype_int16 yycheck[] =
{
       5,     5,    14,    15,     9,     9,    19,     8,    13,    25,
      34,     8,   141,   189,    97,   191,   199,     4,    19,   108,
      25,    26,    19,   198,    25,    26,    70,   135,    99,    19,
     315,   323,    29,    16,    17,    73,    74,   321,   213,    42,
       4,    12,   364,   193,     8,     9,   320,    37,    19,   199,
     324,    34,    16,    17,    46,    40,    48,    40,    41,    42,
      55,    56,    40,    46,   348,    48,    37,   389,    19,    64,
      34,    63,    62,   358,    38,   367,    40,    41,    42,    40,
     364,   264,    46,    40,    48,    40,    37,    92,     0,    53,
      54,    55,    87,    52,    89,    53,    54,    51,    94,   383,
      51,    12,   118,    93,    11,   389,   118,    71,    10,    92,
      57,    46,   117,    58,   264,   186,    72,   292,    46,   227,
      51,   137,    20,    50,    50,    93,    51,    50,    92,    51,
       5,    51,   137,   138,    47,   179,   311,   138,    52,   314,
      49,    62,    39,    51,    20,     9,    40,   330,    91,    50,
      50,    40,    19,    45,    39,    51,    62,    14,   145,    47,
      51,   158,    49,   252,    50,    47,    47,    51,   351,   352,
       9,    50,    50,    43,    14,    13,    15,   182,   183,    50,
     330,    20,   187,   366,    39,    51,    20,   192,    50,   194,
      50,   196,    50,    39,   218,   200,   197,   347,   281,    44,
     197,   351,   352,    45,   140,   202,    43,   212,   375,   385,
     115,   212,    44,    40,    50,   278,   366,   239,   200,   393,
      59,    60,    61,   240,   143,   354,   244,   159,    67,    68,
      69,    70,   243,   163,   168,   245,    20,   161,   246,   248,
     247,    26,   282,   172,   100,   250,   251,   249,   377,   212,
     343,   313,   275,   197,   196,   336,   341,   310,   386,    -1,
      -1,   266,    -1,    -1,   393,    -1,    -1,    -1,    -1,   187,
      -1,   284,   288,    -1,    -1,    -1,   288,    -1,    -1,    -1,
      -1,    -1,    -1,   284,    -1,    -1,   291,   284,   293,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,   306,    -1,    -1,    -1,   310,    -1,    -1,   313,    -1,
     315,    -1,    -1,    -1,    -1,    -1,    -1,   322,   322,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    -1,    -1,    -1,
      16,    17,    -1,    19,    -1,    21,    22,    23,    24,    -1,
      -1,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    -1,    38,   358,    40,    41,    42,    -1,    -1,    45,
      46,    -1,    48,    -1,    -1,    -1,    -1,    53,    54,    55,
      -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,    12,
      -1,    -1,    -1,    16,    17,    71,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    32,
      33,    34,    35,     8,     9,    38,    92,    40,    41,    42,
      -1,    16,    17,    46,    -1,    48,    -1,    22,    23,    24,
      53,    54,    55,    -1,    29,    -1,    31,    32,    33,    34,
      35,    -1,    -1,    38,    -1,    40,    41,    42,    71,    -1,
      45,    46,    -1,    48,    -1,    -1,     8,     9,    53,    54,
      55,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    92,
      22,    23,    24,    -1,    -1,    -1,    71,    29,    -1,    31,
      32,    33,    34,    35,    -1,    -1,    38,    -1,    40,    41,
      42,     8,     9,    45,    46,    -1,    48,    92,    -1,    16,
      17,    53,    54,    55,    -1,    22,    23,    24,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    71,
      -1,    38,    -1,    40,    41,    42,     8,     9,    -1,    46,
      -1,    48,    -1,    -1,    16,    17,    53,    54,    55,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    71,    -1,    38,    -1,    40,    41,
      42,    -1,    -1,    -1,    46,    47,    48,    -1,     8,     9,
      -1,    53,    54,    55,    -1,    92,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    31,    -1,    75,    34,     8,     9,    -1,    38,    -1,
      40,    41,    42,    16,    17,    -1,    46,    -1,    48,    -1,
      92,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    38,    -1,    40,    41,    42,
      -1,    71,    -1,    46,    -1,    48,    -1,     8,     9,    -1,
      53,    54,    55,    -1,    -1,    16,    17,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    75,    34,     8,     9,    -1,    38,    -1,    40,
      41,    42,    16,    17,    -1,    46,    -1,    48,    -1,    92,
      -1,    -1,    53,    54,    55,    -1,    -1,    31,    -1,    -1,
      34,    -1,    -1,    -1,    38,    -1,    40,    41,    42,    -1,
      71,    -1,    46,    -1,    48,     8,     9,    -1,    -1,    53,
      54,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    34,     8,     9,    -1,    38,    -1,    40,    41,    42,
      16,    17,    -1,    46,    -1,    48,    -1,    -1,    92,    -1,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    38,    -1,    40,    41,    42,     9,    71,    -1,
      46,    -1,    48,    -1,    16,    17,    -1,    53,    54,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    34,    -1,    -1,    71,    38,    -1,    40,    41,
      42,    34,    -1,    -1,    46,    38,    48,    40,    41,    42,
      -1,    53,    54,    46,    -1,    48,    92,    16,    17,    -1,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    39,    71,    38,
      -1,    40,    41,    42,    -1,    -1,    -1,    46,    50,    48,
      92,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    92,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    88,    -1,    90,    -1,
      -1,    -1,    -1,    92
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,     8,     9,    12,    16,    17,    19,    21,
      22,    23,    24,    28,    29,    31,    32,    33,    34,    35,
      38,    40,    41,    42,    45,    46,    48,    53,    54,    55,
      71,    92,    96,    97,    98,    99,   104,   105,   107,   108,
     116,   117,   125,   126,   127,   128,   129,   130,   131,   133,
     134,   136,   137,   139,   140,   142,   149,   152,   154,   156,
     158,   159,   162,   163,   165,   167,   169,   172,   175,   178,
     179,   180,   182,   184,   206,   218,    40,    40,    40,   103,
     158,   147,   149,   162,   163,   201,   203,   147,   144,   149,
     116,   132,     4,   116,   219,   220,    40,    40,   201,   184,
      42,   188,   147,   162,   185,   186,   187,   189,   193,   218,
     187,   163,     0,    94,    97,    52,   106,    50,    62,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      88,    90,   109,   111,   112,   113,   115,   121,    51,   118,
     119,    12,   150,    11,   155,    10,   157,     9,    15,    20,
      59,    60,    61,    67,    68,    69,    70,   160,   161,    57,
     164,    72,   166,    58,   168,    73,    74,   170,   171,    53,
      54,   173,   174,    55,    56,    64,    87,    89,   176,   177,
     178,   181,    46,    48,    63,   183,   190,    46,   207,    46,
     102,    51,    50,    50,    93,   148,    20,    51,   202,    50,
      51,   143,     5,   145,   149,    51,   135,   135,   183,   188,
      47,    37,    51,   192,   194,   215,   216,    49,   107,    52,
     122,   149,   114,   116,   218,    39,   112,   113,   110,   149,
     204,   218,   120,   149,   162,    51,   124,   118,   154,   156,
     158,    20,     9,   163,   165,   167,   169,   172,   175,   178,
      55,    75,   149,   191,   208,   210,   149,   195,   197,   198,
      40,   183,    47,   208,    50,   103,    91,   100,   103,   149,
      45,   105,   146,   149,   204,   203,   124,   146,   144,    50,
     163,    40,   193,   124,    19,   213,    97,    45,    62,   123,
     112,    51,   205,    14,   155,   157,   160,   164,   166,   168,
     170,   173,   176,   149,   149,    62,    93,   211,   215,    47,
      51,   209,    49,    51,   196,    50,    47,   146,    47,   149,
      50,    43,    13,   138,    50,   202,    14,   141,   143,    39,
     101,   135,   192,   201,   116,   218,   149,   124,   149,   149,
     149,   210,   124,   197,   124,   149,   198,   101,   104,   147,
     141,   101,    50,   146,    20,   205,   209,   196,    50,   199,
     200,    45,   105,   221,   104,   222,    50,   146,   146,   154,
     198,    39,   223,   222,    44,   146,   141,    12,   212,   214,
     215,   217,    45,    43,   138,     8,   151,   153,   154,   104,
     103,   214,   222,    50,    44,   151
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    97,    97,    97,    98,    98,    99,   100,
     100,   101,   101,   102,   103,   103,   103,   104,   104,   105,
     106,   106,   106,   107,   107,   107,   107,   107,   107,   108,
     109,   109,   109,   110,   110,   111,   111,   111,   112,   112,
     112,   113,   114,   114,   115,   116,   117,   117,   118,   118,
     118,   119,   120,   120,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   122,   122,   123,
     123,   123,   124,   124,   125,   126,   127,   127,   127,   127,
     128,   129,   130,   131,   132,   132,   133,   134,   135,   135,
     135,   136,   136,   136,   136,   136,   136,   137,   138,   138,
     138,   139,   140,   141,   141,   101,   101,   142,   143,   143,
     143,   144,   145,   145,   146,   146,   147,   148,   148,   149,
     149,   150,   150,   151,   151,   152,   153,   154,   155,   155,
     155,   156,   157,   157,   157,   158,   158,   159,   160,   160,
     160,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   162,   163,   164,   164,   164,   165,   166,   166,
     166,   167,   168,   168,   168,   169,   170,   170,   170,   171,
     171,   172,   173,   173,   173,   174,   174,   175,   176,   176,
     176,   177,   177,   177,   177,   177,   178,   178,   179,   179,
     179,   180,   181,   181,   182,   182,   183,   183,   183,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   185,   185,
     186,   186,   187,   187,   188,   188,   188,   189,   190,   190,
     190,   191,   191,   192,   192,   192,   193,   193,   194,   194,
     195,   196,   196,   196,   197,   197,   198,   198,   199,   199,
     200,   201,   202,   202,   202,   203,   203,   204,   205,   205,
     205,   124,   124,   206,   207,   207,   207,   208,   209,   209,
     209,   210,   210,   210,   210,   210,   211,   211,   212,   212,
     213,   214,   214,   215,   216,   216,   217,   218,   219,   219,
     220,   220,   221,   221,   222,   222,   222,   223,   223
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     2,     1,     1,     1,     7,     0,
       2,     0,     1,     3,     0,     3,     1,     1,     1,     4,
       0,     3,     2,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     1,     1,     1,     0,     2,     2,     0,     2,
       1,     2,     1,     1,     3,     3,     1,     1,     0,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       2,     2,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     0,     1,     3,     3,     0,     3,
       2,     1,     1,     1,     1,     1,     1,     6,     0,     5,
       4,     5,     8,     0,     3,     0,     1,     6,     0,     3,
       2,     2,     0,     2,     1,     5,     2,     0,     2,     2,
       1,     0,     4,     1,     1,     4,     4,     2,     0,     3,
       2,     2,     0,     3,     2,     2,     1,     2,     0,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     2,     0,     3,     2,     2,     0,     3,
       2,     2,     0,     3,     2,     2,     0,     3,     2,     1,
       1,     2,     0,     3,     2,     1,     1,     2,     0,     3,
       2,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     2,     0,     1,     2,     3,     0,     2,     1,     3,
       3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     1,     0,     2,     1,     2,     3,     3,
       2,     0,     1,     0,     3,     2,     1,     1,     1,     2,
       3,     0,     3,     2,     1,     4,     0,     1,     0,     1,
       2,     3,     0,     3,     2,     1,     1,     3,     0,     3,
       2,     0,     1,     5,     0,     2,     3,     3,     0,     3,
       2,     2,     3,     3,     2,     2,     0,     1,     1,     1,
       5,     0,     1,     2,     0,     1,     3,     2,     0,     1,
       2,     1,     1,     6,     0,     2,     1,     0,     2
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

#line 2077 "parser.c"

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
#line 516 "parser.y"


int main(void) {
    if (yyparse() == 0) printf("PARSE SUCCESSFUL!\n");
    else                printf("PARSE FAILED!\n");
    printf("    LINHA: %d\n", yylineno);
    return 0;
}
