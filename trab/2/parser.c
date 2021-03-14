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
char* values;
extern int yylineno;

#line 78 "parser.c"

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
    ENDMARKER = 349,
    LOW = 350
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
#define YYFINAL  111
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   861

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  124
/* YYNRULES -- Number of rules.  */
#define YYNRULES  252
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  386

#define YYUNDEFTOK  2
#define YYMAXUTOK   350


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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   200,   200,   203,   204,   206,   206,   208,   210,   211,
     213,   215,   216,   217,   219,   219,   220,   222,   223,   225,
     225,   225,   225,   225,   225,   226,   227,   227,   227,   228,
     228,   231,   232,   233,   235,   236,   237,   238,   238,   240,
     241,   242,   242,   244,   245,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   249,   250,
     252,   253,   254,   256,   257,   259,   260,   261,   261,   261,
     261,   262,   263,   264,   265,   267,   268,   270,   271,   273,
     274,   276,   276,   276,   276,   276,   276,   278,   280,   281,
     283,   284,   286,   287,   289,   291,   292,   294,   296,   297,
     299,   299,   301,   303,   304,   306,   306,   308,   309,   311,
     311,   312,   313,   314,   316,   317,   319,   321,   322,   324,
     324,   325,   327,   328,   330,   330,   330,   330,   330,   330,
     330,   330,   330,   330,   330,   331,   332,   334,   335,   337,
     339,   340,   342,   344,   345,   347,   349,   350,   352,   352,
     354,   356,   357,   359,   359,   361,   363,   364,   366,   366,
     366,   366,   366,   368,   368,   369,   369,   369,   371,   373,
     374,   376,   377,   380,   381,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   385,   386,   387,   391,   392,   394,
     395,   397,   398,   398,   398,   400,   401,   403,   404,   407,
     407,   408,   408,   410,   412,   413,   416,   416,   418,   419,
     421,   422,   424,   425,   427,   428,   431,   431,   433,   435,
     436,   438,   440,   441,   442,   444,   446,   447,   450,   450,
     450,   450,   450,   452,   453,   455,   455,   456,   458,   459,
     461,   463,   464,   466,   467,   469,   470,   472,   472,   474,
     474,   476,   477
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
  "RARROW", "ELLIPSIS", "COLONEQUAL", "ENDMARKER", "LOW", "$accept",
  "file_input", "fk_NEWLINE_stmt", "NL_stmt", "funcdef", "opc_RARROW_test",
  "parameters", "opc_argslist", "stmt", "simple_stmt",
  "fk_SEMI_small_stmt", "small_stmt", "expr_stmt", "expr_stmt_1",
  "expr_stmt_2", "opc_fk_EQ_YE_TSE_TC", "fk_EQ_YE_TSE", "expr_stmt_3",
  "expr_stmt_4", "annassign", "testlist_star_expr", "TSE_stmt",
  "fk_COMMA_T_SE", "augassign", "opc_SEMI", "opc_COLON_test", "opc_COMMA",
  "del_stmt", "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt",
  "return_stmt", "yield_stmt", "opc_testlist_star_expr", "global_stmt",
  "nonlocal_stmt", "fk_COMMA_NAME", "compound_stmt", "if_stmt",
  "fk_ELIF_NT_COLON_SUITE", "while_stmt", "for_stmt",
  "opc_ELSE_COLON_suite", "with_stmt", "fk_COMMA_WI", "with_item",
  "opc_AS_expr", "suite", "namedexpr_test", "opc_COLONEQUAL_test", "test",
  "opc_IF_or_test_ELSE_test", "test_nocond", "lambdef", "lambdef_nocond",
  "or_test", "fk_OR_AT", "and_test", "fk_AND_NT", "not_test", "comparison",
  "fk_CO_EXPR", "comp_op", "star_expr", "expr", "fk_VBAR_XE", "xor_expr",
  "fk_CIRCUMFLEX_EXPR", "and_expr", "fk_AMPER_SE", "shift_expr",
  "fk_LS_RS_AE", "SE_stmt", "arith_expr", "fk_T_PLUS_MINUS", "AE_stmt",
  "term", "fk_MATH", "term_stmt", "factor", "factor_stmt", "power",
  "opc_DOUBLESTAR_factor", "atom_expr", "fk_trailer", "atom",
  "opc_atom_stmt", "opc_testlist_comp", "fk_STRING", "testlist_comp",
  "trailer", "opc_arglist", "fk_COMMA_NT_SE", "trailer_stmt",
  "trailer_stmt_1", "subscriptlist", "fk_COMMA_S", "subscript", "opc_test",
  "opc_sliceop", "sliceop", "exprlist", "fk_COMMA_E_SE", "exprlist_stmt",
  "testlist", "fk_COMMA_test", "classdef", "opc_LPAR_arglist_RPAR",
  "arglist", "fk_COMMA_A", "argument", "opc_comp_for", "comp_iter",
  "sync_comp_for", "opc_comp_iter", "comp_for", "opc_ASYNC", "comp_if",
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
     345,   346,   347,   348,   349,   350
};
# endif

