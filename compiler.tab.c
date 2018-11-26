
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
#line 1 "compiler.y"


    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    int sym[26] = {0};
    int val[26];
    
    int right,condition = 0,check,cont,value,scheck = 0,index;

    char var[1000],store[1000][1000],var_value[1000];
    int count = 0,check1,check2,i;

    int decCheck(char str[1000]);
    int getAdd(char str[1000]);
    int match(char str1[1000], char str2[1000]);


/* Line 189 of yacc.c  */
#line 93 "compiler.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
     FLOAT = 259,
     CHAR = 260,
     DOUBLE = 261,
     LSB = 262,
     RSB = 263,
     SEMI = 264,
     COMMA = 265,
     NUMBER = 266,
     EQUAL = 267,
     PLUS = 268,
     MINUS = 269,
     CROSS = 270,
     DIV = 271,
     DEFAULT = 272,
     WHILE = 273,
     MOD = 274,
     FTB = 275,
     LTB = 276,
     FFB = 277,
     LFB = 278,
     IF = 279,
     FS = 280,
     GE = 281,
     GR = 282,
     LE = 283,
     LS = 284,
     EQ = 285,
     NEQ = 286,
     PRINT = 287,
     ELSE = 288,
     FOR = 289,
     INC = 290,
     DEC = 291,
     COS = 292,
     COE = 293,
     LOS = 294,
     LOE = 295,
     SWITCH = 296,
     CASE = 297,
     STOP = 298,
     COL = 299,
     VAR = 300
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 21 "compiler.y"

    int valname;
    char varname[1000];



