%{

#include <stdio.h>
#include "create_tree_nodes.cpp"
extern struct program_struct* root;
extern int yylex(void);
extern int yyparse(void);
int yyerror(char * s);

%}

%union {
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
};

%token LESS
%token GREATER
%token EQUAL
%token NOT_EQUAL
%token GREATER_OR_EQUAL
%token LESS_OR_EQUAL
%token SHORT_EQUALS

%token PLUS_ASSIGN
%token MINUS_ASSIGN
%token MULTIPLY_ASSIGN
%token DIVISION_ASSIGN
%token INC
%token DEC

%token CONST_KEYWORD
%token IF_KEYWORD
%token ELSE_KEYWORD
%token FOR_KEYWORD
%token FUNC_KEYWORD
%token RETURN_KEYWORD
%token VAR_KEYWORD
%token BOOL_KEYWORD
%token INT_KEYWORD
%token BYTE_KEYWORD
%token STRING_KEYWORD
%token TRUE_KEYWORD
%token FALSE_KEYWORD
%token PACKAGE_KEYWORD
%token IMPORT_KEYWORD
%token BREAK_KEYWORD
%token CONTINUE_KEYWORD
%token <Id> ID
%token <Int_val> INT 
%token <String> STRING

%type<node_value> l_value
%type<node_list_value> l_value_list_not_empty

%type<String> empty_or_many_line_break
%type<String> one_similicon_or_many_line_break
%type<String> many_line_break

%type<node_value> expr
%type<stmt_value> for_stmt
%type<stmt_value> body
%type<node_list_value> expr_list
%type<program_value> program
%type<import_one_of_list_value> import_one_of_list
%type<import_decl_list_value> import_decl_list
%type<import_list_value> import_list
%type<import_value> import_v
%type<package_value> package_v
%type<complex_data_value> complex_data
%type<node_list_value> expr_list_not_empty
%type<decl_all_value> const_v
%type<decl_all_list_value> const_list_not_empty
%type<decl_all_list_value> const_list
%type<stmt_value> const_decl
%type<decl_all_value> var_v
%type<decl_all_list_value> var_list_not_empty
%type<decl_all_list_value> var_list
%type<stmt_value> var_decl
%type<stmt_value> inc_dec_stmt
%type<stmt_value> assign
%type<stmt_value> short_var_decl
%type<stmt_value> simple_stmt_not_empty
%type<stmt_value> return_stmt
%type<stmt_value> stmt
%type<stmt_list_value> stmt_list_not_empty
%type<stmt_list_value> stmt_list
%type<stmt_value> for_stmt_init_stmt
%type<stmt_value> for_stmt_post_stmt
%type<if_stmt_block_value> if_start_block
%type<stmt_value> if_stmt
%type<if_stmt_block_value> else_if_stmt
%type<else_if_stmt_list_value> else_if_stmt_list
%type<param_value> param_decl
%type<param_list_value> param_list
%type<param_list_value> params
%type<return_value> return_v
%type<highest_decl_value> func_decl
%type<highest_decl_value> highest_decl
%type<highest_decl_list_value> highest_decl_list_not_empty
%type<highest_decl_list_value> highest_decl_list
%type<array_element_list_value> array_element_list_not_empty
%type<array_element_list_value> array_element_list
%type<array_element_value> array_element_v


%start program

%left LESS GREATER EQUAL NOT_EQUAL LESS_OR_EQUAL GREATER_OR_EQUAL
%left '+' '-'
%left '*' '/'
%right UMINUS
%left '[' ']' '.'
%nonassoc '(' ')'

%%

many_line_break: '\n' {$$ = "\n";}
| many_line_break '\n' {$$ = $1;}
;

empty_or_many_line_break: /* empty */ { $$ = 0; }
| many_line_break {$$ = $1;}
;

one_similicon_or_many_line_break: ';' {$$ = ";";}
| many_line_break {$$ = $1;}
;


program: package_v one_similicon_or_many_line_break highest_decl_list { root = create_program($1, $3); }
| package_v one_similicon_or_many_line_break import_decl_list highest_decl_list { root = create_program_with_imports($1, $3, $4); }
;

import_decl_list: import_one_of_list { $$ = create_import_decl_list($1);}
| import_decl_list import_one_of_list { $$ = add_to_import_decl_list($1, $2);}
;

import_one_of_list: IMPORT_KEYWORD empty_or_many_line_break import_v one_similicon_or_many_line_break { $$ = create_import_decl($3); }
| IMPORT_KEYWORD empty_or_many_line_break '(' empty_or_many_line_break import_list empty_or_many_line_break ')' one_similicon_or_many_line_break { $$ = create_import_decl_one_of_list_list($5); }
;


