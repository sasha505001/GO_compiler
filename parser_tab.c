
/*  A Bison parser, made from c:\users\astre\desktop\bison_flex\b\parser.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	LESS	258
#define	GREATER	259
#define	EQUAL	260
#define	NOT_EQUAL	261
#define	GREATER_OR_EQUAL	262
#define	LESS_OR_EQUAL	263
#define	SHORT_EQUALS	264
#define	PLUS_ASSIGN	265
#define	MINUS_ASSIGN	266
#define	MULTIPLY_ASSIGN	267
#define	DIVISION_ASSIGN	268
#define	INC	269
#define	DEC	270
#define	CONST_KEYWORD	271
#define	IF_KEYWORD	272
#define	ELSE_KEYWORD	273
#define	FOR_KEYWORD	274
#define	FUNC_KEYWORD	275
#define	RETURN_KEYWORD	276
#define	VAR_KEYWORD	277
#define	BOOL_KEYWORD	278
#define	INT_KEYWORD	279
#define	BYTE_KEYWORD	280
#define	STRING_KEYWORD	281
#define	TRUE_KEYWORD	282
#define	FALSE_KEYWORD	283
#define	PACKAGE_KEYWORD	284
#define	IMPORT_KEYWORD	285
#define	BREAK_KEYWORD	286
#define	CONTINUE_KEYWORD	287
#define	ID	288
#define	INT	289
#define	STRING	290
#define	UMINUS	291

#line 1 "c:\users\astre\desktop\bison_flex\b\parser.y"


#include <stdio.h>
#include "create_tree_nodes.cpp"
#include "create_tree.h"
#inclide "create_tree.cpp"
extern struct program_struct* root;


#line 11 "c:\users\astre\desktop\bison_flex\b\parser.y"
typedef union {
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
} YYSTYPE;

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		306
#define	YYFLAG		-32768
#define	YYNTBASE	53

#define YYTRANSLATE(x) ((unsigned)(x) <= 291 ? yytranslate[x] : 103)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,    46,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,    44,
    45,    38,    36,    48,    37,    43,    39,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,    52,    47,     2,
    51,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    41,     2,    42,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    49,     2,    50,     2,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    40
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     5,     6,     8,    10,    12,    16,    21,    23,
    26,    30,    37,    39,    42,    47,    50,    54,    58,    60,
    62,    64,    66,    72,    80,    87,    97,   104,   110,   119,
   121,   131,   133,   135,   137,   139,   143,   148,   153,   158,
   163,   168,   173,   178,   183,   188,   193,   199,   208,   209,
   211,   213,   218,   223,   229,   231,   235,   236,   238,   242,
   249,   252,   258,   263,   265,   269,   270,   272,   276,   283,
   285,   290,   295,   301,   303,   308,   311,   314,   319,   324,
   329,   334,   339,   344,   346,   348,   350,   352,   356,   359,
   362,   365,   368,   370,   372,   374,   376,   379,   382,   384,
   387,   388,   390,   396,   398,   400,   402,   404,   406,   407,
   409,   411,   413,   417,   422,   431,   438,   443,   445,   450,
   456,   459,   463,   465,   468,   471,   473,   475,   479,   484,
   488,   495,   497,   499,   506,   513,   519,   525,   528,   531,
   533,   535,   538,   539,   541,   542,   544,   546,   551,   553
};

static const short yyrhs[] = {    46,
     0,    53,    46,     0,     0,    53,     0,    47,     0,    53,
     0,    61,    55,    99,     0,    61,    55,    57,    99,     0,
    58,     0,    57,    58,     0,    30,    54,    60,     0,    30,
    54,    44,    59,    45,    55,     0,    60,     0,    59,    60,
     0,    43,    54,    35,    55,     0,    35,    55,     0,    33,
    35,    55,     0,    29,    54,    33,     0,    24,     0,    23,
     0,    25,     0,    26,     0,    41,    54,    63,    42,    62,
     0,    20,    54,    44,    54,    93,    45,    95,     0,    20,
    54,    44,    54,    45,    95,     0,    20,    54,    44,    54,
    93,    48,    54,    45,    95,     0,    20,    54,    44,    54,
    93,    45,     0,    20,    54,    44,    54,    45,     0,    20,
    54,    44,    54,    93,    48,    54,    45,     0,    74,     0,
    41,    54,    63,    42,    62,    49,    54,   100,    50,     0,
    34,     0,    35,     0,    27,     0,    28,     0,    37,    54,
    63,     0,    63,    37,    54,    63,     0,    63,    36,    54,
    63,     0,    63,    38,    54,    63,     0,    63,    39,    54,
    63,     0,    63,     3,    54,    63,     0,    63,     4,    54,
    63,     0,    63,     7,    54,    63,     0,    63,     8,    54,
    63,     0,    63,     5,    54,    63,     0,    63,     6,    54,
    63,     0,    33,    44,    54,    64,    45,     0,    63,    43,
    54,    33,    44,    54,    64,    45,     0,     0,    65,     0,
    63,     0,    65,    48,    54,    63,     0,    33,    51,    54,
    63,     0,    33,    62,    51,    54,    63,     0,    66,     0,
    67,    55,    66,     0,     0,    67,     0,    16,    54,    66,
     0,    16,    54,    44,    54,    68,    45,     0,    33,    62,
     0,    33,    62,    51,    54,    63,     0,    33,    51,    54,
    63,     0,    70,     0,    71,    55,    70,     0,     0,    71,
     0,    22,    54,    70,     0,    22,    54,    44,    54,    72,
    45,     0,    33,     0,    44,    54,    74,    45,     0,    63,
    43,    54,    33,     0,    74,    41,    54,    63,    42,     0,
    74,     0,    75,    48,    54,    74,     0,    74,    14,     0,
    74,    15,     0,    75,    51,    54,    65,     0,    75,    10,
    54,    65,     0,    75,    11,    54,    65,     0,    75,    12,
    54,    65,     0,    75,    13,    54,    65,     0,    33,     9,
    54,    63,     0,    63,     0,    76,     0,    77,     0,    78,
     0,    21,    64,    55,     0,    47,    54,     0,    79,    55,
     0,    69,    55,     0,    73,    55,     0,    80,     0,    89,
     0,    87,     0,    84,     0,    31,    55,     0,    32,    55,
     0,    81,     0,    82,    81,     0,     0,    82,     0,    49,
    54,    83,    50,    55,     0,    47,     0,    63,     0,    76,
     0,    77,     0,    78,     0,     0,    63,     0,    76,     0,
    77,     0,    19,    54,    84,     0,    19,    54,    63,    84,
     0,    19,    54,    85,    55,    63,    55,    86,    84,     0,
    17,    54,    79,    55,    63,    84,     0,    17,    54,    63,
    84,     0,    88,     0,    88,    18,    54,    84,     0,    88,
    91,    18,    54,    84,     0,    88,    91,     0,    18,    54,
    88,     0,    90,     0,    91,    90,     0,    33,    62,     0,
    62,     0,    92,     0,    93,    55,    92,     0,    44,    54,
    93,    45,     0,    44,    54,    45,     0,    44,    54,    93,
    48,    54,    45,     0,    94,     0,    62,     0,    20,    54,
    33,    94,    95,    55,     0,    20,    54,    33,    94,    95,
    84,     0,    20,    54,    33,    94,    55,     0,    20,    54,
    33,    94,    84,     0,    69,    55,     0,    73,    55,     0,
    96,     0,    97,     0,    98,    97,     0,     0,    98,     0,
     0,   101,     0,   102,     0,   101,    48,    54,   102,     0,
    63,     0,    34,    52,    54,    63,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   145,   146,   149,   150,   153,   154,   158,   159,   162,   163,
   166,   167,   171,   172,   175,   176,   177,   180,   184,   185,
   186,   187,   188,   189,   190,   191,   192,   193,   194,   197,
   198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
   208,   209,   210,   211,   212,   213,   214,   215,   218,   219,
   222,   223,   227,   228,   231,   232,   235,   236,   239,   240,
   243,   244,   245,   248,   249,   252,   253,   255,   256,   261,
   262,   263,   264,   267,   268,   272,   273,   276,   277,   278,
   279,   280,   283,   286,   287,   288,   289,   292,   295,   296,
   297,   298,   299,   300,   301,   302,   303,   304,   307,   308,
   311,   312,   315,   318,   319,   320,   321,   322,   325,   326,
   327,   328,   331,   332,   333,   336,   337,   340,   341,   342,
   343,   346,   349,   350,   353,   354,   357,   358,   361,   362,
   363,   366,   367,   370,   371,   372,   373,   376,   377,   378,
   381,   382,   385,   386,   389,   390,   393,   394,   397,   398
};

static const char * const yytname[] = {   "$","error","$undefined.","LESS","GREATER",
"EQUAL","NOT_EQUAL","GREATER_OR_EQUAL","LESS_OR_EQUAL","SHORT_EQUALS","PLUS_ASSIGN",
"MINUS_ASSIGN","MULTIPLY_ASSIGN","DIVISION_ASSIGN","INC","DEC","CONST_KEYWORD",
"IF_KEYWORD","ELSE_KEYWORD","FOR_KEYWORD","FUNC_KEYWORD","RETURN_KEYWORD","VAR_KEYWORD",
"BOOL_KEYWORD","INT_KEYWORD","BYTE_KEYWORD","STRING_KEYWORD","TRUE_KEYWORD",
"FALSE_KEYWORD","PACKAGE_KEYWORD","IMPORT_KEYWORD","BREAK_KEYWORD","CONTINUE_KEYWORD",
"ID","INT","STRING","'+'","'-'","'*'","'/'","UMINUS","'['","']'","'.'","'('",
"')'","'\\n'","';'","','","'{'","'}'","'='","':'","many_line_break","empty_or_many_line_break",
"one_similicon_or_many_line_break","program","import_decl_list","import_one_of_list",
"import_list","import_v","package_v","complex_data","expr","expr_list","expr_list_not_empty",
"const_v","const_list_not_empty","const_list","const_decl","var_v","var_list_not_empty",
"var_list","var_decl","l_value","l_value_list_not_empty","inc_dec_stmt","assign",
"short_var_decl","simple_stmt_not_empty","return_stmt","stmt","stmt_list_not_empty",
"stmt_list","body","for_stmt_init_stmt","for_stmt_post_stmt","for_stmt","if_start_block",
"if_stmt","else_if_stmt","else_if_stmt_list","param_decl","param_list","params",
"return_v","func_decl","highest_decl","highest_decl_list_not_empty","highest_decl_list",
"array_element_list","array_element_list_not_empty","array_element_v",""
};
#endif

static const short yyr1[] = {     0,
    53,    53,    54,    54,    55,    55,    56,    56,    57,    57,
    58,    58,    59,    59,    60,    60,    60,    61,    62,    62,
    62,    62,    62,    62,    62,    62,    62,    62,    62,    63,
    63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
    63,    63,    63,    63,    63,    63,    63,    63,    64,    64,
    65,    65,    66,    66,    67,    67,    68,    68,    69,    69,
    70,    70,    70,    71,    71,    72,    72,    73,    73,    74,
    74,    74,    74,    75,    75,    76,    76,    77,    77,    77,
    77,    77,    78,    79,    79,    79,    79,    80,    81,    81,
    81,    81,    81,    81,    81,    81,    81,    81,    82,    82,
    83,    83,    84,    85,    85,    85,    85,    85,    86,    86,
    86,    86,    87,    87,    87,    88,    88,    89,    89,    89,
    89,    90,    91,    91,    92,    92,    93,    93,    94,    94,
    94,    95,    95,    96,    96,    96,    96,    97,    97,    97,
    98,    98,    99,    99,   100,   100,   101,   101,   102,   102
};

static const short yyr2[] = {     0,
     1,     2,     0,     1,     1,     1,     3,     4,     1,     2,
     3,     6,     1,     2,     4,     2,     3,     3,     1,     1,
     1,     1,     5,     7,     6,     9,     6,     5,     8,     1,
     9,     1,     1,     1,     1,     3,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     4,     5,     8,     0,     1,
     1,     4,     4,     5,     1,     3,     0,     1,     3,     6,
     2,     5,     4,     1,     3,     0,     1,     3,     6,     1,
     4,     4,     5,     1,     4,     2,     2,     4,     4,     4,
     4,     4,     4,     1,     1,     1,     1,     3,     2,     2,
     2,     2,     1,     1,     1,     1,     2,     2,     1,     2,
     0,     1,     5,     1,     1,     1,     1,     1,     0,     1,
     1,     1,     3,     4,     8,     6,     4,     1,     4,     5,
     2,     3,     1,     2,     2,     1,     1,     3,     4,     3,
     6,     1,     1,     6,     6,     5,     5,     2,     2,     1,
     1,     2,     0,     1,     0,     1,     1,     4,     1,     4
};

static const short yydefact[] = {     0,
     3,     0,     1,     4,     0,     5,     6,   143,     2,    18,
     3,     3,     3,     3,   143,     9,     0,     0,   140,   141,
   144,     7,     0,     0,     0,     0,    10,     8,   138,   139,
   142,     0,     3,    59,     0,     0,     3,    68,     0,     0,
     3,     0,    11,     3,    20,    19,    21,    22,     3,     3,
     0,    57,     3,     0,     3,    61,    66,     0,    16,     0,
     0,    13,     0,     0,     0,     3,    55,    58,     0,     0,
     3,   136,   133,   137,   132,     0,     0,     3,    64,    67,
     0,    17,     0,     0,    14,     3,    34,    35,    70,    32,
    33,     3,     3,     3,     0,    30,    53,     0,     0,    60,
     0,   130,   126,   127,     0,   101,   134,   135,    63,     0,
     0,    69,    15,    12,     0,     3,     0,     0,     0,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
     3,     3,    54,    56,   125,   129,     3,     0,     3,     3,
    49,     0,     0,    70,     3,    84,     0,     0,    30,     0,
    85,    86,    87,     0,    93,    99,   102,     0,    96,    95,
   118,    94,    62,    65,    28,     0,    49,    36,     0,     0,
    30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    23,     0,     0,     0,   128,     0,     0,    51,     0,
    50,    97,    98,     3,    89,    91,    92,    76,    77,     3,
     3,     3,     3,     3,     3,    90,   100,     0,     3,   123,
   121,    25,    27,     3,     0,     0,    71,    41,    42,    45,
    46,    43,    44,    38,    37,    39,    40,    72,     0,   131,
    84,     0,   104,   105,   106,   107,   108,   113,     0,    88,
     3,     0,     0,     0,     0,     0,     0,     0,   103,     0,
     3,   124,    24,     0,    47,     0,     3,    73,   117,     0,
   114,     0,     0,    83,    79,    80,    81,    82,    30,    78,
   119,   122,     0,    29,     3,    49,     0,     0,    52,   120,
    26,   145,     0,   116,   109,    32,   149,     0,   146,   147,
    48,   110,   111,   112,     0,     3,    31,     3,   115,     0,
     0,   150,   148,     0,     0,     0
};

static const short yydefgoto[] = {     4,
     5,   138,   304,    15,    16,    61,    43,     2,    73,   189,
   190,   191,    34,    68,    69,    17,    38,    80,    81,    18,
    96,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   239,   295,   160,   161,   162,   210,   211,   104,   105,
    75,    76,    19,    20,    21,    22,   288,   289,   290
};

static const short yypact[] = {    23,
   -27,    -6,-32768,    -9,    33,-32768,    -9,    49,-32768,-32768,
   -27,   -27,   -27,   -27,    49,-32768,    -6,    -6,-32768,-32768,
    75,-32768,   -15,    35,   -10,    10,-32768,-32768,-32768,-32768,
-32768,   122,   -27,-32768,    34,   218,   -27,-32768,    45,    -6,
   -27,   -19,-32768,   -27,-32768,-32768,-32768,-32768,   -27,   -27,
    37,    52,   -27,   487,   -27,    41,    60,    -6,-32768,    61,
    92,-32768,    55,   488,   488,   -27,-32768,    -6,    62,   494,
   -27,-32768,-32768,-32768,-32768,   206,   488,   -27,-32768,    -6,
    79,-32768,    -6,    -6,-32768,   -27,-32768,-32768,    56,-32768,
-32768,   -27,   -27,   -27,   371,    65,   434,   488,    52,-32768,
   433,-32768,-32768,-32768,   109,   459,-32768,-32768,   434,   488,
    60,-32768,-32768,-32768,   517,   -27,   488,   488,   488,   -27,
   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   433,
   -27,   -27,   434,-32768,-32768,-32768,   -27,   181,   -27,   -27,
   488,    -6,    -6,     6,   -27,   434,    -6,    -6,   302,   167,
-32768,-32768,-32768,    -6,-32768,-32768,   459,    80,-32768,-32768,
   115,-32768,   434,-32768,   310,   165,   488,    95,   379,   434,
   -13,   488,   488,   488,   488,   488,   488,   488,   488,   488,
   488,-32768,   107,   488,    96,-32768,   537,   519,   434,    -6,
   102,-32768,-32768,   -27,-32768,-32768,-32768,-32768,-32768,   -27,
   -27,   -27,   -27,   -27,   -27,-32768,-32768,    -6,   -27,-32768,
   126,-32768,   310,   -27,   106,   433,-32768,   282,   282,   282,
   282,   282,   282,    93,    93,    95,    95,   108,   391,-32768,
   229,    -6,-32768,   229,-32768,-32768,-32768,-32768,    -6,-32768,
   -27,   488,   488,   488,   488,   488,   488,   488,-32768,     8,
   -27,-32768,-32768,   117,-32768,   118,   -27,-32768,-32768,   488,
-32768,   488,   488,   434,   102,   102,   102,   102,    36,   102,
-32768,-32768,     8,   310,   -27,   488,   229,   301,   434,-32768,
-32768,   549,   119,-32768,   488,   123,   434,   120,   121,-32768,
-32768,   434,-32768,-32768,   125,   -27,-32768,   -27,-32768,   488,
   549,   434,-32768,   171,   182,-32768
};

static const short yypgoto[] = {    18,
   -11,   141,-32768,-32768,   173,-32768,   -30,-32768,    38,   184,
  -157,   145,   -35,-32768,-32768,  -101,   -48,-32768,-32768,   -95,
   -98,-32768,  -182,  -181,    -2,     9,-32768,    40,-32768,-32768,
    -3,-32768,-32768,-32768,  -246,-32768,     5,-32768,    64,    85,
   185,  -152,-32768,   198,-32768,   208,-32768,-32768,   -74
};


#define	YYLAST		593


static const short yytable[] = {    23,
    24,    25,    26,   272,   147,   235,   236,   149,    79,   215,
   148,    62,   212,    39,   194,    40,    67,    32,     3,     7,
   171,    52,    36,    41,   139,    57,   272,   132,    33,    60,
    85,   217,    63,    37,     7,     7,     9,    64,    65,     3,
     6,    70,    39,    77,    40,   -75,   -75,   -75,   -75,   116,
    74,     1,    41,    42,    98,   147,    71,     7,   149,   106,
   253,   148,   164,   134,    11,    10,   110,    35,    12,    51,
    13,     7,   108,    56,   115,     7,   132,    53,    14,    58,
   117,   118,   119,   -75,    32,     7,   -75,    66,   149,   149,
    11,    78,    36,     7,    12,    83,    13,     7,    86,   116,
     7,     7,   293,   294,   167,   132,   100,   103,   172,   173,
   174,   175,   176,   177,   178,   179,   180,   181,   283,   183,
   184,   281,     7,   112,    39,   185,    40,   187,   188,   208,
   128,   129,   209,   195,    41,   131,    84,   131,   135,   228,
   230,    44,     8,   251,    45,    46,    47,    48,   269,   241,
   255,   257,   103,   136,     3,     6,   137,    29,    30,     7,
     7,   274,    49,   291,     7,     7,   275,   182,   298,   297,
   305,     7,    50,    71,   296,   103,   200,   201,   202,   203,
    59,   306,   242,     7,   238,   237,   149,    27,   243,   244,
   245,   246,   247,   248,    72,   232,   207,   250,    82,   166,
    44,   186,   254,    45,    46,    47,    48,     7,    99,   213,
     3,     6,   214,   101,   204,   252,   107,   205,    31,    54,
   111,    49,    28,   113,   114,     7,   303,   259,     0,   263,
   261,   120,   121,   122,   123,   124,   125,    44,     0,   273,
    45,    46,    47,    48,     0,   276,   271,    95,    97,     7,
     0,     3,     6,   256,    71,     0,     7,     0,    49,     0,
   109,     0,     0,   282,   126,   127,   128,   129,    55,   280,
     0,   131,     0,   284,     0,     0,     0,    71,     0,     0,
     0,   133,   192,   193,   300,     0,   301,   196,   197,   146,
     0,   299,     0,   163,   206,     7,     0,     0,     0,     0,
   168,   169,   170,   120,   121,   122,   123,   124,   125,     0,
     0,   -74,   -74,   -74,   -74,   198,   199,   126,   127,   128,
   129,     0,     0,     0,   131,     0,     0,     0,     0,    44,
   240,     0,    45,    46,    47,    48,   126,   127,   128,   129,
   146,     0,   132,   131,     0,     0,     3,     6,   249,   -74,
    49,     0,   -74,    53,     0,   218,   219,   220,   221,   222,
   223,   224,   225,   226,   227,     0,     0,   229,     0,     0,
   231,   234,   260,   120,   121,   122,   123,   124,   125,   262,
     0,   120,   121,   122,   123,   124,   125,   265,   266,   267,
   268,     0,   270,   120,   121,   122,   123,   124,   125,     0,
     0,     0,     0,     0,     0,     0,   126,   127,   128,   129,
     0,     0,   130,   131,   126,   127,   128,   129,   285,     0,
   216,   131,     0,     0,     0,   264,   126,   127,   128,   129,
   170,     0,   258,   131,     0,     0,   120,   121,   122,   123,
   124,   125,     0,   277,     0,   278,   279,     0,     0,     0,
     0,     0,    44,     0,     0,    45,    46,    47,    48,     0,
     0,     0,     0,     0,     0,   287,     0,     0,   292,   126,
   127,   128,   129,    49,    11,   139,   131,   140,     0,   141,
    13,     0,     0,   302,   287,    87,    88,     0,     0,   142,
   143,   144,    90,    91,     0,    92,     0,     0,     0,    93,
     0,     0,    94,     0,     0,   145,    44,    71,     0,    45,
    46,    47,    48,    44,    87,    88,    45,    46,    47,    48,
    89,    90,    91,     0,    92,     0,   101,    49,    93,     0,
    53,    94,     3,     6,    49,    71,    44,     0,   102,    45,
    46,    47,    48,     0,     0,    87,    88,     0,     0,   101,
     0,   144,    90,    91,     0,    92,     0,    49,     0,    93,
     0,   165,    94,    87,    88,   233,     0,    71,     0,   144,
    90,    91,     0,    92,     0,    87,    88,    93,     0,     0,
    94,    89,   286,    91,     0,    92,     0,     0,     0,    93,
     0,     0,    94
};

static const short yycheck[] = {    11,
    12,    13,    14,   250,   106,   188,   188,   106,    57,   167,
   106,    42,   165,    33,     9,    35,    52,    33,    46,     2,
   119,    33,    33,    43,    17,    37,   273,    41,    44,    41,
    61,    45,    44,    44,    17,    18,    46,    49,    50,    46,
    47,    53,    33,    55,    35,    10,    11,    12,    13,    44,
    54,    29,    43,    44,    66,   157,    49,    40,   157,    71,
   213,   157,   111,    99,    16,    33,    78,    33,    20,    32,
    22,    54,    76,    36,    86,    58,    41,    44,    30,    35,
    92,    93,    94,    48,    33,    68,    51,    51,   187,   188,
    16,    51,    33,    76,    20,    35,    22,    80,    44,    44,
    83,    84,   285,   285,   116,    41,    45,    70,   120,   121,
   122,   123,   124,   125,   126,   127,   128,   129,   276,   131,
   132,   274,   105,    45,    33,   137,    35,   139,   140,    50,
    38,    39,    18,   145,    43,    43,    45,    43,   101,    33,
    45,    20,     2,    18,    23,    24,    25,    26,   247,    48,
    45,    44,   115,    45,    46,    47,    48,    17,    18,   142,
   143,    45,    41,    45,   147,   148,    49,   130,    48,    50,
     0,   154,    51,    49,    52,   138,    10,    11,    12,    13,
    40,     0,   194,   166,   188,   188,   285,    15,   200,   201,
   202,   203,   204,   205,    54,   187,   157,   209,    58,   115,
    20,   138,   214,    23,    24,    25,    26,   190,    68,    45,
    46,    47,    48,    33,    48,   211,    76,    51,    21,    35,
    80,    41,    15,    83,    84,   208,   301,   231,    -1,   241,
   234,     3,     4,     5,     6,     7,     8,    20,    -1,   251,
    23,    24,    25,    26,    -1,   257,   250,    64,    65,   232,
    -1,    46,    47,   216,    49,    -1,   239,    -1,    41,    -1,
    77,    -1,    -1,   275,    36,    37,    38,    39,    51,   273,
    -1,    43,    -1,   277,    -1,    -1,    -1,    49,    -1,    -1,
    -1,    98,   142,   143,   296,    -1,   298,   147,   148,   106,
    -1,   295,    -1,   110,   154,   278,    -1,    -1,    -1,    -1,
   117,   118,   119,     3,     4,     5,     6,     7,     8,    -1,
    -1,    10,    11,    12,    13,    14,    15,    36,    37,    38,
    39,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    20,
   190,    -1,    23,    24,    25,    26,    36,    37,    38,    39,
   157,    -1,    41,    43,    -1,    -1,    46,    47,   208,    48,
    41,    -1,    51,    44,    -1,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,    -1,    -1,   184,    -1,    -1,
   187,   188,   232,     3,     4,     5,     6,     7,     8,   239,
    -1,     3,     4,     5,     6,     7,     8,   243,   244,   245,
   246,    -1,   248,     3,     4,     5,     6,     7,     8,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
    -1,    -1,    42,    43,    36,    37,    38,    39,   278,    -1,
    42,    43,    -1,    -1,    -1,   242,    36,    37,    38,    39,
   247,    -1,    42,    43,    -1,    -1,     3,     4,     5,     6,
     7,     8,    -1,   260,    -1,   262,   263,    -1,    -1,    -1,
    -1,    -1,    20,    -1,    -1,    23,    24,    25,    26,    -1,
    -1,    -1,    -1,    -1,    -1,   282,    -1,    -1,   285,    36,
    37,    38,    39,    41,    16,    17,    43,    19,    -1,    21,
    22,    -1,    -1,   300,   301,    27,    28,    -1,    -1,    31,
    32,    33,    34,    35,    -1,    37,    -1,    -1,    -1,    41,
    -1,    -1,    44,    -1,    -1,    47,    20,    49,    -1,    23,
    24,    25,    26,    20,    27,    28,    23,    24,    25,    26,
    33,    34,    35,    -1,    37,    -1,    33,    41,    41,    -1,
    44,    44,    46,    47,    41,    49,    20,    -1,    45,    23,
    24,    25,    26,    -1,    -1,    27,    28,    -1,    -1,    33,
    -1,    33,    34,    35,    -1,    37,    -1,    41,    -1,    41,
    -1,    45,    44,    27,    28,    47,    -1,    49,    -1,    33,
    34,    35,    -1,    37,    -1,    27,    28,    41,    -1,    -1,
    44,    33,    34,    35,    -1,    37,    -1,    -1,    -1,    41,
    -1,    -1,    44
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 145 "c:\users\astre\desktop\bison_flex\b\parser.y"
{yyval.String = '\n';;
    break;}
case 2:
#line 146 "c:\users\astre\desktop\bison_flex\b\parser.y"
{yyval.String = yyvsp[-1].String;;
    break;}
case 3:
#line 149 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.String = 0; ;
    break;}
case 4:
#line 150 "c:\users\astre\desktop\bison_flex\b\parser.y"
{yyval.String = yyvsp[0].String;;
    break;}
case 5:
#line 153 "c:\users\astre\desktop\bison_flex\b\parser.y"
{yyval.String = ';';;
    break;}
case 6:
#line 154 "c:\users\astre\desktop\bison_flex\b\parser.y"
{yyval.String = yyvsp[0].String;;
    break;}
case 7:
#line 158 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ root = create_program(yyvsp[-2].package_value, yyvsp[0].highest_decl_list_value); ;
    break;}
case 8:
#line 159 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ root = create_program_with_imports(yyvsp[-3].package_value, yyvsp[-1].import_decl_list_value, yyvsp[0].highest_decl_list_value); ;
    break;}
case 9:
#line 162 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.import_decl_list_value = create_import_decl_list(yyvsp[0].import_one_of_list_value);;
    break;}
case 10:
#line 163 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.import_decl_list_value = add_to_import_decl_list(yyvsp[-1].import_decl_list_value, yyvsp[0].import_one_of_list_value);;
    break;}
case 11:
#line 166 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.import_one_of_list_value = create_import_decl(yyvsp[0].import_value); ;
    break;}
case 12:
#line 167 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.import_one_of_list_value = create_import_decl_one_of_list_list(yyvsp[-2].import_list_value); ;
    break;}
case 13:
#line 171 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.import_list_value = create_import_list(yyvsp[0].import_value); ;
    break;}
case 14:
#line 172 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.import_list_value = add_to_import_list(yyvsp[-1].import_list_value, yyvsp[0].import_value);;
    break;}
case 15:
#line 175 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.import_value = create_import(yyvsp[-1].String); ;
    break;}
case 16:
#line 176 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.import_value = create_import(yyvsp[-1].String); ;
    break;}
case 17:
#line 177 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.import_value = create_import_with_alias(yyvsp[-2].Id, yyvsp[-1].String); ;
    break;}
case 18:
#line 180 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.package_value = create_package_decl(yyvsp[0].Id); ;
    break;}
case 19:
#line 184 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.complex_data_value = create_complex_data_type(int_t); ;
    break;}
case 20:
#line 185 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.complex_data_value = create_complex_data_type(bool_t); ;
    break;}
case 21:
#line 186 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.complex_data_value = create_complex_data_type(byte_t); ;
    break;}
case 22:
#line 187 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.complex_data_value = create_complex_data_type(string_t); ;
    break;}
case 23:
#line 188 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.complex_data_value = create_array_type(yyvsp[-2].node_value, yyvsp[0].complex_data_value); ;
    break;}
case 24:
#line 189 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.complex_data_value = create_function_type(create_prototype(0, yyvsp[-2].param_list_value, yyvsp[0].return_value)); ;
    break;}
case 25:
#line 190 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.complex_data_value = create_function_type(create_prototype(0, 0, yyvsp[0].return_value)); ;
    break;}
case 26:
#line 191 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.complex_data_value = create_function_type(create_prototype(0, yyvsp[-4].param_list_value, yyvsp[0].return_value)); ;
    break;}
case 27:
#line 192 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.complex_data_value = create_function_type(create_prototype(0, yyvsp[-1].param_list_value, 0)); ;
    break;}
case 28:
#line 193 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.complex_data_value = create_function_type(create_prototype(0, 0, 0)); ;
    break;}
case 29:
#line 194 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.complex_data_value = create_function_type(create_prototype(0, yyvsp[-3].param_list_value, 0)); ;
    break;}
case 30:
#line 197 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = yyvsp[0].node_value; ;
    break;}
case 31:
#line 198 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_array_lit(yyvsp[-4].complex_data_value, yyvsp[-6].node_value, yyvsp[-1].array_element_list_value); ;
    break;}
case 32:
#line 199 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_int_node(yyvsp[0].Int_val); ;
    break;}
case 33:
#line 200 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_string_node(yyvsp[0].String); ;
    break;}
case 34:
#line 201 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_boolean_node(1); ;
    break;}
case 35:
#line 202 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_boolean_node(0); ;
    break;}
case 36:
#line 203 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_oper_node(unary_minus, yyvsp[0].node_value, 0); ;
    break;}
case 37:
#line 204 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_oper_node(minus, yyvsp[-3].node_value, yyvsp[0].node_value); ;
    break;}
case 38:
#line 205 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_oper_node(plus, yyvsp[-3].node_value, yyvsp[0].node_value); ;
    break;}
case 39:
#line 206 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_oper_node(mul, yyvsp[-3].node_value, yyvsp[0].node_value); ;
    break;}
case 40:
#line 207 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_oper_node(divide, yyvsp[-3].node_value, yyvsp[0].node_value); ;
    break;}
case 41:
#line 208 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_oper_node(less, yyvsp[-3].node_value, yyvsp[0].node_value); ;
    break;}
case 42:
#line 209 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_oper_node(greater, yyvsp[-3].node_value, yyvsp[0].node_value); ;
    break;}
case 43:
#line 210 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_oper_node(greater_or_equal, yyvsp[-3].node_value, yyvsp[0].node_value); ;
    break;}
case 44:
#line 211 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_oper_node(less_or_equal, yyvsp[-3].node_value, yyvsp[0].node_value); ;
    break;}
case 45:
#line 212 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_oper_node(equal, yyvsp[-3].node_value, yyvsp[0].node_value); ;
    break;}
case 46:
#line 213 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_oper_node(not_equal, yyvsp[-3].node_value, yyvsp[0].node_value); ;
    break;}
case 47:
#line 214 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_func_call(yyvsp[-4].Id, yyvsp[-1].node_list_value); ;
    break;}
case 48:
#line 215 "c:\users\astre\desktop\bison_flex\b\parser.y"
{yyval.node_value = create_method_use_in_package_node(yyvsp[-7].node_value, yyvsp[-4].Id, yyvsp[-1].node_list_value); ;
    break;}
case 49:
#line 218 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_list_value = 0; ;
    break;}
case 50:
#line 219 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_list_value = yyvsp[0].node_list_value; ;
    break;}
case 51:
#line 222 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_list_value = create_node_list(yyvsp[0].node_value);  ;
    break;}
case 52:
#line 223 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_list_value = add_to_node_list(yyvsp[-3].node_list_value, yyvsp[0].node_value);  ;
    break;}
case 53:
#line 227 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.decl_all_value = create_all_decl(create_id(yyvsp[-3].Id), yyvsp[0].node_value, 0); ;
    break;}
case 54:
#line 228 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.decl_all_value = create_all_decl(create_id(yyvsp[-4].Id), yyvsp[0].node_value, yyvsp[-3].complex_data_value); ;
    break;}
case 55:
#line 231 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.decl_all_list_value = create_all_decl_list(yyvsp[0].decl_all_value); ;
    break;}
case 56:
#line 232 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.decl_all_list_value = add_to_all_decl_list(yyvsp[-2].decl_all_list_value, yyvsp[0].decl_all_value); ;
    break;}
case 57:
#line 235 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.decl_all_list_value = 0; ;
    break;}
case 58:
#line 236 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.decl_all_list_value = yyvsp[0].decl_all_list_value; ;
    break;}
case 59:
#line 239 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_decl_stmt(yyvsp[0].decl_all_value, const_t); ;
    break;}
case 60:
#line 240 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_decl_stmt_from_list(yyvsp[-1].decl_all_list_value, const_t); ;
    break;}
case 61:
#line 243 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.decl_all_value = create_all_decl(create_id(yyvsp[-1].Id), 0, yyvsp[0].complex_data_value); ;
    break;}
case 62:
#line 244 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.decl_all_value = create_all_decl(create_id(yyvsp[-4].Id), yyvsp[0].node_value, yyvsp[-3].complex_data_value); ;
    break;}
case 63:
#line 245 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.decl_all_value = create_all_decl(create_id(yyvsp[-3].Id), yyvsp[0].node_value, 0); ;
    break;}
case 64:
#line 248 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.decl_all_list_value = create_all_decl_list(yyvsp[0].decl_all_value); ;
    break;}
case 65:
#line 249 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.decl_all_list_value = add_to_all_decl_list(yyvsp[-2].decl_all_list_value, yyvsp[0].decl_all_value); ;
    break;}
case 66:
#line 252 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.decl_all_list_value = 0; ;
    break;}
case 67:
#line 253 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.decl_all_list_value = yyvsp[0].decl_all_list_value; ;
    break;}
case 68:
#line 255 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_decl_stmt(yyvsp[0].decl_all_value, var_t); ;
    break;}
case 69:
#line 256 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_decl_stmt_from_list(yyvsp[-1].decl_all_list_value, var_t); ;
    break;}
case 70:
#line 261 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_id_node(yyvsp[0].Id); ;
    break;}
case 71:
#line 262 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = yyvsp[-1].node_value; ;
    break;}
case 72:
#line 263 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_id_use_in_package_node(yyvsp[-3].node_value, yyvsp[0].Id); ;
    break;}
case 73:
#line 264 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_value = create_oper_node(array_indexing, yyvsp[-4].node_value, yyvsp[-1].node_value); ;
    break;}
case 74:
#line 267 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_list_value = create_node_list(yyvsp[0].node_value);;
    break;}
case 75:
#line 268 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.node_list_value = add_to_node_list(yyvsp[-3].node_list_value, yyvsp[0].node_value); ;
    break;}
case 76:
#line 272 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_inc_dec_stmt(yyvsp[-1].node_value, inc_t); ;
    break;}
case 77:
#line 273 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_inc_dec_stmt(yyvsp[-1].node_value, dec_t); ;
    break;}
case 78:
#line 276 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_assignment(simple_assignment_t, yyvsp[-3].node_list_value, yyvsp[0].node_list_value); ;
    break;}
case 79:
#line 277 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_assignment(plus_assignment_t, yyvsp[-3].node_list_value, yyvsp[0].node_list_value); ;
    break;}
case 80:
#line 278 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_assignment(minus_assignment_t, yyvsp[-3].node_list_value, yyvsp[0].node_list_value); ;
    break;}
case 81:
#line 279 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_assignment(mul_assignment_t, yyvsp[-3].node_list_value, yyvsp[0].node_list_value); ;
    break;}
case 82:
#line 280 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_assignment(div_assignment_t, yyvsp[-3].node_list_value, yyvsp[0].node_list_value); ;
    break;}
case 83:
#line 283 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_short_decl(create_id(yyvsp[-3].Id), yyvsp[0].node_value); ;
    break;}
case 84:
#line 286 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_node_stmt(yyvsp[0].node_value); ;
    break;}
case 85:
#line 287 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = yyvsp[0].stmt_value; ;
    break;}
case 86:
#line 288 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = yyvsp[0].stmt_value; ;
    break;}
case 87:
#line 289 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = yyvsp[0].stmt_value; ;
    break;}
case 88:
#line 292 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_return_stmt(yyvsp[-1].node_list_value); ;
    break;}
case 89:
#line 295 "c:\users\astre\desktop\bison_flex\b\parser.y"
{yyval.stmt_value = ';';;
    break;}
case 90:
#line 296 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = yyvsp[-1].stmt_value; ;
    break;}
case 91:
#line 297 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = yyvsp[-1].stmt_value; ;
    break;}
case 92:
#line 298 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = yyvsp[-1].stmt_value; ;
    break;}
case 93:
#line 299 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = yyvsp[0].stmt_value; ;
    break;}
case 94:
#line 300 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = yyvsp[0].stmt_value; ;
    break;}
case 95:
#line 301 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = yyvsp[0].stmt_value; ;
    break;}
case 96:
#line 302 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = yyvsp[0].stmt_value; ;
    break;}
case 97:
#line 303 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_break_stmt(); ;
    break;}
case 98:
#line 304 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_continue_stmt(); ;
    break;}
case 99:
#line 307 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_list_value = create_stmt_list(yyvsp[0].stmt_value); ;
    break;}
case 100:
#line 308 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_list_value = add_to_stmt_list(yyvsp[-1].stmt_list_value, yyvsp[0].stmt_value); ;
    break;}
case 101:
#line 311 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_list_value = 0; ;
    break;}
case 102:
#line 312 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_list_value = yyvsp[0].stmt_list_value; ;
    break;}
case 103:
#line 315 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_block(yyvsp[-2].stmt_list_value); ;
    break;}
case 104:
#line 318 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_empty_stmt(); ;
    break;}
case 105:
#line 319 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_node_stmt(yyvsp[0].node_value); ;
    break;}
case 106:
#line 320 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = yyvsp[0].stmt_value; ;
    break;}
case 107:
#line 321 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = yyvsp[0].stmt_value; ;
    break;}
case 108:
#line 322 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = yyvsp[0].stmt_value; ;
    break;}
case 109:
#line 325 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_empty_stmt(); ;
    break;}
case 110:
#line 326 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_node_stmt(yyvsp[0].node_value); ;
    break;}
case 111:
#line 327 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = yyvsp[0].stmt_value; ;
    break;}
case 112:
#line 328 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = yyvsp[0].stmt_value; ;
    break;}
case 113:
#line 331 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_empty_for_stmt(yyvsp[0].stmt_value); ;
    break;}
case 114:
#line 332 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_for_with_condition(yyvsp[-1].node_value, yyvsp[0].stmt_value); ;
    break;}
case 115:
#line 333 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_for_with_block_stmt(yyvsp[-5].stmt_value, yyvsp[-1].stmt_value, yyvsp[-3].node_value, yyvsp[0].stmt_value); ;
    break;}
case 116:
#line 336 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.if_stmt_block_value = create_if_stmt_block(yyvsp[-3].stmt_value, yyvsp[-1].node_value, yyvsp[0].stmt_value); ;
    break;}
case 117:
#line 337 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.if_stmt_block_value = create_if_stmt_block(0, yyvsp[-1].node_value, yyvsp[0].stmt_value); ;
    break;}
case 118:
#line 340 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_if_stmt(yyvsp[0].if_stmt_block_value, 0, 0); ;
    break;}
case 119:
#line 341 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_if_stmt(yyvsp[-3].if_stmt_block_value, 0, yyvsp[0].stmt_value); ;
    break;}
case 120:
#line 342 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_if_stmt(yyvsp[-4].if_stmt_block_value, yyvsp[-3].else_if_stmt_list_value, yyvsp[0].stmt_value); ;
    break;}
case 121:
#line 343 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.stmt_value = create_if_stmt(yyvsp[-1].if_stmt_block_value, yyvsp[0].else_if_stmt_list_value, 0); ;
    break;}
case 122:
#line 346 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.if_stmt_block_value = yyvsp[0].if_stmt_block_value; ;
    break;}
case 123:
#line 349 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.else_if_stmt_list_value = create_else_if_stmt_list(yyvsp[0].if_stmt_block_value); ;
    break;}
case 124:
#line 350 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.else_if_stmt_list_value = add_to_else_if_stmt_list(yyvsp[-1].else_if_stmt_list_value, yyvsp[0].if_stmt_block_value); ;
    break;}
case 125:
#line 353 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.param_value = create_param(yyvsp[0].complex_data_value, create_id(yyvsp[-1].Id)); ;
    break;}
case 126:
#line 354 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.param_value = create_param(yyvsp[0].complex_data_value, 0); ;
    break;}
case 127:
#line 357 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.param_list_value = create_param_list(yyvsp[0].param_value); ;
    break;}
case 128:
#line 358 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.param_list_value = add_to_param_list(yyvsp[-2].param_list_value, yyvsp[0].param_value); ;
    break;}
case 129:
#line 361 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.param_list_value = yyvsp[-1].param_list_value; ;
    break;}
case 130:
#line 362 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.param_list_value = 0; ;
    break;}
case 131:
#line 363 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.param_list_value = yyvsp[-3].param_list_value; ;
    break;}
case 132:
#line 366 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.return_value = create_return_with_values(yyvsp[0].param_list_value); ;
    break;}
case 133:
#line 367 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.return_value = create_type_of_return(yyvsp[0].complex_data_value); ;
    break;}
case 134:
#line 370 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.highest_decl_value = create_func_decl(create_prototype(yyvsp[-3].Id, yyvsp[-2].param_list_value, yyvsp[-1].return_value), 0); ;
    break;}
case 135:
#line 371 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.highest_decl_value = create_func_decl(create_prototype(yyvsp[-3].Id, yyvsp[-2].param_list_value, yyvsp[-1].return_value), yyvsp[0].stmt_value); ;
    break;}
case 136:
#line 372 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.highest_decl_value = create_func_decl(create_prototype(yyvsp[-2].Id, yyvsp[-1].param_list_value, 0), 0); ;
    break;}
case 137:
#line 373 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.highest_decl_value = create_func_decl(create_prototype(yyvsp[-2].Id, yyvsp[-1].param_list_value, 0), yyvsp[0].stmt_value); ;
    break;}
case 138:
#line 376 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.highest_decl_value = create_highest_declaration(yyvsp[-1].stmt_value->decl_stmt_field); ;
    break;}
case 139:
#line 377 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.highest_decl_value = create_highest_declaration(yyvsp[-1].stmt_value->decl_stmt_field); ;
    break;}
case 140:
#line 378 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.highest_decl_value = yyvsp[0].highest_decl_value; ;
    break;}
case 141:
#line 381 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.highest_decl_list_value = create_highest_decl_list(yyvsp[0].highest_decl_value); ;
    break;}
case 142:
#line 382 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.highest_decl_list_value = add_to_highest_decl_list(yyvsp[-1].highest_decl_list_value, yyvsp[0].highest_decl_value); ;
    break;}
case 143:
#line 385 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.highest_decl_list_value = 0; ;
    break;}
case 144:
#line 386 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.highest_decl_list_value = yyvsp[0].highest_decl_list_value; ;
    break;}
case 145:
#line 389 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.array_element_list_value = 0;  ;
    break;}
case 146:
#line 390 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.array_element_list_value = yyvsp[0].array_element_list_value; ;
    break;}
case 147:
#line 393 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.array_element_list_value = create_array_element_list(yyvsp[0].array_element_value);  ;
    break;}
case 148:
#line 394 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.array_element_list_value = add_to_array_element_list(yyvsp[-3].array_element_list_value, yyvsp[0].array_element_value); ;
    break;}
case 149:
#line 397 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.array_element_value = create_array_element(yyvsp[0].node_value); ;
    break;}
case 150:
#line 398 "c:\users\astre\desktop\bison_flex\b\parser.y"
{ yyval.array_element_value = create_array_indexed_element(yyvsp[-3].Int_val, yyvsp[0].node_value); ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 401 "c:\users\astre\desktop\bison_flex\b\parser.y"


int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");

    FILE* tree = fopen("tree.dot", "w");

    yyparse();

    print_program_tree(root, tree);

    return 0;
}