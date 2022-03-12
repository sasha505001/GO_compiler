/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"


#include <stdio.h>
#include "create_tree_nodes.cpp"
extern struct program_struct* root;
extern int yylex(void);
extern int yyparse(void);
int yyerror(char * s);


/* Line 371 of yacc.c  */
#line 79 "parser.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LESS = 258,
     GREATER = 259,
     EQUAL = 260,
     NOT_EQUAL = 261,
     GREATER_OR_EQUAL = 262,
     LESS_OR_EQUAL = 263,
     SHORT_EQUALS = 264,
     PLUS_ASSIGN = 265,
     MINUS_ASSIGN = 266,
     MULTIPLY_ASSIGN = 267,
     DIVISION_ASSIGN = 268,
     INC = 269,
     DEC = 270,
     CONST_KEYWORD = 271,
     IF_KEYWORD = 272,
     ELSE_KEYWORD = 273,
     FOR_KEYWORD = 274,
     FUNC_KEYWORD = 275,
     RETURN_KEYWORD = 276,
     VAR_KEYWORD = 277,
     BOOL_KEYWORD = 278,
     INT_KEYWORD = 279,
     BYTE_KEYWORD = 280,
     STRING_KEYWORD = 281,
     TRUE_KEYWORD = 282,
     FALSE_KEYWORD = 283,
     PACKAGE_KEYWORD = 284,
     IMPORT_KEYWORD = 285,
     BREAK_KEYWORD = 286,
     CONTINUE_KEYWORD = 287,
     ID = 288,
     INT = 289,
     STRING = 290,
     UMINUS = 291
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 12 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"

    int Int_val;
    char* Id;
    char* String;

    struct node* node_value;
    struct for_stmt_struct* for_stmt_value;
    struct stmt_body_struct* body_value;
    struct node_list_struct* node_list_value;
    struct program_struct* program_value;
    struct import_one_of_list_struct* import_one_of_list_value;
    struct import_decl_list_struct* import_decl_list_value;
    struct import_list_struct* import_list_value;
    struct import_struct* import_value;
    struct package_struct* package_value;
    struct complex_data_type* complex_data_value;
    struct id_list_struct* id_list_value;
    struct decl_all_struct* decl_all_value;
    struct decl_all_list_struct* decl_all_list_value;
    struct decl_stmt_struct* decl_stmt_value;
    struct stmt_struct* stmt_value;
    struct highest_decl_struct* highest_decl_value;
    struct stmt_list_struct* stmt_list_value;
    struct if_stmt_block_struct* if_stmt_block_value;
    struct else_if_stmt_list_struct* else_if_stmt_list_value;
    struct param_struct* param_value;
    struct param_list_struct* param_list_value;
    struct return_values_struct* return_value;
    struct highest_decl_list_struct* highest_decl_list_value;
    struct array_element_struct* array_element_value;
    struct array_element_list_struct* array_element_list_value;


