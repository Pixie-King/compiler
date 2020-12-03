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
#line 1 "main.y"

    #include "common.h"
    #define YYSTYPE TreeNode *  
    TreeNode* root;
    IdTable* idtable = new IdTable();
    extern int lineno;
    int yylex();
    int yyerror( char const * );

#line 80 "main.tab.cpp"

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
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_MAIN_TAB_H_INCLUDED
# define YY_YY_MAIN_TAB_H_INCLUDED
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
    CHAR = 258,
    INT = 259,
    BOOL = 260,
    VOID = 261,
    IDENTIFIER = 262,
    INTEGER = 263,
    CHARVALUE = 264,
    STRING = 265,
    IF = 266,
    ELSE = 267,
    WHILE = 268,
    FOR = 269,
    LPAREN = 270,
    RPAREN = 271,
    LBRACE = 272,
    RBRACE = 273,
    SEMICOLON = 274,
    STARY = 275,
    ASSIGN = 276,
    PLUS = 277,
    MINUS = 278,
    TRUE = 279,
    FALSE = 280,
    PRINTF = 281,
    SCANF = 282,
    ADD = 283,
    SUB = 284,
    MUL = 285,
    DEV = 286,
    MOD = 287,
    GETV = 288,
    NOT = 289,
    EQUAL = 290,
    LARGE = 291,
    LEQ = 292,
    SMALL = 293,
    SEQ = 294,
    NEQ = 295,
    TADD = 296,
    TSUB = 297,
    AND = 298,
    OR = 299,
    UMINUS = 300,
    LOWER_THEN_ELSE = 301
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

#endif /* !YY_YY_MAIN_TAB_H_INCLUDED  */



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
typedef yytype_uint8 yy_state_t;

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

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   308

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  188

#define YYUNDEFTOK  2
#define YYMAXUTOK   301


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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    36,    36,    42,    43,    47,    48,    49,    53,    61,
      62,    66,    76,    77,    78,    79,    80,    84,    88,   100,
     111,   112,   115,   125,   126,   127,   131,   138,   148,   157,
     167,   177,   185,   192,   200,   207,   215,   223,   224,   236,
     247,   248,   251,   254,   255,   259,   265,   286,   305,   306,
     309,   310,   311,   314,   315,   316,   319,   320,   326,   334,
     335,   341,   349,   350,   356,   364,   365,   372,   379,   388,
     389,   396,   405,   406,   413,   420,   427,   436,   437,   444,
     453,   454,   463,   464,   473,   474,   481,   488,   497,   498,
     507,   512,   517,   522,   529,   530,   531,   533,   533,   533
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CHAR", "INT", "BOOL", "VOID",
  "IDENTIFIER", "INTEGER", "CHARVALUE", "STRING", "IF", "ELSE", "WHILE",
  "FOR", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "SEMICOLON", "STARY",
  "ASSIGN", "PLUS", "MINUS", "TRUE", "FALSE", "PRINTF", "SCANF", "ADD",
  "SUB", "MUL", "DEV", "MOD", "GETV", "NOT", "EQUAL", "LARGE", "LEQ",
  "SMALL", "SEQ", "NEQ", "TADD", "TSUB", "AND", "OR", "UMINUS",
  "LOWER_THEN_ELSE", "$accept", "program", "submodules", "submodule",
  "block", "statements", "function", "statement", "empty", "declaration",
  "idlist", "assign_stmt", "compound", "if_else", "while", "for",
  "firstexpr", "com_statement", "bool_statment", "IO", "printf", "scanf",
  "inexpr", "bool_expr", "basic_expr", "back_expr", "front_expr",
  "unary_expr", "muldevmode_expr", "addsub_expr", "relation_expr",
  "eq_expr", "and_expr", "logic_expr", "assign_expr", "expr", "type",
  "const", "ASSIGNOP", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