#define YYPACT_NINF (-318)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-242)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     311,   -10,    12,    17,   745,   684,  -318,  -318,   180,   684,
    -318,  -318,  -318,   684,   616,    31,    20,    21,  -318,   180,
      76,  -318,  -318,    -6,  -318,   547,   616,  -318,  -318,   754,
    -318,  -318,    62,   -31,   311,  -318,  -318,  -318,    28,  -318,
     771,    19,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,    70,    72,
      78,  -318,  -318,   193,    32,    24,    40,   -29,     2,    39,
     754,  -318,    15,     5,  -318,  -318,    51,    54,    53,    57,
    -318,    58,    16,  -318,  -318,    93,    64,    71,    80,   124,
    -318,  -318,   684,  -318,  -318,  -318,    81,    81,  -318,     5,
      -6,  -318,  -318,  -318,    86,  -318,    27,  -318,    85,  -318,
    -318,  -318,  -318,  -318,   470,    83,   684,   547,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,    74,  -318,   643,   616,    88,   745,  -318,
     745,  -318,   745,  -318,   117,   132,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,   754,   754,  -318,   754,  -318,
     754,  -318,  -318,  -318,  -318,   754,  -318,  -318,  -318,   754,
    -318,  -318,  -318,  -318,  -318,  -318,   754,  -318,   754,  -318,
     574,   684,   102,  -318,     5,   505,    94,    17,    55,    17,
     684,   392,   684,  -318,   684,   180,    88,   392,   684,    95,
     754,  -318,  -318,   107,  -318,  -318,  -318,  -318,  -318,  -318,
     616,    88,  -318,  -318,   129,  -318,   311,  -318,   104,    89,
    -318,  -318,  -318,   111,    74,  -318,   101,  -318,  -318,    19,
    -318,  -318,   139,    72,    78,  -318,  -318,   193,    32,    24,
      40,   -29,     2,    39,  -318,   684,   684,    13,   108,  -318,
     103,   106,   113,   112,   114,  -318,  -318,  -318,   118,   392,
     119,   684,   120,  -318,  -318,   126,  -318,   158,  -318,   122,
      64,  -318,   159,    80,   392,  -318,    81,   123,  -318,   180,
    -318,  -318,  -318,   547,  -318,  -318,  -318,   684,    88,  -318,
     684,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,   684,   684,  -318,  -318,  -318,   574,    88,  -318,
     684,    88,   684,  -318,  -318,  -318,  -318,   435,   364,   684,
     159,   392,  -318,   127,  -318,  -318,  -318,  -318,  -318,   161,
    -318,  -318,   101,  -318,  -318,  -318,  -318,   103,  -318,   112,
    -318,  -318,   133,   136,  -318,  -318,   364,   134,  -318,   159,
     392,   745,  -318,  -318,  -318,   684,  -318,  -318,   364,   364,
     138,   392,  -318,  -318,    22,  -318,   364,  -318,  -318,   158,
     711,  -318,  -318,  -318,  -318,   142,  -318,    17,    22,  -318,
    -318,  -318,   141,  -318,   711,  -318
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    11,     0,     0,   182,   183,     0,     0,
      66,    71,    72,     0,    75,   245,     0,     0,   181,     0,
       0,   177,   178,   189,     5,   184,   187,   165,   166,     0,
     167,   180,     0,     0,     3,    85,     6,    14,    17,    19,
      31,    43,    20,    21,    22,    67,    68,    69,    70,    23,
      24,    15,    81,    82,    83,    84,    41,   106,   107,   114,
     117,   120,    42,   122,   137,   140,   143,   146,   151,   156,
       0,   164,   169,   173,    86,    74,   222,     0,    13,     0,
     119,     0,   103,   217,   216,     0,   214,     0,    95,    98,
      76,    73,     0,   248,   244,   246,    79,    79,    65,   173,
     189,   179,   199,   200,     0,   186,   197,   185,     0,   188,
     135,     1,     2,     4,     0,    58,     0,     0,    45,    46,
      47,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      48,    25,    28,    34,    26,     0,     0,    63,     0,   105,
       0,   113,     0,   116,     0,   133,   131,   124,   125,   129,
     126,   130,   128,   127,   121,     0,     0,   136,     0,   139,
       0,   142,   148,   149,   145,     0,   153,   154,   150,     0,
     158,   160,   161,   162,   159,   155,     0,   163,     0,   168,
     195,   208,     0,   171,   173,     0,     0,    11,     8,    11,
       0,     0,     0,   102,     0,     0,    63,     0,     0,     0,
       0,    97,   247,     0,    77,    78,   172,   190,   175,   242,
       0,    63,   191,   201,     0,   176,     3,    59,     0,    60,
      36,    38,    37,    33,    34,    27,   219,    30,    29,    43,
      64,    40,     0,   114,   117,   132,   134,   122,   137,   140,
     143,   146,   151,   156,   170,     0,     0,   233,     0,   196,
     226,   206,     0,   204,     0,   194,   174,   223,     0,     0,
       0,     0,     0,    12,   111,     0,   100,    88,   104,     0,
     214,   213,    92,    95,     0,    99,    79,   197,   202,     0,
     240,    18,    16,     0,    39,    32,    35,     0,    63,    44,
       0,   115,   118,   123,   138,   141,   144,   147,   152,   157,
     232,   231,     0,     0,   228,   234,   192,     0,    63,   193,
     208,    63,   208,   224,   221,    10,     9,     0,     0,     0,
      92,     0,   215,     0,    90,    96,    94,    80,   198,     0,
      62,    61,   219,   218,   108,   230,   229,   226,   225,   204,
     203,   209,   210,     0,   249,     7,   251,     0,    87,    92,
       0,     0,   220,   227,   205,   208,   207,   211,     0,   251,
       0,     0,    91,    93,   238,   212,   251,   252,   101,    88,
       0,   239,   237,   235,   236,     0,    89,    11,   238,   110,
     109,   250,     0,   243,     0,   112
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -318,  -318,   -24,  -318,  -318,  -318,  -318,  -174,  -292,  -160,
    -318,    84,  -318,  -318,  -318,  -318,   -36,   160,  -318,  -318,
     -12,    75,   -23,  -318,  -318,  -318,  -168,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,  -318,   -81,  -318,  -318,
    -162,  -318,  -318,  -291,  -318,   -63,    14,  -318,  -183,    -4,
    -318,    -5,  -318,  -169,  -318,  -318,  -127,   -17,    77,   -15,
      18,  -318,   -14,  -318,    -1,     4,   -11,    69,    -9,    73,
      -8,    79,    -3,  -318,    82,     0,  -318,    60,    -7,  -318,
     -51,  -318,  -318,  -318,  -318,   -72,   217,  -318,  -318,   144,
     219,  -318,  -318,   -28,    36,  -318,  -318,   -91,   -60,  -274,
    -318,  -318,   -13,    -2,    63,    61,   -73,  -318,  -318,    90,
     -68,   -43,  -318,  -318,  -318,  -113,   -89,  -318,  -318,   -16,
    -318,  -318,  -318,  -317
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,    35,   262,   188,    79,    36,    37,
     115,    38,    39,   131,   225,   132,   223,   224,   220,   134,
      40,    41,   137,   135,   218,   284,   231,    42,    43,    44,
      45,    46,    47,    48,    91,    49,    50,   204,    51,    52,
     320,    53,    54,   324,    55,   199,    88,   201,   267,   102,
     193,    56,   139,   378,    57,   379,    58,   141,    59,   143,
      60,    61,   154,   155,    62,    63,   157,    64,   159,    65,
     161,    66,   164,   165,    67,   168,   169,    68,   175,   176,
      69,    70,    71,   179,    72,   183,    73,   104,   108,   101,
     105,   184,   248,   211,   106,   212,   252,   311,   253,   254,
     356,   357,    85,   196,    86,   227,   288,    74,   186,   249,
     308,   250,   304,   371,   280,   372,   373,   214,   374,    75,
      94,    95,   345,   360
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,    81,    90,    93,    82,    87,    98,    83,    89,   107,
     113,   232,    84,   260,   272,   263,   205,   213,    83,   177,
      82,    82,    80,    84,   103,   103,   346,   206,   271,   348,
      76,   266,  -241,   110,   370,    92,   100,   266,   342,     3,
       4,  -241,   367,   278,   162,   163,  -241,     6,     7,   375,
     209,   180,    77,   181,   359,   166,   167,    78,   362,   209,
      96,    97,   111,   112,   209,    18,   366,   359,   182,    20,
     136,    21,    22,    23,   359,   302,   314,    25,   210,    26,
     114,   365,   138,   140,    27,    28,    29,   202,   142,   156,
     178,   326,     6,     7,   170,   171,   158,   185,   160,   266,
     187,   222,    30,   172,   189,   221,   303,   190,   191,   192,
      18,   219,   256,   194,   266,   195,    21,    22,    23,   228,
     333,   197,    25,    31,    26,   243,   173,   244,   174,   200,
     226,   198,   203,   208,   215,   217,   117,   235,   349,   230,
     338,   236,   255,   340,   259,   274,   261,   276,   279,   282,
     285,   283,   287,   290,   307,   306,  -209,   344,   305,   237,
     234,   266,   309,   310,   312,   313,   315,   363,    31,   318,
     317,   319,   321,   323,   210,   247,   251,   350,   369,   358,
     247,   351,   368,   355,   361,   264,   381,   268,   286,   226,
     266,   384,   281,    89,    83,   327,     6,     7,   216,    84,
     133,   266,   144,   382,   275,    82,   289,   376,   145,   103,
     325,   229,   273,   146,    18,   385,   291,   233,    20,   292,
      21,    22,    23,   293,   364,   238,    25,   294,    26,   242,
     295,   239,   296,    27,    28,    29,   299,    99,   297,   240,
     300,   301,   298,   380,   207,   109,   277,   241,   354,   328,
     339,    30,   147,   148,   149,   269,   316,   380,   270,   352,
     150,   151,   152,   153,   337,   383,   329,   331,   322,   353,
       0,   330,    31,     0,     0,   258,     0,     0,    83,     0,
       0,     0,   332,    84,     0,   334,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   335,   336,     0,
       0,     0,   247,     0,     0,   251,     0,   341,     0,     0,
       0,     0,     0,     0,    82,   347,     0,     1,     2,     3,
       4,     0,     0,     5,     0,     0,     0,     6,     7,     0,
       8,     0,     9,    10,    11,    12,     0,     0,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     0,     0,    20,
     341,    21,    22,    23,     0,     0,    24,    25,     0,    26,
       0,     0,     0,     0,    27,    28,    29,     0,     0,     0,
       1,     2,     3,     4,     0,     0,     5,     0,     0,     0,
       6,     7,    30,     8,     0,     9,    10,    11,    12,     0,
       0,     0,    13,    14,     0,    15,    16,    17,    18,    19,
       3,     4,    20,    31,    21,    22,    23,     0,     6,     7,
      25,     0,    26,     0,    10,    11,    12,    27,    28,    29,
       0,    14,     0,    15,    16,    17,    18,    19,     0,     0,
      20,     0,    21,    22,    23,    30,     0,   265,    25,     0,
      26,     0,     0,     3,     4,    27,    28,    29,     0,     0,
       0,     6,     7,     0,     0,     0,    31,    10,    11,    12,
       0,     0,     0,    30,    14,     0,    15,    16,    17,    18,
      19,     0,     0,    20,     0,    21,    22,    23,     3,     4,
     343,    25,     0,    26,    31,     0,     6,     7,    27,    28,
      29,     0,    10,    11,    12,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    30,     0,    20,     0,
      21,    22,    23,     3,     4,     0,    25,     0,    26,     0,
       0,     6,     7,    27,    28,    29,     0,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,    30,     0,    20,     0,    21,    22,    23,     0,     0,
       0,    25,   257,    26,     0,     3,     4,     0,    27,    28,
     245,     0,    31,     6,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,    15,     0,
     246,    18,     3,     4,     0,    20,     0,    21,    22,    23,
       6,     7,     0,    25,     0,    26,     0,    31,     0,     0,
      27,    28,    29,     0,     0,     0,     0,     0,    18,     0,
       0,     0,    20,     0,    21,    22,    23,     0,    30,     0,
      25,     0,    26,     0,     3,     4,     0,    27,    28,   245,
       0,     0,     6,     7,     0,     0,     0,     0,     0,    31,
       0,     0,     0,     0,     0,    30,     0,     0,     0,   246,
      18,     3,     4,     0,    20,     0,    21,    22,    23,     6,
       7,     0,    25,     0,    26,     0,    31,     0,     0,    27,
      28,    29,     0,     0,    15,     0,     0,    18,     0,     0,
       0,    20,     0,    21,    22,    23,     0,    30,     0,    25,
       0,    26,     3,     4,     0,     0,    27,    28,     0,     0,
       6,     7,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,     0,    30,     0,     0,     0,    18,   377,
       4,     0,    20,     0,    21,    22,    23,     6,     7,     0,
      25,     0,    26,     0,     0,    31,     0,    27,    28,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,    20,
       0,    21,    22,    23,     4,    30,     0,    25,     0,    26,
       0,     6,     7,     0,    27,    28,     0,     0,     0,     0,
       6,     7,     0,     0,     0,     0,    31,     0,     0,    18,
       0,     0,    30,    20,     0,    21,    22,    23,    18,     0,
       0,    25,    20,    26,    21,    22,    23,     0,    27,    28,
      25,     0,    26,    31,     0,     0,     0,    27,    28,     0,
       0,     0,     0,     0,     0,     0,    30,     0,     0,     0,
       0,   116,     0,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,   117,     0,     0,     0,    31,     0,     0,
       0,     0,     0,     0,     0,     0,    31,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,     0,   129,
       0,   130
};