import_list: import_v { $$ = create_import_list($1); }
| import_list one_similicon_or_many_line_break import_v { $$ = add_to_import_list($1, $3);}
;

import_v: '.' empty_or_many_line_break STRING { $$ = create_import($3); }
| STRING { $$ = create_import($1); }
| ID STRING { $$ = create_import_with_alias($1, $2); }
;

package_v: PACKAGE_KEYWORD empty_or_many_line_break ID{ $$ = create_package_decl($3); }
;


complex_data: INT_KEYWORD { $$ = create_complex_data_type(int_t); }
| BOOL_KEYWORD { $$ = create_complex_data_type(bool_t); }
| BYTE_KEYWORD { $$ = create_complex_data_type(byte_t); }
| STRING_KEYWORD { $$ = create_complex_data_type(string_t); }
| '[' empty_or_many_line_break expr ']' complex_data { $$ = create_array_type($3, $5); }
| FUNC_KEYWORD empty_or_many_line_break '(' empty_or_many_line_break param_list ')' return_v { $$ = create_function_type(create_prototype(0, $5, $7)); }
| FUNC_KEYWORD empty_or_many_line_break '(' empty_or_many_line_break ')' return_v { $$ = create_function_type(create_prototype(0, 0, $6)); }
| FUNC_KEYWORD empty_or_many_line_break '(' empty_or_many_line_break param_list ',' empty_or_many_line_break ')' return_v { $$ = create_function_type(create_prototype(0, $5, $9)); }
| FUNC_KEYWORD empty_or_many_line_break '(' empty_or_many_line_break param_list ')' { $$ = create_function_type(create_prototype(0, $5, 0)); }
| FUNC_KEYWORD empty_or_many_line_break '(' empty_or_many_line_break ')' { $$ = create_function_type(create_prototype(0, 0, 0)); }
| FUNC_KEYWORD empty_or_many_line_break '(' empty_or_many_line_break param_list ',' empty_or_many_line_break ')' { $$ = create_function_type(create_prototype(0, $5, 0)); }
;

expr: l_value { $$ = $1; }
| '[' empty_or_many_line_break expr ']' complex_data '{' empty_or_many_line_break array_element_list '}' { $$ = create_array_lit($5, $3, $8); }
| INT { $$ = create_int_node($1); }
| STRING { $$ = create_string_node($1); }
| TRUE_KEYWORD { $$ = create_boolean_node(1); }
| FALSE_KEYWORD { $$ = create_boolean_node(0); }
| '-' empty_or_many_line_break expr %prec UMINUS { $$ = create_oper_node(unary_minus, $3, 0); } 
| expr '-' empty_or_many_line_break expr { $$ = create_oper_node(minus, $1, $4); }
| expr '+' empty_or_many_line_break expr { $$ = create_oper_node(plus, $1, $4); }
| expr '*' empty_or_many_line_break expr { $$ = create_oper_node(mul, $1, $4); }
| expr '/' empty_or_many_line_break expr { $$ = create_oper_node(divide, $1, $4); }
| expr LESS empty_or_many_line_break expr { $$ = create_oper_node(less, $1, $4); }
| expr GREATER empty_or_many_line_break expr { $$ = create_oper_node(greater, $1, $4); }
| expr GREATER_OR_EQUAL empty_or_many_line_break expr { $$ = create_oper_node(greater_or_equal, $1, $4); }
| expr LESS_OR_EQUAL empty_or_many_line_break expr { $$ = create_oper_node(less_or_equal, $1, $4); }
| expr EQUAL empty_or_many_line_break expr { $$ = create_oper_node(equal, $1, $4); }
| expr NOT_EQUAL empty_or_many_line_break expr { $$ = create_oper_node(not_equal, $1, $4); }
| ID '(' empty_or_many_line_break expr_list ')' { $$ = create_func_call($1, $4); } 
| expr '.' empty_or_many_line_break ID '(' empty_or_many_line_break expr_list ')' {$$ = create_method_use_in_package_node($1, $4, $7); }
;

expr_list: /* empty */ { $$ = 0; }
| expr_list_not_empty { $$ = $1; }
;

expr_list_not_empty: expr { $$ = create_node_list($1);  }
| expr_list_not_empty ',' empty_or_many_line_break expr { $$ = add_to_node_list($1, $4);  }
;


const_v: ID '=' empty_or_many_line_break expr { $$ = create_all_decl(create_id($1), $4, 0); }
| ID complex_data '=' empty_or_many_line_break expr { $$ = create_all_decl(create_id($1), $5, $2); }
;

