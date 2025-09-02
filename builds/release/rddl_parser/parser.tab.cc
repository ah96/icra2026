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
#line 1 "parser.ypp"

#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <vector>

#include "determinize/determinize.h"
#include "hashing/hash_keys.h"
#include "instantiator.h"
#include "logical_expressions.h"
#include "precomputer.h"
#include "rddl.h"
#include "simplifier.h"
#include "task_analyzer.h"

#include "utils/system.h"
#include "utils/timer.h"

#define DOCTEST_CONFIG_IMPLEMENT
#define DOCTEST_CONFIG_NO_UNPREFIXED_OPTIONS
#include "../doctest/doctest.h"

extern int yylex();
extern int yyparse();
typedef struct yy_buffer_state* YY_BUFFER_STATE;
extern YY_BUFFER_STATE yy_scan_string(const char * str);
extern void yy_delete_buffer(YY_BUFFER_STATE buffer);
extern void yyerror (std::string message);

prost::parser::RDDLTask* rddlTask;


#line 107 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"

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
#ifndef YY_YY_HOME_ROBOLAB_PLANNING_WS_PROST_BUILDS_RELEASE_RDDL_PARSER_PARSER_TAB_HH_INCLUDED
# define YY_YY_HOME_ROBOLAB_PLANNING_WS_PROST_BUILDS_RELEASE_RDDL_PARSER_PARSER_TAB_HH_INCLUDED
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
    lessOrEqual_token = 258,
    greaterOrEqual_token = 259,
    negative_infinity_token = 260,
    equivalent_token = 261,
    imply_token = 262,
    equal_token = 263,
    nonEqual_token = 264,
    positive_infinity_token = 265,
    forall_token = 266,
    exists_token = 267,
    case_token = 268,
    if_token = 269,
    switch_token = 270,
    then_token = 271,
    else_token = 272,
    otherwise_token = 273,
    sum_token = 274,
    product_token = 275,
    kronDelta_token = 276,
    diracDelta_token = 277,
    uniform_token = 278,
    bernoulli_token = 279,
    discrete_token = 280,
    normal_token = 281,
    poisson_token = 282,
    exponential_token = 283,
    weibull_token = 284,
    gama_token = 285,
    dirichlet_token = 286,
    multinomial_token = 287,
    types_token = 288,
    variables_token = 289,
    cpfs_token = 290,
    cdfs_token = 291,
    reward_token = 292,
    domain_token = 293,
    requirements_token = 294,
    objects_token = 295,
    init_state_token = 296,
    state_action_constraints_token = 297,
    action_preconditions_token = 298,
    state_invariants_token = 299,
    instance_token = 300,
    non_fluents_token = 301,
    discount_token = 302,
    terminate_when_token = 303,
    horizon_token = 304,
    max_nondef_actions_token = 305,
    doubleNum_token = 306,
    id_token = 307,
    variable_token = 308,
    enum_token = 309,
    object_token = 310,
    integer_token = 311,
    real_token = 312,
    bool_token = 313,
    true_token = 314,
    false_token = 315,
    default_token = 316,
    level_token = 317,
    observ_fluent_token = 318,
    action_fluent_token = 319,
    state_fluent_token = 320,
    intermediate_token = 321,
    derived_fluent_token = 322,
    non_fluent_token = 323,
    intNum_token = 324,
    AgregateOperator = 325,
    NEGATIVE = 326
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 38 "parser.ypp"

    double d;
    int i;
    std::string* str;
    std::vector<std::string>* strs;

    prost::parser::RDDLTask* rddlTask;
    prost::parser::Parameter* parameter;
    std::vector<prost::parser::Parameter*>* parameters;
    prost::parser::ParameterList* parameterList;
    prost::parser::ParametrizedVariable* parametrizedVariable;
    std::vector<prost::parser::ParametrizedVariable*>* parametrizedVariables;
    prost::parser::LogicalExpression* logicalExpression;
    prost::parser::Type* type;
    std::vector<prost::parser::Type*>* types;
    std::vector<prost::parser::LogicalExpression*>* logicalExpressions;
    prost::parser::ConditionEffectPair* conditionEffect;
    std::vector<prost::parser::ConditionEffectPair*>* conditionEffects;
    prost::parser::DiscreteDistribution* lConstCaseList;

#line 252 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_ROBOLAB_PLANNING_WS_PROST_BUILDS_RELEASE_RDDL_PARSER_PARSER_TAB_HH_INCLUDED  */



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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1582

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  236
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  766

#define YYUNDEFTOK  2
#define YYMAXUTOK   326


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
       2,     2,     2,     2,     2,     2,    94,     2,    73,     2,
      92,    93,    79,    77,    86,    78,    88,    80,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    87,    85,
      75,    84,    76,    91,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    89,     2,    90,    72,    95,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    82,    71,    83,    74,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    81
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   110,   110,   111,   112,   113,   114,   115,   123,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   151,   152,   153,
     154,   157,   158,   164,   167,   168,   172,   173,   174,   178,
     179,   180,   183,   184,   187,   188,   189,   190,   193,   194,
     197,   198,   199,   200,   201,   202,   208,   211,   212,   215,
     216,   217,   218,   219,   220,   221,   222,   225,   226,   229,
     230,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     245,   246,   249,   250,   253,   254,   257,   258,   259,   260,
     263,   264,   271,   274,   275,   278,   279,   282,   285,   299,
     312,   313,   314,   317,   318,   321,   322,   323,   324,   327,
     328,   331,   332,   333,   334,   335,   343,   344,   345,   346,
     347,   349,   350,   351,   352,   353,   354,   355,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   417,   418,   421,   422,   425,
     426,   429,   438,   439,   442,   443,   447,   448,   449,   455,
     462,   463,   466,   467,   470,   476,   477,   480,   481,   484,
     490,   491,   494,   495,   498,   504,   508,   509,   512,   519,
     520,   521,   522,   530,   540,   549,   560,   561,   565,   577,
     578,   590,   591,   603,   606,   607,   617,   627,   636,   645,
     653,   662,   670,   678,   687,   696,   704,   712,   719,   727,
     734,   741,   747,   758,   759,   762,   763
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "lessOrEqual_token",
  "greaterOrEqual_token", "negative_infinity_token", "equivalent_token",
  "imply_token", "equal_token", "nonEqual_token",
  "positive_infinity_token", "forall_token", "exists_token", "case_token",
  "if_token", "switch_token", "then_token", "else_token",
  "otherwise_token", "sum_token", "product_token", "kronDelta_token",
  "diracDelta_token", "uniform_token", "bernoulli_token", "discrete_token",
  "normal_token", "poisson_token", "exponential_token", "weibull_token",
  "gama_token", "dirichlet_token", "multinomial_token", "types_token",
  "variables_token", "cpfs_token", "cdfs_token", "reward_token",
  "domain_token", "requirements_token", "objects_token",
  "init_state_token", "state_action_constraints_token",
  "action_preconditions_token", "state_invariants_token", "instance_token",
  "non_fluents_token", "discount_token", "terminate_when_token",
  "horizon_token", "max_nondef_actions_token", "doubleNum_token",
  "id_token", "variable_token", "enum_token", "object_token",
  "integer_token", "real_token", "bool_token", "true_token", "false_token",
  "default_token", "level_token", "observ_fluent_token",
  "action_fluent_token", "state_fluent_token", "intermediate_token",
  "derived_fluent_token", "non_fluent_token", "intNum_token",
  "AgregateOperator", "'|'", "'^'", "'&'", "'~'", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "NEGATIVE", "'{'", "'}'", "'='", "';'", "','",
  "':'", "'.'", "'['", "']'", "'?'", "'('", "')'", "'$'", "'_'", "$accept",
  "RddlBlock", "DomainBlock", "DomainList", "RequirementsSection",
  "RequirementsList", "TypeSection", "TypeList", "SchematicType",
  "EnumList", "TypeSpecification", "StructMemberList", "LConst",
  "VarSection", "VarList", "VariableSchematic", "ParametarList",
  "ParametarListTypeSpecs", "RangeConstant", "StructRangeConsant",
  "StructRangeConsantList", "BoolType", "DoubleType", "IntType",
  "CPFSection", "CPFHeader", "CPFList", "CPFSchematic",
  "VariableExpression", "TermList", "Term", "MemberList", "Pterm",
  "Expression", "StructExpressionList", "ExpressionList", "TypedVarList",
  "TypedVariable", "CaseList", "CaseSchematic", "LConstCaseList",
  "RewardsSection", "StateConstraintsSection", "StateConstraintList",
  "StateConstraintSchematic", "ActionPreconditionsSection",
  "ActionPreconditionsList", "ActionPreconditionsSchematic",
  "StateInvariantSection", "StateInvariantList", "StateInvariantSchematic",
  "ObjectsSection", "ObjectsList", "ObjectsSchematic", "ObjectsConstList",
  "NonfluentBlock", "VariablesInstanceList", "VariableInstanceSchematic",
  "LConstList", "InstanceBlock", "HorizonSpecification",
  "PositiveIntOrPositiveInfinity", YY_NULLPTR
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
     325,   124,    94,    38,   126,    60,    62,    43,    45,    42,
      47,   326,   123,   125,    61,    59,    44,    58,    46,    91,
      93,    63,    40,    41,    36,    95
};
# endif