#define YYPACT_NINF (-48)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-93)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     245,   -48,   -48,   -48,     8,   -48,    -2,    -2,    23,   281,
     -48,    33,    56,    51,   245,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,     4,    43,    76,
     -48,   -48,   -48,   197,    72,   245,   245,    18,   263,   -48,
      88,   212,    90,   -48,   -48,   -48,   -48,   -10,     0,   -48,
     -48,   -48,   -48,   197,   197,   197,    57,    57,   -48,    36,
     -48,   -48,   123,    61,   196,   -26,    64,    65,   142,   115,
     -48,   -48,   -48,   109,    65,   -48,   -48,   120,   -48,   134,
      34,   129,   142,   173,   -48,   -48,   163,   165,    30,   168,
     171,   197,   -48,   188,    41,   -48,   -48,   -48,   -48,   -48,
     -48,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   -48,   197,   -48,
     245,    95,   119,   137,   178,   180,   197,   -48,   169,   186,
      13,   -48,   -48,   -48,   -48,   -48,   123,   123,    61,    61,
      61,    61,   196,   196,   -26,    64,    65,    65,    65,   142,
     -48,   245,    53,   152,   167,   131,   197,    54,   203,    92,
     -48,   -48,   -48,   245,   245,   100,   245,   101,   182,   142,
     -48,   -48,   -48,   181,   -48,   -48,   245,   -48,   245,   245,
     106,   206,   -48,   -48,   -48,   245,   -48,   -48
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    91,    90,    93,     0,    92,     0,     0,     0,     0,
      17,     0,     0,     0,     2,     3,     7,     6,     5,    12,
      13,    14,    15,    23,    24,    25,    16,     0,     0,     0,
      97,    99,    98,     0,     0,     0,     0,     0,     0,     9,
       0,     0,     0,     1,     4,    43,    44,    20,     0,    53,
      94,    95,    96,     0,     0,     0,     0,     0,    56,    59,
      62,    65,    69,    72,    77,    80,    82,    84,    88,     0,
      54,    50,    51,     0,    52,    41,    40,    26,    28,    96,
       0,     0,    37,     0,     8,    10,    20,    96,     0,     0,
       0,     0,    18,     0,     0,    64,    63,    60,    61,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,     0,    42,
       0,     0,     0,     0,    20,    38,     0,    45,     0,     0,
       0,    21,    55,    66,    67,    68,    70,    71,    73,    74,
      75,    76,    78,    79,    81,    83,    85,    86,    87,    89,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    19,    36,     0,     0,     0,     0,     0,     0,    39,
      46,    48,    47,     0,    35,    34,     0,    32,     0,     0,
       0,     0,    33,    31,    30,     0,    49,    29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -48,   -48,   -48,   201,     2,   -48,   -48,     1,   -48,   -48,
     135,   -48,   -48,   -48,   -48,   -48,   -48,   -36,   210,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   113,   -47,    68,   136,
      47,   116,   112,   -22,   -33,   -35,     3,   -48,   -48
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    75,    38,    17,    76,    19,    20,
      48,    21,    22,    23,    24,    25,    81,    77,    35,    26,
      27,    28,   159,    73,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    40,    70,    33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      78,    18,    16,    29,    82,    90,    88,    95,    96,   110,
      39,    91,    74,    34,   111,    18,    16,    29,    94,    92,
      93,     1,     2,    45,     3,    49,    50,    51,    79,    30,
      31,    32,   161,    53,   114,   115,   116,    80,    37,    85,
      83,    49,    50,    51,    52,   122,   127,    54,    41,    53,
     118,    43,    55,   121,   133,   134,   135,   132,   130,    56,
      57,   118,    46,    54,    49,    50,    51,    52,    55,   163,
     170,    42,    53,   118,   118,    56,    57,    99,   100,    49,
      50,    51,    52,    47,   150,   149,   152,    53,   155,   104,
     105,   157,   146,   147,   148,    86,    71,    72,    56,    57,
      89,    54,    49,    50,    51,    52,    55,   112,   172,   113,
      53,   151,   173,    56,    57,   162,   176,   178,   165,   167,
     118,   118,   185,   169,    54,   119,   118,   174,   175,    55,
     177,   160,   120,   180,   117,   118,    56,    57,   153,   118,
     182,   -92,   183,   184,    49,    50,    51,    52,   123,   187,
     168,   118,    53,   101,   102,   103,   154,   142,   143,    49,
      50,    51,    52,   114,   115,   116,    54,    53,   164,    97,
      98,    55,   136,   137,    49,    50,    51,    52,    56,    57,
     124,    54,    53,   166,    91,   126,    55,   129,   128,    49,
      50,    51,    52,    56,    57,   131,    54,    53,   179,   156,
      93,    55,   158,     9,    49,    50,    51,    52,    56,    57,
     171,    54,    53,   186,   181,    44,    55,    36,   125,    49,
      50,    51,    87,    56,    57,   145,    54,    53,   144,     0,
       0,    55,   106,   107,   108,   109,     0,     0,    56,    57,
       0,    54,   138,   139,   140,   141,    55,     0,     1,     2,
       0,     3,     4,    56,    57,     5,     6,     0,     7,     8,
       0,     0,     9,     0,    10,     0,     1,     2,     0,     3,
       4,    11,    12,     5,     6,     0,     7,     8,     0,     0,
       0,    84,    10,     0,     1,     2,     0,     3,     4,    11,
      12,     5,     6,     0,     7,     8,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,    11,    12
};