const_list_not_empty: const_v { $$ = create_all_decl_list($1); }
| const_list_not_empty one_similicon_or_many_line_break const_v { $$ = add_to_all_decl_list($1, $3); }
;

const_list: /* empty */ { $$ = 0; }
| const_list_not_empty { $$ = $1; }
;

const_decl: CONST_KEYWORD empty_or_many_line_break const_v { $$ = create_decl_stmt($3, const_t); }
| CONST_KEYWORD empty_or_many_line_break '(' empty_or_many_line_break const_list ')' { $$ = create_decl_stmt_from_list($5, const_t); }
;

var_v: ID complex_data { $$ = create_all_decl(create_id($1), 0, $2); }
| ID complex_data '=' empty_or_many_line_break expr { $$ = create_all_decl(create_id($1), $5, $2); }
| ID '=' empty_or_many_line_break expr { $$ = create_all_decl(create_id($1), $4, 0); }
;

var_list_not_empty: var_v  { $$ = create_all_decl_list($1); }
| var_list_not_empty one_similicon_or_many_line_break var_v { $$ = add_to_all_decl_list($1, $3); }
;

var_list: /* empty */ { $$ = 0; }
| var_list_not_empty { $$ = $1; }

var_decl: VAR_KEYWORD empty_or_many_line_break var_v { $$ = create_decl_stmt($3, var_t); }
| VAR_KEYWORD empty_or_many_line_break '(' empty_or_many_line_break var_list ')' { $$ = create_decl_stmt_from_list($5, var_t); }
;

l_value: ID { $$ = create_id_node($1); }
| '(' empty_or_many_line_break l_value')' { $$ = $3; }
| expr '.' empty_or_many_line_break ID { $$ = create_id_use_in_package_node($1, $4); }
| l_value '[' empty_or_many_line_break expr ']' { $$ = create_oper_node(array_indexing, $1, $4); }


l_value_list_not_empty: l_value { $$ = create_node_list($1);}
| l_value_list_not_empty ',' empty_or_many_line_break l_value { $$ = add_to_node_list($1, $4); }
;

inc_dec_stmt: l_value INC{ $$ = create_inc_dec_stmt($1, inc_t); }
| l_value DEC{ $$ = create_inc_dec_stmt($1, dec_t); }
;

assign: l_value_list_not_empty '=' empty_or_many_line_break expr_list_not_empty { $$ = create_assignment(simple_assignment_t, $1, $4); }
| l_value_list_not_empty PLUS_ASSIGN empty_or_many_line_break expr_list_not_empty { $$ = create_assignment(plus_assignment_t, $1, $4); }
| l_value_list_not_empty MINUS_ASSIGN empty_or_many_line_break expr_list_not_empty { $$ = create_assignment(minus_assignment_t, $1, $4); }
| l_value_list_not_empty MULTIPLY_ASSIGN empty_or_many_line_break expr_list_not_empty { $$ = create_assignment(mul_assignment_t, $1, $4); }
| l_value_list_not_empty DIVISION_ASSIGN empty_or_many_line_break expr_list_not_empty { $$ = create_assignment(div_assignment_t, $1, $4); }
;

short_var_decl: ID SHORT_EQUALS empty_or_many_line_break expr{ $$ = create_short_decl(create_id($1), $4); }
;

simple_stmt_not_empty: expr { $$ = create_node_stmt($1); }
| inc_dec_stmt { $$ = $1; }
| assign { $$ = $1; }
| short_var_decl { $$ = $1; }
;

return_stmt: RETURN_KEYWORD expr_list one_similicon_or_many_line_break { $$ = create_return_stmt($2); }
;

stmt: ';' empty_or_many_line_break {$$ = create_empty_stmt();} 
|simple_stmt_not_empty one_similicon_or_many_line_break { $$ = $1; }
| const_decl one_similicon_or_many_line_break{ $$ = $1; }
| var_decl one_similicon_or_many_line_break{ $$ = $1; }
| return_stmt { $$ = $1; }
| if_stmt { $$ = $1; }
| for_stmt { $$ = $1; }
| body { $$ = $1; }
| BREAK_KEYWORD one_similicon_or_many_line_break { $$ = create_break_stmt(); }
| CONTINUE_KEYWORD one_similicon_or_many_line_break { $$ = create_continue_stmt(); }
;

stmt_list_not_empty: stmt { $$ = create_stmt_list($1); }
| stmt_list_not_empty stmt { $$ = add_to_stmt_list($1, $2); }
;

stmt_list: /* empty */ { $$ = 0; }
| stmt_list_not_empty { $$ = $1; }
;