#define YYPACT_NINF (-470)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      83,   -15,    33,    60,    23,  -470,  -470,  -470,   -60,    95,
     101,  -470,  -470,  -470,  -470,   245,    55,   149,   138,   139,
    -470,  -470,   147,   -32,   148,   155,   162,   164,   166,   245,
     245,   245,   245,   171,   245,   245,   245,   245,   245,   174,
     175,   208,   209,  1089,   -17,   181,   214,   777,   853,   929,
    -470,  -470,  -470,  -470,  -470,   215,  -470,  -470,  -470,  -470,
    -470,   216,   217,   186,   211,   208,   -46,   212,   209,   201,
     206,   222,   224,   225,   227,   231,   234,   235,   236,   238,
     239,   241,    22,   244,   250,   257,   258,  -470,    35,  -470,
    -470,  -470,  -470,  -470,  1089,   196,  1089,  1089,  1089,  1089,
     254,  -470,  1334,   233,   273,   277,   -12,   230,   283,   214,
     282,  1357,   295,  1089,   299,  1368,   305,  1089,   308,  1379,
     311,   309,   -30,   316,   215,   240,   319,   320,   123,   321,
    -470,  -470,   157,   325,   323,  -470,   328,   329,  1089,   -22,
     330,   331,  1089,  1089,  1089,  1089,   362,  1089,  1089,  1089,
    1089,  1089,  1089,   366,   377,   108,  1089,   -22,  -470,  -470,
    -470,  -470,  -470,  -470,  -470,  -470,   343,  -470,  -470,  -470,
     682,    80,  -470,  1089,  1089,  1089,  1089,  1089,  1089,  1089,
    1089,  1089,  1089,  1089,  1089,  1089,  1089,  1089,  -470,   380,
    -470,   349,   351,   354,   356,   355,  -470,  -470,  -470,   363,
    -470,  -470,  -470,   364,  -470,  -470,  -470,   365,  1089,   367,
    -470,  1089,   322,    -1,   368,   372,   196,   385,   412,  -470,
    -470,  -470,  -470,  -470,   382,   384,   360,  -470,   422,   422,
     232,  -470,  -470,   426,  -470,   386,   422,   422,   268,   383,
     739,   394,   395,   891,   413,   705,   438,  1051,  1195,   396,
     410,  -470,  -470,  -470,   215,   215,   428,   414,  1223,   411,
     415,   417,  1089,  -470,  -470,    70,    70,  1493,   655,    70,
      70,  1502,    40,    40,    70,    70,    18,    18,  -470,  -470,
    -470,  -470,  -470,   419,   -19,  -470,  -470,  -470,  -470,  -470,
    -470,  1414,   423,   425,   437,   442,   443,   427,   446,   454,
    -470,  -470,   461,   451,   140,   456,   450,   157,   455,   457,
     458,   459,   460,   464,   469,   470,   473,   472,   476,   525,
    -470,   465,   477,   478,  -470,  -470,  1089,  -470,   196,  1089,
    -470,  -470,  -470,  1089,  1089,  1089,  1089,   475,   481,  -470,
      92,  -470,  1089,  -470,   414,   -22,  1241,  -470,   493,   528,
     498,  -470,   214,   -14,   530,    11,     1,   536,   214,   -14,
     500,   157,   532,   502,   515,   539,  -470,  -470,   157,   157,
     157,   157,   157,   157,   563,  1089,   422,  1089,  1089,     6,
    1089,  1089,   491,   540,   533,   516,   526,   545,   569,  1276,
    -470,  -470,  -470,  -470,  -470,  1165,   196,   -19,   542,   544,
     547,    82,   579,   549,   -14,   548,  -470,   543,  -470,  -470,
     551,   550,   554,   556,  -470,   557,   564,  -470,   597,  -470,
     562,   571,   570,   574,   106,   120,   575,  -470,  1471,  -470,
    1471,  1459,   -22,   568,   582,   580,  1471,  1471,  -470,  1013,
    -470,  -470,  -470,  -470,  -470,   196,  -470,  -470,   -19,  -470,
     583,   647,  -470,   196,   577,   585,  -470,    41,  1089,   618,
     620,   587,   588,   196,   591,   600,   593,   631,   632,   609,
     633,   611,   638,   641,  1089,   616,  1089,  -470,     6,  -470,
    1322,   612,  -470,   130,  -470,  -470,  -470,  -470,  -470,  -470,
    -470,  -470,   173,    -4,   629,   635,   663,   634,  -470,  -470,
    -470,   637,   624,   196,    29,   636,   639,   640,   644,   604,
     652,   653,   -10,   657,  -470,   659,   157,  -470,   665,   666,
    -470,   667,  -470,   668,   672,  1471,  1089,  1471,  -470,   196,
    -470,   681,   683,   680,   684,   679,   686,   691,  -470,  -470,
    -470,   173,   173,  -470,  -470,   196,    79,   627,   687,   685,
     214,   -14,     1,   721,  -470,   727,   692,   697,  -470,  -470,
    -470,   710,   647,   647,   647,   647,   647,  1471,  -470,   -14,
     -14,     1,   740,   647,   647,  -470,   714,   717,  -470,   647,
    -470,   709,     1,   766,   737,   738,   741,   743,   748,  -470,
     -14,   749,   750,   752,   755,   756,   757,   758,   759,   760,
     763,  -470,   736,   733,   731,   764,  -470,   765,   769,   771,
     772,   618,   792,   793,   775,  -470,   774,   776,   778,   785,
     801,   802,   803,   618,   797,   196,  -470,  -470,  -470,   618,
     811,   144,    76,   804,   805,   806,   807,  -470,  -470,  -470,
    -470,  -470,   146,   852,   816,   817,  -470,   818,   823,   814,
     825,   826,   830,   831,   863,   832,   834,   835,   836,   838,
     837,   874,   841,   878,   843,   -14,     1,   882,     1,   885,
     849,  -470,  -470,  -470,     1,   887,   -14,   851,  -470,   854,
    -470,   856,   861,   881,   888,   890,   886,   893,   892,   889,
     924,   928,   899,   618,   934,   618,   935,   902,   618,   939,
     906,   907,   908,   161,   909,   910,   911,   912,   916,   915,
     917,   618,   918,   922,   925,   923,   963,   930,   964,   931,
    -470,   968,   933,   932,  -470,  -470,     1,   972,   936,  -470,
     938,  -470,   942,  -470,   982,   945,   962,   996,   997,   998,
     966,   618,  1000,   967,   971,   976,  1002,   977,   978,   985,
     986,   987,   989,  1024,   992,  -470,  -470,  -470,   993,   994,
    -470,  -470,  1026,   995,  1001,  -470
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     4,     3,     0,     0,
       0,     1,     5,     7,     6,     0,     0,     0,     0,     0,
      93,    94,     0,     0,     0,     0,     0,     0,     0,    24,
      18,    19,    20,     0,    21,    22,    25,    26,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,    15,     9,    10,    11,     0,    12,    13,    16,    17,
      14,     0,     0,     0,     0,    34,     0,     0,    57,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   148,    98,   116,
     118,   150,   151,   149,     0,     0,     0,     0,     0,     0,
       0,   117,     0,    31,     0,     0,     0,     0,     0,   196,
       0,     0,     0,   182,     0,     0,     0,   187,     0,     0,
       0,   192,    98,     0,    95,     0,     0,     0,     0,     0,
      35,    67,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   145,
      50,    52,    55,    53,    54,    51,     0,   120,   130,   129,
       0,     0,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   179,     0,
      30,     0,     0,     0,     0,     0,   197,   181,   184,     0,
     183,   186,   189,     0,   188,   191,   194,     0,     0,     0,
      96,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      44,    45,    46,    47,    69,     0,     0,    56,     0,     0,
       0,   105,   107,     0,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,   114,   102,     0,     0,     0,   109,   167,     0,
       0,   103,     0,   141,   140,   136,   137,   146,   147,   138,
     139,   144,   142,   143,   135,   134,   128,   131,   132,   133,
      32,    29,    28,     0,     0,   195,   180,   185,   190,   193,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,    36,     0,     0,    42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,     0,     0,
     108,     0,     0,     0,   155,   157,     0,   154,     0,     0,
     161,   153,   152,     0,     0,     0,     0,     0,     0,   115,
       0,   110,     0,   121,    99,     0,     0,    27,   199,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   112,   168,   101,   104,   165,     0,     0,   201,     0,
       0,     0,     0,     0,   206,     0,   236,     0,   235,   233,
       0,     0,     0,     0,    41,    48,    42,    43,     0,    38,
       0,     0,     0,     0,     0,     0,     0,   171,   122,   170,
     123,     0,     0,     0,     0,   172,   124,   125,   158,     0,
     156,   159,   162,   163,   160,     0,   166,   200,     0,   198,
       0,     0,   209,     0,   211,     0,   207,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   127,     0,   177,
     176,     0,   202,     0,    89,    88,    86,    74,    76,    84,
      85,    90,     0,     0,     0,     0,     0,     0,    71,    72,
      73,   214,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,    66,     0,     0,
      64,     0,    65,     0,     0,   126,     0,   175,   173,     0,
     164,     0,     0,     0,     0,     0,     0,     0,    81,    87,
      91,     0,     0,    75,   213,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   234,     0,     0,     0,   205,   204,
      39,     0,     0,     0,     0,     0,     0,   174,   178,     0,
       0,     0,     0,     0,     0,    77,     0,     0,   215,     0,
     208,     0,     0,     0,     0,     0,     0,     0,     0,   231,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,    82,     0,     0,     0,   210,     0,     0,     0,
       0,     0,     0,     0,     0,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    78,   212,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    59,    62,
      63,    60,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   230,   223,   203,     0,     0,     0,     0,   229,     0,
     227,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     222,     0,     0,     0,   221,   219,     0,     0,     0,   228,
       0,   226,     0,   225,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   220,   218,   217,     0,     0,
     224,   232,     0,     0,     0,   216
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -470,  -470,  1075,   345,  -470,   -86,  -470,  1016,  -470,   723,
    -344,   623,   -94,  -470,  1015,  -470,  -470,   782,  -209,  -325,
     467,  -470,  -470,  -470,  -470,  -470,   969,  -470,   -47,   751,
    -135,  -248,  -470,   -43,   698,   753,  -222,  -470,   619,  -470,
    -435,  -470,  -470,  1012,  -470,  -470,   981,  -470,  -470,   898,
    -470,  -470,  -107,  -470,  -384,  1095,  -347,  -470,  -469,  1128,
    -441,  -353
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,    28,    29,   105,    30,    64,    65,   305,
     224,   302,   536,    31,    67,    68,   133,   225,   497,   537,
     538,   498,   499,   500,    32,    33,   123,   124,   101,   260,
     261,   158,   257,   111,   167,   259,   316,   317,   434,   435,
     384,    34,    35,   112,   113,    36,   116,   117,    37,   120,
     121,    38,   108,   109,   350,     6,   403,   404,   502,     7,
     297,   409
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     102,   166,   196,   410,   235,   115,   119,   318,   125,   341,
     481,   406,   413,   447,   322,   323,   508,   415,   510,   432,
     193,   406,    15,    11,   421,   422,   423,   424,   425,   426,
     122,   231,   232,   348,   547,   103,   557,     8,   401,   298,
     103,   131,   534,   173,   174,   299,   132,   539,   177,   178,
      44,   159,    45,   168,   169,   170,   171,   456,   155,   407,
     402,     1,   157,   549,   482,   540,   104,   433,     2,     3,
     408,   192,   233,   558,   115,   349,   578,   125,   295,   548,
     408,   505,   506,   173,   174,     9,   175,   176,   177,   178,
     295,   507,   234,    39,   568,   230,   393,   186,   187,   238,
     239,   240,   241,   280,   243,   244,   245,   246,   247,   248,
     234,   149,    10,   258,   150,   182,   183,   184,   185,   186,
     187,     1,   303,   155,   156,   295,   652,   157,     2,     3,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   251,   252,   184,   185,   186,
     187,   179,   180,   181,   429,   182,   183,   184,   185,   186,
     187,   251,   252,   579,   580,   119,   451,   452,   291,   253,
     633,   531,   561,   264,   453,   214,   532,    16,   215,   295,
     533,   254,   644,    17,   255,   649,   256,    40,   647,   469,
     651,   653,   470,   295,   650,   295,   658,   254,   216,   586,
     255,   659,   256,   471,   585,   217,   472,   337,   338,   220,
     295,   714,   218,   221,   222,   223,   576,   577,   599,   346,
      41,    42,   597,   598,   160,   161,   362,   162,   363,   607,
      46,    43,   163,   164,   383,   173,   174,    47,   175,   176,
     177,   178,   165,   614,    48,   400,    49,   160,   161,    50,
     162,   412,   704,    55,   706,   163,   164,   709,    61,    62,
      63,    66,   715,   106,   535,   165,   107,   122,   126,   127,
     723,   173,   174,   128,   175,   176,   177,   178,    18,    19,
      20,    21,    22,   382,    23,    24,   385,    25,    26,    27,
     386,   387,   388,   389,   129,   134,   136,   475,   234,   258,
     747,   137,   166,   179,   180,   181,   172,   182,   183,   184,
     185,   186,   187,   682,   138,   684,   139,   194,   681,   189,
     140,   687,   141,   142,   211,   319,   143,   144,   145,   689,
     146,   147,   428,   148,   430,   431,   151,   436,   437,   179,
     180,   181,   152,   182,   183,   184,   185,   186,   187,   153,
     154,   383,   275,   592,   593,   594,   595,   596,   190,   501,
     191,   324,   292,   293,   601,   602,   195,   197,   294,   303,
     605,   295,   296,   735,    51,    52,    53,    54,   199,    56,
      57,    58,    59,    60,   201,   234,   173,   174,   203,   175,
     176,   177,   178,   205,   207,   208,   480,   173,   174,   209,
     175,   176,   177,   178,   212,   213,   219,   226,   227,   501,
     228,   229,   236,   237,   242,   509,   173,   174,   249,   175,
     176,   177,   178,   309,   310,   311,   312,   313,   314,   250,
     262,   525,   103,   527,   281,   383,   282,   283,   284,   304,
     285,   173,   174,   584,   175,   176,   177,   178,   286,   287,
     288,   501,   290,   300,   179,   180,   181,   301,   182,   183,
     184,   185,   186,   187,   306,   179,   180,   181,   307,   182,
     183,   184,   185,   186,   187,   315,   325,   308,   320,   321,
     339,   328,   335,   567,   179,   180,   181,   327,   182,   183,
     184,   185,   186,   187,   173,   174,   336,   175,   176,   177,
     178,   343,   340,   345,   347,   352,   330,   353,   344,   179,
     180,   181,   357,   182,   183,   184,   185,   186,   187,   173,
     174,   354,   175,   176,   177,   178,   355,   356,   358,   173,
     174,   332,   175,   176,   177,   178,   359,   360,   361,   364,
     365,   378,   367,   368,   369,   370,   371,   379,   173,   174,
     372,   175,   176,   177,   178,   373,   375,   374,   376,   377,
     380,   381,   179,   180,   181,   390,   182,   183,   184,   185,
     186,   187,   173,   174,   391,   175,   176,   177,   178,   397,
     398,   399,   405,   411,   438,   414,   416,   179,   180,   181,
     418,   182,   183,   184,   185,   186,   187,   179,   180,   181,
     419,   182,   183,   184,   185,   186,   187,   173,   174,   441,
     175,   176,   177,   178,   420,   427,   179,   180,   181,   442,
     182,   183,   184,   185,   186,   187,   440,   439,   448,   449,
     450,   454,   455,   457,   460,   458,   459,   461,   443,   462,
     179,   180,   181,   463,   182,   183,   184,   185,   186,   187,
     362,   464,   484,   465,   466,   476,   467,   485,   173,   174,
     468,   473,   444,   177,   178,   477,   478,   295,   483,   503,
     504,   511,   512,   513,   515,   179,   180,   181,   517,   182,
     183,   184,   185,   186,   187,   173,   174,   516,   175,   176,
     177,   178,   518,   519,   520,   521,   522,   554,   486,   487,
     523,   488,   524,   526,   541,   530,   489,   490,   173,   174,
     542,   175,   176,   177,   178,   543,   491,   546,   550,   544,
     581,   551,   492,   545,   552,   493,   179,   180,   181,   553,
     182,   183,   184,   185,   186,   187,   494,   555,   556,   495,
     559,   496,   173,   174,   560,   175,   176,   177,   178,   562,
     563,   564,   565,   179,   180,   181,   566,   182,   183,   184,
     185,   186,   187,   569,   571,   570,   573,   575,   587,   572,
     583,   582,   263,   574,   588,   589,   179,   180,   181,   590,
     182,   183,   184,   185,   186,   187,   591,   600,    69,    70,
     603,    71,    72,   604,   606,   331,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
     179,   180,   181,   608,   182,   183,   184,   185,   186,   187,
     609,   610,   625,   626,   627,   326,   611,   612,    87,    88,
      89,    90,   613,   616,   615,   617,    91,    92,   618,   619,
     620,   621,   622,   634,   635,   623,    93,   624,   645,   628,
     629,    94,    95,   630,    96,    97,   631,   632,   636,   637,
     110,   638,   648,   639,    69,    70,    98,    71,    72,    99,
     640,   100,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,   641,   642,   643,   654,
     655,   656,   657,   660,   173,   174,   665,   175,   176,   177,
     178,   661,   662,   663,    87,    88,    89,    90,   664,   666,
     670,   667,    91,    92,   668,   671,   669,   672,   673,   676,
     674,   677,    93,   675,   678,   679,   680,    94,    95,   683,
      96,    97,   685,   686,   688,   690,   114,   697,   691,   692,
      69,    70,    98,    71,    72,    99,   693,   100,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,   179,   180,   181,   694,   182,   183,   184,   185,
     186,   187,   700,   695,   696,   701,   699,   329,   698,   702,
      87,    88,    89,    90,   703,   705,   707,   708,    91,    92,
     710,   711,   712,   713,   716,   717,   718,   719,    93,   720,
     721,   724,   722,    94,    95,   725,    96,    97,   727,   726,
     728,   730,   118,   729,   731,   732,   733,   734,    98,   736,
     737,    99,   738,   100,    69,    70,   739,    71,    72,   740,
     741,   479,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,   742,   743,   744,   745,
     746,   748,   749,   752,   173,   174,   750,   175,   176,   177,
     178,   751,   753,   754,    87,    88,    89,    90,   755,   756,
     757,   759,    91,    92,   758,   760,   761,   763,   762,    12,
     764,   130,    93,   135,   765,   417,   514,    94,    95,   366,
      96,    97,   646,   210,   446,   392,   394,   528,   204,    13,
      69,    70,    98,    71,    72,    99,   289,   100,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,   179,   180,   181,   200,   182,   183,   184,   185,
     186,   187,    14,     0,     0,     0,     0,   333,     0,     0,
      87,    88,    89,    90,     0,     0,     0,     0,    91,    92,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,    94,    95,     0,    96,    97,     0,     0,
       0,     0,     0,     0,     0,     0,    69,    70,    98,    71,
      72,    99,     0,   100,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,   173,   174,
       0,   175,   176,   177,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,    88,    89,    90,
       0,     0,     0,     0,    91,    92,   173,   174,     0,   175,
     176,   177,   178,     0,    93,     0,     0,     0,     0,    94,
       0,     0,    96,    97,   173,   174,     0,   175,   176,   177,
     178,     0,     0,     0,    98,     0,     0,    99,     0,   100,
       0,     0,     0,     0,     0,     0,   179,   180,   181,     0,
     182,   183,   184,   185,   186,   187,     0,     0,     0,   173,
     174,   334,   175,   176,   177,   178,     0,     0,     0,     0,
       0,     0,     0,     0,   179,   180,   181,     0,   182,   183,
     184,   185,   186,   187,     0,     0,     0,     0,     0,   342,
       0,     0,   179,   180,   181,     0,   182,   395,   184,   185,
     186,   187,     0,     0,     0,   173,   174,   396,   175,   176,
     177,   178,     0,     0,     0,     0,     0,   173,   174,     0,
     175,   176,   177,   178,     0,     0,     0,   179,   180,   181,
       0,   182,   183,   184,   185,   186,   187,     0,     0,     0,
     173,   174,   445,   175,   176,   177,   178,     0,     0,     0,
       0,   173,   174,     0,   175,   176,   177,   178,     0,     0,
       0,     0,   173,   174,     0,   175,   176,   177,   178,     0,
       0,     0,     0,   179,   180,   181,     0,   182,   183,   184,
     185,   186,   187,     0,     0,   179,   180,   181,   529,   182,
     183,   184,   185,   186,   187,     0,     0,   173,   174,   188,
     175,   176,   177,   178,     0,     0,     0,     0,   179,   180,
     181,     0,   182,   183,   184,   185,   186,   187,     0,   179,
     180,   181,   198,   182,   183,   184,   185,   186,   187,     0,
     179,   180,   181,   202,   182,   183,   184,   185,   186,   187,
       0,     0,   173,   174,   206,   175,   176,   177,   178,     0,
       0,     0,     0,     0,   173,   174,   474,   175,   176,   177,
     178,     0,     0,     0,     0,   179,   180,   181,     0,   182,
     183,   184,   185,   186,   187,     0,   173,   174,     0,   351,
     176,   177,   178,     0,     0,   173,   174,     0,     0,     0,
     177,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,   180,   181,     0,   182,   183,   184,   185,   186,   187,
       0,     0,   179,   180,   181,     0,   182,   183,   184,   185,
     186,   187,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   179,   180,   181,     0,   182,   183,
     184,   185,   186,   187,   180,   181,     0,   182,   183,   184,
     185,   186,   187
};