/* Line 214 of yacc.c  */
#line 181 "compiler.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 193 "compiler.tab.c"

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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   221

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNRULES -- Number of states.  */
#define YYNSTATES  119

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     8,    12,    17,    20,    29,    42,
      48,    50,    52,    54,    56,    58,    60,    62,    68,    72,
      73,    75,    77,    81,    85,    89,    93,    97,   101,   103,
     105,   109,   113,   117,   121,   125,   129,   143,   144,   147,
     150,   158,   159,   163,   166,   168,   175,   176,   182,   183,
     191
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    47,    48,    -1,    48,    -1,    49,    50,
       9,    -1,    45,    12,    51,     9,    -1,    51,     9,    -1,
      24,    25,    52,    25,    20,    48,    21,     9,    -1,    24,
      25,    52,    25,    20,    48,    21,    33,    20,    48,    21,
       9,    -1,    32,    20,    51,    21,     9,    -1,    53,    -1,
      55,    -1,    59,    -1,     3,    -1,     4,    -1,     5,    -1,
       6,    -1,    50,    10,     7,    45,     8,    -1,     7,    45,
       8,    -1,    -1,    11,    -1,    45,    -1,    51,    13,    51,
      -1,    51,    14,    51,    -1,    51,    15,    51,    -1,    51,
      16,    51,    -1,    51,    19,    51,    -1,    22,    51,    23,
      -1,    11,    -1,    45,    -1,    52,    26,    52,    -1,    52,
      28,    52,    -1,    52,    27,    52,    -1,    52,    29,    52,
      -1,    52,    30,    52,    -1,    52,    31,    52,    -1,    34,
      37,    45,    12,    51,     9,    52,     9,    54,    38,    39,
      48,    40,    -1,    -1,    45,    35,    -1,    45,    36,    -1,
      41,    37,    51,    38,     7,    56,     8,    -1,    -1,    56,
      57,    58,    -1,    56,    57,    -1,    57,    -1,    42,    11,
      44,    47,    43,     9,    -1,    -1,    17,    44,    47,    43,
       9,    -1,    -1,    18,    37,    51,    38,    20,    51,    21,
      -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    36,    36,    37,    40,    41,    57,    59,    71,    83,
      87,    88,    89,    92,    93,    94,    95,    99,   117,   134,
     139,   140,   157,   158,   159,   160,   171,   172,   177,   178,
     194,   207,   223,   241,   257,   272,   289,   353,   356,   362,
     366,   370,   374,   375,   376,   379,   394,   398,   405,   408,
     417
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "FLOAT", "CHAR", "DOUBLE",
  "LSB", "RSB", "SEMI", "COMMA", "NUMBER", "EQUAL", "PLUS", "MINUS",
  "CROSS", "DIV", "DEFAULT", "WHILE", "MOD", "FTB", "LTB", "FFB", "LFB",
  "IF", "FS", "GE", "GR", "LE", "LS", "EQ", "NEQ", "PRINT", "ELSE", "FOR",
  "INC", "DEC", "COS", "COE", "LOS", "LOE", "SWITCH", "CASE", "STOP",
  "COL", "VAR", "$accept", "program", "dec", "type", "id", "operation",
  "con", "for", "inc", "fswitch", "scase", "fcase", "dflt", "fwhile", 0
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
     295,   296,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    49,    49,    49,    49,    50,    50,    50,
      51,    51,    51,    51,    51,    51,    51,    51,    52,    52,
      52,    52,    52,    52,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    56,    56,    57,    57,    58,    58,    59,
      59
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     4,     2,     8,    12,     5,
       1,     1,     1,     1,     1,     1,     1,     5,     3,     0,
       1,     1,     3,     3,     3,     3,     3,     3,     1,     1,
       3,     3,     3,     3,     3,     3,    13,     0,     2,     2,
       7,     0,     3,     2,     1,     6,     0,     5,     0,     7,
       0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      37,    13,    14,    15,    16,    20,     0,     0,     0,     0,
       0,     0,    21,     0,     3,    19,     0,    10,    11,    12,
       0,    21,     0,     0,     0,     0,     0,     0,     1,     2,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    27,
      28,    29,     0,     0,     0,     0,     0,     0,     4,     0,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,    18,     0,     0,
      37,    30,    32,    31,    33,    34,    35,     9,     0,    46,
       0,     0,     0,     0,     0,    46,    44,    17,    49,     0,
       0,     0,    40,    43,     7,     0,     0,    37,     0,    42,
      37,     0,     0,     0,    37,     0,    38,    39,     0,     0,
       0,     0,    37,    45,     0,     8,     0,    47,    36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    13,    14,    15,    31,    16,    42,    17,   102,    18,
      85,    86,    99,    19
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -83
static const yytype_int16 yypact[] =
{
     119,   -83,   -83,   -83,   -83,   -83,   -21,    -5,     0,    -1,
       5,     7,    21,    32,   -83,    38,   143,   -83,   -83,   -83,
      -5,   -83,   152,    -4,    -5,     6,    -5,    -5,   -83,   -83,
       8,    14,   -83,    -5,    -5,    -5,    -5,    -5,    33,   -83,
     -83,   -83,   184,   178,    43,    46,   163,    66,   -83,    65,
      98,    98,    98,    98,    98,    56,    58,    -4,    -4,    -4,
      -4,    -4,    -4,    70,    -5,    73,   -83,   -83,    36,    -5,
     119,   190,   190,   190,   190,   190,   190,   -83,   171,    41,
      77,   187,    68,    -4,    80,    -3,   -83,   -83,   -83,    -7,
     118,    48,   -83,    76,   -83,    74,    50,   119,    60,   -83,
     119,   -32,    72,    64,   119,    85,   -83,   -83,    79,   107,
      97,   111,   119,   -83,   117,   -83,    88,   -83,   -83
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -83,   -82,   -13,   -83,   -83,    -6,   -49,   -83,   -83,   -83,
     -83,    47,   -83,   -83
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      29,    22,    94,   106,   107,    92,     5,    40,    71,    72,
      73,    74,    75,    76,    38,   103,    20,     7,    43,    24,
      45,    46,   110,    48,    49,    23,    95,    50,    51,    52,
      53,    54,    28,    27,    90,     1,     2,     3,     4,    84,
      21,    41,    25,     5,    26,    30,    33,    34,    35,    36,
       6,    44,    37,    47,     7,    64,     8,    82,    78,    33,
      34,    35,    36,    81,     9,    37,    10,     1,     2,     3,
       4,    55,    68,    11,    67,     5,    69,    12,    70,    77,
      79,    80,     6,    84,    65,    87,     7,   105,     8,    89,
      29,    91,    97,    98,   100,   101,     9,    29,    10,   116,
       1,     2,     3,     4,   104,    11,   111,   109,     5,    12,
     108,    33,    34,    35,    36,     6,   113,    37,   112,     7,
     115,     8,     1,     2,     3,     4,   117,    96,   118,     9,
       5,    10,    93,     0,     0,     0,     0,     6,    11,     0,
     114,     7,    12,     8,    57,    58,    59,    60,    61,    62,
       0,     9,    32,    10,     0,     0,    33,    34,    35,    36,
      11,     0,    37,     0,    12,    33,    34,    35,    36,     0,
       0,    37,    66,     0,     0,    39,    33,    34,    35,    36,
      83,     0,    37,     0,    33,    34,    35,    36,     0,     0,
      37,    33,    34,    35,    36,     0,     0,    37,     0,    63,
      33,    34,    35,    36,     0,     0,    37,     0,    88,    56,
      57,    58,    59,    60,    61,    62,    57,    58,    59,    60,
      61,    62
};