body: '{' empty_or_many_line_break stmt_list '}' one_similicon_or_many_line_break { $$ = create_block($3); }
;

for_stmt_init_stmt: ';' { $$ = create_empty_stmt(); }
| expr { $$ = create_node_stmt($1); }
| inc_dec_stmt { $$ = $1; }
| assign  { $$ = $1; }
| short_var_decl { $$ = $1; }
;

for_stmt_post_stmt: /* empty */ { $$ = create_empty_stmt(); }
| expr { $$ = create_node_stmt($1); }
| inc_dec_stmt { $$ = $1; }
| assign { $$ = $1; }
;

for_stmt: FOR_KEYWORD empty_or_many_line_break body { $$ = create_empty_for_stmt($3); }
| FOR_KEYWORD empty_or_many_line_break expr body { $$ = create_for_with_condition($3, $4); }
| FOR_KEYWORD empty_or_many_line_break for_stmt_init_stmt one_similicon_or_many_line_break expr one_similicon_or_many_line_break for_stmt_post_stmt body { $$ = create_for_with_block_stmt($3, $7, $5, $8); }
;

if_start_block: IF_KEYWORD empty_or_many_line_break simple_stmt_not_empty one_similicon_or_many_line_break expr body { $$ = create_if_stmt_block($3, $5, $6); }
| IF_KEYWORD empty_or_many_line_break expr body { $$ = create_if_stmt_block(0, $3, $4); }
;

if_stmt: if_start_block { $$ = create_if_stmt($1, 0, 0); }
| if_start_block ELSE_KEYWORD empty_or_many_line_break body { $$ = create_if_stmt($1, 0, $4); }
| if_start_block else_if_stmt_list ELSE_KEYWORD empty_or_many_line_break body { $$ = create_if_stmt($1, $2, $5); }
| if_start_block else_if_stmt_list { $$ = create_if_stmt($1, $2, 0); }
;

else_if_stmt: ELSE_KEYWORD empty_or_many_line_break if_start_block { $$ = $3; }
;

else_if_stmt_list: else_if_stmt { $$ = create_else_if_stmt_list($1); }
| else_if_stmt_list else_if_stmt { $$ = add_to_else_if_stmt_list($1, $2); }
;

param_decl: ID complex_data { $$ = create_param($2, create_id($1)); }
| complex_data { $$ = create_param($1, 0); }
;

param_list: param_decl { $$ = create_param_list($1); }
| param_list one_similicon_or_many_line_break param_decl { $$ = add_to_param_list($1, $3); }
;

params: '(' empty_or_many_line_break param_list ')' { $$ = $3; }
| '(' empty_or_many_line_break ')' { $$ = 0; }
| '(' empty_or_many_line_break param_list ',' empty_or_many_line_break ')' { $$ = $3; }
;

return_v: params { $$ = create_return_with_values($1); }
| complex_data { $$ = create_type_of_return($1); }
;

func_decl: FUNC_KEYWORD empty_or_many_line_break ID params return_v one_similicon_or_many_line_break { $$ = create_func_decl(create_prototype($3, $4, $5), 0); }
| FUNC_KEYWORD empty_or_many_line_break ID params return_v body { $$ = create_func_decl(create_prototype($3, $4, $5), $6); }
| FUNC_KEYWORD empty_or_many_line_break ID params one_similicon_or_many_line_break{ $$ = create_func_decl(create_prototype($3, $4, 0), 0); }
| FUNC_KEYWORD empty_or_many_line_break ID params body { $$ = create_func_decl(create_prototype($3, $4, 0), $5); }
;

highest_decl: const_decl one_similicon_or_many_line_break{ $$ = create_highest_declaration($1->decl_stmt_field); }
| var_decl one_similicon_or_many_line_break{ $$ = create_highest_declaration($1->decl_stmt_field); }
| func_decl { $$ = $1; }
;

highest_decl_list_not_empty: highest_decl { $$ = create_highest_decl_list($1); }
| highest_decl_list_not_empty highest_decl { $$ = add_to_highest_decl_list($1, $2); }
;

highest_decl_list: /* empty */ { $$ = 0; }
| highest_decl_list_not_empty { $$ = $1; }
;

array_element_list: /* empty */ { $$ = 0;  }
| array_element_list_not_empty { $$ = $1; }
;

array_element_list_not_empty: array_element_v { $$ = create_array_element_list($1);  }
| array_element_list_not_empty ',' empty_or_many_line_break array_element_v { $$ = add_to_array_element_list($1, $4); }
;

array_element_v: expr { $$ = create_array_element($1); }
| INT ':' empty_or_many_line_break expr { $$ = create_array_indexed_element($1, $4); }
;

%%