/* Line 387 of yacc.c  */
#line 192 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 220 "parser.tab.c"

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   660

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  153
/* YYNRULES -- Number of states.  */
#define YYNSTATES  313

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      46,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      44,    45,    38,    36,    48,    37,    43,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    52,    47,
       2,    51,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      35,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    14,    16,    17,
      19,    23,    28,    30,    33,    38,    47,    49,    53,    57,
      59,    62,    66,    68,    70,    72,    74,    80,    88,    95,
     105,   112,   118,   127,   129,   139,   141,   143,   145,   147,
     151,   156,   161,   166,   171,   176,   181,   186,   191,   196,
     201,   207,   216,   217,   219,   221,   226,   231,   237,   239,
     243,   244,   247,   251,   258,   261,   267,   272,   274,   278,
     279,   282,   286,   293,   295,   300,   305,   311,   313,   318,
     321,   324,   329,   334,   339,   344,   349,   354,   356,   358,
     360,   362,   365,   368,   371,   374,   377,   380,   383,   386,
     389,   392,   395,   397,   400,   401,   403,   408,   410,   412,
     414,   416,   418,   419,   421,   423,   425,   429,   434,   443,
     450,   455,   457,   462,   468,   471,   475,   477,   480,   483,
     485,   487,   492,   497,   501,   508,   510,   512,   519,   527,
     533,   540,   543,   546,   548,   550,   553,   554,   556,   557,
     559,   561,   566,   568
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      58,     0,    -1,    46,    -1,    54,    46,    -1,    -1,    54,
      -1,    47,    55,    -1,    54,    -1,    -1,    56,    -1,    63,
      56,   101,    -1,    63,    56,    59,   101,    -1,    60,    -1,
      59,    60,    -1,    30,    55,    62,    56,    -1,    30,    55,
      44,    55,    61,    55,    45,    56,    -1,    62,    -1,    61,
      56,    62,    -1,    43,    55,    35,    -1,    35,    -1,    33,
      35,    -1,    29,    55,    33,    -1,    24,    -1,    23,    -1,
      25,    -1,    26,    -1,    41,    55,    65,    42,    64,    -1,
      20,    55,    44,    55,    95,    45,    97,    -1,    20,    55,
      44,    55,    45,    97,    -1,    20,    55,    44,    55,    95,
      48,    55,    45,    97,    -1,    20,    55,    44,    55,    95,
      45,    -1,    20,    55,    44,    55,    45,    -1,    20,    55,
      44,    55,    95,    48,    55,    45,    -1,    76,    -1,    41,
      55,    65,    42,    64,    49,    55,   102,    50,    -1,    34,
      -1,    35,    -1,    27,    -1,    28,    -1,    37,    55,    65,
      -1,    65,    37,    55,    65,    -1,    65,    36,    55,    65,
      -1,    65,    38,    55,    65,    -1,    65,    39,    55,    65,
      -1,    65,     3,    55,    65,    -1,    65,     4,    55,    65,
      -1,    65,     7,    55,    65,    -1,    65,     8,    55,    65,
      -1,    65,     5,    55,    65,    -1,    65,     6,    55,    65,
      -1,    33,    44,    55,    66,    45,    -1,    65,    43,    55,
      33,    44,    55,    66,    45,    -1,    -1,    67,    -1,    65,
      -1,    67,    48,    55,    65,    -1,    33,    51,    55,    65,
      -1,    33,    64,    51,    55,    65,    -1,    68,    -1,    69,
      56,    68,    -1,    -1,    69,    56,    -1,    16,    55,    68,
      -1,    16,    55,    44,    55,    70,    45,    -1,    33,    64,
      -1,    33,    64,    51,    55,    65,    -1,    33,    51,    55,
      65,    -1,    72,    -1,    73,    56,    72,    -1,    -1,    73,
      57,    -1,    22,    55,    72,    -1,    22,    55,    44,    55,
      74,    45,    -1,    33,    -1,    44,    55,    76,    45,    -1,
      65,    43,    55,    33,    -1,    65,    41,    55,    65,    42,
      -1,    76,    -1,    77,    48,    55,    76,    -1,    76,    14,
      -1,    76,    15,    -1,    77,    51,    55,    67,    -1,    77,
      10,    55,    67,    -1,    77,    11,    55,    67,    -1,    77,
      12,    55,    67,    -1,    77,    13,    55,    67,    -1,    33,
       9,    55,    65,    -1,    65,    -1,    78,    -1,    79,    -1,
      80,    -1,    21,    66,    -1,    47,    55,    -1,    81,    56,
      -1,    71,    56,    -1,    75,    56,    -1,    82,    56,    -1,
      91,    56,    -1,    89,    56,    -1,    86,    56,    -1,    31,
      56,    -1,    32,    56,    -1,    83,    -1,    84,    83,    -1,
      -1,    84,    -1,    49,    55,    85,    50,    -1,    47,    -1,
      65,    -1,    78,    -1,    79,    -1,    80,    -1,    -1,    65,
      -1,    78,    -1,    79,    -1,    19,    55,    86,    -1,    19,
      55,    65,    86,    -1,    19,    55,    87,    56,    65,    56,
      88,    86,    -1,    17,    55,    81,    56,    65,    86,    -1,
      17,    55,    65,    86,    -1,    90,    -1,    90,    18,    55,
      86,    -1,    90,    93,    18,    55,    86,    -1,    90,    93,
      -1,    18,    55,    90,    -1,    92,    -1,    93,    92,    -1,
      33,    64,    -1,    64,    -1,    94,    -1,    95,    48,    55,
      94,    -1,    44,    55,    95,    45,    -1,    44,    55,    45,
      -1,    44,    55,    95,    48,    55,    45,    -1,    96,    -1,
      64,    -1,    20,    55,    33,    96,    97,    56,    -1,    20,
      55,    33,    96,    97,    86,    56,    -1,    20,    55,    33,
      96,    56,    -1,    20,    55,    33,    96,    86,    56,    -1,
      71,    56,    -1,    75,    56,    -1,    98,    -1,    99,    -1,
     100,    99,    -1,    -1,   100,    -1,    -1,   103,    -1,   104,
      -1,   103,    48,    55,   104,    -1,    65,    -1,    34,    52,
      55,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   147,   147,   148,   151,   152,   155,   156,   159,   160,
     164,   165,   168,   169,   172,   173,   177,   178,   181,   182,
     183,   186,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   224,   225,   228,   229,   233,   234,   237,   238,
     241,   242,   245,   246,   249,   250,   251,   254,   255,   258,
     259,   261,   262,   265,   266,   267,   268,   271,   272,   275,
     276,   279,   280,   281,   282,   283,   286,   289,   290,   291,
     292,   295,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   310,   311,   314,   315,   318,   321,   322,   323,
     324,   325,   328,   329,   330,   331,   334,   335,   336,   339,
     340,   343,   344,   345,   346,   349,   352,   353,   356,   357,
     360,   361,   364,   365,   366,   369,   370,   373,   374,   375,
     376,   379,   380,   381,   384,   385,   388,   389,   392,   393,
     396,   397,   400,   401
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LESS", "GREATER", "EQUAL", "NOT_EQUAL",
  "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "SHORT_EQUALS", "PLUS_ASSIGN",
  "MINUS_ASSIGN", "MULTIPLY_ASSIGN", "DIVISION_ASSIGN", "INC", "DEC",
  "CONST_KEYWORD", "IF_KEYWORD", "ELSE_KEYWORD", "FOR_KEYWORD",
  "FUNC_KEYWORD", "RETURN_KEYWORD", "VAR_KEYWORD", "BOOL_KEYWORD",
  "INT_KEYWORD", "BYTE_KEYWORD", "STRING_KEYWORD", "TRUE_KEYWORD",
  "FALSE_KEYWORD", "PACKAGE_KEYWORD", "IMPORT_KEYWORD", "BREAK_KEYWORD",
  "CONTINUE_KEYWORD", "ID", "INT", "STRING", "'+'", "'-'", "'*'", "'/'",
  "UMINUS", "'['", "']'", "'.'", "'('", "')'", "'\\n'", "';'", "','",
  "'{'", "'}'", "'='", "':'", "$accept", "many_line_break",
  "empty_or_many_line_break", "one_similicon_or_many_line_break",
  "empty_or_similicon_or_break_lines", "program", "import_decl_list",
  "import_one_of_list", "import_list", "import_v", "package_v",
  "complex_data", "expr", "expr_list", "expr_list_not_empty", "const_v",
  "const_list_not_empty", "const_list", "const_decl", "var_v",
  "var_list_not_empty", "var_list", "var_decl", "l_value",
  "l_value_list_not_empty", "inc_dec_stmt", "assign", "short_var_decl",
  "simple_stmt_not_empty", "return_stmt", "stmt", "stmt_list_not_empty",
  "stmt_list", "body", "for_stmt_init_stmt", "for_stmt_post_stmt",
  "for_stmt", "if_start_block", "if_stmt", "else_if_stmt",
  "else_if_stmt_list", "param_decl", "param_list", "params", "return_v",
  "func_decl", "highest_decl", "highest_decl_list_not_empty",
  "highest_decl_list", "array_element_list",
  "array_element_list_not_empty", "array_element_v", YY_NULL
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
     285,   286,   287,   288,   289,   290,    43,    45,    42,    47,
     291,    91,    93,    46,    40,    41,    10,    59,    44,   123,
     125,    61,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    55,    55,    56,    56,    57,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    62,    62,
      62,    63,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    66,    66,    67,    67,    68,    68,    69,    69,
      70,    70,    71,    71,    72,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    76,    76,    76,    77,    77,    78,
      78,    79,    79,    79,    79,    79,    80,    81,    81,    81,
      81,    82,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    84,    84,    85,    85,    86,    87,    87,    87,
      87,    87,    88,    88,    88,    88,    89,    89,    89,    90,
      90,    91,    91,    91,    91,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    96,    97,    97,    98,    98,    98,
      98,    99,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     2,     1,     0,     1,
       3,     4,     1,     2,     4,     8,     1,     3,     3,     1,
       2,     3,     1,     1,     1,     1,     5,     7,     6,     9,
       6,     5,     8,     1,     9,     1,     1,     1,     1,     3,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       5,     8,     0,     1,     1,     4,     4,     5,     1,     3,
       0,     2,     3,     6,     2,     5,     4,     1,     3,     0,
       2,     3,     6,     1,     4,     4,     5,     1,     4,     2,
       2,     4,     4,     4,     4,     4,     4,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     0,     1,     4,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     3,     4,     8,     6,
       4,     1,     4,     5,     2,     3,     1,     2,     2,     1,
       1,     4,     4,     3,     6,     1,     1,     6,     7,     5,
       6,     2,     2,     1,     1,     2,     0,     1,     0,     1,
       1,     4,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     2,     5,     0,     1,     4,     7,
     146,     3,    21,     6,     4,     4,     4,     4,   146,    12,
       0,     0,   143,   144,   147,    10,     0,     0,     0,     0,
      13,    11,   141,   142,   145,     0,     4,    62,     0,     0,
       4,    71,     0,    19,     4,     4,     0,     4,    23,    22,
      24,    25,     4,     4,     0,    60,     4,     0,     4,    64,
      69,    20,     0,     0,    14,     0,     0,     0,     4,    58,
       0,     0,     0,     4,   139,   136,     0,   135,     0,     0,
       4,    67,     8,     0,    18,     4,    16,     4,    37,    38,
      73,    35,    36,     4,     4,     4,     0,    33,    56,     0,
      61,    63,     0,   133,   129,   130,     0,   104,   140,   137,
       0,    66,     0,     9,    70,    72,     7,     0,     0,     0,
       4,     0,     0,     0,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     4,    57,    59,   128,
     132,     4,     4,     4,    52,     0,     0,    73,     4,    87,
       0,     0,    33,     0,    88,    89,    90,     0,     0,   102,
     105,     0,     0,     0,   121,     0,   138,    65,    68,     0,
      17,    31,     0,    52,    39,     0,     0,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,     0,     0,    54,    91,    53,   100,   101,     4,
      92,    94,    95,    79,    80,     4,     4,     4,     4,     4,
       4,    93,    96,   103,   106,    99,    98,     4,   126,   124,
      97,    15,    28,    30,     4,     0,     0,    74,    44,    45,
      48,    49,    46,    47,    41,    40,    42,    43,     0,    75,
     134,   131,    87,     0,   107,   108,   109,   110,   111,   116,
       0,     4,     0,     0,     0,     0,     0,     0,     0,     0,
       4,   127,    27,     0,    50,     0,    76,     4,   120,     0,
     117,     0,     0,    86,    82,    83,    84,    85,    33,    81,
     122,   125,     0,    32,     4,    52,     0,     0,    55,   123,
      29,   148,     0,   119,   112,    35,   152,     0,   149,   150,
      51,   113,   114,   115,     0,     4,    34,     4,   118,     0,
       0,   153,   151
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,    10,   114,     2,    18,    19,    85,    46,
       3,    75,   194,   195,   196,    37,    70,    71,    20,    41,
      82,    83,    21,    97,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   250,   304,   163,   164,   165,   218,
     219,   105,   106,    77,    78,    22,    23,    24,    25,   297,
     298,   299
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -240
static const yytype_int16 yypact[] =
{
     -11,   -20,    34,     9,  -240,    13,    37,  -240,   -20,    13,
       1,  -240,  -240,  -240,   -20,   -20,   -20,   -20,     1,  -240,
       9,     9,  -240,  -240,    72,  -240,     2,    47,    19,    18,
    -240,  -240,  -240,  -240,  -240,   188,   -20,  -240,    39,   452,
     -20,  -240,     3,  -240,   -20,   -20,     9,   -20,  -240,  -240,
    -240,  -240,   -20,   -20,    33,    56,   -20,   254,   -20,    49,
      65,  -240,    66,    38,  -240,    60,   446,   446,   -20,  -240,
       9,    85,   517,   -20,  -240,  -240,     9,  -240,   115,   446,
     -20,  -240,     9,    87,  -240,     9,  -240,   -20,  -240,  -240,
      67,  -240,  -240,   -20,   -20,   -20,   378,  -240,   461,   446,
      56,  -240,   127,  -240,  -240,  -240,   -23,   489,  -240,  -240,
       9,   461,   446,    65,  -240,  -240,    30,   104,    38,   528,
     -20,   446,   446,   446,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,   127,   -20,   461,  -240,  -240,
    -240,   -20,   -20,   -20,   446,     9,     9,     5,   -20,   461,
       9,     9,   276,    97,  -240,  -240,  -240,     9,     9,  -240,
     489,   106,     9,     9,   136,     9,  -240,   461,  -240,     9,
    -240,   574,   -18,   446,    52,   401,   461,   112,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,  -240,
     125,   551,   604,   586,   461,  -240,   117,  -240,  -240,   -20,
    -240,  -240,  -240,  -240,  -240,   -20,   -20,   -20,   -20,   -20,
     -20,  -240,  -240,  -240,  -240,  -240,  -240,   -20,  -240,   145,
    -240,  -240,  -240,   574,   -20,   124,   127,  -240,   336,   336,
     336,   336,   336,   336,   194,   194,    52,    52,   420,   129,
    -240,  -240,   327,     9,  -240,   327,  -240,  -240,  -240,  -240,
       9,   -20,   446,   446,   446,   446,   446,   446,   446,    -2,
     -20,  -240,  -240,   562,  -240,   121,  -240,   -20,  -240,   446,
    -240,   446,   446,   461,   117,   117,   117,   117,   126,   117,
    -240,  -240,    -2,   574,   -20,   446,   327,   352,   461,  -240,
    -240,   616,   130,  -240,   446,   135,   461,   132,   128,  -240,
    -240,   461,  -240,  -240,   139,   -20,  -240,   -20,  -240,   446,
     616,   461,  -240
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -240,    21,    -8,   160,  -240,  -240,  -240,   171,  -240,   -50,
    -240,    -6,   161,  -170,  -112,   -43,  -240,  -240,  -102,   -49,
    -240,  -240,   -91,   -33,  -240,  -192,  -189,    -1,     4,  -240,
      35,  -240,  -240,   -38,  -240,  -240,  -240,  -239,  -240,   -26,
    -240,  -181,    75,   165,  -169,  -240,   181,  -240,   192,  -240,
    -240,   -95
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -79
static const yytype_int16 yytable[] =
{
      13,   246,   222,   225,   247,   150,    26,    27,    28,    29,
     241,    81,    69,    86,   199,   142,   151,    14,     1,    76,
     281,    15,   140,    16,     9,   141,     4,   223,    55,    54,
     224,    17,    60,    59,     7,    35,    62,    63,    61,    65,
     110,     9,     9,   281,    66,    67,    36,    73,    72,   120,
      79,    42,    39,    43,   262,     4,     8,   138,   150,    11,
      99,    44,    45,    40,   168,   107,   104,     9,   170,   151,
      12,    42,   112,    43,   152,    -5,    11,   117,     9,   119,
      38,    44,   241,    56,    68,   121,   122,   123,    14,    35,
     177,     9,    15,   134,    16,   136,   139,     9,    39,     9,
      80,    84,   302,     9,    87,   303,   116,   205,   206,   207,
     208,   120,   173,   104,   290,   292,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   152,   190,   189,
     101,     9,   115,   191,   192,   193,   -78,   -78,   -78,   -78,
     200,   274,   275,   276,   277,   209,   279,    47,   210,   169,
      48,    49,    50,    51,   217,   249,   214,   227,   239,   152,
     152,     4,     8,   260,    73,   251,     9,     9,    52,   264,
     284,     9,     9,   267,   -78,   300,   307,   -78,     9,     9,
      32,    33,   306,     9,     9,   104,     9,   305,    73,    30,
       9,   252,   248,   261,   172,   213,   243,   253,   254,   255,
     256,   257,   258,    57,   268,    34,    64,   270,    47,   259,
      31,    48,    49,    50,    51,   312,   263,    74,     0,     0,
     265,   280,     0,     0,   278,     0,     0,    96,    98,    52,
     100,     0,   132,   133,     0,   134,   108,   136,   109,    53,
     111,     0,   113,   272,   289,   118,     0,     0,   293,     0,
       0,     0,   282,     0,     0,     0,     0,   104,     0,   285,
     137,   152,     0,     0,     9,     0,   308,     0,   149,     0,
     166,     9,     0,   167,    47,     0,   291,    48,    49,    50,
      51,     0,   174,   175,   176,     0,   -77,   -77,   -77,   -77,
     203,   204,     0,     0,     0,    52,     0,   309,    56,   310,
       4,     8,     0,    73,     0,   197,   198,     0,     9,     0,
     201,   202,     0,     0,     0,     0,     0,   211,   212,     0,
       0,   149,   215,   216,   -77,   220,     0,   -77,     0,   221,
     124,   125,   126,   127,   128,   129,     0,     0,     0,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
       0,     0,     0,   242,   245,   124,   125,   126,   127,   128,
     129,     0,     0,   130,   131,   132,   133,     0,   134,     0,
     136,     0,   130,   131,   132,   133,    73,   134,     0,   136,
       0,   124,   125,   126,   127,   128,   129,     0,   130,   131,
     132,   133,     0,   134,     0,   136,     0,     0,     4,     8,
       0,     0,     0,   269,   124,   125,   126,   127,   128,   129,
     271,     0,     0,   273,   130,   131,   132,   133,   176,   134,
     135,   136,     0,   124,   125,   126,   127,   128,   129,     0,
     286,     0,   287,   288,     0,     0,     0,   130,   131,   132,
     133,     0,   134,   226,   136,     0,     0,   294,     0,     0,
       0,     0,   296,     0,     0,   301,   130,   131,   132,   133,
       0,   134,   266,   136,   124,   125,   126,   127,   128,   129,
     311,   296,    47,    88,    89,    48,    49,    50,    51,    90,
      91,    92,     0,    93,     0,     0,     0,    94,     0,     0,
      95,     0,     0,    52,     0,     0,     0,   130,   131,   132,
     133,     0,   134,    58,   136,    14,   142,     0,   143,     0,
     144,    16,     0,     0,     0,     0,    88,    89,     0,     0,
     145,   146,   147,    91,    92,     0,    93,     0,     0,     0,
      94,     0,     0,    95,     0,     0,   148,    47,    73,     0,
      48,    49,    50,    51,     0,     0,     0,     0,    47,     0,
     102,    48,    49,    50,    51,     0,     0,     0,    52,     0,
       0,   102,   103,     0,     0,     0,     0,     0,     0,    52,
       0,    47,     0,   171,    48,    49,    50,    51,     0,     0,
       0,     0,    47,     0,   102,    48,    49,    50,    51,     0,
       0,     0,    52,     0,    47,   102,   240,    48,    49,    50,
      51,     0,     0,    52,     0,     0,     0,   283,     0,     0,
       0,     0,     0,    88,    89,    52,     0,     0,    56,   147,
      91,    92,     0,    93,     0,     0,     0,    94,     0,     0,
      95,    88,    89,   244,     0,    73,     0,   147,    91,    92,
       0,    93,     0,    88,    89,    94,     0,     0,    95,    90,
     295,    92,     0,    93,     0,     0,     0,    94,     0,     0,
      95
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-240)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       8,   193,   171,   173,   193,   107,    14,    15,    16,    17,
     191,    60,    55,    63,     9,    17,   107,    16,    29,    57,
     259,    20,    45,    22,     3,    48,    46,    45,    36,    35,
      48,    30,    40,    39,     0,    33,    44,    45,    35,    47,
      78,    20,    21,   282,    52,    53,    44,    49,    56,    44,
      58,    33,    33,    35,   223,    46,    47,   100,   160,    46,
      68,    43,    44,    44,   113,    73,    72,    46,   118,   160,
      33,    33,    80,    35,   107,    45,    46,    85,    57,    87,
      33,    43,   263,    44,    51,    93,    94,    95,    16,    33,
     123,    70,    20,    41,    22,    43,   102,    76,    33,    78,
      51,    35,   294,    82,    44,   294,    85,    10,    11,    12,
      13,    44,   120,   119,   283,   285,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   160,   136,   135,
      45,   110,    45,   141,   142,   143,    10,    11,    12,    13,
     148,   253,   254,   255,   256,    48,   258,    20,    51,    45,
      23,    24,    25,    26,    18,   193,    50,    45,    33,   192,
     193,    46,    47,    18,    49,    48,   145,   146,    41,    45,
      49,   150,   151,    44,    48,    45,    48,    51,   157,   158,
      20,    21,    50,   162,   163,   191,   165,    52,    49,    18,
     169,   199,   193,   219,   119,   160,   192,   205,   206,   207,
     208,   209,   210,    38,   242,    24,    46,   245,    20,   217,
      18,    23,    24,    25,    26,   310,   224,    57,    -1,    -1,
     226,   259,    -1,    -1,   257,    -1,    -1,    66,    67,    41,
      70,    -1,    38,    39,    -1,    41,    76,    43,    78,    51,
      79,    -1,    82,   251,   282,    85,    -1,    -1,   286,    -1,
      -1,    -1,   260,    -1,    -1,    -1,    -1,   263,    -1,   267,
      99,   294,    -1,    -1,   243,    -1,   304,    -1,   107,    -1,
     110,   250,    -1,   112,    20,    -1,   284,    23,    24,    25,
      26,    -1,   121,   122,   123,    -1,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    41,    -1,   305,    44,   307,
      46,    47,    -1,    49,    -1,   145,   146,    -1,   287,    -1,
     150,   151,    -1,    -1,    -1,    -1,    -1,   157,   158,    -1,
      -1,   160,   162,   163,    48,   165,    -1,    51,    -1,   169,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    -1,   192,   193,     3,     4,     5,     6,     7,
       8,    -1,    -1,    36,    37,    38,    39,    -1,    41,    -1,
      43,    -1,    36,    37,    38,    39,    49,    41,    -1,    43,
      -1,     3,     4,     5,     6,     7,     8,    -1,    36,    37,
      38,    39,    -1,    41,    -1,    43,    -1,    -1,    46,    47,
      -1,    -1,    -1,   243,     3,     4,     5,     6,     7,     8,
     250,    -1,    -1,   252,    36,    37,    38,    39,   257,    41,
      42,    43,    -1,     3,     4,     5,     6,     7,     8,    -1,
     269,    -1,   271,   272,    -1,    -1,    -1,    36,    37,    38,
      39,    -1,    41,    42,    43,    -1,    -1,   287,    -1,    -1,
      -1,    -1,   291,    -1,    -1,   294,    36,    37,    38,    39,
      -1,    41,    42,    43,     3,     4,     5,     6,     7,     8,
     309,   310,    20,    27,    28,    23,    24,    25,    26,    33,
      34,    35,    -1,    37,    -1,    -1,    -1,    41,    -1,    -1,
      44,    -1,    -1,    41,    -1,    -1,    -1,    36,    37,    38,
      39,    -1,    41,    51,    43,    16,    17,    -1,    19,    -1,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,
      31,    32,    33,    34,    35,    -1,    37,    -1,    -1,    -1,
      41,    -1,    -1,    44,    -1,    -1,    47,    20,    49,    -1,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    20,    -1,
      33,    23,    24,    25,    26,    -1,    -1,    -1,    41,    -1,
      -1,    33,    45,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    20,    -1,    45,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    20,    -1,    33,    23,    24,    25,    26,    -1,
      -1,    -1,    41,    -1,    20,    33,    45,    23,    24,    25,
      26,    -1,    -1,    41,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    27,    28,    41,    -1,    -1,    44,    33,
      34,    35,    -1,    37,    -1,    -1,    -1,    41,    -1,    -1,
      44,    27,    28,    47,    -1,    49,    -1,    33,    34,    35,
      -1,    37,    -1,    27,    28,    41,    -1,    -1,    44,    33,
      34,    35,    -1,    37,    -1,    -1,    -1,    41,    -1,    -1,
      44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    58,    63,    46,    54,    55,     0,    47,    54,
      56,    46,    33,    55,    16,    20,    22,    30,    59,    60,
      71,    75,    98,    99,   100,   101,    55,    55,    55,    55,
      60,   101,    56,    56,    99,    33,    44,    68,    33,    33,
      44,    72,    33,    35,    43,    44,    62,    20,    23,    24,
      25,    26,    41,    51,    64,    55,    44,    96,    51,    64,
      55,    35,    55,    55,    56,    55,    55,    55,    51,    68,
      69,    70,    55,    49,    56,    64,    86,    96,    97,    55,
      51,    72,    73,    74,    35,    61,    62,    44,    27,    28,
      33,    34,    35,    37,    41,    44,    65,    76,    65,    55,
      56,    45,    33,    45,    64,    94,    95,    55,    56,    56,
      86,    65,    55,    56,    57,    45,    54,    55,    56,    55,
      44,    55,    55,    55,     3,     4,     5,     6,     7,     8,
      36,    37,    38,    39,    41,    42,    43,    65,    68,    64,
      45,    48,    17,    19,    21,    31,    32,    33,    47,    65,
      71,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    89,    90,    91,    56,    65,    72,    45,
      62,    45,    95,    55,    65,    65,    65,    76,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    64,
      55,    55,    55,    55,    65,    66,    67,    56,    56,     9,
      55,    56,    56,    14,    15,    10,    11,    12,    13,    48,
      51,    56,    56,    83,    50,    56,    56,    18,    92,    93,
      56,    56,    97,    45,    48,    66,    42,    45,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    33,
      45,    94,    65,    81,    47,    65,    78,    79,    80,    86,
      87,    48,    55,    55,    55,    55,    55,    55,    55,    55,
      18,    92,    97,    55,    45,    64,    42,    44,    86,    56,
      86,    56,    55,    65,    67,    67,    67,    67,    76,    67,
      86,    90,    55,    45,    49,    55,    65,    65,    65,    86,
      97,    55,    66,    86,    56,    34,    65,   102,   103,   104,
      45,    65,    78,    79,    88,    52,    50,    48,    86,    55,
      55,    65,   104
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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
  if (yypact_value_is_default (yyn))
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
/* Line 1792 of yacc.c  */
#line 147 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    {(yyval.String) = "\n";}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 148 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    {(yyval.String) = (yyvsp[(1) - (2)].String);}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 151 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.String) = 0; }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 152 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    {(yyval.String) = (yyvsp[(1) - (1)].String);}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 155 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    {(yyval.String) = ";";}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 156 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    {(yyval.String) = (yyvsp[(1) - (1)].String);}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 159 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.String) = 0; }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 160 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    {(yyval.String) = (yyvsp[(1) - (1)].String);}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 164 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { root = create_program((yyvsp[(1) - (3)].package_value), (yyvsp[(3) - (3)].highest_decl_list_value)); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 165 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { root = create_program_with_imports((yyvsp[(1) - (4)].package_value), (yyvsp[(3) - (4)].import_decl_list_value), (yyvsp[(4) - (4)].highest_decl_list_value)); }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 168 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.import_decl_list_value) = create_import_decl_list((yyvsp[(1) - (1)].import_one_of_list_value));}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 169 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.import_decl_list_value) = add_to_import_decl_list((yyvsp[(1) - (2)].import_decl_list_value), (yyvsp[(2) - (2)].import_one_of_list_value));}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 172 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.import_one_of_list_value) = create_import_decl((yyvsp[(3) - (4)].import_value)); }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 173 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.import_one_of_list_value) = create_import_decl_one_of_list_list((yyvsp[(5) - (8)].import_list_value)); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 177 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.import_list_value) = create_import_list((yyvsp[(1) - (1)].import_value)); }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 178 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.import_list_value) = add_to_import_list((yyvsp[(1) - (3)].import_list_value), (yyvsp[(3) - (3)].import_value));}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 181 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.import_value) = create_import((yyvsp[(3) - (3)].String)); }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 182 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.import_value) = create_import((yyvsp[(1) - (1)].String)); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 183 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.import_value) = create_import_with_alias((yyvsp[(1) - (2)].Id), (yyvsp[(2) - (2)].String)); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 186 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.package_value) = create_package_decl((yyvsp[(3) - (3)].Id)); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 190 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.complex_data_value) = create_complex_data_type(int_t); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 191 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.complex_data_value) = create_complex_data_type(bool_t); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 192 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.complex_data_value) = create_complex_data_type(byte_t); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 193 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.complex_data_value) = create_complex_data_type(string_t); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 194 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.complex_data_value) = create_array_type((yyvsp[(3) - (5)].node_value), (yyvsp[(5) - (5)].complex_data_value)); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 195 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.complex_data_value) = create_function_type(create_prototype(0, (yyvsp[(5) - (7)].param_list_value), (yyvsp[(7) - (7)].return_value))); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 196 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.complex_data_value) = create_function_type(create_prototype(0, 0, (yyvsp[(6) - (6)].return_value))); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 197 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.complex_data_value) = create_function_type(create_prototype(0, (yyvsp[(5) - (9)].param_list_value), (yyvsp[(9) - (9)].return_value))); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 198 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.complex_data_value) = create_function_type(create_prototype(0, (yyvsp[(5) - (6)].param_list_value), 0)); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 199 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.complex_data_value) = create_function_type(create_prototype(0, 0, 0)); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 200 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.complex_data_value) = create_function_type(create_prototype(0, (yyvsp[(5) - (8)].param_list_value), 0)); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 203 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = (yyvsp[(1) - (1)].node_value); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 204 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_array_lit((yyvsp[(5) - (9)].complex_data_value), (yyvsp[(3) - (9)].node_value), (yyvsp[(8) - (9)].array_element_list_value)); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 205 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_int_node((yyvsp[(1) - (1)].Int_val)); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 206 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_string_node((yyvsp[(1) - (1)].String)); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 207 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_boolean_node(1); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 208 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_boolean_node(0); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 209 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_oper_node(unary_minus, (yyvsp[(3) - (3)].node_value), 0); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 210 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_oper_node(minus, (yyvsp[(1) - (4)].node_value), (yyvsp[(4) - (4)].node_value)); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 211 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_oper_node(plus, (yyvsp[(1) - (4)].node_value), (yyvsp[(4) - (4)].node_value)); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 212 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_oper_node(mul, (yyvsp[(1) - (4)].node_value), (yyvsp[(4) - (4)].node_value)); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 213 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_oper_node(divide, (yyvsp[(1) - (4)].node_value), (yyvsp[(4) - (4)].node_value)); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 214 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_oper_node(less, (yyvsp[(1) - (4)].node_value), (yyvsp[(4) - (4)].node_value)); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 215 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_oper_node(greater, (yyvsp[(1) - (4)].node_value), (yyvsp[(4) - (4)].node_value)); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 216 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_oper_node(greater_or_equal, (yyvsp[(1) - (4)].node_value), (yyvsp[(4) - (4)].node_value)); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 217 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_oper_node(less_or_equal, (yyvsp[(1) - (4)].node_value), (yyvsp[(4) - (4)].node_value)); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 218 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_oper_node(equal, (yyvsp[(1) - (4)].node_value), (yyvsp[(4) - (4)].node_value)); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 219 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_oper_node(not_equal, (yyvsp[(1) - (4)].node_value), (yyvsp[(4) - (4)].node_value)); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 220 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_func_call((yyvsp[(1) - (5)].Id), (yyvsp[(4) - (5)].node_list_value)); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 221 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    {(yyval.node_value) = create_method_use_in_package_node((yyvsp[(1) - (8)].node_value), (yyvsp[(4) - (8)].Id), (yyvsp[(7) - (8)].node_list_value)); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 224 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_list_value) = 0; }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 225 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_list_value) = (yyvsp[(1) - (1)].node_list_value); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 228 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_list_value) = create_node_list((yyvsp[(1) - (1)].node_value));  }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 229 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_list_value) = add_to_node_list((yyvsp[(1) - (4)].node_list_value), (yyvsp[(4) - (4)].node_value));  }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 233 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.decl_all_value) = create_all_decl(create_id((yyvsp[(1) - (4)].Id)), (yyvsp[(4) - (4)].node_value), 0); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 234 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.decl_all_value) = create_all_decl(create_id((yyvsp[(1) - (5)].Id)), (yyvsp[(5) - (5)].node_value), (yyvsp[(2) - (5)].complex_data_value)); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 237 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.decl_all_list_value) = create_all_decl_list((yyvsp[(1) - (1)].decl_all_value)); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 238 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.decl_all_list_value) = add_to_all_decl_list((yyvsp[(1) - (3)].decl_all_list_value), (yyvsp[(3) - (3)].decl_all_value)); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 241 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.decl_all_list_value) = 0; }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 242 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.decl_all_list_value) = (yyvsp[(1) - (2)].decl_all_list_value); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 245 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_decl_stmt((yyvsp[(3) - (3)].decl_all_value), const_t); }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 246 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_decl_stmt_from_list((yyvsp[(5) - (6)].decl_all_list_value), const_t); }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 249 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.decl_all_value) = create_all_decl(create_id((yyvsp[(1) - (2)].Id)), 0, (yyvsp[(2) - (2)].complex_data_value)); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 250 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.decl_all_value) = create_all_decl(create_id((yyvsp[(1) - (5)].Id)), (yyvsp[(5) - (5)].node_value), (yyvsp[(2) - (5)].complex_data_value)); }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 251 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.decl_all_value) = create_all_decl(create_id((yyvsp[(1) - (4)].Id)), (yyvsp[(4) - (4)].node_value), 0); }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 254 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.decl_all_list_value) = create_all_decl_list((yyvsp[(1) - (1)].decl_all_value)); }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 255 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.decl_all_list_value) = add_to_all_decl_list((yyvsp[(1) - (3)].decl_all_list_value), (yyvsp[(3) - (3)].decl_all_value)); }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 258 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.decl_all_list_value) = 0; }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 259 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.decl_all_list_value) = (yyvsp[(1) - (2)].decl_all_list_value); }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 261 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_decl_stmt((yyvsp[(3) - (3)].decl_all_value), var_t); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 262 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_decl_stmt_from_list((yyvsp[(5) - (6)].decl_all_list_value), var_t); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 265 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_id_node((yyvsp[(1) - (1)].Id)); }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 266 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = (yyvsp[(3) - (4)].node_value); }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 267 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_id_use_in_package_node((yyvsp[(1) - (4)].node_value), (yyvsp[(4) - (4)].Id)); }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 268 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_value) = create_oper_node(array_indexing, (yyvsp[(1) - (5)].node_value), (yyvsp[(4) - (5)].node_value)); }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 271 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_list_value) = create_node_list((yyvsp[(1) - (1)].node_value));}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 272 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.node_list_value) = add_to_node_list((yyvsp[(1) - (4)].node_list_value), (yyvsp[(4) - (4)].node_value)); }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 275 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_inc_dec_stmt((yyvsp[(1) - (2)].node_value), inc_t); }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 276 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_inc_dec_stmt((yyvsp[(1) - (2)].node_value), dec_t); }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 279 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_assignment(simple_assignment_t, (yyvsp[(1) - (4)].node_list_value), (yyvsp[(4) - (4)].node_list_value)); }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 280 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_assignment(plus_assignment_t, (yyvsp[(1) - (4)].node_list_value), (yyvsp[(4) - (4)].node_list_value)); }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 281 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_assignment(minus_assignment_t, (yyvsp[(1) - (4)].node_list_value), (yyvsp[(4) - (4)].node_list_value)); }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 282 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_assignment(mul_assignment_t, (yyvsp[(1) - (4)].node_list_value), (yyvsp[(4) - (4)].node_list_value)); }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 283 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_assignment(div_assignment_t, (yyvsp[(1) - (4)].node_list_value), (yyvsp[(4) - (4)].node_list_value)); }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 286 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_short_decl(create_id((yyvsp[(1) - (4)].Id)), (yyvsp[(4) - (4)].node_value)); }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 289 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_node_stmt((yyvsp[(1) - (1)].node_value)); }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 290 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = (yyvsp[(1) - (1)].stmt_value); }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 291 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = (yyvsp[(1) - (1)].stmt_value); }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 292 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = (yyvsp[(1) - (1)].stmt_value); }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 295 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_return_stmt((yyvsp[(2) - (2)].node_list_value)); }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 298 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    {(yyval.stmt_value) = create_empty_stmt();}
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 299 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = (yyvsp[(1) - (2)].stmt_value); }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 300 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = (yyvsp[(1) - (2)].stmt_value); }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 301 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = (yyvsp[(1) - (2)].stmt_value); }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 302 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = (yyvsp[(1) - (2)].stmt_value); }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 303 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = (yyvsp[(1) - (2)].stmt_value); }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 304 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = (yyvsp[(1) - (2)].stmt_value); }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 305 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = (yyvsp[(1) - (2)].stmt_value); }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 306 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_break_stmt(); }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 307 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_continue_stmt(); }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 310 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_list_value) = create_stmt_list((yyvsp[(1) - (1)].stmt_value)); }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 311 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_list_value) = add_to_stmt_list((yyvsp[(1) - (2)].stmt_list_value), (yyvsp[(2) - (2)].stmt_value)); }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 314 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_list_value) = 0; }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 315 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_list_value) = (yyvsp[(1) - (1)].stmt_list_value); }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 318 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_block((yyvsp[(3) - (4)].stmt_list_value)); }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 321 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_empty_stmt(); }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 322 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_node_stmt((yyvsp[(1) - (1)].node_value)); }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 323 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = (yyvsp[(1) - (1)].stmt_value); }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 324 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = (yyvsp[(1) - (1)].stmt_value); }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 325 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = (yyvsp[(1) - (1)].stmt_value); }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 328 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_empty_stmt(); }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 329 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_node_stmt((yyvsp[(1) - (1)].node_value)); }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 330 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = (yyvsp[(1) - (1)].stmt_value); }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 331 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = (yyvsp[(1) - (1)].stmt_value); }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 334 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_empty_for_stmt((yyvsp[(3) - (3)].stmt_value)); }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 335 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_for_with_condition((yyvsp[(3) - (4)].node_value), (yyvsp[(4) - (4)].stmt_value)); }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 336 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_for_with_block_stmt((yyvsp[(3) - (8)].stmt_value), (yyvsp[(7) - (8)].stmt_value), (yyvsp[(5) - (8)].node_value), (yyvsp[(8) - (8)].stmt_value)); }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 339 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.if_stmt_block_value) = create_if_stmt_block((yyvsp[(3) - (6)].stmt_value), (yyvsp[(5) - (6)].node_value), (yyvsp[(6) - (6)].stmt_value)); }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 340 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.if_stmt_block_value) = create_if_stmt_block(0, (yyvsp[(3) - (4)].node_value), (yyvsp[(4) - (4)].stmt_value)); }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 343 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_if_stmt((yyvsp[(1) - (1)].if_stmt_block_value), 0, 0); }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 344 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_if_stmt((yyvsp[(1) - (4)].if_stmt_block_value), 0, (yyvsp[(4) - (4)].stmt_value)); }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 345 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_if_stmt((yyvsp[(1) - (5)].if_stmt_block_value), (yyvsp[(2) - (5)].else_if_stmt_list_value), (yyvsp[(5) - (5)].stmt_value)); }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 346 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.stmt_value) = create_if_stmt((yyvsp[(1) - (2)].if_stmt_block_value), (yyvsp[(2) - (2)].else_if_stmt_list_value), 0); }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 349 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.if_stmt_block_value) = (yyvsp[(3) - (3)].if_stmt_block_value); }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 352 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.else_if_stmt_list_value) = create_else_if_stmt_list((yyvsp[(1) - (1)].if_stmt_block_value)); }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 353 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.else_if_stmt_list_value) = add_to_else_if_stmt_list((yyvsp[(1) - (2)].else_if_stmt_list_value), (yyvsp[(2) - (2)].if_stmt_block_value)); }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 356 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.param_value) = create_param((yyvsp[(2) - (2)].complex_data_value), create_id((yyvsp[(1) - (2)].Id))); }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 357 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.param_value) = create_param((yyvsp[(1) - (1)].complex_data_value), 0); }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 360 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.param_list_value) = create_param_list((yyvsp[(1) - (1)].param_value)); }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 361 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.param_list_value) = add_to_param_list((yyvsp[(1) - (4)].param_list_value), (yyvsp[(4) - (4)].param_value)); }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 364 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.param_list_value) = (yyvsp[(3) - (4)].param_list_value); }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 365 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.param_list_value) = 0; }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 366 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.param_list_value) = (yyvsp[(3) - (6)].param_list_value); }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 369 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.return_value) = create_return_with_values((yyvsp[(1) - (1)].param_list_value)); }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 370 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.return_value) = create_type_of_return((yyvsp[(1) - (1)].complex_data_value)); }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 373 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.highest_decl_value) = create_func_decl(create_prototype((yyvsp[(3) - (6)].Id), (yyvsp[(4) - (6)].param_list_value), (yyvsp[(5) - (6)].return_value)), 0); }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 374 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.highest_decl_value) = create_func_decl(create_prototype((yyvsp[(3) - (7)].Id), (yyvsp[(4) - (7)].param_list_value), (yyvsp[(5) - (7)].return_value)), (yyvsp[(6) - (7)].stmt_value)); }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 375 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.highest_decl_value) = create_func_decl(create_prototype((yyvsp[(3) - (5)].Id), (yyvsp[(4) - (5)].param_list_value), 0), 0); }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 376 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.highest_decl_value) = create_func_decl(create_prototype((yyvsp[(3) - (6)].Id), (yyvsp[(4) - (6)].param_list_value), 0), (yyvsp[(5) - (6)].stmt_value)); }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 379 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.highest_decl_value) = create_highest_declaration((yyvsp[(1) - (2)].stmt_value)->decl_stmt_field); }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 380 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.highest_decl_value) = create_highest_declaration((yyvsp[(1) - (2)].stmt_value)->decl_stmt_field); }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 381 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.highest_decl_value) = (yyvsp[(1) - (1)].highest_decl_value); }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 384 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.highest_decl_list_value) = create_highest_decl_list((yyvsp[(1) - (1)].highest_decl_value)); }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 385 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.highest_decl_list_value) = add_to_highest_decl_list((yyvsp[(1) - (2)].highest_decl_list_value), (yyvsp[(2) - (2)].highest_decl_value)); }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 388 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.highest_decl_list_value) = 0; }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 389 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.highest_decl_list_value) = (yyvsp[(1) - (1)].highest_decl_list_value); }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 392 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.array_element_list_value) = 0;  }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 393 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.array_element_list_value) = (yyvsp[(1) - (1)].array_element_list_value); }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 396 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.array_element_list_value) = create_array_element_list((yyvsp[(1) - (1)].array_element_value));  }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 397 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.array_element_list_value) = add_to_array_element_list((yyvsp[(1) - (4)].array_element_list_value), (yyvsp[(4) - (4)].array_element_value)); }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 400 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.array_element_value) = create_array_element((yyvsp[(1) - (1)].node_value)); }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 401 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"
    { (yyval.array_element_value) = create_array_indexed_element((yyvsp[(1) - (4)].Int_val), (yyvsp[(4) - (4)].node_value)); }
    break;


/* Line 1792 of yacc.c  */
#line 2690 "parser.tab.c"
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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 404 "C:\\Users\\astre\\Desktop\\final_repos\\parser.y"