static const yytype_int8 yycheck[] =
{
      13,     7,     9,    35,    36,     8,    11,    11,    57,    58,
      59,    60,    61,    62,    20,    97,    37,    22,    24,    20,
      26,    27,   104,     9,    10,    25,    33,    33,    34,    35,
      36,    37,     0,    12,    83,     3,     4,     5,     6,    42,
      45,    45,    37,    11,    37,     7,    13,    14,    15,    16,
      18,    45,    19,    45,    22,    12,    24,    70,    64,    13,
      14,    15,    16,    69,    32,    19,    34,     3,     4,     5,
       6,    38,     7,    41,     8,    11,    20,    45,    20,     9,
       7,    45,    18,    42,    38,     8,    22,   100,    24,    21,
     103,    11,    44,    17,    20,    45,    32,   110,    34,   112,
       3,     4,     5,     6,    44,    41,    21,    43,    11,    45,
      38,    13,    14,    15,    16,    18,     9,    19,    39,    22,
       9,    24,     3,     4,     5,     6,     9,     9,    40,    32,
      11,    34,    85,    -1,    -1,    -1,    -1,    18,    41,    -1,
      43,    22,    45,    24,    26,    27,    28,    29,    30,    31,
      -1,    32,     9,    34,    -1,    -1,    13,    14,    15,    16,
      41,    -1,    19,    -1,    45,    13,    14,    15,    16,    -1,
      -1,    19,     9,    -1,    -1,    23,    13,    14,    15,    16,
       9,    -1,    19,    -1,    13,    14,    15,    16,    -1,    -1,
      19,    13,    14,    15,    16,    -1,    -1,    19,    -1,    21,
      13,    14,    15,    16,    -1,    -1,    19,    -1,    21,    25,
      26,    27,    28,    29,    30,    31,    26,    27,    28,    29,
      30,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    11,    18,    22,    24,    32,
      34,    41,    45,    47,    48,    49,    51,    53,    55,    59,
      37,    45,    51,    25,    20,    37,    37,    12,     0,    48,
       7,    50,     9,    13,    14,    15,    16,    19,    51,    23,
      11,    45,    52,    51,    45,    51,    51,    45,     9,    10,
      51,    51,    51,    51,    51,    38,    25,    26,    27,    28,
      29,    30,    31,    21,    12,    38,     9,     8,     7,    20,
      20,    52,    52,    52,    52,    52,    52,     9,    51,     7,
      45,    51,    48,     9,    42,    56,    57,     8,    21,    21,
      52,    11,     8,    57,     9,    33,     9,    44,    17,    58,
      20,    45,    54,    47,    44,    48,    35,    36,    38,    43,
      47,    21,    39,     9,    43,     9,    48,     9,    40
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
        case 5:

/* Line 1455 of yacc.c  */
#line 41 "compiler.y"
    {  
                                                            check1 = decCheck((yyvsp[(1) - (4)].varname));
                                                            if(check1==0)
                                                            {
                                                                printf("This variable is not declared\n");

                                                            }
                                                            else
                                                            {
                                                                //printf("Declared\n");
                                                                index = getAdd((yyvsp[(1) - (4)].varname));
                                                                var_value[index] = (yyvsp[(3) - (4)].valname);
                                                            }

                                                        ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 59 "compiler.y"
    {
                                                            //printf("ifelse\n");
                                                            if ( condition == 1 )
                                                            {
                                                                printf("Expression value in if is %d\n",(yyvsp[(6) - (8)].valname));
                                                            }
                                                            else
                                                            {
                                                                printf("The condition in if is false\n");
                                                            }
                                                        ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 71 "compiler.y"
    {
                                                            //printf("ifelse\n");
                                                            if ( condition == 1 )
                                                            {
                                                                printf("Expression value in if is %d\n",(yyvsp[(6) - (12)].valname));
                                                            }
                                                            else
                                                            {
                                                                printf("Expression value in else is %d\n",(yyvsp[(10) - (12)].valname));
                                                            }
                                                        ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 83 "compiler.y"
    { 
                                                            (yyval.valname) = (yyvsp[(3) - (5)].valname);
                                                            printf("%d\n",(yyvsp[(3) - (5)].valname));
                                                        ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 92 "compiler.y"
    {printf("Integer type variable\n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 93 "compiler.y"
    {printf("Float type variable\n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 94 "compiler.y"
    {printf("Char type variable\n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 95 "compiler.y"
    {printf("Double type variable\n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 99 "compiler.y"
    {                                   
                                    check1 = decCheck((yyvsp[(4) - (5)].varname));
                                    if(check1==0)
                                    {
                                        printf("Undeclared Variable\n");
                                        for(i=0;i<strlen((yyvsp[(4) - (5)].varname));i++)
                                        {
                                            store[count][i] = (yyvsp[(4) - (5)].varname)[i];
                                        }
                                        count++;
                                    }
                                    else
                                    {
                                        printf("This variable is already declared\n");
                                        
                                    }
                                ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 117 "compiler.y"
    {                                   
                                    check1 = decCheck((yyvsp[(2) - (3)].varname));
                                    if(check1==0)
                                    {
                                        printf("Undeclared Variable\n");
                                        for(i=0;i<strlen((yyvsp[(2) - (3)].varname));i++)
                                        {
                                            store[count][i] = (yyvsp[(2) - (3)].varname)[i];
                                        }
                                        count++;
                                    }
                                    else
                                    {
                                        printf("This variable is already declared\n");
                                        
                                    }
                                ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 139 "compiler.y"
    { value = (yyvsp[(1) - (1)].valname); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 140 "compiler.y"
    {  
                                                                    check1 = decCheck((yyvsp[(1) - (1)].varname));
                                                                    if(check1==0)
                                                                    {
                                                                        printf("This variable is not declared\n");

                                                                    }
                                                                    else
                                                                    {
                                                                       //printf("Declared\n");
                                                                        index = getAdd((yyvsp[(1) - (1)].varname));
                                                                        (yyval.valname) = var_value[index] ; 
                                                                        value = var_value[index];                                                                     
                                                                    }

                                                        ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 157 "compiler.y"
    { (yyval.valname) = (yyvsp[(1) - (3)].valname) + (yyvsp[(3) - (3)].valname); value = (yyval.valname); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 158 "compiler.y"
    { (yyval.valname) = (yyvsp[(1) - (3)].valname) - (yyvsp[(3) - (3)].valname); value = (yyval.valname); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 159 "compiler.y"
    { (yyval.valname) = (yyvsp[(1) - (3)].valname) * (yyvsp[(3) - (3)].valname); value = (yyval.valname); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 160 "compiler.y"
    { 
                                                          if( (yyvsp[(3) - (3)].valname) != 0 )
                                                          {
                                                              (yyval.valname) = (yyvsp[(1) - (3)].valname) / (yyvsp[(3) - (3)].valname);
                                                          }
                                                          else
                                                          {
                                                              (yyval.valname) = 0;
                                                              printf("Division by zero\n");
                                                          }
                                                        ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 171 "compiler.y"
    { (yyval.valname) = (yyvsp[(1) - (3)].valname) % (yyvsp[(3) - (3)].valname); value = (yyval.valname); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 172 "compiler.y"
    { (yyval.valname) = (yyvsp[(2) - (3)].valname); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 178 "compiler.y"
    {  
                            check1 = decCheck((yyvsp[(1) - (1)].varname));
                            if(check1==0)
                            {
                                printf("This variable is not declared\n");

                            }
                            else
                            {
                                //printf("Declared\n");
                                index = getAdd((yyvsp[(1) - (1)].varname));
                                (yyval.valname) = var_value[index] ;                                                                       
                            }

                         ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 194 "compiler.y"
    { 
                            check = (yyvsp[(3) - (3)].valname);
                            cont = 4;
                            if( (yyvsp[(1) - (3)].valname) >= (yyvsp[(3) - (3)].valname))
                            {
                                condition = 1;
                                printf("Greater equal\n");
                            }

                            else printf("Not greater equal\n");

                         ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 207 "compiler.y"
    { 
                            check = (yyvsp[(3) - (3)].valname);
                            cont = 2;
                            if( (yyvsp[(1) - (3)].valname) <= (yyvsp[(3) - (3)].valname))
                            {
                                condition = 1;
                                printf("Less equal\n");
                            }
                            else 
                            {
                                condition = 0;
                                printf("Not less equal\n");
                            }
                            
                         ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 223 "compiler.y"
    { 
                             check = (yyvsp[(3) - (3)].valname); 
                             cont = 1;     
                             if( (yyvsp[(1) - (3)].valname) > (yyvsp[(3) - (3)].valname))
                             {
                                condition = 1;
                                printf("Greater\n");

                             } 
                             else 
                             {
                                 condition = 0;
                                 printf("Not greater\n");
                                
                             }
                            
                         ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 241 "compiler.y"
    {   
                            check = (yyvsp[(3) - (3)].valname);
                            cont = 3;
                            if( (yyvsp[(1) - (3)].valname) < (yyvsp[(3) - (3)].valname))
                            {
                                condition = 1;
                                printf("Less\n");
                            }
                            else
                            {
                                condition = 0;
                                printf("Not less\n");
                            } 
                            
                         ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 257 "compiler.y"
    {   
                            check = (yyvsp[(3) - (3)].valname);
                            if( (yyvsp[(1) - (3)].valname) == (yyvsp[(3) - (3)].valname))
                            {
                                condition = 1;
                                printf("Equal\n");
                            }
                            else 
                            {
                                condition = 0;
                                printf("Not equal\n");
                            }
                            
                         ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 272 "compiler.y"
    { 
                            check = (yyvsp[(3) - (3)].valname);      
                            if( (yyvsp[(1) - (3)].valname) != (yyvsp[(3) - (3)].valname))
                            {
                                condition = 1;
                                printf("Not equal\n");
                            }
                            else 
                            {
                                condition = 0;
                                printf("Equal\n");
                            }
                            
                         ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 289 "compiler.y"
    { 
                                                                                    printf("for loop\n");
                                
                                                                                    check1 = decCheck((yyvsp[(3) - (13)].varname));
                                                                                    if(check1==0)
                                                                                    {
                                                                                        printf("This variable is not declared\n");

                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        //printf("Declared\n");
                                                                                        index = getAdd((yyvsp[(3) - (13)].varname));
                                                                                        var_value[index] = (yyvsp[(5) - (13)].valname);                                                                       
                                                                                    }
                                                                                    int i;
                                                                                    
                                                                                    if( cont == 1 )
                                                                                    {
                                                                                        printf("Printing from %d to %d:\n",var_value[index],check+1);
                                                                                        for( i =  var_value[index]; i > check; i--)
                                                                                        {
                                                                                            printf("%d\n",i);
                                                                                            
                                                                                        }
                                                                                    }


                                                                                    else if( cont == 2 )
                                                                                    {
                                                                                        printf("Printing from %d to %d:\n",var_value[index],check);
                                                                                        for( i =  var_value[index]; i <= check; i++)
                                                                                        {
                                                                                            printf("%d\n",i);
                                                                                            
                                                                                        }
                                                                                    }

                                                                                    
                                                                                    else if( cont == 3 )
                                                                                    {
                                                                                        printf("Printing from %d to %d:\n",var_value[index],check-1);
                                                                                        for( i = var_value[index]; i < check; i++)
                                                                                        {
                                                                                            printf("%d\n",i);
                                                                                            //$$ = $12;
                                                                                           // printf("asad %d\n",$12);
                                                                                            
                                                                                        }
                                                                                    }
                                                                                    
                                                                                    else if( cont == 4 )
                                                                                    {
                                                                                        printf("Printing from %d to %d:\n",var_value[index],check);
                                                                                        for( i = var_value[index]; i >= check; i--)
                                                                                        {
                                                                                            printf("%d\n",i);
                                                                                            
                                                                                        }
                                                                                    }
                                                                                    
                                                                                    

                                                                              ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 356 "compiler.y"
    {
                                 //val[$1] = val[$1] + 1;
                                 printf("increment\n"); 
                                 
                        ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 362 "compiler.y"
    { printf("decrement\n"); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 366 "compiler.y"
    { 
                                                        scheck = 0;
                                                        //printf("Condition value is %d\n",value);
                                                    ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 379 "compiler.y"
    { 
                                                       // printf("value is %d\n",value);
                                                        if(value == (yyvsp[(2) - (6)].valname))
                                                        {
                                                            printf("Case %d is true\n",(yyvsp[(2) - (6)].valname));
                                                            scheck = 1;
                                                        }
                                                    

                                                        else 
                                                        {
                                                            printf("Case %d is false\n",(yyvsp[(2) - (6)].valname));
                                                        }
                                                
                                                  ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 398 "compiler.y"
    { 
                                                        if( scheck == 0)
                                                        {
                                                            printf("It is default case\n"); 
                                                            printf("Expression value is %d\n",value);
                                                        }
                                                  ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 408 "compiler.y"
    {
                                                        int wcount = (yyvsp[(3) - (7)].valname);
                                                        while(wcount)
                                                        {
                                                            printf("Expression value in while is %d\n",(yyvsp[(6) - (7)].valname));
                                                            wcount--;
                                                        }

                                                    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2013 "compiler.tab.c"
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
#line 423 "compiler.y"



int decCheck(char str[1000])
{

    int i;
    //printf("%s\n",str);
    for(i=0;i<count;i++)
    {
        if(strlen(str)==strlen(store[i]))
        {
            check2 =  match(str,store[i]);
            if(check2==1)
            {
                return 1;
            }
            else
            {
                continue;
            }
        }
        else
        {
            continue;
        }

    }

    return 0;

}

int match(char str1[1000], char str2[1000])
{
    int i,len;
    len = strlen(str1);

    for(i=0;i<len;i++)
    {
        if(str1[i]==str2[i])
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int getAdd(char str[1000])
{
    int i;
    for(int i = 0; i < count; i++)
    {
        if(strlen(str) == strlen(store[i]))
        {
            if(match(str, store[i]))
            {
                return i;
            }
        }
        
    }
}
