
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
#include <string.h>
extern int lineno;
int yylex();
void yyerror(char *s);
extern int iserr;

struct ST{
	char symbol[100];
	int type;
	int scope; 
	float value;
	int dim;
	int widths[1000];
	int offsets[1000];
}SYMBOL_TABLE[100];

struct exist{
	int f;
	float v;
	int t;
	int i;
};

struct case_queue{
	int label;
	char val[100];
	int scope;
}cq[100];


int size[3] = {2,4,1};	
int cqs = 0;
int label_stack[10000];
int cur_scope=0;
int total_symbol=0;
int tt;
int temp_count=0, label_count=0;
int label_top=-1;

int INSERT_SYMBOL(char symbol[100], int type){
	int i;
	for(i=total_symbol-1;i>=0;i--){
		if(strcmp(symbol,SYMBOL_TABLE[i].symbol)==0 && SYMBOL_TABLE[i].scope==cur_scope){			
			return 0;
		}
	}
	strcpy(SYMBOL_TABLE[total_symbol].symbol, symbol);
	//printf("%s\n", SYMBOL_TABLE[total_symbol].symbol);
	SYMBOL_TABLE[total_symbol].type = type;
	SYMBOL_TABLE[total_symbol].scope = cur_scope;
	SYMBOL_TABLE[total_symbol].value = 0;
	total_symbol++;
	return 1;
}

struct exist GET_SYMBOL_VALUE( char symbol[100]){
	int i;
	struct exist s;
	for(i=total_symbol-1;i>=0;i--){
		if(strcmp(symbol,SYMBOL_TABLE[i].symbol)==0){			
			s.f=1;
			s.v=SYMBOL_TABLE[i].value;
			s.t=SYMBOL_TABLE[i].type;
			s.i = i;
			return s;
		}
	}
	s.f=0;
	return s;
}

int SET_SYMBOL_VALUE( char symbol[100], float value, int type){
	int i;
	for(i=total_symbol-1;i>=0;i--){
		if(strcmp(symbol,SYMBOL_TABLE[i].symbol)==0 && SYMBOL_TABLE[i].type==type){			
			SYMBOL_TABLE[i].value=value;
			return 1;
		}
	}
	
    return 0;
}

void CREATE_TEMP(char *temp, int type){
	int i; 
	do{
		sprintf(temp, "t%d", temp_count++);
		i = INSERT_SYMBOL(temp, type);
	}while(i!=1);
}



/* Line 189 of yacc.c  */
#line 169 "c_mod_lex.tab.c"

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
     INTEGER = 258,
     FLOATING = 259,
     CHARACTER = 260,
     STRING = 261,
     MAIN = 262,
     ID = 263,
     CHAR = 264,
     INT = 265,
     FLOAT = 266,
     L_SHIFT = 267,
     R_SHIFT = 268,
     OP_IN = 269,
     OP_DE = 270,
     OP_GE = 271,
     OP_LE = 272,
     OP_EQ = 273,
     OP_NE = 274,
     LOG_AND = 275,
     LOG_OR = 276,
     CASE = 277,
     DEFAULT = 278,
     IF = 279,
     ELSE = 280,
     SWITCH = 281,
     WHILE = 282,
     RETURN = 283,
     VOID = 284
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 98 "c_mod_lex.y"

	struct{
  		float VALUE;
		int TYPE;
		char CODE[100];
		int index;
		char offset[100];
		int count;
	}value_type;
  	



