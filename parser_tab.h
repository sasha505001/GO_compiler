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


extern YYSTYPE yylval;
