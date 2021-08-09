
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "c_mod_lex.y"

#include <stdio.h>
extern int lineno;
int yylex();
void yyerror(char *s);
extern int iserr;


/* Line 189 of yacc.c  */
#line 82 "c_mod_lex.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     INTEGER = 259,
     FLOATING = 260,
     CHARACTER = 261,
     STRING = 262,
     SIZEOF = 263,
     INCLUDE = 264,
     DEFINE = 265,
     HEADER_FILE = 266,
     EXTERN = 267,
     STATIC = 268,
     AUTO = 269,
     REGISTER = 270,
     CHAR = 271,
     SHORT = 272,
     INT = 273,
     LONG = 274,
     SIGNED = 275,
     UNSIGNED = 276,
     FLOAT = 277,
     DOUBLE = 278,
     CONST = 279,
     VOID = 280,
     STRUCT = 281,
     UNION = 282,
     KER_OP = 283,
     KER_CL = 284,
     L_SHIFT = 285,
     R_SHIFT = 286,
     OP_IN = 287,
     OP_DE = 288,
     OP_GE = 289,
     OP_LE = 290,
     OP_EQ = 291,
     OP_NE = 292,
     LOG_AND = 293,
     LOG_OR = 294,
     A_ASSIGN = 295,
     M_ASSIGN = 296,
     S_ASSIGN = 297,
     D_ASSIGN = 298,
     R_ASSIGN = 299,
     BA_ASSIGN = 300,
     BE_ASSIGN = 301,
     BO_ASSIGN = 302,
     LS_ASSIGN = 303,
     RS_ASSIGN = 304,
     ELLIPSIS = 305,
     CASE = 306,
     DEFAULT = 307,
     IF = 308,
     ELSE = 309,
     SWITCH = 310,
     WHILE = 311,
     DO = 312,
     FOR = 313,
     GLOBAL = 314,
     CONTINUE = 315,
     BREAK = 316,
     RETURN = 317
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 186 "c_mod_lex.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1162

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  184
/* YYNRULES -- Number of states.  */
#define YYNSTATES  315

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,     2,     2,     2,    76,    74,     2,
      63,    64,    71,    72,    68,    73,    67,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    84,
      77,    83,    78,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,    80,    86,    69,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    17,    19,
      24,    29,    35,    39,    42,    45,    46,    52,    54,    57,
      60,    63,    66,    71,    73,    75,    77,    79,    81,    83,
      85,    90,    92,    96,   100,   104,   106,   110,   114,   116,
     120,   124,   126,   130,   134,   138,   142,   144,   148,   152,
     154,   158,   160,   164,   166,   170,   172,   176,   178,   182,
     184,   190,   192,   196,   198,   200,   202,   204,   206,   208,
     210,   212,   214,   216,   218,   220,   224,   226,   230,   233,
     237,   239,   242,   244,   247,   249,   252,   254,   258,   260,
     264,   266,   268,   270,   272,   274,   276,   278,   280,   282,
     284,   286,   288,   290,   292,   298,   303,   306,   308,   310,
     314,   319,   322,   324,   327,   329,   331,   335,   337,   340,
     344,   346,   350,   355,   359,   364,   369,   373,   375,   379,
     381,   385,   388,   390,   392,   396,   398,   402,   407,   409,
     413,   415,   417,   419,   421,   423,   425,   429,   434,   438,
     441,   445,   449,   454,   456,   459,   461,   464,   466,   469,
     472,   475,   481,   489,   495,   501,   509,   516,   524,   532,
     535,   538,   541,   545,   547,   550,   552,   554,   557,   559,
     562,   564,   569,   573,   577
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     137,     0,    -1,     3,    -1,     4,    -1,     5,    -1,     6,
      -1,     7,    -1,    63,   107,    64,    -1,    88,    -1,    89,
      65,   107,    66,    -1,    89,    90,    63,    64,    -1,    89,
      90,    63,   108,    64,    -1,    89,    67,     3,    -1,    89,
      32,    -1,    89,    33,    -1,    -1,    28,     4,    68,     4,
      29,    -1,    89,    -1,    32,    91,    -1,    33,    91,    -1,
      92,    93,    -1,     8,    91,    -1,     8,    63,   118,    64,
      -1,    69,    -1,    70,    -1,    71,    -1,    72,    -1,    73,
      -1,    74,    -1,    91,    -1,    63,   118,    64,    93,    -1,
      93,    -1,    94,    71,    93,    -1,    94,    75,    93,    -1,
      94,    76,    93,    -1,    94,    -1,    95,    72,    94,    -1,
      95,    73,    94,    -1,    95,    -1,    96,    30,    95,    -1,
      96,    31,    95,    -1,    96,    -1,    97,    77,    96,    -1,
      97,    35,    96,    -1,    97,    78,    96,    -1,    97,    34,
      96,    -1,    97,    -1,    98,    36,    97,    -1,    98,    37,
      97,    -1,    98,    -1,    99,    74,    98,    -1,    99,    -1,
     100,    79,    99,    -1,   100,    -1,   101,    80,   100,    -1,
     101,    -1,   102,    38,   101,    -1,   102,    -1,   103,    39,
     102,    -1,   103,    -1,   103,    81,   107,    82,   104,    -1,
     104,    -1,    91,   106,   105,    -1,    83,    -1,    41,    -1,
      43,    -1,    44,    -1,    40,    -1,    42,    -1,    48,    -1,
      49,    -1,    45,    -1,    46,    -1,    47,    -1,   105,    -1,
     107,    68,   105,    -1,   105,    -1,   108,    68,   105,    -1,
     110,    84,    -1,   110,   111,    84,    -1,   113,    -1,   113,
     110,    -1,   114,    -1,   114,   110,    -1,    24,    -1,    24,
     110,    -1,   112,    -1,   111,    68,   112,    -1,   121,    -1,
     121,    83,   126,    -1,    12,    -1,    13,    -1,    14,    -1,
      15,    -1,    25,    -1,    16,    -1,    17,    -1,    18,    -1,
      19,    -1,    22,    -1,    23,    -1,    20,    -1,    21,    -1,
     115,    -1,   116,     3,    85,   117,    86,    -1,   116,    85,
     117,    86,    -1,   116,     3,    -1,    26,    -1,    27,    -1,
     118,   119,    84,    -1,   117,   118,   119,    84,    -1,   114,
     118,    -1,   114,    -1,    24,   118,    -1,    24,    -1,   120,
      -1,   119,    68,   120,    -1,   121,    -1,    82,   104,    -1,
     121,    82,   104,    -1,     3,    -1,    63,   121,    64,    -1,
     121,    65,   104,    66,    -1,   121,    65,    66,    -1,   121,
      63,   122,    64,    -1,   121,    63,   125,    64,    -1,   121,
      63,    64,    -1,   123,    -1,   123,    68,    50,    -1,   124,
      -1,   123,    68,   124,    -1,   110,   121,    -1,   110,    -1,
       3,    -1,   125,    68,     3,    -1,   105,    -1,    85,   127,
      86,    -1,    85,   127,    68,    86,    -1,   126,    -1,   127,
      68,   126,    -1,   129,    -1,   130,    -1,   133,    -1,   134,
      -1,   135,    -1,   136,    -1,     3,    82,   128,    -1,    51,
     104,    82,   128,    -1,    52,    82,   128,    -1,    85,    86,
      -1,    85,   132,    86,    -1,    85,   131,    86,    -1,    85,
     131,   132,    86,    -1,   109,    -1,   131,   109,    -1,   128,
      -1,   132,   128,    -1,    84,    -1,   107,    84,    -1,     1,
      84,    -1,     1,    86,    -1,    53,    63,   107,    64,   128,
      -1,    53,    63,   107,    64,   128,    54,   128,    -1,    55,
      63,   107,    64,   128,    -1,    56,    63,   107,    64,   128,
      -1,    57,   128,    56,    63,   107,    64,    84,    -1,    58,
      63,   133,   133,    64,   128,    -1,    58,    63,   133,   133,
     107,    64,   128,    -1,    58,    63,   109,   133,   107,    64,
     128,    -1,    60,    84,    -1,    61,    84,    -1,    62,    84,
      -1,    62,   107,    84,    -1,   138,    -1,   137,   138,    -1,
     140,    -1,   109,    -1,    59,   140,    -1,   139,    -1,     9,
      11,    -1,    10,    -1,   110,   121,   131,   130,    -1,   110,
     121,   130,    -1,   121,   131,   130,    -1,   121,   130,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    24,    24,    25,    26,    27,    28,    29,    33,    34,
      35,    36,    37,    38,    39,    43,    45,    49,    50,    51,
      52,    53,    54,    58,    59,    60,    61,    62,    63,    67,
      68,    73,    74,    75,    76,    81,    82,    83,    88,    89,
      90,    95,    96,    97,    98,    99,   104,   105,   106,   111,
     112,   117,   118,   123,   124,   129,   130,   135,   136,   141,
     142,   147,   148,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   168,   169,   174,   175,   180,   181,
     186,   187,   188,   189,   190,   191,   196,   197,   202,   203,
     208,   209,   210,   211,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   231,   232,   233,   238,   239,   244,
     245,   249,   250,   251,   252,   257,   258,   263,   264,   265,
     270,   271,   272,   273,   274,   275,   276,   281,   282,   286,
     287,   292,   293,   298,   299,   305,   306,   307,   312,   313,
     318,   319,   320,   321,   322,   323,   327,   328,   329,   334,
     335,   336,   337,   341,   342,   347,   348,   352,   353,   354,
     355,   359,   360,   361,   365,   366,   367,   368,   369,   374,
     375,   376,   377,   382,   383,   388,   389,   390,   391,   395,
     396,   400,   401,   402,   403
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INTEGER", "FLOATING", "CHARACTER",
  "STRING", "SIZEOF", "INCLUDE", "DEFINE", "HEADER_FILE", "EXTERN",
  "STATIC", "AUTO", "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED",
  "UNSIGNED", "FLOAT", "DOUBLE", "CONST", "VOID", "STRUCT", "UNION",
  "KER_OP", "KER_CL", "L_SHIFT", "R_SHIFT", "OP_IN", "OP_DE", "OP_GE",
  "OP_LE", "OP_EQ", "OP_NE", "LOG_AND", "LOG_OR", "A_ASSIGN", "M_ASSIGN",
  "S_ASSIGN", "D_ASSIGN", "R_ASSIGN", "BA_ASSIGN", "BE_ASSIGN",
  "BO_ASSIGN", "LS_ASSIGN", "RS_ASSIGN", "ELLIPSIS", "CASE", "DEFAULT",
  "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GLOBAL", "CONTINUE",
  "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "','", "'~'",
  "'!'", "'*'", "'+'", "'-'", "'&'", "'/'", "'%'", "'<'", "'>'", "'^'",
  "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept", "exp_simple",
  "postfix_exp", "isker", "unary_exp", "unary_op", "cast_exp", "mdm_exp",
  "as_exp", "shift_exp", "relational_exp", "equality_exp", "and_exp",
  "exor_exp", "or_exp", "logical_and_exp", "logical_or_exp", "exp_con",
  "assignment_exp", "assignment_op", "exp", "argument_exp_list", "dec",
  "dec_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_dec_list", "type_name",
  "struct_declarator_list", "struct_declarator", "declarator",
  "param_type_list", "param_list", "param_dec", "id_list", "initializer",
  "initializer_list", "stmt", "labeled_stmt", "compound_stmt", "dec_list",
  "stmt_list", "exp_stmt", "selection_stmt", "loop_stmt", "jump_stmt",
  "program_body", "func_ker_globalvar", "preprocessors",
  "function_definition", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,    40,    41,    91,    93,    46,    44,   126,
      33,    42,    43,    45,    38,    47,    37,    60,    62,    94,
     124,    63,    58,    61,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    88,    88,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    92,    92,    93,
      93,    94,    94,    94,    94,    95,    95,    95,    96,    96,
      96,    97,    97,    97,    97,    97,    98,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   110,   110,   110,   110,   111,   111,   112,   112,
     113,   113,   113,   113,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   115,   115,   115,   116,   116,   117,
     117,   118,   118,   118,   118,   119,   119,   120,   120,   120,
     121,   121,   121,   121,   121,   121,   121,   122,   122,   123,
     123,   124,   124,   125,   125,   126,   126,   126,   127,   127,
     128,   128,   128,   128,   128,   128,   129,   129,   129,   130,
     130,   130,   130,   131,   131,   132,   132,   133,   133,   133,
     133,   134,   134,   134,   135,   135,   135,   135,   135,   136,
     136,   136,   136,   137,   137,   138,   138,   138,   138,   139,
     139,   140,   140,   140,   140
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     5,     3,     2,     2,     0,     5,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     4,     2,     1,     1,     3,
       4,     2,     1,     2,     1,     1,     3,     1,     2,     3,
       1,     3,     4,     3,     4,     4,     3,     1,     3,     1,
       3,     2,     1,     1,     3,     1,     3,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     3,     4,     1,     2,     1,     2,     1,     2,     2,
       2,     5,     7,     5,     5,     7,     6,     7,     7,     2,
       2,     2,     3,     1,     2,     1,     1,     2,     1,     2,
       1,     4,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   120,     0,   180,    90,    91,    92,    93,    95,    96,
      97,    98,   101,   102,    99,   100,    84,    94,   107,   108,
       0,     0,   176,     0,    80,    82,   103,     0,     0,     0,
     173,   178,   175,   179,    85,     0,   177,     0,    78,     0,
      86,    88,    81,    83,   106,     0,     0,     0,     0,   153,
       0,   184,     0,     1,   174,     0,   121,     0,    79,     0,
     182,     0,     0,   114,   112,     0,     0,   133,   126,   132,
       0,   127,   129,     0,     2,     3,     4,     5,     6,     0,
       0,     0,     0,   123,    23,    24,    25,    26,    27,    28,
       8,    17,    29,     0,    31,    35,    38,    41,    46,    49,
      51,    53,    55,    57,    59,     0,     0,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   157,   149,
      29,    61,    74,     0,   155,   140,   141,     0,     0,   142,
     143,   144,   145,    88,   154,   183,    87,     0,   135,    89,
     181,     0,   113,   111,   105,     0,     0,     0,   115,   117,
     131,   124,     0,   125,     0,     0,    21,     0,    18,    19,
       0,     0,     0,    13,    14,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   159,
     160,     0,     0,     0,     0,     0,     0,     0,     0,   169,
     170,   171,     0,    67,    64,    68,    65,    66,    71,    72,
      73,    69,    70,    63,     0,     0,   158,   151,     0,   150,
     156,   138,     0,   104,     0,   118,     0,   109,     0,   128,
     130,   134,     0,     7,     0,     0,     0,    12,     0,    32,
      33,    34,    36,    37,    39,    40,    45,    43,    42,    44,
      47,    48,    50,    52,    54,    56,    58,     0,   146,     0,
     148,     0,     0,     0,     0,     0,     0,   172,    62,    75,
     152,     0,   136,   110,   116,   119,    22,    30,     0,     9,
      10,    76,     0,     0,   147,     0,     0,     0,     0,     0,
       0,   137,   139,     0,    11,     0,    60,   161,   163,   164,
       0,     0,     0,     0,    16,    77,     0,     0,     0,   166,
       0,   162,   165,   168,   167
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    90,    91,   167,   120,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   121,   122,   214,
     123,   282,    49,    50,    39,    40,    24,    25,    26,    27,
      65,    66,   147,   148,    28,    70,    71,    72,    73,   139,
     222,   124,   125,   126,    61,   128,   129,   130,   131,   132,
      29,    30,    31,    32
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -171
static const yytype_int16 yypact[] =
{
    1072,  -171,    -1,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,  -171,  -171,   546,  -171,  -171,  -171,
    1099,     2,  -171,    22,   546,   546,  -171,    12,   378,  1047,
    -171,  -171,  -171,  -171,  -171,     2,  -171,   158,  -171,   -48,
    -171,   754,  -171,  -171,   -23,   448,   473,   840,   227,  -171,
      22,  -171,   325,  -171,  -171,   378,  -171,     2,  -171,   680,
    -171,   325,   448,   448,   448,   245,    37,  -171,  -171,     2,
       3,     4,  -171,    46,  -171,  -171,  -171,  -171,  -171,   928,
     960,   960,   808,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,   141,  -171,   972,  -171,    71,   -55,    82,    25,   188,
       1,    19,    61,   116,   -32,    14,    -3,    39,   972,    90,
     112,   126,   135,   524,   142,   131,   143,   723,  -171,  -171,
     119,  -171,  -171,   -31,  -171,  -171,  -171,   302,   376,  -171,
    -171,  -171,  -171,   -41,  -171,  -171,  -171,   680,  -171,  -171,
    -171,   395,  -171,  -171,  -171,    37,   972,   -20,  -171,   -24,
      42,  -171,   528,  -171,   226,   808,  -171,   972,  -171,  -171,
      80,   209,   270,  -171,  -171,   972,   272,   213,  -171,   972,
     972,   972,   972,   972,   972,   972,   972,   972,   972,   972,
     972,   972,   972,   972,   972,   972,   972,   972,  -171,  -171,
    -171,   524,   195,   524,   972,   972,   972,   225,   598,  -171,
    -171,  -171,   -14,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,   972,   972,  -171,  -171,   450,  -171,
    -171,  -171,   -60,  -171,   -13,  -171,    37,  -171,   972,  -171,
    -171,  -171,   222,  -171,   972,   223,    52,  -171,   852,  -171,
    -171,  -171,    71,    71,   -55,   -55,    82,    82,    82,    82,
      25,    25,   188,     1,    19,    61,   116,   -38,  -171,   524,
    -171,    85,    87,   122,   229,   631,   631,  -171,  -171,  -171,
    -171,   647,  -171,  -171,  -171,  -171,  -171,  -171,   289,  -171,
    -171,  -171,   124,   972,  -171,   524,   524,   524,   972,   972,
     885,  -171,  -171,   265,  -171,   972,  -171,   241,  -171,  -171,
     132,   139,   524,   148,  -171,  -171,   524,   218,   524,  -171,
     524,  -171,  -171,  -171,  -171
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -171,  -171,  -171,  -171,   -47,  -171,   -82,    83,    20,    41,
      77,   150,   121,   146,   151,   147,  -171,   -45,   -58,  -171,
     -79,  -171,    16,    27,  -171,   299,  -171,    29,  -171,  -171,
     304,   -51,   216,   144,     0,  -171,  -171,   215,  -171,  -131,
    -171,  -109,  -171,   130,   -19,   242,  -170,  -171,  -171,  -171,
    -171,   339,  -171,   358
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -16
static const yytype_int16 yytable[] =
{
      92,   138,   105,   160,   197,     1,   221,   186,   271,    52,
      33,   168,   142,   143,   145,    44,    22,   172,   173,   220,
      57,    37,    46,    41,    47,     1,   272,    23,   266,   127,
     215,   161,   156,   158,   159,    55,    58,   215,   202,    46,
       1,    47,    59,    34,   283,    22,    92,    35,   226,   187,
     133,    42,    43,   216,   215,   226,    23,   133,   228,   176,
     177,    92,    62,   192,   227,    21,   149,   151,   134,   150,
     267,   273,   152,    69,    64,   182,   160,   134,   160,   138,
     188,   189,   258,   190,   260,    21,   236,   239,   240,   241,
     145,    64,    64,    64,    64,   289,   290,    45,   183,    92,
      21,   225,   178,   179,   232,    46,    38,    47,   257,   220,
     153,    64,   174,   175,   154,   261,   262,   263,   279,   146,
     215,   191,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
     292,   184,   169,   134,   233,   149,   170,   171,   215,   285,
     284,   286,   277,   215,   185,   215,   268,   269,    51,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   162,
      64,    60,   193,   163,   164,   194,   297,   298,   299,    69,
     281,    92,   135,   275,    64,    60,   287,    92,   294,   195,
     215,   140,   295,   309,   244,   245,   307,   311,   196,   313,
     215,   314,   213,   308,   -15,   198,   165,   215,   166,   300,
     301,   303,   310,   138,   265,   199,   215,   246,   247,   248,
     249,    46,    56,    47,   180,   181,   149,   200,   106,   231,
     107,    75,    76,    77,    78,    79,    92,   305,   296,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,   242,   243,   250,   251,    80,
      81,     8,     9,    10,    11,    12,    13,    14,    15,    63,
      17,    18,    19,   234,   235,   237,   238,   259,   108,   109,
     110,   264,   111,   112,   113,   114,   276,   115,   116,   117,
      82,   278,   288,   293,   304,   306,    84,    85,    86,    87,
      88,    89,   312,   106,   253,   107,    75,    76,    77,    78,
      79,   118,    48,   119,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
     254,   144,   252,   256,    80,    81,   255,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   108,   109,   110,   136,   111,   112,   113,
     114,   224,   115,   116,   117,    82,   141,   230,    54,   218,
     274,    84,    85,    86,    87,    88,    89,   106,    36,   107,
      75,    76,    77,    78,    79,     0,   118,    48,   217,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,    80,    81,
      48,     8,     9,    10,    11,    12,    13,    14,    15,    63,
      17,    18,    19,     0,     0,     0,     0,   108,   109,   110,
       0,   111,   112,   113,   114,     0,   115,   116,   117,    82,
       0,    46,     0,    47,     0,    84,    85,    86,    87,    88,
      89,   106,     0,   107,    75,    76,    77,    78,    79,     0,
     118,    48,   219,    48,     8,     9,    10,    11,    12,    13,
      14,    15,    63,    17,    18,    19,    67,     0,     0,     0,
       0,   223,    80,    81,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,   108,   109,   110,     0,   111,   112,   113,   114,     0,
     115,   116,   117,    82,     0,     0,     0,     0,     0,    84,
      85,    86,    87,    88,    89,   106,     0,   107,    75,    76,
      77,    78,    79,     0,   118,    48,   270,    68,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    80,    81,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     0,   108,   109,   110,   229,   111,
     112,   113,   114,     0,   115,   116,   117,    82,     0,     0,
       0,     0,     0,    84,    85,    86,    87,    88,    89,   106,
       0,    74,    75,    76,    77,    78,    79,     0,   118,    48,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
      80,    81,   106,     0,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,    82,     0,    80,    81,     0,     0,    84,    85,    86,
      87,    88,    89,     0,     0,     0,     0,     0,     0,    80,
      81,     0,   118,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,     0,     0,     0,     0,
      82,     0,    80,    81,     0,   118,    84,    85,    86,    87,
      88,    89,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,   137,   291,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,     0,    84,
      85,    86,    87,    88,    89,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,   137,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,    82,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   201,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    46,     0,    47,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    63,    17,    18,    19,     0,    59,     0,    48,
      80,    81,     0,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,    80,    81,     0,     0,     0,    84,    85,    86,
      87,    88,    89,     0,    80,    81,     0,     0,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    82,     0,     0,    83,     0,     0,    84,
      85,    86,    87,    88,    89,    82,   280,    80,    81,     0,
       0,    84,    85,    86,    87,    88,    89,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    82,   302,
       0,     0,     0,     0,    84,    85,    86,    87,    88,    89,
      80,    81,     0,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   155,    80,    81,     0,     0,     0,    84,    85,    86,
      87,    88,    89,     0,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   157,     0,     0,     0,     0,     0,    84,
      85,    86,    87,    88,    89,    82,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,    89,    53,     0,     0,
       1,     0,     0,     0,     0,     0,     2,     3,     0,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     1,     0,     0,     0,     0,
       0,     2,     3,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     1,     0,     0,     0,    20,     0,     0,     0,
      21,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,     0,     0,     0,
       0,    20,     0,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21
};

static const yytype_int16 yycheck[] =
{
      47,    59,    47,    82,   113,     3,   137,    39,    68,    28,
      11,    93,    63,    64,    65,     3,     0,    72,    73,   128,
      68,    21,    63,    23,    65,     3,    86,     0,   198,    48,
      68,    82,    79,    80,    81,    35,    84,    68,   117,    63,
       3,    65,    83,    16,    82,    29,    93,    20,    68,    81,
      50,    24,    25,    84,    68,    68,    29,    57,    82,    34,
      35,   108,    85,   108,    84,    63,    66,    64,    52,    69,
      84,    84,    68,    46,    45,    74,   155,    61,   157,   137,
      66,    84,   191,    86,   193,    63,   165,   169,   170,   171,
     141,    62,    63,    64,    65,   265,   266,    85,    79,   146,
      63,   146,    77,    78,   155,    63,    84,    65,   187,   218,
      64,    82,    30,    31,    68,   194,   195,   196,    66,    82,
      68,    82,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     271,    80,    71,   127,    64,   145,    75,    76,    68,    64,
     259,    64,   234,    68,    38,    68,   214,   215,    28,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    28,
     141,    41,    82,    32,    33,    63,   285,   286,   287,   152,
     238,   228,    52,   228,   155,    55,    64,   234,    64,    63,
      68,    61,    68,   302,   174,   175,    64,   306,    63,   308,
      68,   310,    83,    64,    63,    63,    65,    68,    67,   288,
     289,   290,    64,   271,   198,    84,    68,   176,   177,   178,
     179,    63,    64,    65,    36,    37,   226,    84,     1,     3,
       3,     4,     5,     6,     7,     8,   283,   295,   283,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   172,   173,   180,   181,    32,
      33,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    64,     4,     3,    63,    82,    51,    52,
      53,    56,    55,    56,    57,    58,    64,    60,    61,    62,
      63,    68,    63,     4,    29,    54,    69,    70,    71,    72,
      73,    74,    84,     1,   183,     3,     4,     5,     6,     7,
       8,    84,    85,    86,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     184,    86,   182,   186,    32,    33,   185,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    51,    52,    53,    57,    55,    56,    57,
      58,   145,    60,    61,    62,    63,    62,   152,    29,   127,
     226,    69,    70,    71,    72,    73,    74,     1,    20,     3,
       4,     5,     6,     7,     8,    -1,    84,    85,    86,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    32,    33,
      85,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    51,    52,    53,
      -1,    55,    56,    57,    58,    -1,    60,    61,    62,    63,
      -1,    63,    -1,    65,    -1,    69,    70,    71,    72,    73,
      74,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      84,    85,    86,    85,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     3,    -1,    -1,    -1,
      -1,    86,    32,    33,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    51,    52,    53,    -1,    55,    56,    57,    58,    -1,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    84,    85,    86,    64,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    32,    33,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    51,    52,    53,    50,    55,
      56,    57,    58,    -1,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    84,    85,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      32,    33,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    32,    33,    -1,    -1,    69,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    84,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      63,    -1,    32,    33,    -1,    84,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    63,    -1,    65,
      -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    83,    -1,    85,
      32,    33,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    32,    33,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    -1,    32,    33,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    66,    -1,    -1,    69,
      70,    71,    72,    73,    74,    63,    64,    32,    33,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      32,    33,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    32,    33,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,     0,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     3,    -1,    -1,    -1,    -1,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,     3,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      63,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     9,    10,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      59,    63,   109,   110,   113,   114,   115,   116,   121,   137,
     138,   139,   140,    11,   110,   110,   140,   121,    84,   111,
     112,   121,   110,   110,     3,    85,    63,    65,    85,   109,
     110,   130,   131,     0,   138,   121,    64,    68,    84,    83,
     130,   131,    85,    24,   114,   117,   118,     3,    64,   110,
     122,   123,   124,   125,     3,     4,     5,     6,     7,     8,
      32,    33,    63,    66,    69,    70,    71,    72,    73,    74,
      88,    89,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,     1,     3,    51,    52,
      53,    55,    56,    57,    58,    60,    61,    62,    84,    86,
      91,   104,   105,   107,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   121,   109,   130,   112,    85,   105,   126,
     130,   117,   118,   118,    86,   118,    82,   119,   120,   121,
     121,    64,    68,    64,    68,    63,    91,    63,    91,    91,
     107,   118,    28,    32,    33,    65,    67,    90,    93,    71,
      75,    76,    72,    73,    30,    31,    34,    35,    77,    78,
      36,    37,    74,    79,    80,    38,    39,    81,    66,    84,
      86,    82,   104,    82,    63,    63,    63,   128,    63,    84,
      84,    84,   107,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    83,   106,    68,    84,    86,   132,    86,
     128,   126,   127,    86,   119,   104,    68,    84,    82,    50,
     124,     3,   118,    64,    64,     4,   107,     3,    63,    93,
      93,    93,    94,    94,    95,    95,    96,    96,    96,    96,
      97,    97,    98,    99,   100,   101,   102,   107,   128,    82,
     128,   107,   107,   107,    56,   109,   133,    84,   105,   105,
      86,    68,    86,    84,   120,   104,    64,    93,    68,    66,
      64,   105,   108,    82,   128,    64,    64,    64,    63,   133,
     133,    86,   126,     4,    64,    68,   104,   128,   128,   128,
     107,   107,    64,   107,    29,   105,    54,    64,    64,   128,
      64,   128,    84,   128,   128
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 159:

/* Line 1455 of yacc.c  */
#line 354 "c_mod_lex.y"
    {yyerror("; missing"); return 0;;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 355 "c_mod_lex.y"
    {yyerror("; missing"); return 0;;}
    break;



/* Line 1455 of yacc.c  */
#line 1878 "c_mod_lex.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 407 "c_mod_lex.y"


int main() 
{ 
    extern FILE *yyin; 
    printf("*****Starting Syntax Analysis. Scanning from input.txt...*****\n");
    yyin=fopen("input.txt","r"); 
    yyparse();
    if(iserr == 0)
    printf("*****Finished Syntax Analysis! No errors found*****\n");
    else
    printf("*****Errors found!*****\n");
} 

void yyerror(char *s) {
    fprintf(stderr, " line:%d %s\n",lineno, s);
    iserr = 1;
}