static const yytype_int16 yycheck[] =
{
       5,     5,    14,    15,     9,     9,    19,     8,    13,    25,
      34,   138,     8,   187,   197,   189,    97,   106,    19,    70,
      25,    26,     4,    19,    25,    26,   318,    99,   196,   320,
      40,   191,    19,    29,    12,     4,    42,   197,   312,     8,
       9,    19,   359,   211,    73,    74,    19,    16,    17,   366,
      37,    46,    40,    48,   346,    53,    54,    40,   349,    37,
      40,    40,     0,    94,    37,    34,   358,   359,    63,    38,
      51,    40,    41,    42,   366,    62,   259,    46,    51,    48,
      52,   355,    12,    11,    53,    54,    55,    92,    10,    57,
      75,   274,    16,    17,    55,    56,    72,    46,    58,   259,
      46,   117,    71,    64,    51,   117,    93,    50,    50,    93,
      34,   116,   184,    20,   274,    51,    40,    41,    42,   135,
     288,    50,    46,    92,    48,   176,    87,   178,    89,     5,
     135,    51,    51,    47,    49,    52,    62,    20,   321,    51,
     308,     9,    40,   311,    50,    50,    91,    40,    19,    45,
      39,    62,    51,    14,    51,    47,    50,   317,   247,   155,
     142,   321,    49,    51,    50,    47,    47,   350,    92,    43,
      50,    13,    50,    14,    51,   180,   181,    50,   361,    43,
     185,    20,    44,    50,    50,   190,    44,   192,   224,   194,
     350,    50,   216,   198,   195,   276,    16,    17,   114,   195,
      40,   361,     9,   377,   200,   210,   229,   369,    15,   210,
     273,   136,   198,    20,    34,   384,   233,   140,    38,   234,
      40,    41,    42,   237,   351,   156,    46,   238,    48,   169,
     239,   158,   240,    53,    54,    55,   243,    20,   241,   160,
     245,   246,   242,   370,   100,    26,   210,   165,   339,   277,
     310,    71,    59,    60,    61,   194,   261,   384,   195,   332,
      67,    68,    69,    70,   307,   378,   279,   283,   270,   337,
      -1,   283,    92,    -1,    -1,   185,    -1,    -1,   279,    -1,
      -1,    -1,   287,   279,    -1,   290,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   302,   303,    -1,
      -1,    -1,   307,    -1,    -1,   310,    -1,   312,    -1,    -1,
      -1,    -1,    -1,    -1,   319,   319,    -1,     6,     7,     8,
       9,    -1,    -1,    12,    -1,    -1,    -1,    16,    17,    -1,
      19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    -1,    38,
     355,    40,    41,    42,    -1,    -1,    45,    46,    -1,    48,
      -1,    -1,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    -1,    -1,    -1,
      16,    17,    71,    19,    -1,    21,    22,    23,    24,    -1,
      -1,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
       8,     9,    38,    92,    40,    41,    42,    -1,    16,    17,
      46,    -1,    48,    -1,    22,    23,    24,    53,    54,    55,
      -1,    29,    -1,    31,    32,    33,    34,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    71,    -1,    45,    46,    -1,
      48,    -1,    -1,     8,     9,    53,    54,    55,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,    92,    22,    23,    24,
      -1,    -1,    -1,    71,    29,    -1,    31,    32,    33,    34,
      35,    -1,    -1,    38,    -1,    40,    41,    42,     8,     9,
      45,    46,    -1,    48,    92,    -1,    16,    17,    53,    54,
      55,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    71,    -1,    38,    -1,
      40,    41,    42,     8,     9,    -1,    46,    -1,    48,    -1,
      -1,    16,    17,    53,    54,    55,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    71,    -1,    38,    -1,    40,    41,    42,    -1,    -1,
      -1,    46,    47,    48,    -1,     8,     9,    -1,    53,    54,
      55,    -1,    92,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    31,    -1,
      75,    34,     8,     9,    -1,    38,    -1,    40,    41,    42,
      16,    17,    -1,    46,    -1,    48,    -1,    92,    -1,    -1,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    38,    -1,    40,    41,    42,    -1,    71,    -1,
      46,    -1,    48,    -1,     8,     9,    -1,    53,    54,    55,
      -1,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    75,
      34,     8,     9,    -1,    38,    -1,    40,    41,    42,    16,
      17,    -1,    46,    -1,    48,    -1,    92,    -1,    -1,    53,
      54,    55,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,
      -1,    38,    -1,    40,    41,    42,    -1,    71,    -1,    46,
      -1,    48,     8,     9,    -1,    -1,    53,    54,    -1,    -1,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    34,     8,
       9,    -1,    38,    -1,    40,    41,    42,    16,    17,    -1,
      46,    -1,    48,    -1,    -1,    92,    -1,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,
      -1,    40,    41,    42,     9,    71,    -1,    46,    -1,    48,
      -1,    16,    17,    -1,    53,    54,    -1,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    -1,    92,    -1,    -1,    34,
      -1,    -1,    71,    38,    -1,    40,    41,    42,    34,    -1,
      -1,    46,    38,    48,    40,    41,    42,    -1,    53,    54,
      46,    -1,    48,    92,    -1,    -1,    -1,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    -1,    88,
      -1,    90
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,     8,     9,    12,    16,    17,    19,    21,
      22,    23,    24,    28,    29,    31,    32,    33,    34,    35,
      38,    40,    41,    42,    45,    46,    48,    53,    54,    55,
      71,    92,    97,    98,    99,   100,   104,   105,   107,   108,
     116,   117,   123,   124,   125,   126,   127,   128,   129,   131,
     132,   134,   135,   137,   138,   140,   147,   150,   152,   154,
     156,   157,   160,   161,   163,   165,   167,   170,   173,   176,
     177,   178,   180,   182,   203,   215,    40,    40,    40,   103,
     156,   145,   147,   160,   161,   198,   200,   145,   142,   147,
     116,   130,     4,   116,   216,   217,    40,    40,   198,   182,
      42,   185,   145,   160,   183,   186,   190,   215,   184,   186,
     161,     0,    94,    98,    52,   106,    50,    62,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    88,
      90,   109,   111,   113,   115,   119,    51,   118,    12,   148,
      11,   153,    10,   155,     9,    15,    20,    59,    60,    61,
      67,    68,    69,    70,   158,   159,    57,   162,    72,   164,
      58,   166,    73,    74,   168,   169,    53,    54,   171,   172,
      55,    56,    64,    87,    89,   174,   175,   176,    75,   179,
      46,    48,    63,   181,   187,    46,   204,    46,   102,    51,
      50,    50,    93,   146,    20,    51,   199,    50,    51,   141,
       5,   143,   147,    51,   133,   133,   181,   185,    47,    37,
      51,   189,   191,   212,   213,    49,   107,    52,   120,   147,
     114,   116,   215,   112,   113,   110,   147,   201,   215,   117,
      51,   122,   152,   154,   156,    20,     9,   161,   163,   165,
     167,   170,   173,   176,   176,    55,    75,   147,   188,   205,
     207,   147,   192,   194,   195,    40,   181,    47,   205,    50,
     103,    91,   101,   103,   147,    45,   105,   144,   147,   201,
     200,   122,   144,   142,    50,   161,    40,   190,   122,    19,
     210,    98,    45,    62,   121,    39,   112,    51,   202,   118,
      14,   153,   155,   158,   162,   164,   166,   168,   171,   174,
     147,   147,    62,    93,   208,   212,    47,    51,   206,    49,
      51,   193,    50,    47,   144,    47,   147,    50,    43,    13,
     136,    50,   199,    14,   139,   141,   144,   133,   189,   198,
     116,   215,   147,   122,   147,   147,   147,   207,   122,   194,
     122,   147,   195,    45,   105,   218,   104,   145,   139,   144,
      50,    20,   202,   206,   193,    50,   196,   197,    43,   104,
     219,    50,   139,   144,   152,   195,   104,   219,    44,   144,
      12,   209,   211,   212,   214,   219,   136,     8,   149,   151,
     152,    44,   103,   211,    50,   149
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    98,    98,    99,    99,   100,   101,   101,
     102,   103,   103,   103,   104,   104,   105,   106,   106,   107,
     107,   107,   107,   107,   107,   108,   109,   109,   109,   110,
     110,   111,   111,   111,   112,   112,   113,   114,   114,   115,
     116,   117,   117,   118,   118,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   120,   120,
     121,   121,   121,   122,   122,   123,   124,   125,   125,   125,
     125,   126,   127,   128,   129,   130,   130,   131,   132,   133,
     133,   134,   134,   134,   134,   134,   134,   135,   136,   136,
     137,   138,   139,   139,   140,   141,   141,   142,   143,   143,
     144,   144,   145,   146,   146,   147,   147,   148,   148,   149,
     149,   150,   151,   152,   153,   153,   154,   155,   155,   156,
     156,   157,   158,   158,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   160,   161,   162,   162,   163,
     164,   164,   165,   166,   166,   167,   168,   168,   169,   169,
     170,   171,   171,   172,   172,   173,   174,   174,   175,   175,
     175,   175,   175,   176,   176,   177,   177,   177,   178,   179,
     179,   180,   180,   181,   181,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   183,   183,   183,   184,   184,   185,
     185,   186,   187,   187,   187,   188,   188,   189,   189,   190,
     190,   191,   191,   192,   193,   193,   194,   194,   195,   195,
     196,   196,   197,   198,   199,   199,   200,   200,   201,   202,
     202,   203,   204,   204,   204,   205,   206,   206,   207,   207,
     207,   207,   207,   208,   208,   209,   209,   210,   211,   211,
     212,   213,   213,   214,   215,   216,   216,   217,   217,   218,
     218,   219,   219
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     2,     1,     1,     6,     0,     2,
       3,     0,     3,     1,     1,     1,     4,     0,     3,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     1,
       1,     0,     3,     2,     0,     2,     2,     1,     1,     3,
       3,     1,     1,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       0,     2,     2,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     0,     1,     3,     3,     0,
       3,     1,     1,     1,     1,     1,     1,     6,     0,     5,
       5,     7,     0,     3,     5,     0,     3,     2,     0,     2,
       1,     5,     2,     0,     2,     2,     1,     0,     4,     1,
       1,     4,     4,     2,     0,     3,     2,     0,     3,     2,
       1,     2,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     2,     2,     0,     3,     2,
       0,     3,     2,     0,     3,     2,     0,     3,     1,     1,
       2,     0,     3,     1,     1,     2,     0,     3,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     2,     0,
       2,     2,     3,     0,     2,     3,     3,     1,     1,     2,
       1,     1,     1,     1,     0,     1,     1,     0,     1,     0,
       2,     2,     3,     3,     2,     0,     1,     0,     3,     1,
       1,     1,     2,     3,     0,     3,     1,     4,     0,     1,
       0,     1,     2,     3,     0,     3,     1,     1,     3,     0,
       3,     5,     0,     2,     3,     3,     0,     3,     2,     3,
       3,     2,     2,     0,     1,     1,     1,     5,     0,     1,
       2,     0,     1,     3,     2,     0,     1,     2,     1,     1,
       5,     0,     2
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

#line 2062 "parser.c"

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
#line 479 "parser.y"


int main(void) {
    if (yyparse() == 0) printf("\n\nPARSE SUCCESSFUL!");
    else                printf("\n\nPARSE FAILED!");
    printf("\nLINHA: %d\n", yylineno);
    return 0;
}
