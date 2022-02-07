#pragma once

enum type_type {
	func_t,
	int_t,
	bool_t,
	string_t,
	byte_t,
	arr_t,
};

struct complex_data_type {
	enum type_type type;

	struct prototype_struct* func_type;
	struct array_type_struct* array_type;
};

enum node_type {
	integer,	
	boolean,
	string,
	unary_minus,
	plus,
	minus,
	mul,
	divide,
	less,
	less_or_equal,
	greater,
	greater_or_equal,
	equal,
	not_equal,
	call,	
	array_lit,
	array_indexing,
	id_t,
	qualified_identifier_t, 
	qualified_call_method_t
};

struct node {
	enum node_type type;

	char* string_value;
	int int_value; /* For integer and boolean values */

	/* For arithmetic expressions */
	struct node* left;
	struct node* right;

	/* Store next expr in list */
	struct node* next;

	/* For function call */
	struct node_list_struct* args;

	/* Array fields */
	struct array_lit_struct* array; 
};

enum stmt_type {
	empty_stmt_t,
	expr_stmt_t,
	for_loop_t,
	if_stmt_t,
	all_assignment_t,
	short_decl_t,
	decl_t,
	const_decl_t,
	body_t,
	return_stmt_t,
	inc_t,
	dec_t,
	break_t,
	continue_t
};

enum decl_type {
	var_t,
	const_t
};

enum for_type {
	empty_for,
	for_with_condition,
	for_with_block
};

struct for_stmt_struct {
	enum for_type type;

	struct stmt_struct* for_block_init_stmt;
	struct stmt_struct* for_block_post_stmt;
	struct node* for_condition;
	struct stmt_struct* body;
};

struct stmt_struct {
	enum stmt_type type;

	struct stmt_body_struct* body_field;
	struct if_stmt_struct* if_stmt_field;
	struct for_stmt_struct* for_stmt_field;
	struct return_stmt_struct* return_stmt_field;
	struct decl_stmt_struct* decl_stmt_field;
	struct node* node_field;
	struct assignment_stmt_struct* assignment_field;
	struct decl_stmt_struct* short_var_decl_field; // 0 в поле type структуры decl_stmt_struct при заполнении в create_tree_nodes

	struct stmt_struct* next;
};

struct node_list_struct {
	struct node* first;
	struct node* last;
};

struct stmt_list_struct {
	struct stmt_struct* first;
	struct stmt_struct* last;
};

struct if_stmt_struct {
	struct if_stmt_block_struct* if_stmt_block;
	struct else_if_stmt_list_struct* else_if_stmts;
	struct stmt_struct* else_body;
};

struct if_stmt_block_struct {
	struct stmt_struct* pre_condition_stmt;
	struct node* condition;
	struct stmt_struct* if_body;

	struct if_stmt_block_struct* next;
};

struct else_if_stmt_list_struct {
	struct if_stmt_block_struct* first;
	struct if_stmt_block_struct* last;
};

enum assignment_type {
	simple_assignment_t,
	plus_assignment_t,
	minus_assignment_t,
	mul_assignment_t,
	div_assignment_t,
};

struct assignment_stmt_struct {
	enum assignment_type type;

	struct node_list_struct* left;
	struct node_list_struct* right;
};

struct return_stmt_struct {
	struct node_list_struct* return_values;
};

struct id_struct {
	char* name;
	struct id_struct* next;
};

struct id_list_struct {
	struct id_struct* first;
	struct id_struct* last;
};

struct decl_all_struct {
	struct id_struct* id;
	struct node* values;
	struct complex_data_type* type;

	struct decl_all_struct* next;
};

struct decl_all_list_struct {
	struct decl_all_struct* first;
	struct decl_all_struct* last;
};

struct decl_stmt_struct {
	enum decl_type declaration_type;
	struct decl_all_list_struct* all_decl_list;
	struct decl_all_struct* all_decl;
};

struct package_struct {
	char* package_name;
};

struct import_struct {
	char* import_path;
	char* alias;

	struct import_struct* next;
};

struct import_list_struct {
	struct import_struct* first;
	struct import_struct* last;
};

struct import_one_of_list_struct {
	struct import_struct* import;
	struct import_list_struct* import_list;

	struct import_one_of_list_struct* next;
};

struct import_decl_list_struct {
	struct import_one_of_list_struct* first;
	struct import_one_of_list_struct* last;
};

struct highest_decl_struct {
	struct decl_stmt_struct* decl;
	struct func_decl_struct* func_decl;

	struct highest_decl_struct* next;
};

struct highest_decl_list_struct {
	struct highest_decl_struct* first;
	struct highest_decl_struct* last;
};

struct param_struct {
	struct id_struct* id;
	struct complex_data_type* type;

	struct param_struct* next;
};

struct param_list_struct {
	struct param_struct* first;
	struct param_struct* last;
};

struct return_values_struct {
	struct param_list_struct* return_values;
	struct complex_data_type* return_type;
};

struct prototype_struct {
	char* func_name;
	struct param_list_struct* params;
	struct return_values_struct* return_value;
};

struct func_decl_struct {
	struct prototype_struct* prototype;
	struct stmt_struct* body;
};

struct array_type_struct {
	struct complex_data_type* type;
	struct node* length;
};

struct array_element_list_struct {
	struct array_element_struct* first;
	struct array_element_struct* last;
};

struct array_element_struct {
	struct node* node;
	int index;

	struct array_element_struct* next;
};

struct array_lit_struct {
	struct array_type_struct* type;
	struct array_element_list_struct* array_value;
};

struct program_struct {
	struct package_struct* package;
	struct import_decl_list_struct* imports;
	struct highest_decl_list_struct* declarations;
};

/*
struct basic_lit_struct {
	char* string_value;
	int int_value;
};
*/

struct stmt_body_struct {
	struct stmt_list_struct* list;
};