static const yytype_int16 yycheck[] =
{
      36,     0,     0,     0,    37,    15,    41,    54,    55,    35,
       9,    21,    34,    15,    40,    14,    14,    14,    53,    19,
      20,     3,     4,    19,     6,     7,     8,     9,    10,    21,
      22,    23,    19,    15,    21,    22,    23,    19,    15,    38,
      37,     7,     8,     9,    10,    80,    16,    29,    15,    15,
      20,     0,    34,    19,   101,   102,   103,    16,    91,    41,
      42,    20,    19,    29,     7,     8,     9,    10,    34,    16,
      16,    15,    15,    20,    20,    41,    42,    41,    42,     7,
       8,     9,    10,     7,   120,   118,   121,    15,   123,    28,
      29,   126,   114,   115,   116,     7,    24,    25,    41,    42,
      10,    29,     7,     8,     9,    10,    34,    43,    16,    44,
      15,    16,    20,    41,    42,   151,    16,    16,   153,   154,
      20,    20,    16,   156,    29,    16,    20,   163,   164,    34,
     166,   129,    12,   168,    19,    20,    41,    42,    19,    20,
     176,     7,   178,   179,     7,     8,     9,    10,    19,   185,
      19,    20,    15,    30,    31,    32,    19,   110,   111,     7,
       8,     9,    10,    21,    22,    23,    29,    15,    16,    56,
      57,    34,   104,   105,     7,     8,     9,    10,    41,    42,
       7,    29,    15,    16,    21,    20,    34,    16,    20,     7,
       8,     9,    10,    41,    42,     7,    29,    15,    16,    21,
      20,    34,    33,    17,     7,     8,     9,    10,    41,    42,
       7,    29,    15,     7,    33,    14,    34,     7,    83,     7,
       8,     9,    10,    41,    42,   113,    29,    15,   112,    -1,
      -1,    34,    36,    37,    38,    39,    -1,    -1,    41,    42,
      -1,    29,   106,   107,   108,   109,    34,    -1,     3,     4,
      -1,     6,     7,    41,    42,    10,    11,    -1,    13,    14,
      -1,    -1,    17,    -1,    19,    -1,     3,     4,    -1,     6,
       7,    26,    27,    10,    11,    -1,    13,    14,    -1,    -1,
      -1,    18,    19,    -1,     3,     4,    -1,     6,     7,    26,
      27,    10,    11,    -1,    13,    14,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     6,     7,    10,    11,    13,    14,    17,
      19,    26,    27,    48,    49,    50,    51,    53,    54,    55,
      56,    58,    59,    60,    61,    62,    66,    67,    68,    83,
      21,    22,    23,    85,    15,    65,    65,    15,    52,    54,
      83,    15,    15,     0,    50,    19,    19,     7,    57,     7,
       8,     9,    10,    15,    29,    34,    41,    42,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      84,    24,    25,    70,    80,    51,    54,    64,    64,    10,
      19,    63,    81,    83,    18,    54,     7,    10,    82,    10,
      15,    21,    19,    20,    82,    74,    74,    73,    73,    41,
      42,    30,    31,    32,    28,    29,    36,    37,    38,    39,
      35,    40,    43,    44,    21,    22,    23,    19,    20,    16,
      12,    19,    82,    19,     7,    57,    20,    16,    20,    16,
      81,     7,    16,    74,    74,    74,    75,    75,    76,    76,
      76,    76,    77,    77,    78,    79,    80,    80,    80,    81,
      64,    16,    82,    19,    19,    82,    21,    82,    33,    69,
      51,    19,    64,    16,    16,    82,    16,    82,    19,    81,
      16,     7,    16,    20,    64,    64,    16,    64,    16,    16,
      82,    33,    64,    64,    64,    16,     7,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    50,    51,    52,
      52,    53,    54,    54,    54,    54,    54,    55,    56,    56,
      57,    57,    58,    59,    59,    59,    60,    60,    61,    62,
      62,    62,    62,    62,    62,    62,    62,    63,    63,    63,
      64,    64,    65,    66,    66,    67,    67,    68,    69,    69,
      70,    70,    70,    71,    71,    71,    72,    72,    72,    73,
      73,    73,    74,    74,    74,    75,    75,    75,    75,    76,
      76,    76,    77,    77,    77,    77,    77,    78,    78,    78,
      79,    79,    80,    80,    81,    81,    81,    81,    82,    82,
      83,    83,    83,    83,    84,    84,    84,    85,    85,    85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     3,     1,
       2,     5,     1,     1,     1,     1,     1,     1,     3,     5,
       1,     3,     4,     1,     1,     1,     3,     5,     3,     9,
       8,     8,     7,     8,     7,     7,     6,     1,     2,     4,
       1,     1,     3,     2,     2,     4,     6,     6,     2,     4,
       1,     1,     1,     1,     1,     3,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     3,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
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
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
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
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
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
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
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
  switch (yyn)
    {
  case 2:
#line 36 "main.y"
                {
        root = new TreeNode(0, NODE_PROG); root->addChild(yyvsp[0]);
    }
#line 1506 "main.tab.cpp"
    break;

  case 3:
#line 42 "main.y"
              {yyval = yyvsp[0];}
#line 1512 "main.tab.cpp"
    break;

  case 4:
#line 43 "main.y"
                         {yyval=yyvsp[-1];yyval->addSibling(yyvsp[0]);}
#line 1518 "main.tab.cpp"
    break;

  case 5:
#line 47 "main.y"
              {yyval=yyvsp[0];}
#line 1524 "main.tab.cpp"
    break;

  case 6:
#line 48 "main.y"
             {yyval=yyvsp[0];}
#line 1530 "main.tab.cpp"
    break;

  case 7:
#line 49 "main.y"
          {yyval=yyvsp[0];}
#line 1536 "main.tab.cpp"
    break;

  case 8:
#line 53 "main.y"
                             {
        TreeNode *node=new TreeNode(yyvsp[-1]->lineno,NODE_BLOCK);
            node->addChild(yyvsp[-1]);
            yyval=node;
    }
#line 1546 "main.tab.cpp"
    break;

  case 9:
#line 61 "main.y"
                 {yyval=yyvsp[0];}
#line 1552 "main.tab.cpp"
    break;

  case 10:
#line 62 "main.y"
                            {yyval=yyvsp[-1]; yyval->addSibling(yyvsp[0]);}
#line 1558 "main.tab.cpp"
    break;

  case 11:
#line 66 "main.y"
                                         {
        TreeNode *node=new TreeNode(yyvsp[-4]->lineno,NODE_FUNC);
            node->addChild(yyvsp[-4]);
            node->addChild(yyvsp[-3]);
            node->addChild(yyvsp[0]);
            yyval=node;
    }
#line 1570 "main.tab.cpp"
    break;

  case 12:
#line 76 "main.y"
            {yyval=yyvsp[0];}
#line 1576 "main.tab.cpp"
    break;

  case 13:
#line 77 "main.y"
                  {yyval=yyvsp[0];}
#line 1582 "main.tab.cpp"
    break;

  case 14:
#line 78 "main.y"
                 {yyval=yyvsp[0];}
#line 1588 "main.tab.cpp"
    break;

  case 15:
#line 79 "main.y"
               {yyval=yyvsp[0];}
#line 1594 "main.tab.cpp"
    break;

  case 16:
#line 80 "main.y"
         {yyval=yyvsp[0];}
#line 1600 "main.tab.cpp"
    break;

  case 17:
#line 84 "main.y"
              {yyval = yyvsp[0];}
#line 1606 "main.tab.cpp"
    break;

  case 18:
#line 88 "main.y"
                          {
        TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_STMT);
        node->stype=STMT_DECL;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        TreeNode* current = yyvsp[-1];
        while(current != nullptr){
            idtable->addID(new IDinfo(current->var_name,yyvsp[-2]->type));
            current = current->sibling;
        }
        yyval=node;
    }
#line 1623 "main.tab.cpp"
    break;

  case 19:
#line 100 "main.y"
                                                 {
        TreeNode *node=new TreeNode(yyvsp[-4]->lineno,NODE_STMT);
        node->stype=STMT_DECL;
        node->addChild(yyvsp[-4]);
        node->addChild(yyvsp[-3]);
        node->addChild(yyvsp[-1]);
        idtable->addID(new IDinfo(yyvsp[-3]->var_name,yyvsp[-4]->type,"initialization"));
        yyval=node;
    }
#line 1637 "main.tab.cpp"
    break;

  case 20:
#line 111 "main.y"
                {yyval = yyvsp[0];}
#line 1643 "main.tab.cpp"
    break;

  case 21:
#line 112 "main.y"
                             {yyval = yyvsp[-2]; yyval->addSibling(yyvsp[0]);}
#line 1649 "main.tab.cpp"
    break;

  case 22:
#line 115 "main.y"
                                         {
            TreeNode *node=new TreeNode(yyvsp[-3]->lineno,NODE_STMT);
            node->stype=STMT_ASSIGN;
            node->addChild(yyvsp[-3]);
            node->addChild(yyvsp[-1]);
            idtable->changeValue(yyvsp[-3]->var_name,"changed");
            yyval=node;  
        }
#line 1662 "main.tab.cpp"
    break;

  case 23:
#line 125 "main.y"
            {yyval=yyvsp[0];}
#line 1668 "main.tab.cpp"
    break;

  case 24:
#line 126 "main.y"
          {yyval=yyvsp[0];}
#line 1674 "main.tab.cpp"
    break;

  case 25:
#line 127 "main.y"
        {yyval=yyvsp[0];}
#line 1680 "main.tab.cpp"
    break;

  case 26:
#line 131 "main.y"
                                                           {
        TreeNode *node=new TreeNode(yyvsp[-1]->lineno,NODE_STMT);
        node->stype=STMT_IF_ELSE;
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1692 "main.tab.cpp"
    break;

  case 27:
#line 138 "main.y"
                                                        {
        TreeNode *node=new TreeNode(yyvsp[-3]->lineno,NODE_STMT);
        node->stype=STMT_IF_ELSE;
        node->addChild(yyvsp[-3]);
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1705 "main.tab.cpp"
    break;

  case 28:
#line 148 "main.y"
                                        {
        TreeNode *node=new TreeNode(yyvsp[-1]->lineno,NODE_STMT);
        node->stype=STMT_WHILE;
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1717 "main.tab.cpp"
    break;

  case 29:
#line 157 "main.y"
                                                                             {// for (...;...;...) 
        TreeNode *node=new TreeNode(yyvsp[-6]->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild(yyvsp[-6]);
        node->addChild(yyvsp[-4]);
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1731 "main.tab.cpp"
    break;

  case 30:
#line 167 "main.y"
                                                                            {// for (...;...;)
        TreeNode *node=new TreeNode(yyvsp[-5]->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild(yyvsp[-5]);
        node->addChild(yyvsp[-3]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1745 "main.tab.cpp"
    break;

  case 31:
#line 177 "main.y"
                                                                         {// for (...;;...) 
        TreeNode *node=new TreeNode(yyvsp[-5]->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild(yyvsp[-5]);
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1758 "main.tab.cpp"
    break;

  case 32:
#line 185 "main.y"
                                                                          {// for (...;;)
        TreeNode *node=new TreeNode(yyvsp[-4]->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild(yyvsp[-4]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1770 "main.tab.cpp"
    break;

  case 33:
#line 192 "main.y"
                                                                          {// for (;...;...)
		TreeNode *node=new TreeNode(yyvsp[-4]->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild(yyvsp[-4]);
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node;								
	}
#line 1783 "main.tab.cpp"
    break;

  case 34:
#line 200 "main.y"
                                                                     {// for (;...;) 
		TreeNode *node=new TreeNode(yyvsp[-3]->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild(yyvsp[-3]);
        node->addChild(yyvsp[0]);
        yyval=node;								
	}
#line 1795 "main.tab.cpp"
    break;

  case 35:
#line 207 "main.y"
                                                                      {// for (;;...) 
        TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node;								
	}
#line 1807 "main.tab.cpp"
    break;

  case 36:
#line 215 "main.y"
                                                                   {
        TreeNode *node=new TreeNode(yyvsp[0]->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild(yyvsp[0]);
        yyval=node;	
    }
#line 1818 "main.tab.cpp"
    break;

  case 37:
#line 223 "main.y"
                {yyval=yyvsp[0];}
#line 1824 "main.tab.cpp"
    break;

  case 38:
#line 224 "main.y"
                {
        TreeNode *node=new TreeNode(yyvsp[-1]->lineno,NODE_STMT);
        node->stype=STMT_DECL;
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        TreeNode* current = yyvsp[0];
        while(current != nullptr){
            idtable->addID(new IDinfo(current->var_name,yyvsp[-1]->type));
            current = current->sibling;
        }
        yyval=node;
    }
#line 1841 "main.tab.cpp"
    break;

  case 39:
#line 236 "main.y"
                                       {
        TreeNode *node=new TreeNode(yyvsp[-3]->lineno,NODE_STMT);
        node->stype=STMT_DECL;
        node->addChild(yyvsp[-3]);
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        idtable->addID(new IDinfo(yyvsp[-2]->var_name,yyvsp[-3]->type,"initialization"));
        yyval=node;
    }
#line 1855 "main.tab.cpp"
    break;

  case 40:
#line 247 "main.y"
              {yyval=yyvsp[0];}
#line 1861 "main.tab.cpp"
    break;

  case 41:
#line 248 "main.y"
          {yyval=yyvsp[0];}
#line 1867 "main.tab.cpp"
    break;

  case 42:
#line 251 "main.y"
                              {yyval=yyvsp[-1];}
#line 1873 "main.tab.cpp"
    break;

  case 43:
#line 254 "main.y"
                       {yyval=yyvsp[-1];}
#line 1879 "main.tab.cpp"
    break;

  case 44:
#line 255 "main.y"
                      {yyval=yyvsp[-1];}
#line 1885 "main.tab.cpp"
    break;

  case 45:
#line 259 "main.y"
                                {
        TreeNode *node=new TreeNode(yyvsp[-1]->lineno,NODE_STMT);
        node->stype=STMT_PRINTF;
        node->addChild(yyvsp[-1]);
        yyval=node;
    }
#line 1896 "main.tab.cpp"
    break;

  case 46:
#line 265 "main.y"
                                            {
        TreeNode *node=new TreeNode(yyvsp[-3]->lineno,NODE_STMT);
        node->stype=STMT_PRINTF;
        node->addChild(yyvsp[-3]);
        node->addChild(yyvsp[-1]);
        char ch[100];
        strcpy(ch,yyvsp[-3]->str_val.c_str());
        for(size_t i = 1;i < strlen(ch) - 1;i++){
            if(ch[i] == '%'){
                node->IOlist += '%';
                node->IOlist += ch[i + 1];
                node->IOlist += ' ';
            }
        }
        yyval=node;
    }
#line 1917 "main.tab.cpp"
    break;

  case 47:
#line 286 "main.y"
                                              {
        TreeNode *node=new TreeNode(yyvsp[-3]->lineno,NODE_STMT);
        node->stype=STMT_SCANF;
        node->addChild(yyvsp[-3]);
        node->addChild(yyvsp[-1]);
        char ch[100];
        strcpy(ch,yyvsp[-3]->str_val.c_str());
        for(size_t i = 1;i < strlen(ch) - 1;i++){
            if(ch[i] == '%'){
                node->IOlist += '%';
                node->IOlist += ch[i + 1];
                node->IOlist += ' ';
            }
        }
        yyval=node;
    }
#line 1938 "main.tab.cpp"
    break;

  case 48:
#line 305 "main.y"
                     {yyval=yyvsp[0];}
#line 1944 "main.tab.cpp"
    break;

  case 49:
#line 306 "main.y"
                                  {yyval=yyvsp[-3];yyval->addSibling(yyvsp[0]);}
#line 1950 "main.tab.cpp"
    break;

  case 50:
#line 309 "main.y"
           {yyval=yyvsp[0];}
#line 1956 "main.tab.cpp"
    break;

  case 51:
#line 310 "main.y"
            {yyval=yyvsp[0];}
#line 1962 "main.tab.cpp"
    break;

  case 52:
#line 311 "main.y"
                {yyval=yyvsp[0];}
#line 1968 "main.tab.cpp"
    break;

  case 53:
#line 314 "main.y"
                 {yyval=yyvsp[0];}
#line 1974 "main.tab.cpp"
    break;

  case 54:
#line 315 "main.y"
            {yyval=yyvsp[0];}
#line 1980 "main.tab.cpp"
    break;

  case 55:
#line 316 "main.y"
                         {yyval=yyvsp[-1];}
#line 1986 "main.tab.cpp"
    break;

  case 56:
#line 319 "main.y"
               {yyval=yyvsp[0];}
#line 1992 "main.tab.cpp"
    break;

  case 57:
#line 320 "main.y"
                   {
        TreeNode *node=new TreeNode(yyvsp[-1]->lineno,NODE_EXPR);
        node->optype=OP_2ADD;
        node->addChild(yyvsp[-1]);
        yyval=node;  
    }
#line 2003 "main.tab.cpp"
    break;

  case 58:
#line 326 "main.y"
                   {
        TreeNode *node=new TreeNode(yyvsp[-1]->lineno,NODE_EXPR);
        node->optype=OP_2SUB;
        node->addChild(yyvsp[-1]);
        yyval=node;  
    }
#line 2014 "main.tab.cpp"
    break;

  case 59:
#line 334 "main.y"
              {yyval=yyvsp[0];}
#line 2020 "main.tab.cpp"
    break;

  case 60:
#line 335 "main.y"
                    {
        TreeNode *node=new TreeNode(yyvsp[0]->lineno,NODE_EXPR);
        node->optype=OP_2ADD;
        node->addChild(yyvsp[0]);
        yyval=node;  
    }
#line 2031 "main.tab.cpp"
    break;

  case 61:
#line 341 "main.y"
                    {
        TreeNode *node=new TreeNode(yyvsp[0]->lineno,NODE_EXPR);
        node->optype=OP_2SUB;
        node->addChild(yyvsp[0]);
        yyval=node;  
    }
#line 2042 "main.tab.cpp"
    break;

  case 62:
#line 349 "main.y"
                {yyval=yyvsp[0];}
#line 2048 "main.tab.cpp"
    break;

  case 63:
#line 350 "main.y"
                                         {
        TreeNode *node=new TreeNode(yyvsp[-1]->lineno,NODE_EXPR);
        node->optype=OP_NOT;
        node->addChild(yyvsp[0]);
        yyval=node;  
    }
#line 2059 "main.tab.cpp"
    break;

  case 64:
#line 356 "main.y"
                                         {
        TreeNode *node=new TreeNode(yyvsp[-1]->lineno,NODE_EXPR);
        node->optype=OP_SUB;
        node->addChild(yyvsp[0]);
        yyval=node;  
    }
#line 2070 "main.tab.cpp"
    break;

  case 65:
#line 364 "main.y"
               {yyval=yyvsp[0];}
#line 2076 "main.tab.cpp"
    break;

  case 66:
#line 365 "main.y"
                                   {
        TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->optype=OP_MUL;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node;  
    }
#line 2088 "main.tab.cpp"
    break;

  case 67:
#line 372 "main.y"
                                   {
        TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->optype=OP_DEV;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node;  
    }
#line 2100 "main.tab.cpp"
    break;

  case 68:
#line 379 "main.y"
                                   {
        TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->optype=OP_MOD;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node;  
    }
#line 2112 "main.tab.cpp"
    break;

  case 69:
#line 388 "main.y"
                    {yyval=yyvsp[0];}
#line 2118 "main.tab.cpp"
    break;

  case 70:
#line 389 "main.y"
                                    {
        TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->optype=OP_ADD;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node;  
    }
#line 2130 "main.tab.cpp"
    break;

  case 71:
#line 396 "main.y"
                                    {
        TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->optype=OP_SUB;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node;  
    }
#line 2142 "main.tab.cpp"
    break;

  case 72:
#line 405 "main.y"
                {yyval=yyvsp[0];}
#line 2148 "main.tab.cpp"
    break;

  case 73:
#line 406 "main.y"
                                    {
        TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->optype=OP_L;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node; 
    }
#line 2160 "main.tab.cpp"
    break;

  case 74:
#line 413 "main.y"
                                  {
        TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->optype=OP_LEQ;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node; 
    }
#line 2172 "main.tab.cpp"
    break;

  case 75:
#line 420 "main.y"
                                    {
        TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->optype=OP_S;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node; 
    }
#line 2184 "main.tab.cpp"
    break;

  case 76:
#line 427 "main.y"
                                  {
        TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->optype=OP_SEQ;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node; 
    }
#line 2196 "main.tab.cpp"
    break;

  case 77:
#line 436 "main.y"
                  {yyval=yyvsp[0];}
#line 2202 "main.tab.cpp"
    break;

  case 78:
#line 437 "main.y"
                                {
        TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->optype=OP_EQ;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node; 
    }
#line 2214 "main.tab.cpp"
    break;

  case 79:
#line 444 "main.y"
                              {
        TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->optype=OP_NEQ;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node; 
    }
#line 2226 "main.tab.cpp"
    break;

  case 80:
#line 453 "main.y"
            {yyval=yyvsp[0];}
#line 2232 "main.tab.cpp"
    break;

  case 81:
#line 454 "main.y"
                         {
        TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->optype=OP_AND;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node; 
    }
#line 2244 "main.tab.cpp"
    break;

  case 82:
#line 463 "main.y"
             {yyval=yyvsp[0];}
#line 2250 "main.tab.cpp"
    break;

  case 83:
#line 464 "main.y"
                           {
        TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->optype=OP_OR;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node; 
    }
#line 2262 "main.tab.cpp"
    break;

  case 84:
#line 473 "main.y"
               {yyval=yyvsp[0];}
#line 2268 "main.tab.cpp"
    break;

  case 85:
#line 474 "main.y"
                                  {
        TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->optype=OP_ASSIGN;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node; 
    }
#line 2280 "main.tab.cpp"
    break;

  case 86:
#line 481 "main.y"
                                {
        TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->optype=OP_PASSIGN;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node; 
    }
#line 2292 "main.tab.cpp"
    break;

  case 87:
#line 488 "main.y"
                                 {
        TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->optype=OP_SASSIGN;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node; 
    }
#line 2304 "main.tab.cpp"
    break;

  case 88:
#line 497 "main.y"
                {yyval=yyvsp[0];}
#line 2310 "main.tab.cpp"
    break;

  case 89:
#line 498 "main.y"
                           {
        TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->optype=OP_ASSIGN;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node; 
    }
#line 2322 "main.tab.cpp"
    break;

  case 90:
#line 507 "main.y"
          {
        TreeNode *node=new TreeNode(lineno,NODE_TYPE);
        node->type=TYPE_INT;
        yyval=node; 
    }
#line 2332 "main.tab.cpp"
    break;

  case 91:
#line 512 "main.y"
           {
        TreeNode *node=new TreeNode(lineno,NODE_TYPE);
        node->type=TYPE_CHAR;
        yyval=node; 
    }
#line 2342 "main.tab.cpp"
    break;

  case 92:
#line 517 "main.y"
             {
        TreeNode *node=new TreeNode(lineno,NODE_TYPE);
        node->type=TYPE_STRING;
        yyval=node; 
    }
#line 2352 "main.tab.cpp"
    break;

  case 93:
#line 522 "main.y"
           {
        TreeNode *node=new TreeNode(lineno,NODE_TYPE);
        node->type=TYPE_VOID;
        yyval=node;         
    }
#line 2362 "main.tab.cpp"
    break;

  case 94:
#line 529 "main.y"
        {yyval=yyvsp[0];}
#line 2368 "main.tab.cpp"
    break;

  case 95:
#line 530 "main.y"
          {yyval=yyvsp[0];}
#line 2374 "main.tab.cpp"
    break;

  case 96:
#line 531 "main.y"
       {yyval=yyvsp[0];}
#line 2380 "main.tab.cpp"
    break;


#line 2384 "main.tab.cpp"

      default: break;
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
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
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


#if !defined yyoverflow || YYERROR_VERBOSE
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
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 534 "main.y"


int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}