/* Line 214 of yacc.c  */
#line 248 "c_mod_lex.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 260 "c_mod_lex.tab.c"

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   365

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNRULES -- Number of states.  */
#define YYNSTATES  176

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   284

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,     2,     2,    40,    43,     2,
      30,    31,    38,    36,    47,    37,     2,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    48,
      41,    46,    42,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    32,     2,    33,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,    45,    50,    34,     2,     2,     2,
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
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    17,    19,
      24,    27,    30,    32,    35,    38,    41,    44,    46,    48,
      50,    52,    56,    60,    64,    66,    70,    74,    76,    80,
      84,    86,    90,    94,    98,   102,   104,   108,   112,   114,
     118,   120,   124,   126,   130,   132,   136,   138,   142,   144,
     148,   150,   154,   155,   160,   162,   166,   168,   172,   174,
     176,   178,   180,   185,   187,   191,   193,   197,   199,   201,
     203,   205,   207,   209,   210,   216,   217,   222,   225,   229,
     233,   238,   240,   243,   245,   248,   250,   253,   256,   259,
     260,   267,   268,   275,   276,   280,   281,   284,   285,   286,
     294,   295,   298,   302,   310,   317,   318
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      95,     0,    -1,     8,    -1,     3,    -1,     4,    -1,     5,
      -1,     6,    -1,    30,    68,    31,    -1,    53,    -1,    54,
      32,    68,    33,    -1,    54,    14,    -1,    54,    15,    -1,
      54,    -1,    14,    55,    -1,    15,    55,    -1,    56,    55,
      -1,    34,    55,    -1,    35,    -1,    36,    -1,    37,    -1,
      55,    -1,    57,    38,    55,    -1,    57,    39,    55,    -1,
      57,    40,    55,    -1,    57,    -1,    58,    36,    57,    -1,
      58,    37,    57,    -1,    58,    -1,    59,    12,    58,    -1,
      59,    13,    58,    -1,    59,    -1,    60,    41,    59,    -1,
      60,    17,    59,    -1,    60,    42,    59,    -1,    60,    16,
      59,    -1,    60,    -1,    61,    18,    60,    -1,    61,    19,
      60,    -1,    61,    -1,    62,    43,    61,    -1,    62,    -1,
      63,    44,    62,    -1,    63,    -1,    64,    45,    63,    -1,
      64,    -1,    65,    20,    64,    -1,    65,    -1,    66,    21,
      65,    -1,    66,    -1,    55,    46,    67,    -1,    67,    -1,
      68,    47,    67,    -1,    -1,    73,    71,    70,    48,    -1,
      72,    -1,    71,    47,    72,    -1,    74,    -1,    74,    46,
      75,    -1,     9,    -1,    10,    -1,    11,    -1,     8,    -1,
      74,    32,    66,    33,    -1,    67,    -1,    49,    76,    50,
      -1,    75,    -1,    76,    47,    75,    -1,    78,    -1,    81,
      -1,    84,    -1,    85,    -1,    91,    -1,    94,    -1,    -1,
      22,    66,    51,    79,    77,    -1,    -1,    23,    51,    80,
      77,    -1,    49,    50,    -1,    49,    83,    50,    -1,    49,
      82,    50,    -1,    49,    82,    83,    50,    -1,    69,    -1,
      82,    69,    -1,    77,    -1,    83,    77,    -1,    48,    -1,
      68,    48,    -1,     1,    48,    -1,     1,    50,    -1,    -1,
      24,    30,    68,    31,    86,    88,    -1,    -1,    26,    87,
      30,    68,    31,    77,    -1,    -1,    77,    89,    90,    -1,
      -1,    25,    77,    -1,    -1,    -1,    27,    92,    30,    68,
      31,    93,    77,    -1,    -1,    28,    48,    -1,    28,    68,
      48,    -1,    73,     7,    30,    96,    31,    82,    81,    -1,
      73,     7,    30,    96,    31,    81,    -1,    -1,    29,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   123,   123,   124,   125,   126,   127,   128,   132,   133,
     134,   135,   140,   141,   142,   143,   144,   148,   149,   150,
     155,   156,   157,   158,   164,   165,   166,   171,   172,   174,
     180,   181,   182,   183,   184,   188,   189,   190,   195,   196,
     201,   202,   207,   208,   213,   214,   219,   220,   226,   227,
     232,   233,   238,   238,   242,   244,   249,   250,   256,   257,
     258,   265,   266,   271,   272,   277,   278,   283,   284,   285,
     286,   287,   288,   292,   292,   293,   293,   298,   299,   300,
     301,   305,   306,   311,   312,   316,   317,   318,   319,   323,
     323,   324,   324,   328,   328,   331,   333,   338,   338,   338,
     341,   343,   344,   349,   350,   353,   355
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "FLOATING", "CHARACTER",
  "STRING", "MAIN", "ID", "CHAR", "INT", "FLOAT", "L_SHIFT", "R_SHIFT",
  "OP_IN", "OP_DE", "OP_GE", "OP_LE", "OP_EQ", "OP_NE", "LOG_AND",
  "LOG_OR", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "RETURN",
  "VOID", "'('", "')'", "'['", "']'", "'~'", "'!'", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'<'", "'>'", "'&'", "'^'", "'|'", "'='", "','", "';'",
  "'{'", "'}'", "':'", "$accept", "exp_simple", "postfix_exp", "unary_exp",
  "unary_op", "mdm_exp", "as_exp", "shift_exp", "relational_exp",
  "equality_exp", "and_exp", "exor_exp", "or_exp", "logical_and_exp",
  "logical_or_exp", "assignment_exp", "exp", "dec", "$@1",
  "init_declarator_list", "init_declarator", "type_specifier",
  "declarator", "initializer", "initializer_list", "stmt", "labeled_stmt",
  "$@2", "$@3", "compound_stmt", "dec_list", "stmt_list", "exp_stmt",
  "selection_stmt", "$@4", "$@5", "sub", "$@6", "sub1", "loop_stmt", "$@7",
  "$@8", "jump_stmt", "program_body", "arg", 0
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
      40,    41,    91,    93,   126,    33,    43,    45,    42,    47,
      37,    60,    62,    38,    94,   124,    61,    44,    59,   123,
     125,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    53,    53,    53,    53,    54,    54,
      54,    54,    55,    55,    55,    55,    55,    56,    56,    56,
      57,    57,    57,    57,    58,    58,    58,    59,    59,    59,
      60,    60,    60,    60,    60,    61,    61,    61,    62,    62,
      63,    63,    64,    64,    65,    65,    66,    66,    67,    67,
      68,    68,    70,    69,    71,    71,    72,    72,    73,    73,
      73,    74,    74,    75,    75,    76,    76,    77,    77,    77,
      77,    77,    77,    79,    78,    80,    78,    81,    81,    81,
      81,    82,    82,    83,    83,    84,    84,    84,    84,    86,
      85,    87,    85,    89,    88,    90,    90,    92,    93,    91,
      94,    94,    94,    95,    95,    96,    96
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       2,     2,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     0,     4,     1,     3,     1,     3,     1,     1,
       1,     1,     4,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     0,     5,     0,     4,     2,     3,     3,
       4,     1,     2,     1,     2,     1,     2,     2,     2,     0,
       6,     0,     6,     0,     3,     0,     2,     0,     0,     7,
       0,     2,     3,     7,     6,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    58,    59,    60,     0,     0,     0,     1,   105,   106,
       0,     0,     0,    81,     0,   104,     0,     0,     3,     4,
       5,     6,     2,     0,     0,     0,     0,     0,    91,    97,
       0,     0,     0,    17,    18,    19,    85,    77,     8,    12,
      20,     0,    24,    27,    30,    35,    38,    40,    42,    44,
      46,    48,    50,     0,    83,    67,    68,     0,     0,    69,
      70,    71,    72,    61,    52,    54,    56,    82,   103,    87,
      88,    13,    14,    20,     0,    75,     0,     0,     0,   101,
       0,     0,    16,    10,    11,     0,     0,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    79,     0,
      78,    84,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   102,     7,     0,    49,    21,    22,    23,    25,    26,
      28,    29,    34,    32,    31,    33,    36,    37,    39,    41,
      43,    45,    47,    51,    80,    55,    53,     0,     0,    63,
      57,     0,    76,    89,     0,     0,     9,    62,    65,     0,
      74,     0,     0,    98,     0,    64,    93,    90,    92,     0,
      66,    95,    99,     0,    94,    96
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    13,   113,    64,
      65,    14,    66,   150,   159,    54,    55,   151,   117,    56,
      16,    58,    59,    60,   161,    77,   167,   171,   174,    61,
      78,   169,    62,     5,    10
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -65
static const yytype_int16 yypact[] =
{
      96,   -65,   -65,   -65,     2,    22,    25,   -65,    29,   -65,
      89,    80,   113,   -65,    93,   -65,    80,   -18,   -65,   -65,
     -65,   -65,   -65,   328,   328,   328,    87,   104,   -65,   -65,
      12,   328,   328,   -65,   -65,   -65,   -65,   -65,   -65,    -1,
      98,   328,    70,    51,    86,    -5,    94,    99,   107,   109,
     135,   136,   -65,    78,   -65,   -65,   -65,   163,   237,   -65,
     -65,   -65,   -65,   -65,   111,   -65,   -11,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -13,   -65,   328,   126,   129,   -65,
      83,    -8,   -65,   -65,   -65,   328,   328,   -65,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   -65,   -65,   274,
     -65,   -65,    93,   112,   328,   311,   -65,   200,    -6,   328,
     328,   -65,   -65,    -4,   -65,   -65,   -65,   -65,    70,    70,
      51,    51,    86,    86,    86,    86,    -5,    -5,    94,    99,
     107,   109,   135,   -65,   -65,   -65,   -65,    64,   311,   -65,
     -65,   200,   -65,   -65,     3,     9,   -65,   -65,   -65,     7,
     -65,   200,   200,   -65,   311,   -65,   -65,   -65,   -65,   200,
     -65,   140,   -65,   200,   -65,   -65
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -65,   -65,   -65,   -22,   -65,    41,    52,   -33,    53,    69,
      73,    76,    72,    75,   -20,   -62,   -24,   -12,   -65,   -65,
      71,   181,   -65,   -64,   -65,   -58,   -65,   -65,   -65,    17,
     170,   127,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -101
static const yytype_int16 yytable[] =
{
     111,    71,    72,    73,    67,    74,    80,    81,   105,     6,
      82,    95,    96,    83,    84,    18,    19,    20,    21,    87,
      22,   114,     7,   122,   124,   153,    23,    24,    15,   156,
      69,    85,    70,    68,   162,   115,    97,    98,   116,   106,
     163,   106,    31,   106,   143,    67,    32,    33,    34,    35,
     106,   111,   118,   149,   164,     8,   106,   165,     9,   152,
      79,   123,   132,   133,   134,   135,   125,   126,   127,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,   158,   105,   149,    91,    92,     1,
       2,     3,    73,   160,   147,   154,   155,   157,    93,    94,
     170,    63,   149,   166,   168,     1,     2,     3,    88,    89,
      90,   172,    99,   100,    17,   175,    18,    19,    20,    21,
      11,    22,     1,     2,     3,   106,   107,    23,    24,    12,
     106,   121,   128,   129,    76,    25,    26,    27,    75,    28,
      29,    30,   101,    31,    86,   130,   131,    32,    33,    34,
      35,   102,   136,   137,   103,   104,   119,   105,   112,   120,
     146,    36,    12,    37,    17,   173,    18,    19,    20,    21,
     138,    22,     1,     2,     3,   139,   141,    23,    24,   140,
     142,     4,    57,   145,   109,    25,    26,    27,     0,    28,
      29,    30,     0,    31,     0,     0,     0,    32,    33,    34,
      35,    17,     0,    18,    19,    20,    21,     0,    22,     0,
       0,    36,    12,   108,    23,    24,     0,     0,     0,     0,
       0,     0,    25,    26,    27,  -100,    28,    29,    30,     0,
      31,     0,     0,     0,    32,    33,    34,    35,    17,     0,
      18,    19,    20,    21,     0,    22,     0,     0,    36,    12,
    -100,    23,    24,     0,     0,     0,     0,     0,     0,    25,
      26,    27,     0,    28,    29,    30,     0,    31,     0,     0,
       0,    32,    33,    34,    35,    17,     0,    18,    19,    20,
      21,     0,    22,     0,     0,    36,    12,   110,    23,    24,
       0,     0,     0,     0,     0,     0,    25,    26,    27,     0,
      28,    29,    30,     0,    31,     0,     0,     0,    32,    33,
      34,    35,     0,     0,    18,    19,    20,    21,     0,    22,
       0,     0,    36,    12,   144,    23,    24,     0,     0,     0,
       0,    18,    19,    20,    21,     0,    22,     0,     0,     0,
       0,    31,    23,    24,     0,    32,    33,    34,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
     148,     0,    32,    33,    34,    35
};

static const yytype_int16 yycheck[] =
{
      58,    23,    24,    25,    16,    25,    30,    31,    21,     7,
      32,    16,    17,    14,    15,     3,     4,     5,     6,    41,
       8,    32,     0,    31,    86,    31,    14,    15,    11,    33,
      48,    32,    50,    16,    31,    46,    41,    42,    51,    47,
      31,    47,    30,    47,   106,    57,    34,    35,    36,    37,
      47,   109,    76,   115,    47,    30,    47,    50,    29,   117,
      48,    85,    95,    96,    97,    98,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   148,    21,   148,    36,    37,     9,
      10,    11,   114,   151,   114,   119,   120,    33,    12,    13,
     164,     8,   164,   161,   162,     9,    10,    11,    38,    39,
      40,   169,    18,    19,     1,   173,     3,     4,     5,     6,
      31,     8,     9,    10,    11,    47,    48,    14,    15,    49,
      47,    48,    91,    92,    30,    22,    23,    24,    51,    26,
      27,    28,    43,    30,    46,    93,    94,    34,    35,    36,
      37,    44,    99,   100,    45,    20,    30,    21,    47,    30,
      48,    48,    49,    50,     1,    25,     3,     4,     5,     6,
     101,     8,     9,    10,    11,   102,   104,    14,    15,   103,
     105,     0,    12,   112,    57,    22,    23,    24,    -1,    26,
      27,    28,    -1,    30,    -1,    -1,    -1,    34,    35,    36,
      37,     1,    -1,     3,     4,     5,     6,    -1,     8,    -1,
      -1,    48,    49,    50,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    -1,
      30,    -1,    -1,    -1,    34,    35,    36,    37,     1,    -1,
       3,     4,     5,     6,    -1,     8,    -1,    -1,    48,    49,
      50,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    -1,    26,    27,    28,    -1,    30,    -1,    -1,
      -1,    34,    35,    36,    37,     1,    -1,     3,     4,     5,
       6,    -1,     8,    -1,    -1,    48,    49,    50,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,
      26,    27,    28,    -1,    30,    -1,    -1,    -1,    34,    35,
      36,    37,    -1,    -1,     3,     4,     5,     6,    -1,     8,
      -1,    -1,    48,    49,    50,    14,    15,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,    -1,    -1,    -1,
      -1,    30,    14,    15,    -1,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      49,    -1,    34,    35,    36,    37
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    10,    11,    73,    95,     7,     0,    30,    29,
      96,    31,    49,    69,    73,    81,    82,     1,     3,     4,
       5,     6,     8,    14,    15,    22,    23,    24,    26,    27,
      28,    30,    34,    35,    36,    37,    48,    50,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    77,    78,    81,    82,    83,    84,
      85,    91,    94,     8,    71,    72,    74,    69,    81,    48,
      50,    55,    55,    55,    66,    51,    30,    87,    92,    48,
      68,    68,    55,    14,    15,    32,    46,    55,    38,    39,
      40,    36,    37,    12,    13,    16,    17,    41,    42,    18,
      19,    43,    44,    45,    20,    21,    47,    48,    50,    83,
      50,    77,    47,    70,    32,    46,    51,    80,    68,    30,
      30,    48,    31,    68,    67,    55,    55,    55,    57,    57,
      58,    58,    59,    59,    59,    59,    60,    60,    61,    62,
      63,    64,    65,    67,    50,    72,    48,    66,    49,    67,
      75,    79,    77,    31,    68,    68,    33,    33,    75,    76,
      77,    86,    31,    31,    47,    50,    77,    88,    77,    93,
      75,    89,    77,    25,    90,    77
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
        case 2:

/* Line 1455 of yacc.c  */
#line 123 "c_mod_lex.y"
    {struct exist s=GET_SYMBOL_VALUE((yyvsp[(1) - (1)].value_type).CODE); if(s.f==0) {yyerror("Variable not declared in the current scope\n");} else if(s.f==1) {(yyval.value_type).TYPE = s.t; (yyval.value_type).VALUE = s.v; strcpy((yyval.value_type).CODE, (yyvsp[(1) - (1)].value_type).CODE);(yyval.value_type).index=s.i;};}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 124 "c_mod_lex.y"
    {(yyval.value_type).TYPE = 1;(yyval.value_type).VALUE = (yyvsp[(1) - (1)].value_type).VALUE;char temp[100]; /*CREATE_TEMP(temp, $1.TYPE);*/ sprintf(temp, "%d", (int)((yyvsp[(1) - (1)].value_type).VALUE)); strcpy((yyval.value_type).CODE, temp);;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 125 "c_mod_lex.y"
    {(yyval.value_type).TYPE = 2;(yyval.value_type).VALUE = (yyvsp[(1) - (1)].value_type).VALUE; char temp[100];/* CREATE_TEMP(temp, $1.TYPE);*/ sprintf(temp, "%f", (yyvsp[(1) - (1)].value_type).VALUE); strcpy((yyval.value_type).CODE, temp);;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 126 "c_mod_lex.y"
    {(yyval.value_type).TYPE = 3; char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (1)].value_type).TYPE); printf("%s = %s\n", temp, (yyvsp[(1) - (1)].value_type).CODE); strcpy((yyval.value_type).CODE, temp);;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 128 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(2) - (3)].value_type).TYPE;(yyval.value_type).VALUE = (yyvsp[(2) - (3)].value_type).VALUE;strcpy((yyval.value_type).CODE, (yyvsp[(2) - (3)].value_type).CODE);;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 132 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(1) - (1)].value_type).TYPE;strcpy((yyval.value_type).CODE, (yyvsp[(1) - (1)].value_type).CODE);(yyval.value_type).VALUE = (yyvsp[(1) - (1)].value_type).VALUE;(yyval.value_type).index = (yyvsp[(1) - (1)].value_type).index;(yyval.value_type).count=0;;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 133 "c_mod_lex.y"
    {if(((yyvsp[(3) - (4)].value_type).TYPE == 1)&&(SYMBOL_TABLE[(yyval.value_type).index].dim > 0)){(yyval.value_type).TYPE = (yyvsp[(1) - (4)].value_type).TYPE;if((yyvsp[(1) - (4)].value_type).count==0){char temp[100];CREATE_TEMP(temp,1); printf("%s = %s * %d\n",temp, (yyvsp[(3) - (4)].value_type).CODE, SYMBOL_TABLE[(yyval.value_type).index].offsets[0]); strcpy((yyval.value_type).offset,temp);}else{char temp1[100],temp2[100]; CREATE_TEMP(temp1,1);CREATE_TEMP(temp2,1); printf("%s = %s * %d\n",temp1, (yyvsp[(3) - (4)].value_type).CODE, SYMBOL_TABLE[(yyval.value_type).index].offsets[(yyvsp[(1) - (4)].value_type).count]); printf("%s = %s + %s\n",temp2, (yyvsp[(1) - (4)].value_type).offset, temp1); strcpy((yyval.value_type).offset,temp2);}strcpy((yyval.value_type).CODE,(yyvsp[(1) - (4)].value_type).CODE);(yyval.value_type).count=(yyvsp[(1) - (4)].value_type).count+1;if((yyval.value_type).count==SYMBOL_TABLE[(yyval.value_type).index].dim){char temp[100]; CREATE_TEMP(temp,1); printf("%s = %s[%s]\n", temp, (yyvsp[(1) - (4)].value_type).CODE, (yyval.value_type).offset);char copys[100]; sprintf(copys,"%s[%s]", (yyvsp[(1) - (4)].value_type).CODE, (yyval.value_type).offset);strcpy((yyval.value_type).offset,copys); strcpy((yyval.value_type).CODE, temp);} (yyval.value_type).index=(yyvsp[(1) - (4)].value_type).index;}else{yyerror("Array index should be integer\n"); return 0;};}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 134 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(1) - (2)].value_type).TYPE;char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (2)].value_type).TYPE); printf("%s = %s\n", temp, (yyvsp[(1) - (2)].value_type).CODE); printf("%s = %s + 1\n", (yyvsp[(1) - (2)].value_type).CODE, (yyvsp[(1) - (2)].value_type).CODE);strcpy((yyval.value_type).CODE, temp);;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 135 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(1) - (2)].value_type).TYPE;char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (2)].value_type).TYPE); printf("%s = %s\n", temp, (yyvsp[(1) - (2)].value_type).CODE); printf("%s = %s - 1\n", (yyvsp[(1) - (2)].value_type).CODE, (yyvsp[(1) - (2)].value_type).CODE);strcpy((yyval.value_type).CODE, temp);;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 140 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(1) - (1)].value_type).TYPE;strcpy((yyval.value_type).CODE, (yyvsp[(1) - (1)].value_type).CODE);(yyval.value_type).VALUE = (yyvsp[(1) - (1)].value_type).VALUE;strcpy((yyval.value_type).offset, (yyvsp[(1) - (1)].value_type).offset);;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 141 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(2) - (2)].value_type).TYPE;char temp[100]; CREATE_TEMP(temp, (yyvsp[(2) - (2)].value_type).TYPE); printf("%s = %s + 1\n", (yyvsp[(2) - (2)].value_type).CODE, (yyvsp[(2) - (2)].value_type).CODE); printf("%s = %s\n", temp, (yyvsp[(2) - (2)].value_type).CODE); strcpy((yyval.value_type).CODE, temp);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 142 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(2) - (2)].value_type).TYPE;char temp[100]; CREATE_TEMP(temp, (yyvsp[(2) - (2)].value_type).TYPE); printf("%s = %s - 1\n", (yyvsp[(2) - (2)].value_type).CODE, (yyvsp[(2) - (2)].value_type).CODE); printf("%s = %s\n", temp, (yyvsp[(2) - (2)].value_type).CODE); strcpy((yyval.value_type).CODE, temp);;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 143 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(2) - (2)].value_type).TYPE;char temp[100]; CREATE_TEMP(temp, (yyvsp[(2) - (2)].value_type).TYPE); printf("%s = %s%s\n", temp, (yyvsp[(1) - (2)].value_type).CODE,(yyvsp[(2) - (2)].value_type).CODE); strcpy((yyval.value_type).CODE, temp);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 144 "c_mod_lex.y"
    {if((yyvsp[(2) - (2)].value_type).TYPE == 2){yyerror("Expression should be integer\n"); return 0;}else{(yyval.value_type).TYPE = (yyvsp[(2) - (2)].value_type).TYPE;char temp[100]; CREATE_TEMP(temp, (yyvsp[(2) - (2)].value_type).TYPE); printf("%s = ~%s\n", temp,(yyvsp[(2) - (2)].value_type).CODE); strcpy((yyval.value_type).CODE, temp);};}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 148 "c_mod_lex.y"
    {strcpy((yyval.value_type).CODE, "!");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 149 "c_mod_lex.y"
    {strcpy((yyval.value_type).CODE, "+");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 150 "c_mod_lex.y"
    {strcpy((yyval.value_type).CODE, "-");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 155 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(1) - (1)].value_type).TYPE;strcpy((yyval.value_type).CODE, (yyvsp[(1) - (1)].value_type).CODE);(yyval.value_type).VALUE = (yyvsp[(1) - (1)].value_type).VALUE;;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 156 "c_mod_lex.y"
    {if((yyvsp[(1) - (3)].value_type).TYPE!=(yyvsp[(3) - (3)].value_type).TYPE){yyerror("Type mismatch"); return 0;} else{(yyval.value_type).TYPE = (yyvsp[(1) - (3)].value_type).TYPE;char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (3)].value_type).TYPE); printf("%s = %s * %s\n", temp, (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE); strcpy((yyval.value_type).CODE, temp);};}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 157 "c_mod_lex.y"
    {if((yyvsp[(1) - (3)].value_type).TYPE!=(yyvsp[(3) - (3)].value_type).TYPE){yyerror("Type mismatch"); return 0;} else{(yyval.value_type).TYPE = (yyvsp[(1) - (3)].value_type).TYPE;char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (3)].value_type).TYPE); printf("%s = %s / %s\n", temp, (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE); strcpy((yyval.value_type).CODE, temp);};}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 158 "c_mod_lex.y"
    {if((yyvsp[(1) - (3)].value_type).TYPE==2 || (yyvsp[(3) - (3)].value_type).TYPE==2){yyerror("operands of type 'float' not allowed for this operator"); return 0;} else{if((yyvsp[(1) - (3)].value_type).TYPE!=(yyvsp[(3) - (3)].value_type).TYPE){yyerror("Type mismatch"); return 0;} else{(yyval.value_type).TYPE = 1;char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (3)].value_type).TYPE); printf("%s = %s %% %s\n", temp, (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE); strcpy((yyval.value_type).CODE, temp);}};}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 164 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(1) - (1)].value_type).TYPE;strcpy((yyval.value_type).CODE, (yyvsp[(1) - (1)].value_type).CODE);(yyval.value_type).VALUE = (yyvsp[(1) - (1)].value_type).VALUE;;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 165 "c_mod_lex.y"
    {/*printf("%d %d\n",$1.TYPE,$3.TYPE);*/ if((yyvsp[(1) - (3)].value_type).TYPE!=(yyvsp[(3) - (3)].value_type).TYPE){yyerror("Type mismatch"); return 0;} else{(yyval.value_type).TYPE = (yyvsp[(1) - (3)].value_type).TYPE;char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (3)].value_type).TYPE); printf("%s = %s + %s\n", temp, (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE); strcpy((yyval.value_type).CODE, temp);};}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 166 "c_mod_lex.y"
    {if((yyvsp[(1) - (3)].value_type).TYPE!=(yyvsp[(3) - (3)].value_type).TYPE){yyerror("Type mismatch"); return 0;} else{(yyval.value_type).TYPE = (yyvsp[(1) - (3)].value_type).TYPE;char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (3)].value_type).TYPE); printf("%s = %s - %s\n", temp, (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE); strcpy((yyval.value_type).CODE, temp);};}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 171 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(1) - (1)].value_type).TYPE;strcpy((yyval.value_type).CODE, (yyvsp[(1) - (1)].value_type).CODE);(yyval.value_type).VALUE = (yyvsp[(1) - (1)].value_type).VALUE;;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 172 "c_mod_lex.y"
    {if((yyvsp[(1) - (3)].value_type).TYPE==2 || (yyvsp[(3) - (3)].value_type).TYPE==2){yyerror("operands of type 'float' not allowed for this operator"); return 0;} else{if((yyvsp[(1) - (3)].value_type).TYPE!=(yyvsp[(3) - (3)].value_type).TYPE){yyerror("Type mismatch"); return 0;} else{(yyval.value_type).TYPE = 1;char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (3)].value_type).TYPE); printf("%s = %s << %s\n", temp, (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE); strcpy((yyval.value_type).CODE, temp);}};}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 174 "c_mod_lex.y"
    {if((yyvsp[(1) - (3)].value_type).TYPE==2 || (yyvsp[(3) - (3)].value_type).TYPE==2){yyerror("operands of type 'float' not allowed for this operator"); return 0;} else{if((yyvsp[(1) - (3)].value_type).TYPE!=(yyvsp[(3) - (3)].value_type).TYPE){yyerror("Type mismatch"); return 0;} else{(yyval.value_type).TYPE = 1;char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (3)].value_type).TYPE); printf("%s = %s >> %s\n", temp, (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE); strcpy((yyval.value_type).CODE, temp);}};}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 180 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(1) - (1)].value_type).TYPE;strcpy((yyval.value_type).CODE, (yyvsp[(1) - (1)].value_type).CODE);(yyval.value_type).VALUE = (yyvsp[(1) - (1)].value_type).VALUE;;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 181 "c_mod_lex.y"
    {if((yyvsp[(1) - (3)].value_type).TYPE!=(yyvsp[(3) - (3)].value_type).TYPE){yyerror("Type mismatch"); return 0;} else{(yyval.value_type).TYPE = 1; char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (3)].value_type).TYPE); printf("if %s < %s goto L%d\n%s = 0\ngoto L%d\nL%d: %s = 1\nL%d: ", (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE, label_count, temp, label_count+1, label_count, temp, label_count+1); label_count+=2; strcpy((yyval.value_type).CODE, temp);};}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 182 "c_mod_lex.y"
    {if((yyvsp[(1) - (3)].value_type).TYPE!=(yyvsp[(3) - (3)].value_type).TYPE){yyerror("Type mismatch"); return 0;} else{(yyval.value_type).TYPE = 1; char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (3)].value_type).TYPE); printf("if %s <= %s goto L%d\n%s = 0\ngoto L%d\nL%d: %s = 1\nL%d: ", (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE, label_count, temp, label_count+1, label_count, temp, label_count+1); label_count+=2; strcpy((yyval.value_type).CODE, temp);};}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 183 "c_mod_lex.y"
    {if((yyvsp[(1) - (3)].value_type).TYPE!=(yyvsp[(3) - (3)].value_type).TYPE){yyerror("Type mismatch"); return 0;} else{(yyval.value_type).TYPE = 1; char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (3)].value_type).TYPE); printf("if %s > %s goto L%d\n%s = 0\ngoto L%d\nL%d: %s = 1\nL%d: ", (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE, label_count, temp, label_count+1, label_count, temp, label_count+1); label_count+=2; strcpy((yyval.value_type).CODE, temp);};}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 184 "c_mod_lex.y"
    {if((yyvsp[(1) - (3)].value_type).TYPE!=(yyvsp[(3) - (3)].value_type).TYPE){yyerror("Type mismatch"); return 0;} else{(yyval.value_type).TYPE = 1; char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (3)].value_type).TYPE); printf("if %s >= %s goto L%d\n%s = 0\ngoto L%d\nL%d: %s = 1\nL%d: ", (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE, label_count, temp, label_count+1, label_count, temp, label_count+1); label_count+=2; strcpy((yyval.value_type).CODE, temp);};}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 188 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(1) - (1)].value_type).TYPE;strcpy((yyval.value_type).CODE, (yyvsp[(1) - (1)].value_type).CODE);(yyval.value_type).VALUE = (yyvsp[(1) - (1)].value_type).VALUE;;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 189 "c_mod_lex.y"
    {if((yyvsp[(1) - (3)].value_type).TYPE!=(yyvsp[(3) - (3)].value_type).TYPE){yyerror("Type mismatch"); return 0;} else{(yyval.value_type).TYPE = 1; char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (3)].value_type).TYPE); printf("if %s == %s goto L%d\n%s = 0\ngoto L%d\nL%d: %s = 1\nL%d: ", (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE, label_count, temp, label_count+1, label_count, temp, label_count+1); label_count+=2; strcpy((yyval.value_type).CODE, temp);};}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 190 "c_mod_lex.y"
    {if((yyvsp[(1) - (3)].value_type).TYPE!=(yyvsp[(3) - (3)].value_type).TYPE){yyerror("Type mismatch"); return 0;} else{(yyval.value_type).TYPE = 1; char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (3)].value_type).TYPE); printf("if %s != %s goto L%d\n%s = 0\ngoto L%d\nL%d: %s = 1\nL%d: ", (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE, label_count, temp, label_count+1, label_count, temp, label_count+1); label_count+=2; strcpy((yyval.value_type).CODE, temp);};}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 195 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(1) - (1)].value_type).TYPE;strcpy((yyval.value_type).CODE, (yyvsp[(1) - (1)].value_type).CODE);(yyval.value_type).VALUE = (yyvsp[(1) - (1)].value_type).VALUE;;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 196 "c_mod_lex.y"
    {if((yyvsp[(1) - (3)].value_type).TYPE==2 || (yyvsp[(3) - (3)].value_type).TYPE==2){yyerror("operands of type 'float' not allowed for this operator"); return 0;} else{if((yyvsp[(1) - (3)].value_type).TYPE!=(yyvsp[(3) - (3)].value_type).TYPE){yyerror("Type mismatch"); return 0;} else{(yyval.value_type).TYPE = 1;char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (3)].value_type).TYPE); printf("%s = %s & %s\n", temp, (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE); strcpy((yyval.value_type).CODE, temp);}};}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 201 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(1) - (1)].value_type).TYPE;strcpy((yyval.value_type).CODE, (yyvsp[(1) - (1)].value_type).CODE);(yyval.value_type).VALUE = (yyvsp[(1) - (1)].value_type).VALUE;;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 202 "c_mod_lex.y"
    {if((yyvsp[(1) - (3)].value_type).TYPE==2 || (yyvsp[(3) - (3)].value_type).TYPE==2){yyerror("operands of type 'float' not allowed for this operator"); return 0;} else{if((yyvsp[(1) - (3)].value_type).TYPE!=(yyvsp[(3) - (3)].value_type).TYPE){yyerror("Type mismatch"); return 0;} else{(yyval.value_type).TYPE = 1;char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (3)].value_type).TYPE); printf("%s = %s ^ %s\n", temp, (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE); strcpy((yyval.value_type).CODE, temp);}};}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 207 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(1) - (1)].value_type).TYPE;strcpy((yyval.value_type).CODE, (yyvsp[(1) - (1)].value_type).CODE);(yyval.value_type).VALUE = (yyvsp[(1) - (1)].value_type).VALUE;;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 208 "c_mod_lex.y"
    {if((yyvsp[(1) - (3)].value_type).TYPE==2 || (yyvsp[(3) - (3)].value_type).TYPE==2){yyerror("operands of type 'float' not allowed for this operator"); return 0;} else{if((yyvsp[(1) - (3)].value_type).TYPE!=(yyvsp[(3) - (3)].value_type).TYPE){yyerror("Type mismatch"); return 0;} else{(yyval.value_type).TYPE = 1;char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (3)].value_type).TYPE); printf("%s = %s | %s\n", temp, (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE); strcpy((yyval.value_type).CODE, temp);}};}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 213 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(1) - (1)].value_type).TYPE;strcpy((yyval.value_type).CODE, (yyvsp[(1) - (1)].value_type).CODE);(yyval.value_type).VALUE = (yyvsp[(1) - (1)].value_type).VALUE;;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 214 "c_mod_lex.y"
    {if((yyvsp[(1) - (3)].value_type).TYPE!=1 || (yyvsp[(3) - (3)].value_type).TYPE!=1){yyerror("operands of type 'int' are needed"); return 0;} else{(yyval.value_type).TYPE = 1;char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (3)].value_type).TYPE); printf("%s = %s && %s\n", temp, (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE); strcpy((yyval.value_type).CODE, temp);};}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 219 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(1) - (1)].value_type).TYPE;strcpy((yyval.value_type).CODE, (yyvsp[(1) - (1)].value_type).CODE);;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 220 "c_mod_lex.y"
    {if((yyvsp[(1) - (3)].value_type).TYPE!=1 || (yyvsp[(3) - (3)].value_type).TYPE!=1){yyerror("operands of type 'int' are needed"); return 0;} else{(yyval.value_type).TYPE = 1;char temp[100]; CREATE_TEMP(temp, (yyvsp[(1) - (3)].value_type).TYPE); printf("%s = %s || %s\n", temp, (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE); strcpy((yyval.value_type).CODE, temp);};}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 226 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(1) - (1)].value_type).TYPE;strcpy((yyval.value_type).CODE, (yyvsp[(1) - (1)].value_type).CODE);(yyval.value_type).VALUE = (yyvsp[(1) - (1)].value_type).VALUE;;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 227 "c_mod_lex.y"
    {if((yyvsp[(1) - (3)].value_type).TYPE == (yyvsp[(3) - (3)].value_type).TYPE){(yyval.value_type).TYPE = (yyvsp[(1) - (3)].value_type).TYPE;if((yyvsp[(1) - (3)].value_type).offset[strlen((yyvsp[(1) - (3)].value_type).offset)-1]==']'){printf("%s = %s\n", (yyvsp[(1) - (3)].value_type).offset, (yyvsp[(3) - (3)].value_type).CODE);}else{ printf("%s = %s\n", (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE);}}else{yyerror("Type not matching"); return 0;};}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 232 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(1) - (1)].value_type).TYPE; strcpy((yyval.value_type).CODE, (yyvsp[(1) - (1)].value_type).CODE);(yyval.value_type).VALUE = (yyvsp[(1) - (1)].value_type).VALUE;;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 238 "c_mod_lex.y"
    {(yyvsp[(2) - (2)].value_type).TYPE = (yyvsp[(1) - (2)].value_type).TYPE;;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 242 "c_mod_lex.y"
    {//printf("type%d\n", tt);
				(yyvsp[(1) - (1)].value_type).TYPE = tt;;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 244 "c_mod_lex.y"
    {(yyvsp[(1) - (3)].value_type).TYPE = tt; (yyvsp[(3) - (3)].value_type).TYPE = tt;;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 249 "c_mod_lex.y"
    {(yyvsp[(1) - (1)].value_type).TYPE = tt;if(SYMBOL_TABLE[(yyval.value_type).index].dim>0){SYMBOL_TABLE[(yyval.value_type).index].offsets[SYMBOL_TABLE[(yyval.value_type).index].dim-1]=size[tt-1]; for(int i = SYMBOL_TABLE[(yyval.value_type).index].dim-1; i >= 1;i--){SYMBOL_TABLE[(yyval.value_type).index].offsets[i-1] = SYMBOL_TABLE[(yyval.value_type).index].offsets[i]*SYMBOL_TABLE[(yyval.value_type).index].widths[i];}} ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 250 "c_mod_lex.y"
    {if(tt != (yyvsp[(3) - (3)].value_type).TYPE){yyerror("Type not matching"); return 0;} (yyvsp[(1) - (3)].value_type).TYPE = tt;if(SYMBOL_TABLE[(yyval.value_type).index].dim==1){char valc[100];strcpy(valc,""); int i=0; int j=0;for(i=0;i<strlen((yyvsp[(3) - (3)].value_type).CODE);i++){if((yyvsp[(3) - (3)].value_type).CODE[i]!=','){char ct[2]; ct[0]=(yyvsp[(3) - (3)].value_type).CODE[i]; ct[1]='\0';strcat(valc,ct);}else{printf("%s[%d] = %s\n", (yyvsp[(1) - (3)].value_type).CODE, j, valc); j+=size[tt-1]; strcpy(valc,"");}}printf("%s[%d] = %s\n", (yyvsp[(1) - (3)].value_type).CODE, j, valc);}else{printf("%s = %s\n", (yyvsp[(1) - (3)].value_type).CODE, (yyvsp[(3) - (3)].value_type).CODE);};}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 256 "c_mod_lex.y"
    {tt=3;(yyval.value_type).TYPE = 3;;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 257 "c_mod_lex.y"
    {tt=1;(yyval.value_type).TYPE = 1;;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 258 "c_mod_lex.y"
    {tt=2;(yyval.value_type).TYPE = 2;;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 265 "c_mod_lex.y"
    {if(INSERT_SYMBOL((yyvsp[(1) - (1)].value_type).CODE, tt)==0){yyerror("Variable with same name already declared");return 0;} strcpy((yyval.value_type).CODE,(yyvsp[(1) - (1)].value_type).CODE);(yyval.value_type).index = total_symbol-1;SYMBOL_TABLE[(yyval.value_type).index].dim=0;;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 266 "c_mod_lex.y"
    {if((yyvsp[(3) - (4)].value_type).TYPE==1){(yyvsp[(1) - (4)].value_type).TYPE=tt; SYMBOL_TABLE[(yyval.value_type).index].widths[SYMBOL_TABLE[(yyval.value_type).index].dim++] = (yyvsp[(3) - (4)].value_type).VALUE;(yyval.value_type).index = (yyvsp[(1) - (4)].value_type).index;strcpy((yyval.value_type).CODE,(yyvsp[(1) - (4)].value_type).CODE);} else{yyerror("Size of array must be integer");return 0;};}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 271 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(1) - (1)].value_type).TYPE; strcpy((yyval.value_type).CODE,(yyvsp[(1) - (1)].value_type).CODE);(yyval.value_type).VALUE = (yyvsp[(1) - (1)].value_type).VALUE;;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 272 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(2) - (3)].value_type).TYPE;strcpy((yyval.value_type).CODE,(yyvsp[(2) - (3)].value_type).CODE);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 277 "c_mod_lex.y"
    {(yyval.value_type).TYPE = (yyvsp[(1) - (1)].value_type).TYPE;strcpy((yyval.value_type).CODE,(yyvsp[(1) - (1)].value_type).CODE);;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 278 "c_mod_lex.y"
    {if((yyvsp[(1) - (3)].value_type).TYPE != (yyvsp[(3) - (3)].value_type).TYPE){yyerror("Assignment type mismatch");return 0;} (yyval.value_type).TYPE = (yyvsp[(1) - (3)].value_type).TYPE;strcat((yyval.value_type).CODE,",");strcat((yyval.value_type).CODE,(yyvsp[(3) - (3)].value_type).CODE);;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 292 "c_mod_lex.y"
    {printf("L%d: ", label_count); cq[cqs].label = label_count++;strcpy(cq[cqs].val, (yyvsp[(2) - (3)].value_type).CODE);cq[cqs].scope = cur_scope;cqs++;;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 292 "c_mod_lex.y"
    {printf("goto L%d\n", label_stack[label_top]);;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 293 "c_mod_lex.y"
    {printf("L%d: ", label_count); cq[cqs].label = label_count++;strcpy(cq[cqs].val, "def");cq[cqs].scope = cur_scope;cqs++;;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 293 "c_mod_lex.y"
    {printf("goto L%d\n", label_stack[label_top]);;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 318 "c_mod_lex.y"
    {yyerror("; missing"); return 0;;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 319 "c_mod_lex.y"
    {yyerror("; missing"); return 0;;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 323 "c_mod_lex.y"
    {if((yyvsp[(3) - (4)].value_type).TYPE!=1){yyerror("Condition should be an expression with value 0 or 1"); return 0;} printf("if %s == 0 goto L%d\n", (yyvsp[(3) - (4)].value_type).CODE, label_count); label_stack[++label_top] = label_count++;;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 324 "c_mod_lex.y"
    {printf("goto L%d\n", label_count); label_stack[++label_top] = label_count++; label_stack[++label_top] = label_count++;;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 324 "c_mod_lex.y"
    {printf("L%d: ", label_stack[label_top-1]);int c=0; for(int i=0;i<cqs-1;i++){ if(cq[i].scope == cur_scope+1){printf("if %s == %s goto L%d\n", (yyvsp[(4) - (6)].value_type).CODE, cq[i].val, cq[i].label);c++;}} printf("goto L%d\n", cq[cqs-1].label);c++;printf("L%d: ", label_stack[label_top]); cqs -= c; label_top-=2;;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 328 "c_mod_lex.y"
    {printf("L%d: ", label_stack[label_top--]);;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 338 "c_mod_lex.y"
    {printf("L%d: ", label_count);label_stack[++label_top] = label_count++;;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 338 "c_mod_lex.y"
    {if((yyvsp[(4) - (5)].value_type).TYPE!=1){yyerror("Condition should be an expression with value 0 or 1"); return 0;} printf("if %s == 0 goto L%d\n", (yyvsp[(4) - (5)].value_type).CODE, label_count); int temp = label_stack[label_top--]; label_stack[++label_top] = label_count++; label_stack[++label_top] = temp;;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 338 "c_mod_lex.y"
    {printf("goto L%d\n", label_stack[label_top--]); printf("L%d: ", label_stack[label_top--]);;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 350 "c_mod_lex.y"
    {printf("Return\n");;}
    break;



/* Line 1455 of yacc.c  */
#line 2193 "c_mod_lex.tab.c"
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
#line 359 "c_mod_lex.y"


int main() 
{ 
    extern FILE *yyin; 
    printf("*****Starting Three Address Code Generation. Scanning from input.txt...*****\n");
    yyin=fopen("input.txt","r"); 
    yyparse();
    int i;    
    /*for(i=0;i<total_symbol;i++){
		printf("%s = %f\n", SYMBOL_TABLE[i].symbol, SYMBOL_TABLE[i].type, SYMBOL_TABLE[i].scope);
    }*/
    if(iserr == 0)
    fprintf(stderr,"*****Finished Three Address Code Generation! No errors found*****\n");
    else
    fprintf(stderr,"*****Errors found!*****\n");

	
} 

void yyerror(char *s) {
    fprintf(stderr, " line:%d %s\n",lineno, s);
    iserr = 1;

}