static const yytype_int16 yycheck[] =
{
      43,    95,   109,   356,   139,    48,    49,   229,    55,   257,
     445,    10,   359,   397,   236,   237,   457,   361,   459,    13,
     106,    10,    82,     0,   368,   369,   370,   371,   372,   373,
      52,    53,    54,    52,   503,    52,    46,    52,    52,    40,
      52,    87,   483,     3,     4,    46,    92,    51,     8,     9,
      82,    94,    84,    96,    97,    98,    99,   404,    88,    48,
      74,    38,    92,   504,   448,    69,    83,    61,    45,    46,
      69,    83,    94,    83,   117,    94,   545,   124,    49,    50,
      69,    40,    41,     3,     4,    52,     6,     7,     8,     9,
      49,    50,   139,    38,   529,   138,   344,    79,    80,   142,
     143,   144,   145,   189,   147,   148,   149,   150,   151,   152,
     157,    89,    52,   156,    92,    75,    76,    77,    78,    79,
      80,    38,   216,    88,    89,    49,    50,    92,    45,    46,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,    53,    54,    77,    78,    79,
      80,    71,    72,    73,   376,    75,    76,    77,    78,    79,
      80,    53,    54,    84,    85,   208,    84,    85,   211,    61,
     611,    41,   516,    93,    92,    52,    46,    82,    55,    49,
      50,    89,   623,    82,    92,    41,    94,    38,   629,    83,
     631,   632,    86,    49,    50,    49,    50,    89,    75,   552,
      92,   642,    94,    83,   551,    82,    86,   254,   255,    52,
      49,    50,    89,    56,    57,    58,   541,   542,   571,   262,
      82,    82,   569,   570,    51,    52,    86,    54,    88,   582,
      82,    84,    59,    60,   328,     3,     4,    82,     6,     7,
       8,     9,    69,   590,    82,   352,    82,    51,    52,    83,
      54,   358,   693,    82,   695,    59,    60,   698,    84,    84,
      52,    52,   703,    82,    91,    69,    52,    52,    52,    52,
     711,     3,     4,    87,     6,     7,     8,     9,    33,    34,
      35,    36,    37,   326,    39,    40,   329,    42,    43,    44,
     333,   334,   335,   336,    83,    83,    95,   432,   345,   342,
     741,    95,   396,    71,    72,    73,    52,    75,    76,    77,
      78,    79,    80,   666,    92,   668,    92,    87,   665,    86,
      95,   674,    95,    92,    84,    93,    92,    92,    92,   676,
      92,    92,   375,    92,   377,   378,    92,   380,   381,    71,
      72,    73,    92,    75,    76,    77,    78,    79,    80,    92,
      92,   445,   395,   562,   563,   564,   565,   566,    85,   453,
      83,    93,    40,    41,   573,   574,    83,    85,    46,   463,
     579,    49,    50,   726,    29,    30,    31,    32,    83,    34,
      35,    36,    37,    38,    85,   432,     3,     4,    83,     6,
       7,     8,     9,    85,    83,    86,   439,     3,     4,    83,
       6,     7,     8,     9,    85,    85,    85,    82,    85,   503,
      82,    82,    82,    82,    52,   458,     3,     4,    52,     6,
       7,     8,     9,    63,    64,    65,    66,    67,    68,    52,
      87,   474,    52,   476,    85,   529,    85,    83,    82,    54,
      85,     3,     4,   550,     6,     7,     8,     9,    85,    85,
      85,   545,    85,    85,    71,    72,    73,    85,    75,    76,
      77,    78,    79,    80,    52,    71,    72,    73,    86,    75,
      76,    77,    78,    79,    80,    53,    93,    93,    52,    93,
      52,    86,    86,   526,    71,    72,    73,    93,    75,    76,
      77,    78,    79,    80,     3,     4,    86,     6,     7,     8,
       9,    90,    88,    86,    85,    82,    93,    82,    93,    71,
      72,    73,    85,    75,    76,    77,    78,    79,    80,     3,
       4,    84,     6,     7,     8,     9,    84,    84,    82,     3,
       4,    93,     6,     7,     8,     9,    82,    76,    87,    83,
      90,    16,    87,    86,    86,    86,    86,    82,     3,     4,
      86,     6,     7,     8,     9,    86,    83,    87,    86,    83,
      83,    83,    71,    72,    73,    90,    75,    76,    77,    78,
      79,    80,     3,     4,    93,     6,     7,     8,     9,    86,
      52,    83,    52,    47,    93,    85,    54,    71,    72,    73,
      88,    75,    76,    77,    78,    79,    80,    71,    72,    73,
      85,    75,    76,    77,    78,    79,    80,     3,     4,    93,
       6,     7,     8,     9,    75,    52,    71,    72,    73,    93,
      75,    76,    77,    78,    79,    80,    93,    87,    86,    85,
      83,    52,    83,    85,    84,    92,    85,    83,    93,    83,
      71,    72,    73,    86,    75,    76,    77,    78,    79,    80,
      86,    54,     5,    91,    83,    87,    86,    10,     3,     4,
      86,    86,    93,     8,     9,    83,    86,    49,    85,    92,
      85,    51,    85,    85,    83,    71,    72,    73,    85,    75,
      76,    77,    78,    79,    80,     3,     4,    87,     6,     7,
       8,     9,    61,    61,    85,    62,    85,    93,    51,    52,
      62,    54,    61,    87,    75,    93,    59,    60,     3,     4,
      75,     6,     7,     8,     9,    52,    69,    93,    82,    85,
      93,    82,    75,    86,    84,    78,    71,    72,    73,    85,
      75,    76,    77,    78,    79,    80,    89,    85,    85,    92,
      83,    94,     3,     4,    85,     6,     7,     8,     9,    84,
      84,    84,    84,    71,    72,    73,    84,    75,    76,    77,
      78,    79,    80,    82,    84,    82,    87,    76,    47,    85,
      85,    84,    90,    87,    47,    83,    71,    72,    73,    82,
      75,    76,    77,    78,    79,    80,    76,    47,    11,    12,
      76,    14,    15,    76,    85,    90,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      71,    72,    73,    47,    75,    76,    77,    78,    79,    80,
      83,    83,    86,    90,    93,    86,    85,    84,    51,    52,
      53,    54,    84,    83,    85,    83,    59,    60,    83,    83,
      83,    83,    83,    51,    51,    85,    69,    84,    51,    85,
      85,    74,    75,    84,    77,    78,    85,    85,    83,    85,
      83,    85,    51,    85,    11,    12,    89,    14,    15,    92,
      85,    94,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    85,    85,    85,    85,
      85,    85,    85,    41,     3,     4,    82,     6,     7,     8,
       9,    85,    85,    85,    51,    52,    53,    54,    85,    84,
      47,    85,    59,    60,    84,    83,    85,    83,    83,    82,
      84,    47,    69,    85,    83,    47,    83,    74,    75,    47,
      77,    78,    47,    84,    47,    84,    83,    51,    84,    83,
      11,    12,    89,    14,    15,    92,    85,    94,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    71,    72,    73,    84,    75,    76,    77,    78,
      79,    80,    83,    85,    84,    51,    84,    86,    85,    51,
      51,    52,    53,    54,    85,    51,    51,    85,    59,    60,
      51,    85,    85,    85,    85,    85,    85,    85,    69,    83,
      85,    83,    85,    74,    75,    83,    77,    78,    85,    84,
      47,    47,    83,    83,    83,    47,    83,    85,    89,    47,
      84,    92,    84,    94,    11,    12,    84,    14,    15,    47,
      85,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    84,    51,    51,    51,
      84,    51,    85,    51,     3,     4,    85,     6,     7,     8,
       9,    85,    85,    85,    51,    52,    53,    54,    83,    83,
      83,    47,    59,    60,    85,    83,    83,    51,    84,     4,
      85,    65,    69,    68,    83,   362,   463,    74,    75,   307,
      77,    78,   625,   124,   396,   342,   345,   478,   117,     4,
      11,    12,    89,    14,    15,    92,   208,    94,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    71,    72,    73,   113,    75,    76,    77,    78,
      79,    80,     4,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    74,    75,    -1,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    89,    14,
      15,    92,    -1,    94,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     3,     4,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    59,    60,     3,     4,    -1,     6,
       7,     8,     9,    -1,    69,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    77,    78,     3,     4,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,    89,    -1,    -1,    92,    -1,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,     3,
       4,    86,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    -1,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    71,    72,    73,    -1,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,     3,     4,    86,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    -1,    -1,    -1,    71,    72,    73,
      -1,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
       3,     4,    86,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    71,    72,    73,    -1,    75,    76,    77,
      78,    79,    80,    -1,    -1,    71,    72,    73,    86,    75,
      76,    77,    78,    79,    80,    -1,    -1,     3,     4,    85,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    71,    72,
      73,    -1,    75,    76,    77,    78,    79,    80,    -1,    71,
      72,    73,    85,    75,    76,    77,    78,    79,    80,    -1,
      71,    72,    73,    85,    75,    76,    77,    78,    79,    80,
      -1,    -1,     3,     4,    85,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,     3,     4,    17,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,    75,
      76,    77,    78,    79,    80,    -1,     3,     4,    -1,    85,
       7,     8,     9,    -1,    -1,     3,     4,    -1,    -1,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    73,    -1,    75,    76,    77,    78,    79,    80,
      -1,    -1,    71,    72,    73,    -1,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    -1,    75,    76,
      77,    78,    79,    80,    72,    73,    -1,    75,    76,    77,
      78,    79,    80
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    45,    46,    97,    98,   151,   155,    52,    52,
      52,     0,    98,   151,   155,    82,    82,    82,    33,    34,
      35,    36,    37,    39,    40,    42,    43,    44,    99,   100,
     102,   109,   120,   121,   137,   138,   141,   144,   147,    38,
      38,    82,    82,    84,    82,    84,    82,    82,    82,    82,
      83,    99,    99,    99,    99,    82,    99,    99,    99,    99,
      99,    84,    84,    52,   103,   104,    52,   110,   111,    11,
      12,    14,    15,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    51,    52,    53,
      54,    59,    60,    69,    74,    75,    77,    78,    89,    92,
      94,   124,   129,    52,    83,   101,    82,    52,   148,   149,
      83,   129,   139,   140,    83,   129,   142,   143,    83,   129,
     145,   146,    52,   122,   123,   124,    52,    52,    87,    83,
     103,    87,    92,   112,    83,   110,    95,    95,    92,    92,
      95,    95,    92,    92,    92,    92,    92,    92,    92,    89,
      92,    92,    92,    92,    92,    88,    89,    92,   127,   129,
      51,    52,    54,    59,    60,    69,   108,   130,   129,   129,
     129,   129,    52,     3,     4,     6,     7,     8,     9,    71,
      72,    73,    75,    76,    77,    78,    79,    80,    85,    86,
      85,    83,    83,   101,    87,    83,   148,    85,    85,    83,
     139,    85,    85,    83,   142,    85,    85,    83,    86,    83,
     122,    84,    85,    85,    52,    55,    75,    82,    89,    85,
      52,    56,    57,    58,   106,   113,    82,    85,    82,    82,
     129,    53,    54,    94,   124,   126,    82,    82,   129,   129,
     129,   129,    52,   129,   129,   129,   129,   129,   129,    52,
      52,    53,    54,    61,    89,    92,    94,   128,   129,   131,
     125,   126,    87,    90,    93,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     101,    85,    85,    83,    82,    85,    85,    85,    85,   145,
      85,   129,    40,    41,    46,    49,    50,   156,    40,    46,
      85,    85,   107,   108,    54,   105,    52,    86,    93,    63,
      64,    65,    66,    67,    68,    53,   132,   133,   132,    93,
      52,    93,   132,   132,    93,    93,    86,    93,    86,    86,
      93,    90,    93,    86,    86,    86,    86,   124,   124,    52,
      88,   127,    86,    90,    93,    86,   129,    85,    52,    94,
     150,    85,    82,    82,    84,    84,    84,    85,    82,    82,
      76,    87,    86,    88,    83,    90,   113,    87,    86,    86,
      86,    86,    86,    86,    87,    83,    86,    83,    16,    82,
      83,    83,   129,   108,   136,   129,   129,   129,   129,   129,
      90,    93,   131,   127,   125,    76,    86,    86,    52,    83,
     148,    52,    74,   152,   153,    52,    10,    48,    69,   157,
     157,    47,   148,   152,    85,   106,    54,   105,    88,    85,
      75,   106,   106,   106,   106,   106,   106,    52,   129,   132,
     129,   129,    13,    61,   134,   135,   129,   129,    93,    87,
      93,    93,    93,    93,    93,    86,   130,   150,    86,    85,
      83,    84,    85,    92,    52,    83,   152,    85,    92,    85,
      84,    83,    83,    86,    54,    91,    83,    86,    86,    83,
      86,    83,    86,    86,    17,   126,    87,    83,    86,    18,
     129,   136,   150,    85,     5,    10,    51,    52,    54,    59,
      60,    69,    75,    78,    89,    92,    94,   114,   117,   118,
     119,   108,   154,    92,    85,    40,    41,    50,   156,   129,
     156,    51,    85,    85,   107,    83,    87,    85,    61,    61,
      85,    62,    85,    62,    61,   129,    87,   129,   134,    86,
      93,    41,    46,    50,   156,    91,   108,   115,   116,    51,
      69,    75,    75,    52,    85,    86,    93,   154,    50,   156,
      82,    82,    84,    85,    93,    85,    85,    46,    83,    83,
      85,   106,    84,    84,    84,    84,    84,   129,   136,    82,
      82,    84,    85,    87,    87,    76,   115,   115,   154,    84,
      85,    93,    84,    85,   148,   152,   157,    47,    47,    83,
      82,    76,   114,   114,   114,   114,   114,   152,   152,   157,
      47,   114,   114,    76,    76,   114,    85,   157,    47,    83,
      83,    85,    84,    84,   152,    85,    83,    83,    83,    83,
      83,    83,    83,    85,    84,    86,    90,    93,    85,    85,
      84,    85,    85,   156,    51,    51,    83,    85,    85,    85,
      85,    85,    85,    85,   156,    51,   116,   156,    51,    41,
      50,   156,    50,   156,    85,    85,    85,    85,    50,   156,
      41,    85,    85,    85,    85,    82,    84,    85,    84,    85,
      47,    83,    83,    83,    84,    85,    82,    47,    83,    47,
      83,   152,   157,    47,   157,    47,    84,   157,    47,   152,
      84,    84,    83,    85,    84,    85,    84,    51,    85,    84,
      83,    51,    51,    85,   156,    51,   156,    51,    85,   156,
      51,    85,    85,    85,    50,   156,    85,    85,    85,    85,
      83,    85,    85,   156,    83,    83,    84,    85,    47,    83,
      47,    83,    47,    83,    85,   157,    47,    84,    84,    84,
      47,    85,    84,    51,    51,    51,    84,   156,    51,    85,
      85,    85,    51,    85,    85,    83,    83,    83,    85,    47,
      83,    83,    84,    51,    85,    83
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    97,    97,    97,    97,    97,    98,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,   100,   100,   100,
     100,   101,   101,   102,   103,   103,   104,   104,   104,   104,
     104,   104,   105,   105,   106,   106,   106,   106,   107,   107,
     108,   108,   108,   108,   108,   108,   109,   110,   110,   111,
     111,   111,   111,   111,   111,   111,   111,   112,   112,   113,
     113,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     115,   115,   116,   116,   117,   117,   118,   118,   118,   118,
     119,   119,   120,   121,   121,   122,   122,   123,   124,   124,
     124,   124,   124,   125,   125,   126,   126,   126,   126,   127,
     127,   128,   128,   128,   128,   128,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   130,   130,   131,   131,   132,
     132,   133,   134,   134,   135,   135,   136,   136,   136,   137,
     138,   138,   139,   139,   140,   141,   141,   142,   142,   143,
     144,   144,   145,   145,   146,   147,   148,   148,   149,   150,
     150,   150,   150,   151,   151,   151,   152,   152,   153,   153,
     153,   153,   153,   153,   154,   154,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   156,   156,   157,   157
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     2,     2,     5,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     6,     5,     5,
       4,     1,     3,     5,     1,     2,     4,     4,     6,     9,
      11,     6,     1,     3,     1,     1,     1,     1,     3,     5,
       1,     1,     1,     1,     1,     1,     5,     1,     2,    12,
      12,    12,    12,    12,     8,     8,     8,     1,     4,     1,
       3,     1,     1,     1,     1,     2,     1,     3,     5,     5,
       3,     1,     3,     5,     1,     1,     1,     2,     1,     1,
       1,     2,     5,     1,     1,     1,     2,     4,     1,     4,
       2,     5,     3,     1,     3,     1,     1,     1,     2,     2,
       3,     1,     3,     3,     1,     2,     1,     1,     1,     2,
       2,     4,     6,     6,     6,     6,     8,     7,     3,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     1,     1,
       1,     1,     4,     4,     4,     4,     6,     4,     6,     6,
       6,     4,     6,     6,     8,     4,     5,     1,     3,     1,
       3,     3,     1,     3,     4,     3,     3,     3,     5,     4,
       5,     4,     1,     2,     2,     5,     4,     1,     2,     2,
       5,     4,     1,     3,     2,     5,     1,     2,     6,     1,
       3,     2,     4,    18,    13,    13,     1,     2,     5,     2,
       6,     2,     7,     4,     1,     3,    32,    28,    27,    23,
      27,    23,    22,    18,    28,    24,    23,    19,    23,    19,
      18,    14,    29,     3,     6,     1,     1
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
#line 110 "parser.ypp"
                                    { (yyval.rddlTask) = rddlTask; }
#line 2094 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 3:
#line 111 "parser.ypp"
                                    { (yyval.rddlTask) = rddlTask; }
#line 2100 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 4:
#line 112 "parser.ypp"
                                    { (yyval.rddlTask) = rddlTask; }
#line 2106 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 5:
#line 113 "parser.ypp"
                                    { (yyval.rddlTask) = (yyvsp[-1].rddlTask); }
#line 2112 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 6:
#line 114 "parser.ypp"
                                    { (yyval.rddlTask) = (yyvsp[-1].rddlTask); }
#line 2118 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 7:
#line 115 "parser.ypp"
                                    { (yyval.rddlTask) = (yyvsp[-1].rddlTask); }
#line 2124 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 8:
#line 123 "parser.ypp"
                                                          {  rddlTask->domainName = *(yyvsp[-3].str); }
#line 2130 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 9:
#line 129 "parser.ypp"
                                                        { }
#line 2136 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 10:
#line 130 "parser.ypp"
                                                        { }
#line 2142 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 11:
#line 131 "parser.ypp"
                                                        { }
#line 2148 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 12:
#line 132 "parser.ypp"
                                                        { }
#line 2154 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 13:
#line 133 "parser.ypp"
                                                        { }
#line 2160 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 14:
#line 134 "parser.ypp"
                                                        { }
#line 2166 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 15:
#line 135 "parser.ypp"
                                                        { }
#line 2172 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 16:
#line 136 "parser.ypp"
                                                        { }
#line 2178 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 17:
#line 137 "parser.ypp"
                                                        { }
#line 2184 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 18:
#line 138 "parser.ypp"
                                              { }
#line 2190 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 19:
#line 139 "parser.ypp"
                                              { }
#line 2196 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 20:
#line 140 "parser.ypp"
                                              { }
#line 2202 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 21:
#line 141 "parser.ypp"
                                              { }
#line 2208 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 22:
#line 142 "parser.ypp"
                                              { }
#line 2214 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 23:
#line 143 "parser.ypp"
                                              { }
#line 2220 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 24:
#line 144 "parser.ypp"
                                              { }
#line 2226 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 25:
#line 145 "parser.ypp"
                                              { }
#line 2232 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 26:
#line 146 "parser.ypp"
                                              { }
#line 2238 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 27:
#line 151 "parser.ypp"
                                                                         { }
#line 2244 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 28:
#line 152 "parser.ypp"
                                                                         { }
#line 2250 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 29:
#line 153 "parser.ypp"
                                                                         { }
#line 2256 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 30:
#line 154 "parser.ypp"
                                                                         { }
#line 2262 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 31:
#line 157 "parser.ypp"
                                              { }
#line 2268 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 32:
#line 158 "parser.ypp"
                                              { }
#line 2274 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 33:
#line 164 "parser.ypp"
                                              { }
#line 2280 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 34:
#line 167 "parser.ypp"
                                    { }
#line 2286 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 35:
#line 168 "parser.ypp"
                                    { }
#line 2292 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 36:
#line 172 "parser.ypp"
                                                                                { rddlTask->addType(*(yyvsp[-3].str), *(yyvsp[-1].str)); }
#line 2298 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 37:
#line 173 "parser.ypp"
                                                                                { rddlTask->addType(*(yyvsp[-3].str), *(yyvsp[-1].str)); }
#line 2304 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 38:
#line 174 "parser.ypp"
                                                                                { rddlTask->addType(*(yyvsp[-5].str));
                                                                                  for (const std::string& s : *(yyvsp[-2].strs)) {
                                                                                      rddlTask->addObject(*(yyvsp[-5].str), s);
                                                                                  }}
#line 2313 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 39:
#line 178 "parser.ypp"
                                                                                { prost::parser::utils::abort("Defining types using Enum range error. Not implemented yet.") ; }
#line 2319 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 40:
#line 179 "parser.ypp"
                                                                                { prost::parser::utils::abort("Defining types using TypeSpecification error. Not implemented yet.") ;}
#line 2325 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 41:
#line 180 "parser.ypp"
                                                                                { prost::parser::utils::abort("Defining types using StructMemberList error. Not implemented yet.") ;}
#line 2331 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 42:
#line 183 "parser.ypp"
                                    { (yyval.strs) = new std::vector<std::string>(); (yyval.strs)->push_back(*(yyvsp[0].str)); }
#line 2337 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 43:
#line 184 "parser.ypp"
                                    { (yyval.strs) = (yyvsp[0].strs); (yyval.strs)->insert((yyval.strs)->begin(), *(yyvsp[-2].str)); }
#line 2343 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 44:
#line 187 "parser.ypp"
                                 { (yyval.type) = rddlTask->getType(*(yyvsp[0].str)); }
#line 2349 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 45:
#line 188 "parser.ypp"
                                 { (yyval.type) = rddlTask->getType(*(yyvsp[0].str)); }
#line 2355 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 46:
#line 189 "parser.ypp"
                                 { (yyval.type) = rddlTask->getType(*(yyvsp[0].str)); }
#line 2361 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 47:
#line 190 "parser.ypp"
                                 { (yyval.type) = rddlTask->getType(*(yyvsp[0].str)); }
#line 2367 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 48:
#line 193 "parser.ypp"
                                                                    { prost::parser::utils::abort("StructMemberList not implemented yet."); }
#line 2373 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 49:
#line 194 "parser.ypp"
                                                                    { prost::parser::utils::abort("StructMemberList not implemented yet."); }
#line 2379 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 50:
#line 197 "parser.ypp"
                        { (yyval.logicalExpression) = new prost::parser::NumericConstant((yyvsp[0].d));  }
#line 2385 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 51:
#line 198 "parser.ypp"
                        { (yyval.logicalExpression) = new prost::parser::NumericConstant((yyvsp[0].i));  }
#line 2391 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 52:
#line 199 "parser.ypp"
                        { (yyval.logicalExpression) = new prost::parser::Parameter(*(yyvsp[0].str));       }
#line 2397 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 53:
#line 200 "parser.ypp"
                        { (yyval.logicalExpression) = new prost::parser::NumericConstant(1.0); }
#line 2403 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 54:
#line 201 "parser.ypp"
                        { (yyval.logicalExpression) = new prost::parser::NumericConstant(0.0); }
#line 2409 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 55:
#line 202 "parser.ypp"
                        { assert(rddlTask->objects.find(*(yyvsp[0].str)) != rddlTask->objects.end()); (yyval.logicalExpression) = rddlTask->objects[*(yyvsp[0].str)]; }
#line 2415 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 56:
#line 208 "parser.ypp"
                                                { (yyval.parametrizedVariables) = (yyvsp[-2].parametrizedVariables); }
#line 2421 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 57:
#line 211 "parser.ypp"
                                       { (yyval.parametrizedVariables) = new std::vector<prost::parser::ParametrizedVariable*>(); (yyval.parametrizedVariables)->push_back((yyvsp[0].parametrizedVariable)); }
#line 2427 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 58:
#line 212 "parser.ypp"
                                       { (yyval.parametrizedVariables) = (yyvsp[0].parametrizedVariables); (yyval.parametrizedVariables)->insert((yyval.parametrizedVariables)->begin(), (yyvsp[-1].parametrizedVariable)); }
#line 2433 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 59:
#line 215 "parser.ypp"
                                                                                                                                       { (yyval.parametrizedVariable) = new prost::parser::ParametrizedVariable(*(yyvsp[-11].str), *(yyvsp[-10].parameters), prost::parser::ParametrizedVariable::STATE_FLUENT, (yyvsp[-6].type), (yyvsp[-2].d)); rddlTask->addVariableSchematic((yyval.parametrizedVariable)); }
#line 2439 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 60:
#line 216 "parser.ypp"
                                                                                                                                       { (yyval.parametrizedVariable) = new prost::parser::ParametrizedVariable(*(yyvsp[-11].str), *(yyvsp[-10].parameters), prost::parser::ParametrizedVariable::NON_FLUENT, (yyvsp[-6].type), (yyvsp[-2].d)); rddlTask->addVariableSchematic((yyval.parametrizedVariable)); }
#line 2445 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 61:
#line 217 "parser.ypp"
                                                                                                                                       { (yyval.parametrizedVariable) = new prost::parser::ParametrizedVariable(*(yyvsp[-11].str), *(yyvsp[-10].parameters), prost::parser::ParametrizedVariable::ACTION_FLUENT, (yyvsp[-6].type),  (yyvsp[-2].d)); rddlTask->addVariableSchematic((yyval.parametrizedVariable)); }
#line 2451 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 62:
#line 218 "parser.ypp"
                                                                                                                                       { prost::parser::utils::abort("interm-fluent parametrized variables definition not implemented. "); }
#line 2457 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 63:
#line 219 "parser.ypp"
                                                                                                                                       { prost::parser::utils::abort("derived-fluent parametrized variables definition not implemented. "); }
#line 2463 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 64:
#line 220 "parser.ypp"
                                                                                                                                       { prost::parser::utils::abort("interm-fluent parametrized variables definition not implemented. "); }
#line 2469 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 65:
#line 221 "parser.ypp"
                                                                                                                                       { prost::parser::utils::abort("derived-fluent parametrized variables definition not implemented. "); }
#line 2475 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 66:
#line 222 "parser.ypp"
                                                                                                                                       { prost::parser::utils::abort("observ-fluent parametrized variables definition not implemented. "); }
#line 2481 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 67:
#line 225 "parser.ypp"
                                                  { (yyval.parameters) = new std::vector<prost::parser::Parameter*>(); }
#line 2487 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 68:
#line 226 "parser.ypp"
                                                  { (yyval.parameters) = (yyvsp[-2].parameters); }
#line 2493 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 69:
#line 229 "parser.ypp"
                                                                         { (yyval.parameters) = new std::vector<prost::parser::Parameter*>(); (yyval.parameters)->push_back(new prost::parser::Parameter((yyvsp[0].type)->name, (yyvsp[0].type))); }
#line 2499 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 70:
#line 230 "parser.ypp"
                                                                         { (yyval.parameters) = (yyvsp[0].parameters); (yyval.parameters)->insert((yyval.parameters)->begin(), new prost::parser::Parameter((yyvsp[-2].type)->name, (yyvsp[-2].type))); }
#line 2505 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 71:
#line 233 "parser.ypp"
                                                     { (yyval.d) = (*(yyvsp[0].str) == "true") ? 1 : 0; }
#line 2511 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 72:
#line 234 "parser.ypp"
                                                     { (yyval.d) = (yyvsp[0].d); }
#line 2517 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 73:
#line 235 "parser.ypp"
                                                     { (yyval.d) = (yyvsp[0].d); }
#line 2523 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 74:
#line 236 "parser.ypp"
                                                     { prost::parser::Object* obj = rddlTask->getObject(*(yyvsp[0].str)); (yyval.d) = obj->value; }
#line 2529 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 75:
#line 237 "parser.ypp"
                                                     { prost::parser::utils::abort("Range constant variable with tag '$' definition implemented yet."); }
#line 2535 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 76:
#line 238 "parser.ypp"
                                                     { assert(rddlTask->objects.find(*(yyvsp[0].str)) != rddlTask->objects.end()); (yyval.d) = rddlTask->objects[*(yyvsp[0].str)]->value; }
#line 2541 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 77:
#line 239 "parser.ypp"
                                                     { prost::parser::utils::abort("< Structured ranged constatnts > not implemented yet."); }
#line 2547 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 78:
#line 240 "parser.ypp"
                                                     { prost::parser::utils::abort("(< Structured ranged constatnts >) not implemented yet."); }
#line 2553 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 79:
#line 241 "parser.ypp"
                                                     { prost::parser::utils::abort("[< Structured ranged constatnts >] not implemented yet."); }
#line 2559 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 80:
#line 245 "parser.ypp"
                                           { prost::parser::utils::abort("StructRangeConsant not implemented yet."); }
#line 2565 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 81:
#line 246 "parser.ypp"
                                           { prost::parser::utils::abort("StructRangeConsant not implemented yet."); }
#line 2571 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 82:
#line 249 "parser.ypp"
                                                                           { prost::parser::utils::abort("StructRangeConsantList not implemented yet."); }
#line 2577 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 83:
#line 250 "parser.ypp"
                                                                           { prost::parser::utils::abort("StructRangeConsantList not implemented yet."); }
#line 2583 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 84:
#line 253 "parser.ypp"
                      { (yyval.str) = (yyvsp[0].str); }
#line 2589 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 85:
#line 254 "parser.ypp"
                      { (yyval.str) = (yyvsp[0].str); }
#line 2595 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 86:
#line 257 "parser.ypp"
                                      { (yyval.d) = (yyvsp[0].d); }
#line 2601 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 87:
#line 258 "parser.ypp"
                                      { (yyval.d) = -(yyvsp[0].d); }
#line 2607 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 88:
#line 259 "parser.ypp"
                                      { (yyval.d) = std::numeric_limits<double>::infinity(); }
#line 2613 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 89:
#line 260 "parser.ypp"
                                      { (yyval.d) = -std::numeric_limits<double>::infinity();}
#line 2619 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 90:
#line 263 "parser.ypp"
                          { (yyval.d) = (yyvsp[0].i);  }
#line 2625 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 91:
#line 264 "parser.ypp"
                          { (yyval.d) = -(yyvsp[0].i); }
#line 2631 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 92:
#line 271 "parser.ypp"
                                             { }
#line 2637 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 93:
#line 274 "parser.ypp"
                      { }
#line 2643 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 94:
#line 275 "parser.ypp"
                      { }
#line 2649 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 95:
#line 278 "parser.ypp"
                              { }
#line 2655 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 96:
#line 279 "parser.ypp"
                              { }
#line 2661 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 97:
#line 282 "parser.ypp"
                                                    { rddlTask->addCPF(*(yyvsp[-3].parametrizedVariable), (yyvsp[-1].logicalExpression)); }
#line 2667 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 98:
#line 285 "parser.ypp"
                                                    {
                                                      std::string varName;
                                                      if ((*(yyvsp[0].str))[(yyvsp[0].str)->length() - 1] == '\'')
                                                        varName = (yyvsp[0].str)->substr(0, (yyvsp[0].str)->length() - 1);
                                                      else
                                                        varName = *(yyvsp[0].str);

                                                      if (rddlTask->variableDefinitions.find(varName) != rddlTask->variableDefinitions.end()) {
                                                        (yyval.parametrizedVariable) = rddlTask->variableDefinitions[varName];
                                                      } else {
                                                        prost::parser::utils::abort("Unknown parametrized variable " + varName + ".");
                                                      }
                                                      (yyval.parametrizedVariable) = new prost::parser::ParametrizedVariable(*(rddlTask->variableDefinitions[varName]), std::vector<prost::parser::Parameter*>());
                                                    }
#line 2686 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 99:
#line 299 "parser.ypp"
                                                    {
                                                      std::string varName;
                                                      if ((*(yyvsp[-3].str))[(yyvsp[-3].str)->length() - 1] == '\'')
                                                        varName = (yyvsp[-3].str)->substr(0, (yyvsp[-3].str)->length() - 1);
                                                      else
                                                        varName = *(yyvsp[-3].str);
                                                      if (rddlTask->variableDefinitions.find(varName) != rddlTask->variableDefinitions.end()) {
                                                        (yyval.parametrizedVariable) = rddlTask->variableDefinitions[varName];
                                                      } else {
                                                        prost::parser::utils::abort("Unknown parametrized variable " + varName + ".");
                                                      }
                                                      (yyval.parametrizedVariable) = new prost::parser::ParametrizedVariable(*(rddlTask->variableDefinitions[varName]), *(yyvsp[-1].parameters));
                                                    }
#line 2704 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 100:
#line 312 "parser.ypp"
                                                    { prost::parser::utils::abort("Undefined variable: " + *(yyvsp[-1].str) + ". Syntax not implemented yet.");     }
#line 2710 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 101:
#line 313 "parser.ypp"
                                                    { prost::parser::utils::abort("Undefined variable: " + *(yyvsp[-4].str) + ". Syntax not implemented yet.");     }
#line 2716 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 102:
#line 314 "parser.ypp"
                                                    { prost::parser::utils::abort("Undefined variable: " + *(yyvsp[-2].str) + ". Syntax not implemented yet.");     }
#line 2722 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 103:
#line 317 "parser.ypp"
                               { (yyval.parameters) = new std::vector<prost::parser::Parameter*>(); (yyval.parameters)->push_back((yyvsp[0].parameter)); }
#line 2728 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 104:
#line 318 "parser.ypp"
                               { (yyval.parameters) = (yyvsp[0].parameters); (yyval.parameters)->insert((yyval.parameters)->begin(), (yyvsp[-2].parameter)); }
#line 2734 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 105:
#line 321 "parser.ypp"
                             { (yyval.parameter) = new prost::parser::Parameter(*(yyvsp[0].str)); }
#line 2740 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 106:
#line 322 "parser.ypp"
                             { prost::parser::utils::abort("Definition of Term using parametrized variable not implemented yet."); }
#line 2746 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 107:
#line 323 "parser.ypp"
                             { assert(rddlTask->objects.find(*(yyvsp[0].str)) != rddlTask->objects.end()); (yyval.parameter) = rddlTask->objects[*(yyvsp[0].str)]; }
#line 2752 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 108:
#line 324 "parser.ypp"
                             { prost::parser::utils::abort("Definition of Term using variable with '$' sign not implemented yet."); }
#line 2758 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 109:
#line 327 "parser.ypp"
                               { prost::parser::utils::abort("MemberList not implemented yet."); }
#line 2764 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 110:
#line 328 "parser.ypp"
                               { prost::parser::utils::abort("MemberList not implemented yet."); }
#line 2770 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 111:
#line 331 "parser.ypp"
                                 { prost::parser::utils::abort("Pterm not implemented yet."); }
#line 2776 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 112:
#line 332 "parser.ypp"
                                 { prost::parser::utils::abort("Pterm not implemented yet."); }
#line 2782 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 113:
#line 333 "parser.ypp"
                                 { prost::parser::utils::abort("Pterm not implemented yet."); }
#line 2788 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 114:
#line 334 "parser.ypp"
                                 { prost::parser::utils::abort("Pterm not implemented yet."); }
#line 2794 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 115:
#line 335 "parser.ypp"
                                 { prost::parser::utils::abort("Pterm not implemented yet."); }
#line 2800 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 116:
#line 343 "parser.ypp"
                                                                                                { (yyval.logicalExpression) = new prost::parser::Parameter(*(yyvsp[0].str)); }
#line 2806 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 117:
#line 344 "parser.ypp"
                                                                                                { (yyval.logicalExpression) = (yyvsp[0].parametrizedVariable); }
#line 2812 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 118:
#line 345 "parser.ypp"
                                                                                                { assert(rddlTask->objects.find(*(yyvsp[0].str)) != rddlTask->objects.end()); (yyval.logicalExpression) = rddlTask->objects[*(yyvsp[0].str)]; }
#line 2818 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 119:
#line 346 "parser.ypp"
                                                                                                { prost::parser::utils::abort("'$<variable_name>' not implemented yet."); }
#line 2824 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 120:
#line 347 "parser.ypp"
                                                                                                { prost::parser::utils::abort("Structured expression list not implemented yet."); }
#line 2830 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 121:
#line 349 "parser.ypp"
                                                                                                { prost::parser::utils::abort("Unknow special function " + *(yyvsp[-3].str) + " defined as expression. Special functions not implemented yet."); }
#line 2836 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 122:
#line 350 "parser.ypp"
                                                                                                { (yyval.logicalExpression) = new prost::parser::UniversalQuantification((yyvsp[-2].parameterList), (yyvsp[0].logicalExpression)); }
#line 2842 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 123:
#line 351 "parser.ypp"
                                                                                                { (yyval.logicalExpression) = new prost::parser::ExistentialQuantification((yyvsp[-2].parameterList), (yyvsp[0].logicalExpression));}
#line 2848 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 124:
#line 352 "parser.ypp"
                                                                                                { (yyval.logicalExpression) = new prost::parser::Sumation((yyvsp[-2].parameterList), (yyvsp[0].logicalExpression)); }
#line 2854 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 125:
#line 353 "parser.ypp"
                                                                                                { (yyval.logicalExpression) = new prost::parser::Product((yyvsp[-2].parameterList), (yyvsp[0].logicalExpression)); }
#line 2860 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 126:
#line 354 "parser.ypp"
                                                                                                { (yyval.logicalExpression) = new prost::parser::IfThenElseExpression((yyvsp[-5].logicalExpression), (yyvsp[-2].logicalExpression), (yyvsp[0].logicalExpression)); }
#line 2866 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 127:
#line 355 "parser.ypp"
                                                                                                { // TODO: Text switch case control
                                                                                                   prost::parser::LogicalExpression* switchVar = rddlTask->getParametrizedVariable((yyvsp[-4].parameter)->name);

                                                                                                    std::vector<prost::parser::LogicalExpression*> conditions;
                                                                                                    std::vector<prost::parser::LogicalExpression*> effects;
                                                                                                    for (prost::parser::ConditionEffectPair* cs : *(yyvsp[-1].conditionEffects)) {
                                                                                                        if (!cs->first) {
                                                                                                            // If we reached the end of switch case and instead of 'case', we have 'default' -> default action
                                                                                                            conditions.push_back(new prost::parser::NumericConstant(1.0));
                                                                                                        }
                                                                                                        else {
                                                                                                            std::vector<prost::parser::LogicalExpression*> switchVarEquality;
                                                                                                            switchVarEquality.push_back(switchVar);
                                                                                                            switchVarEquality.push_back(cs->first);
                                                                                                            conditions.push_back(new prost::parser::EqualsExpression(switchVarEquality));
                                                                                                        }
                                                                                                        effects.push_back(cs->second);
                                                                                                    }
                                                                                                    (yyval.logicalExpression) = new prost::parser::MultiConditionChecker(conditions, effects);
                                                                                                }
#line 2891 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 128:
#line 376 "parser.ypp"
                                                       { std::vector<prost::parser::LogicalExpression*> exprs; exprs.push_back((yyvsp[-2].logicalExpression)); exprs.push_back((yyvsp[0].logicalExpression)); (yyval.logicalExpression) = new prost::parser::Addition(exprs); }
#line 2897 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 129:
#line 377 "parser.ypp"
                                                       { std::vector<prost::parser::LogicalExpression*> exprs; exprs.push_back(new prost::parser::NumericConstant(0.0)); exprs.push_back((yyvsp[0].logicalExpression)); (yyval.logicalExpression) = new prost::parser::Subtraction(exprs); }
#line 2903 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 130:
#line 378 "parser.ypp"
                                                       { (yyval.logicalExpression) = (yyvsp[0].logicalExpression); }
#line 2909 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 131:
#line 379 "parser.ypp"
                                                       { std::vector<prost::parser::LogicalExpression*> exprs; exprs.push_back((yyvsp[-2].logicalExpression)); exprs.push_back((yyvsp[0].logicalExpression)); (yyval.logicalExpression) = new prost::parser::Subtraction(exprs); }
#line 2915 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 132:
#line 380 "parser.ypp"
                                                       { std::vector<prost::parser::LogicalExpression*> exprs; exprs.push_back((yyvsp[-2].logicalExpression)); exprs.push_back((yyvsp[0].logicalExpression)); (yyval.logicalExpression) = new prost::parser::Multiplication(exprs); }
#line 2921 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 133:
#line 381 "parser.ypp"
                                                       { std::vector<prost::parser::LogicalExpression*> exprs; exprs.push_back((yyvsp[-2].logicalExpression)); exprs.push_back((yyvsp[0].logicalExpression)); (yyval.logicalExpression) = new prost::parser::Division(exprs); }
#line 2927 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 134:
#line 382 "parser.ypp"
                                                       { std::vector<prost::parser::LogicalExpression*> exprs; exprs.push_back((yyvsp[-2].logicalExpression)); exprs.push_back((yyvsp[0].logicalExpression)); (yyval.logicalExpression) = new prost::parser::GreaterExpression(exprs); }
#line 2933 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 135:
#line 383 "parser.ypp"
                                                       { std::vector<prost::parser::LogicalExpression*> exprs; exprs.push_back((yyvsp[-2].logicalExpression)); exprs.push_back((yyvsp[0].logicalExpression)); (yyval.logicalExpression) = new prost::parser::LowerExpression(exprs); }
#line 2939 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 136:
#line 384 "parser.ypp"
                                                       { std::vector<prost::parser::LogicalExpression*> exprs; exprs.push_back((yyvsp[-2].logicalExpression)); exprs.push_back((yyvsp[0].logicalExpression)); (yyval.logicalExpression) = new prost::parser::LowerEqualsExpression(exprs); }
#line 2945 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 137:
#line 385 "parser.ypp"
                                                       { std::vector<prost::parser::LogicalExpression*> exprs; exprs.push_back((yyvsp[-2].logicalExpression)); exprs.push_back((yyvsp[0].logicalExpression)); (yyval.logicalExpression) = new prost::parser::GreaterEqualsExpression(exprs); }
#line 2951 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 138:
#line 386 "parser.ypp"
                                                       { std::vector<prost::parser::LogicalExpression*> exprs; exprs.push_back((yyvsp[-2].logicalExpression)); exprs.push_back((yyvsp[0].logicalExpression)); (yyval.logicalExpression) = new prost::parser::EqualsExpression(exprs); }
#line 2957 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 139:
#line 387 "parser.ypp"
                                                       { std::vector<prost::parser::LogicalExpression*> exprs; exprs.push_back((yyvsp[-2].logicalExpression)); exprs.push_back((yyvsp[0].logicalExpression)); (yyval.logicalExpression) = new prost::parser::Negation(new prost::parser::EqualsExpression(exprs)); }
#line 2963 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 140:
#line 388 "parser.ypp"
                                                       { (yyval.logicalExpression) = (yyvsp[-1].logicalExpression); }
#line 2969 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 141:
#line 389 "parser.ypp"
                                                       { (yyval.logicalExpression) = (yyvsp[-1].logicalExpression); }
#line 2975 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 142:
#line 390 "parser.ypp"
                                                       { std::vector<prost::parser::LogicalExpression*> exprs; exprs.push_back((yyvsp[-2].logicalExpression)); exprs.push_back((yyvsp[0].logicalExpression)); (yyval.logicalExpression) = new prost::parser::Conjunction(exprs); }
#line 2981 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 143:
#line 391 "parser.ypp"
                                                       { std::vector<prost::parser::LogicalExpression*> exprs; exprs.push_back((yyvsp[-2].logicalExpression)); exprs.push_back((yyvsp[0].logicalExpression)); (yyval.logicalExpression) = new prost::parser::Conjunction(exprs); }
#line 2987 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 144:
#line 392 "parser.ypp"
                                                       { std::vector<prost::parser::LogicalExpression*> exprs; exprs.push_back((yyvsp[-2].logicalExpression)); exprs.push_back((yyvsp[0].logicalExpression)); (yyval.logicalExpression) = new prost::parser::Disjunction(exprs); }
#line 2993 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 145:
#line 393 "parser.ypp"
                                                       { (yyval.logicalExpression) = new prost::parser::Negation((yyvsp[0].logicalExpression)); }
#line 2999 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 146:
#line 394 "parser.ypp"
                                                       { std::vector<prost::parser::LogicalExpression*> posExprs, negExprs, exprs; posExprs.push_back((yyvsp[-2].logicalExpression)); negExprs.push_back((yyvsp[0].logicalExpression)); exprs.push_back(new prost::parser::Conjunction(posExprs)); exprs.push_back(new prost::parser::Conjunction(posExprs)); (yyval.logicalExpression) = new prost::parser::Disjunction(exprs); }
#line 3005 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 147:
#line 395 "parser.ypp"
                                                       { std::vector<prost::parser::LogicalExpression*> exprs; exprs.push_back(new prost::parser::Negation((yyvsp[-2].logicalExpression))); exprs.push_back((yyvsp[0].logicalExpression)); (yyval.logicalExpression) = new prost::parser::Disjunction(exprs); }
#line 3011 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 148:
#line 396 "parser.ypp"
                                                       { (yyval.logicalExpression) = new prost::parser::NumericConstant((yyvsp[0].d)); }
#line 3017 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 149:
#line 397 "parser.ypp"
                                                       { (yyval.logicalExpression) = new prost::parser::NumericConstant((yyvsp[0].i)); }
#line 3023 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 150:
#line 398 "parser.ypp"
                                                       { (yyval.logicalExpression) = new prost::parser::NumericConstant(1.0); }
#line 3029 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 151:
#line 399 "parser.ypp"
                                                       { (yyval.logicalExpression) = new prost::parser::NumericConstant(0.0); }
#line 3035 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 152:
#line 400 "parser.ypp"
                                                       { (yyval.logicalExpression) = new prost::parser::ExponentialFunction((yyvsp[-1].logicalExpression)); }
#line 3041 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 153:
#line 401 "parser.ypp"
                                                       { (yyval.logicalExpression) = new prost::parser::ExponentialFunction((yyvsp[-1].logicalExpression)); }
#line 3047 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 154:
#line 404 "parser.ypp"
                                                                            { (yyval.logicalExpression) = new prost::parser::BernoulliDistribution((yyvsp[-1].logicalExpression)); }
#line 3053 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 155:
#line 405 "parser.ypp"
                                                                            { (yyval.logicalExpression) = new prost::parser::KronDeltaDistribution((yyvsp[-1].logicalExpression)); }
#line 3059 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 156:
#line 406 "parser.ypp"
                                                                            { (yyval.logicalExpression) = (yyvsp[-1].lConstCaseList); }
#line 3065 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 157:
#line 407 "parser.ypp"
                                                                            { prost::parser::utils::abort("DiracDelta not implemtend."); }
#line 3071 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 158:
#line 408 "parser.ypp"
                                                                            { prost::parser::utils::abort("Uniform not implemtend."); }
#line 3077 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 159:
#line 409 "parser.ypp"
                                                                            { prost::parser::utils::abort("Normal not implemtend."); }
#line 3083 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 160:
#line 410 "parser.ypp"
                                                                            { prost::parser::utils::abort("Dirichelt not implemtend."); }
#line 3089 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 161:
#line 411 "parser.ypp"
                                                                            { prost::parser::utils::abort("Poisson not implemtend."); }
#line 3095 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 162:
#line 412 "parser.ypp"
                                                                            { prost::parser::utils::abort("Weibull not implemtend."); }
#line 3101 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 163:
#line 413 "parser.ypp"
                                                                            { prost::parser::utils::abort("Gama not implemtend.");  }
#line 3107 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 164:
#line 414 "parser.ypp"
                                                                            { prost::parser::utils::abort("Multinomial not implemtend."); }
#line 3113 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 165:
#line 417 "parser.ypp"
                                                                         { prost::parser::utils::abort("StructExpressionList not implemented yet."); }
#line 3119 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 166:
#line 418 "parser.ypp"
                                                                         { prost::parser::utils::abort("StructExpressionList not implemented yet."); }
#line 3125 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 167:
#line 421 "parser.ypp"
                                              { (yyval.logicalExpressions) = new std::vector<prost::parser::LogicalExpression*>(); (yyval.logicalExpressions)->push_back((yyvsp[0].logicalExpression)); }
#line 3131 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 168:
#line 422 "parser.ypp"
                                              { (yyval.logicalExpressions) = (yyvsp[0].logicalExpressions); (yyval.logicalExpressions)->insert((yyval.logicalExpressions)->begin(), (yyvsp[-2].logicalExpression)); }
#line 3137 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 169:
#line 425 "parser.ypp"
                                               { (yyval.parameterList) = new prost::parser::ParameterList({}, {}); (yyval.parameterList)->params.push_back(new prost::parser::Parameter((yyvsp[0].parameter)->name, (yyvsp[0].parameter)->type)); (yyval.parameterList)->types.push_back((yyvsp[0].parameter)->type); }
#line 3143 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 170:
#line 426 "parser.ypp"
                                               { (yyval.parameterList) = (yyvsp[0].parameterList); (yyval.parameterList)->params.insert((yyval.parameterList)->params.begin(), new prost::parser::Parameter((yyvsp[-2].parameter)->name, (yyvsp[-2].parameter)->type)); (yyval.parameterList)->types.insert((yyval.parameterList)->types.begin(), (yyvsp[-2].parameter)->type); }
#line 3149 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 171:
#line 429 "parser.ypp"
                                           { if (rddlTask->getType(*(yyvsp[0].str))) {
                                     (yyval.parameter) = new prost::parser::Parameter(*(yyvsp[-2].str), rddlTask->getType(*(yyvsp[0].str)));
                                   }
                                   else {
                                        prost::parser::utils::abort("Type " + *(yyvsp[0].str) + " not defined");
                                   }
                                 }
#line 3161 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 172:
#line 438 "parser.ypp"
                                        { (yyval.conditionEffects) = new std::vector<prost::parser::ConditionEffectPair*>(); (yyval.conditionEffects)->push_back((yyvsp[0].conditionEffect)); }
#line 3167 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 173:
#line 439 "parser.ypp"
                                        { (yyval.conditionEffects) = (yyvsp[0].conditionEffects); (yyval.conditionEffects)->insert((yyval.conditionEffects)->begin(), (yyvsp[-2].conditionEffect)); }
#line 3173 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 174:
#line 442 "parser.ypp"
                                                   { prost::parser::LogicalExpression* var = rddlTask->getParametrizedVariable((yyvsp[-2].parameter)->name); (yyval.conditionEffect) = new prost::parser::ConditionEffectPair(var, (yyvsp[0].logicalExpression)); }
#line 3179 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 175:
#line 443 "parser.ypp"
                                                   { (yyval.conditionEffect) = new prost::parser::ConditionEffectPair(nullptr, (yyvsp[0].logicalExpression)); }
#line 3185 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 176:
#line 447 "parser.ypp"
                                                          { (yyval.lConstCaseList) = new prost::parser::DiscreteDistribution(); (yyval.lConstCaseList)->values.push_back((yyvsp[-2].logicalExpression)); (yyval.lConstCaseList)->probabilities.push_back((yyvsp[0].logicalExpression)); }
#line 3191 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 177:
#line 448 "parser.ypp"
                                                          { prost::parser::utils::abort("Key word 'otherwise' not supported yet"); }
#line 3197 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 178:
#line 449 "parser.ypp"
                                                          { (yyval.lConstCaseList) = (yyvsp[0].lConstCaseList); (yyval.lConstCaseList)->values.insert((yyval.lConstCaseList)->values.begin(), (yyvsp[-4].logicalExpression)); (yyval.lConstCaseList)->probabilities.insert((yyval.lConstCaseList)->probabilities.begin(), (yyvsp[-2].logicalExpression)); }
#line 3203 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 179:
#line 455 "parser.ypp"
                                                       { rddlTask->setRewardCPF((yyvsp[-1].logicalExpression)); }
#line 3209 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 180:
#line 462 "parser.ypp"
                                                                                               { }
#line 3215 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 181:
#line 463 "parser.ypp"
                                                                                               { }
#line 3221 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 182:
#line 466 "parser.ypp"
                                                                     { }
#line 3227 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 183:
#line 467 "parser.ypp"
                                                                     { }
#line 3233 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 184:
#line 470 "parser.ypp"
                                         { rddlTask->addPrecondition((yyvsp[-1].logicalExpression)); }
#line 3239 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 185:
#line 476 "parser.ypp"
                                                                                            { }
#line 3245 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 186:
#line 477 "parser.ypp"
                                                                                            { }
#line 3251 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 187:
#line 480 "parser.ypp"
                                                                            { }
#line 3257 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 188:
#line 481 "parser.ypp"
                                                                            { }
#line 3263 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 189:
#line 484 "parser.ypp"
                                             { rddlTask->addPrecondition((yyvsp[-1].logicalExpression)); }
#line 3269 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 190:
#line 490 "parser.ypp"
                                                                             { }
#line 3275 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 191:
#line 491 "parser.ypp"
                                                                             { }
#line 3281 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 195:
#line 504 "parser.ypp"
                                                      { }
#line 3287 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 196:
#line 508 "parser.ypp"
                                          { }
#line 3293 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 197:
#line 509 "parser.ypp"
                                          { }
#line 3299 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 198:
#line 512 "parser.ypp"
                                                            {
                                                              for (std::string str : *(yyvsp[-2].strs)) {
                                                                rddlTask->addObject(*(yyvsp[-5].str), str);
                                                              }
                                                         }
#line 3309 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 199:
#line 519 "parser.ypp"
                                                  { (yyval.strs) = new std::vector<std::string>(); (yyval.strs)->push_back(*(yyvsp[0].str)); }
#line 3315 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 200:
#line 520 "parser.ypp"
                                                  { (yyval.strs) = (yyvsp[0].strs); (yyval.strs)->insert((yyval.strs)->begin(), *(yyvsp[-2].str)); }
#line 3321 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 201:
#line 521 "parser.ypp"
                                                  { prost::parser::utils::abort("Definition of an object using '$' not implemented yet."); }
#line 3327 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 202:
#line 522 "parser.ypp"
                                                  { prost::parser::utils::abort("Definition of an object using '$' not implemented yet."); }
#line 3333 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 203:
#line 534 "parser.ypp"
                {
                    rddlTask->nonFluentsName = *(yyvsp[-16].str);
                    if (rddlTask->domainName != *(yyvsp[-12].str)) {
                        prost::parser::utils::abort("Unknown domain " + *(yyvsp[-12].str) + "  used in non-fluents section");
                    }
                }
#line 3344 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 204:
#line 543 "parser.ypp"
                {
                    rddlTask->nonFluentsName = *(yyvsp[-11].str);
                    if (rddlTask->domainName != *(yyvsp[-7].str)) {
                        prost::parser::utils::abort("Unknown domain " + *(yyvsp[-7].str) + "  used in non-fluents section");
                    }
                }
#line 3355 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 205:
#line 552 "parser.ypp"
                {
                    rddlTask->nonFluentsName = *(yyvsp[-11].str);
                    if (rddlTask->domainName != *(yyvsp[-7].str)) {
                        prost::parser::utils::abort("Unknown domain " + *(yyvsp[-7].str) + "  used in non-fluents section");
                    }
                }
#line 3366 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 206:
#line 560 "parser.ypp"
                                                                        { }
#line 3372 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 207:
#line 561 "parser.ypp"
                                                                        { }
#line 3378 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 208:
#line 565 "parser.ypp"
                                                                              {
                                                                                prost::parser::ParametrizedVariable* parent = rddlTask->getParametrizedVariable(*(yyvsp[-4].str));
                                                                                std::vector<prost::parser::Parameter*> params;
                                                                                for (prost::parser::LogicalExpression* le : *(yyvsp[-2].logicalExpressions)) {
                                                                                    prost::parser::Parameter* param = dynamic_cast<prost::parser::Parameter*>(le);
                                                                                    if (!param) {
                                                                                        prost::parser::utils::abort("Passing anything other than Parameter object to ParametrizedVariable is not allowed.");
                                                                                    }
                                                                                    params.push_back(rddlTask->getObject(param->name));
                                                                                }
                                                                                rddlTask->addParametrizedVariable(parent, params, 1);
                                                                              }
#line 3395 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 209:
#line 577 "parser.ypp"
                                                                              { prost::parser::ParametrizedVariable* parent = rddlTask->getParametrizedVariable(*(yyvsp[-1].str)); rddlTask->addParametrizedVariable(parent,  {}, 1); }
#line 3401 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 210:
#line 578 "parser.ypp"
                                                                              {
                                                                                prost::parser::ParametrizedVariable* parent = rddlTask->getParametrizedVariable(*(yyvsp[-4].str));
                                                                                std::vector<prost::parser::Parameter*> params;
                                                                                for (prost::parser::LogicalExpression* le : *(yyvsp[-2].logicalExpressions)) {
                                                                                    prost::parser::Parameter* param = dynamic_cast<prost::parser::Parameter*>(le);
                                                                                    if (!param) {
                                                                                        prost::parser::utils::abort("Passing anything other than Parameter object to ParametrizedVariable is not allowed.");
                                                                                    }
                                                                                    params.push_back(rddlTask->getObject(param->name));
                                                                                }
                                                                                rddlTask->addParametrizedVariable(parent, params, 0);
                                                                              }
#line 3418 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 211:
#line 590 "parser.ypp"
                                                                              { prost::parser::ParametrizedVariable* parent = rddlTask->getParametrizedVariable(*(yyvsp[0].str)); rddlTask->addParametrizedVariable(parent,  {}, 0); }
#line 3424 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 212:
#line 591 "parser.ypp"
                                                                              {
                                                                                prost::parser::ParametrizedVariable* parent = rddlTask->getParametrizedVariable(*(yyvsp[-6].str));
                                                                                std::vector<prost::parser::Parameter*> params;
                                                                                for (prost::parser::LogicalExpression* le : *(yyvsp[-4].logicalExpressions)) {
                                                                                    prost::parser::Parameter* param = dynamic_cast<prost::parser::Parameter*>(le);
                                                                                    if (!param) {
                                                                                        prost::parser::utils::abort("Passing anything other than Parameter object to ParametrizedVariable is not allowed.");
                                                                                    }
                                                                                    params.push_back(rddlTask->getObject(param->name));
                                                                                }
                                                                                rddlTask->addParametrizedVariable(parent, params, (yyvsp[-1].d));
                                                                              }
#line 3441 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 213:
#line 603 "parser.ypp"
                                                                              { prost::parser::ParametrizedVariable* parent = rddlTask->getParametrizedVariable(*(yyvsp[-3].str)); rddlTask->addParametrizedVariable(parent,  {}, (yyvsp[-1].d));}
#line 3447 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 214:
#line 606 "parser.ypp"
                                    { (yyval.logicalExpressions) = new std::vector<prost::parser::LogicalExpression*>(); (yyval.logicalExpressions)->push_back((yyvsp[0].logicalExpression)); }
#line 3453 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 215:
#line 607 "parser.ypp"
                                    { (yyval.logicalExpressions) = (yyvsp[0].logicalExpressions); (yyval.logicalExpressions)->insert((yyval.logicalExpressions)->begin(), (yyvsp[-2].logicalExpression)); }
#line 3459 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 216:
#line 625 "parser.ypp"
                                  { rddlTask->setInstance(*(yyvsp[-30].str), *(yyvsp[-26].str), *(yyvsp[-22].str), (yyvsp[-8].i), (yyvsp[-6].i), (yyvsp[-2].d)); }
#line 3465 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 217:
#line 634 "parser.ypp"
                                  { rddlTask->setInstance(*(yyvsp[-26].str), *(yyvsp[-22].str), "", (yyvsp[-8].i), (yyvsp[-6].i), (yyvsp[-2].d)); }
#line 3471 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 218:
#line 643 "parser.ypp"
                                  { rddlTask->setInstance(*(yyvsp[-25].str), *(yyvsp[-21].str), *(yyvsp[-17].str), (yyvsp[-8].i), (yyvsp[-6].i), (yyvsp[-2].d)); }
#line 3477 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 219:
#line 651 "parser.ypp"
                                  { rddlTask->setInstance(*(yyvsp[-21].str), *(yyvsp[-17].str), "", (yyvsp[-8].i), (yyvsp[-6].i), (yyvsp[-2].d)); }
#line 3483 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 220:
#line 660 "parser.ypp"
                                  { rddlTask->setInstance(*(yyvsp[-25].str), *(yyvsp[-21].str), *(yyvsp[-17].str), (yyvsp[-8].i), (yyvsp[-6].i), (yyvsp[-2].d)); }
#line 3489 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 221:
#line 668 "parser.ypp"
                                  { rddlTask->setInstance(*(yyvsp[-21].str), *(yyvsp[-17].str), "", (yyvsp[-8].i), (yyvsp[-6].i), (yyvsp[-2].d)); }
#line 3495 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 222:
#line 676 "parser.ypp"
                                  {  rddlTask->setInstance(*(yyvsp[-20].str), *(yyvsp[-16].str), *(yyvsp[-12].str), (yyvsp[-8].i), (yyvsp[-6].i), (yyvsp[-2].d));  }
#line 3501 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 223:
#line 683 "parser.ypp"
                                  { rddlTask->setInstance(*(yyvsp[-16].str), *(yyvsp[-12].str), "", (yyvsp[-8].i), (yyvsp[-6].i), (yyvsp[-2].d)); }
#line 3507 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 224:
#line 694 "parser.ypp"
                                  { rddlTask->setInstance(*(yyvsp[-26].str), *(yyvsp[-22].str), *(yyvsp[-18].str), std::numeric_limits<int>::max(), (yyvsp[-6].i), (yyvsp[-2].d)); }
#line 3513 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 225:
#line 702 "parser.ypp"
                                  { rddlTask->setInstance(*(yyvsp[-22].str), *(yyvsp[-18].str), "", std::numeric_limits<int>::max(), (yyvsp[-6].i), (yyvsp[-2].d)); }
#line 3519 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 226:
#line 710 "parser.ypp"
                                  { rddlTask->setInstance(*(yyvsp[-21].str), *(yyvsp[-17].str), *(yyvsp[-13].str), std::numeric_limits<int>::max(), (yyvsp[-6].i), (yyvsp[-2].d)); }
#line 3525 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 227:
#line 717 "parser.ypp"
                                  { rddlTask->setInstance(*(yyvsp[-17].str), *(yyvsp[-13].str), "", std::numeric_limits<int>::max(), (yyvsp[-6].i), (yyvsp[-2].d)); }
#line 3531 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 228:
#line 725 "parser.ypp"
                                  { rddlTask->setInstance(*(yyvsp[-21].str), *(yyvsp[-17].str), *(yyvsp[-13].str), std::numeric_limits<int>::max(), (yyvsp[-6].i), (yyvsp[-2].d)); }
#line 3537 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 229:
#line 732 "parser.ypp"
                                  { rddlTask->setInstance(*(yyvsp[-17].str), *(yyvsp[-13].str), "", std::numeric_limits<int>::max(), (yyvsp[-6].i), (yyvsp[-2].d)); }
#line 3543 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 230:
#line 739 "parser.ypp"
                                   { rddlTask->setInstance(*(yyvsp[-16].str), *(yyvsp[-12].str), *(yyvsp[-8].str), std::numeric_limits<int>::max(), (yyvsp[-6].i), (yyvsp[-2].d)); }
#line 3549 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 231:
#line 745 "parser.ypp"
                                   { rddlTask->setInstance(*(yyvsp[-12].str), *(yyvsp[-8].str), "", std::numeric_limits<int>::max(), (yyvsp[-6].i), (yyvsp[-2].d)); }
#line 3555 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 232:
#line 754 "parser.ypp"
                                   { rddlTask->setInstance(*(yyvsp[-27].str), *(yyvsp[-23].str), "", std::numeric_limits<int>::max(), (yyvsp[-6].i), (yyvsp[-2].d)); }
#line 3561 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 233:
#line 758 "parser.ypp"
                                                                                { (yyval.i) = (yyvsp[0].i); }
#line 3567 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 234:
#line 759 "parser.ypp"
                                                                                { prost::parser::utils::abort("Definition of horizon using 'terminate-when' token not implemented yet."); }
#line 3573 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 235:
#line 762 "parser.ypp"
                                                           { (yyval.i) = (yyvsp[0].i); }
#line 3579 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;

  case 236:
#line 763 "parser.ypp"
                                                          { (yyval.i) = std::numeric_limits<int>::max(); }
#line 3585 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"
    break;


#line 3589 "/home/robolab/planning_ws/prost/builds/release/rddl_parser/parser.tab.cc"

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
#line 766 "parser.ypp"


bool checkExtension(std::string s) {
     return ((s.length() > 5) &&  (s.substr(s.length() - 5).compare(".rddl") == 0));
}

int main (int argc, char** argv) {
    prost::parser::utils::Timer t;
    std::cout << "Parsing..." << std::endl;
    if (argc < 3) {
        // Run unit tests
        doctest::Context context;
        context.applyCommandLine(argc, argv);
        int res = context.run();

        if (context.shouldExit()) {
            return res;
        }

        prost::parser::utils::abort("Usage: ./rddl-parser <rddlDesc> <outFile> [options]\n"
                           "where rddlDesc consists of 1-3 individual files");
    }

    // Find input files and combine them in one file
    std::stringstream combined;
    unsigned int index = 1;

    while (index < argc && checkExtension(argv[index])) {
         std::ifstream ifs(argv[index], std::ifstream::in);
         combined << ifs.rdbuf();
         ifs.close();
         index++;
    }
    if (index == 1 || index > 4 || index >= argc) {
        prost::parser::utils::abort("Usage: ./rddl-parser <rddlDesc> <outFile> [options]\n"
                           "where rddlDesc consists of 1-3 individual files");
    }

    std::string outFile = std::string(argv[index++]);

    double seed = time(nullptr);
    int numStates = 250;
    int numSimulations = 25;
    double timeout = 10.0;
    bool generateFDRActionFluents = true;

    // Read optionals
    for (; index < argc; ++index) {
        std::string nextOption = std::string(argv[index]);
        if (nextOption == "-s") {
            seed = atoi(std::string(argv[++index]).c_str());
            std::cout << "Setting seed to " << seed << std::endl;
        } else if (nextOption == "-trainingSimulations") {
            numSimulations = atoi(std::string(argv[++index]).c_str());
            std::cout << "Setting number of simulations for training set creation to "
                      << numSimulations << std::endl;
        } else if (nextOption == "-trainingSetSize") {
            numStates = atoi(std::string(argv[++index]).c_str());
            std::cout << "Setting target training set size to " << numStates << std::endl;
        } else if (nextOption == "-trainingTimeout") {
            timeout = atof(std::string(argv[++index]).c_str());
            std::cout << "Setting training timeout to " << timeout << std::endl;
        } else if (nextOption == "-fdrActions") {
            generateFDRActionFluents = atoi(std::string(argv[++index]).c_str());
            std::cout << "Generate FDR action fluents: " << generateFDRActionFluents << std::endl;
        } else {
            assert(false);
        }
    }

    // Set seed
    srand(seed);

    // Creating RDDLTask object
    rddlTask = new prost::parser::RDDLTask();

    yy_scan_string(combined.str().c_str());
    yyparse();
    std::cout << "...finished (" << t << ")." << std::endl;


    t.reset();
    std::cout << "Instantiating..." << std::endl;
    prost::parser::Instantiator instantiator(rddlTask);
    instantiator.instantiate();
    std::cout << "...finished (" << t << ")." << std::endl;

    t.reset();
    std::cout << "Simplifying..." << std::endl;
    prost::parser::Simplifier simplifier(rddlTask);
    simplifier.simplify(generateFDRActionFluents);
    std::cout << "...finished (" << t << ")." << std::endl;

    t.reset();
    std::cout << "Determinizing..." << std::endl;
    prost::parser::determinize::MostLikelyDeterminizer determinizer(rddlTask);
    determinizer.determinize();
    std::cout << "...finished (" << t << ")." << std::endl;

    t.reset();
    std::cout << "Generating hash keys..." << std::endl;
    prost::parser::hashing::HashKeyGenerator hashKeyGen(rddlTask);
    hashKeyGen.generateHashKeys();
    std::cout << "...finished (" << t << ")." << std::endl;

    t.reset();
    std::cout << "Precomputing evaluatables..." << std::endl;
    prost::parser::Precomputer precomputer(rddlTask);
    precomputer.precompute();
    std::cout << "...finished (" << t << ")." << std::endl;

    t.reset();
    std::cout << "Analyzing task..." << std::endl;
    prost::parser::TaskAnalyzer analyzer(rddlTask);
    analyzer.analyzeTask(numStates, numSimulations, timeout);
    std::cout << "...finished (" << t << ")." << std::endl;

    t.reset();
    std::ofstream resultFile;
    std::cout << "Writing output for instance " << rddlTask->name << " to "
              << outFile << " ..." << std::endl;
    resultFile.open(outFile.c_str());
    rddlTask->print(resultFile);
    resultFile.close();
    std::cout << "...finished (" << t << ")." << std::endl;

    std::cout << "PROST parser complete running time: " << t << std::endl;
    return EXIT_SUCCESS;
}
