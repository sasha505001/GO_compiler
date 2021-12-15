#include "malloc.h"
#include "tree_nodes.h"

struct node* create_int_node(int value) {
    struct node* result = (struct node*)malloc(sizeof(struct node));
    result->type = integer;
    result->int_value = value;
    return result;
}

struct node* create_string_node(char* value) {
    struct node* result = (struct node*)malloc(sizeof(struct node));
    result->type = string;
    result->string_value = value;
    return result;
}

struct node* create_boolean_node(int value) {
    struct node* result = (struct node*)malloc(sizeof(struct node));
    result->type = boolean;
    result->int_value = value;
    return result;
}

struct node* create_id_node(char* identifier) {
    struct node* result = (struct node*)malloc(sizeof(struct node));
    result->type = id_t;
    result->string_value = identifier;

    return result;
}

struct node* create_oper_node(enum node_type type, struct node* left, struct node* right) {
    struct node* result = (struct node*)malloc(sizeof(struct node));
    result->type = type;
    result->left = left;
    result->right = right;

    return result;
}

struct array_element_struct* create_array_indexed_element(int key, struct node* expr) {
    struct array_element_struct* result = (struct array_element_struct*)malloc(sizeof(struct array_element_struct));
    result->index = key;
    result->node = expr;
    
    return result;
}

struct array_element_struct* create_array_element(struct node* expr) {
    struct array_element_struct* result = (struct array_element_struct*)malloc(sizeof(struct array_element_struct));
    result->node = expr;

    return result;
}

struct array_element_list_struct* create_array_element_list(struct array_element_struct* first_element) {
    struct array_element_list_struct* result = (struct array_element_list_struct*)malloc(sizeof(struct array_element_list_struct));
    result->first = first_element;
    result->last = first_element;
    first_element->next = 0;

    return result;
}

struct array_element_list_struct* add_to_array_element_list(struct array_element_list_struct* list, struct array_element_struct* next_element) {
    list->last->next = next_element;
    list->last = next_element;
    next_element->next = 0;

    return list;
}

struct node* create_array_lit(struct complex_data_type* type, struct node* length, struct array_element_list_struct* elements) {
   struct array_lit_struct* array_expr = (struct array_lit_struct*)malloc(sizeof(struct array_lit_struct));

    struct array_type_struct* array_type = (struct array_type_struct*)malloc(sizeof(struct array_type_struct));
    array_type->type = type;
    array_type->length = length;

    array_expr->type = array_type;
    array_expr->array_value = elements;

    struct node* result = (struct node*)malloc(sizeof(struct node));
    result->type = array_lit;
    result->array = array_expr;

    return result;
}

struct stmt_struct* create_empty_for_stmt(struct stmt_struct* block) {
    struct stmt_struct* result = (struct stmt_struct*)malloc(sizeof(struct stmt_struct));

    struct for_stmt_struct* for_stmt = (struct for_stmt_struct*)malloc(sizeof(struct for_stmt_struct));
    for_stmt->body = block;
    for_stmt->type = empty_for;

    result->type = for_loop_t;
    result->for_stmt_field = for_stmt;

    return result;
}

struct stmt_struct* create_for_with_condition(struct node* condition, struct stmt_struct* block) {
    struct stmt_struct* result = (struct stmt_struct*)malloc(sizeof(struct stmt_struct));

    struct for_stmt_struct* for_stmt = (struct for_stmt_struct*)malloc(sizeof(struct for_stmt_struct));
    for_stmt->for_condition = condition;
    for_stmt->body = block;
    for_stmt->type = for_with_condition;

    result->type = for_loop_t;
    result->for_stmt_field = for_stmt;

    return result;
}

struct stmt_struct* create_for_with_block_stmt(
    struct stmt_struct* init_stmt, struct stmt_struct* post_stmt, struct node* condition, struct stmt_struct* block
) {
    struct stmt_struct* result = (struct stmt_struct*)malloc(sizeof(struct stmt_struct));

    struct for_stmt_struct* for_stmt = (struct for_stmt_struct*)malloc(sizeof(struct for_stmt_struct));
    for_stmt->for_block_init_stmt = init_stmt;
    for_stmt->for_block_post_stmt = post_stmt;
    for_stmt->for_condition = condition;
    for_stmt->body = block;
    for_stmt->type = for_with_block;

    result->type = for_loop_t;
    result->for_stmt_field = for_stmt;

    return result;
}

struct stmt_struct* create_if_stmt(
    struct if_stmt_block_struct* if_stmt_block,
    struct else_if_stmt_list_struct* else_if_stmts,
    struct stmt_struct* else_body
) {
    struct if_stmt_struct* if_stmt = (struct if_stmt_struct*)malloc(sizeof(struct if_stmt_struct));

    if_stmt->if_stmt_block = if_stmt_block;
    if_stmt->else_if_stmts = else_if_stmts;
    if_stmt->else_body = else_body;

    struct stmt_struct* result = (struct stmt_struct*)malloc(sizeof(struct stmt_struct));
    result->type = if_stmt_t;
    result->if_stmt_field = if_stmt;

    return result;
}
struct if_stmt_block_struct* create_if_stmt_block(
    struct stmt_struct* pre_condition_stmt,
    struct node* condition,
    struct stmt_struct* block
) {
    struct if_stmt_block_struct* result = (struct if_stmt_block_struct*)malloc(sizeof(struct if_stmt_block_struct));
    result->condition = condition;
    result->if_body = block;
    result->pre_condition_stmt = pre_condition_stmt;

    return result;
}

struct else_if_stmt_list_struct* create_else_if_stmt_list(struct if_stmt_block_struct* el) {
    struct else_if_stmt_list_struct* result = (struct else_if_stmt_list_struct*)malloc(sizeof(struct else_if_stmt_list_struct));
    result->first = el;
    result->last = el;
    el->next = 0;

    return result;
}

struct else_if_stmt_list_struct* add_to_else_if_stmt_list(struct else_if_stmt_list_struct* list, struct if_stmt_block_struct* el) {
    list->last->next = el;
    list->last = el;
    el->next = 0;

    return list;
}

struct stmt_list_struct* create_stmt_list(struct stmt_struct* first_stmt) {
    struct stmt_list_struct* result = (struct stmt_list_struct*)malloc(sizeof(struct stmt_list_struct));
    result->first = first_stmt;
    result->last = first_stmt;
    first_stmt->next = 0;
    return result;
}

struct stmt_list_struct* add_to_stmt_list(struct stmt_list_struct* list, struct stmt_struct* stmt) {
    list->last->next = stmt;
    list->last = stmt;
    stmt->next = 0;

    return list;
}

struct stmt_struct* create_empty_stmt() {
    struct stmt_struct* empty_stmt = (struct stmt_struct*)malloc(sizeof(struct stmt_struct));

    empty_stmt->type = empty_stmt_t;

    return empty_stmt;
}

struct highest_decl_struct* create_func_decl(struct prototype_struct* signature, struct stmt_struct* block) {
    struct func_decl_struct* func_decl = (struct func_decl_struct*)malloc(sizeof(struct func_decl_struct));

    func_decl->prototype = signature;
    func_decl->body = block;

    struct highest_decl_struct* result = (struct highest_decl_struct*)malloc(sizeof(struct highest_decl_struct));
    result->func_decl = func_decl;

    return result;
}

struct prototype_struct* create_prototype(char* name, struct param_list_struct* params, struct return_values_struct* return_value) {
    struct prototype_struct* func_signature = (struct prototype_struct*)malloc(sizeof(struct prototype_struct));

    func_signature->func_name = name;
    func_signature->params = params;
    func_signature->return_value = return_value;

    return func_signature;
}

struct param_struct* create_param(struct complex_data_type* param_type, struct id_struct* id) {
    struct param_struct* param = (struct param_struct*)malloc(sizeof(struct param_struct));

    param->id = id;
    param->type = param_type;

    return param;
}

struct param_list_struct* create_param_list(struct param_struct* first_param) {
    struct param_list_struct* param_list = (struct param_list_struct*)malloc(sizeof(struct param_list_struct));

    param_list->first = first_param;
    param_list->last = first_param;
    
    first_param->next = 0;

    return param_list;
}

struct param_list_struct* add_to_param_list(struct param_list_struct* list, struct param_struct* param) {
    list->last->next = param;
    list->last = param;
    list->last->next = 0;

    return list;
}

struct id_struct* create_id(char* name) {
    struct id_struct* id = (struct id_struct*)malloc(sizeof(struct id_struct));
    id->name = name;

    return id;
}

struct id_list_struct* create_id_list(struct id_struct* first_id) {
    struct id_list_struct* id_list = (struct id_list_struct*)malloc(sizeof(struct id_list_struct));

    id_list->first = first_id;
    id_list->last = first_id;
    id_list->last = 0;

    return id_list;
}

struct id_list_struct* add_to_id_list(struct id_list_struct* list, struct id_struct* id) {
    list->last->next = id;
    list->last = id;
    id->next = 0;

    return list;
}

struct stmt_struct* create_return_stmt(struct node_list_struct* return_value) {
    struct return_stmt_struct* return_stmt = (struct return_stmt_struct*)malloc(sizeof(struct return_stmt_struct));

    return_stmt->return_values = return_value;

    struct stmt_struct* stmt = (struct stmt_struct*)malloc(sizeof(struct stmt_struct));
    stmt->return_stmt_field = return_stmt;
    stmt->type = return_stmt_t;

    return stmt;
}

struct stmt_struct* create_inc_dec_stmt(struct node* expr, enum stmt_type type) {
    struct stmt_struct* result = (struct stmt_struct*)malloc(sizeof(struct stmt_struct));
    result->node_field = expr;
    result->type = type;

    return result;
}

struct node_list_struct* create_node_list(struct node* first_expr) {
    struct node_list_struct* expr_list = (struct node_list_struct*)malloc(sizeof(struct node_list_struct));

    expr_list->first = first_expr;
    expr_list->last = first_expr;
    first_expr->next = 0;

    return expr_list;
}

struct node_list_struct* add_to_node_list(struct node_list_struct* list, struct node* expr) {
    list->last->next = expr;
    list->last = expr;
    expr->next = 0;

    return list;
}

struct decl_all_struct* create_all_decl(struct id_struct* id, struct node* value, struct complex_data_type* type) {
    struct decl_all_struct* decl_spec = (struct decl_all_struct*)malloc(sizeof(struct decl_all_struct));

    decl_spec->id = id;
    decl_spec->values = value;
    decl_spec->type = type;

    return decl_spec;
}

struct decl_all_list_struct* create_all_decl_list(struct decl_all_struct* first_spec) {
    struct decl_all_list_struct* list = (struct decl_all_list_struct*)malloc(sizeof(struct decl_all_list_struct));

    list->first = first_spec;
    list->last = first_spec;

    return list;
}

struct decl_all_list_struct* add_to_all_decl_list(struct decl_all_list_struct* list, struct decl_all_struct* next) {
    list->last->next = next;
    list->last = next;
    next->next = 0;

    return list;
}

struct stmt_struct* create_decl_stmt(struct decl_all_struct* spec, enum decl_type declaration_type) {
    struct decl_stmt_struct* decl = (struct decl_stmt_struct*)malloc(sizeof(struct decl_stmt_struct));

    decl->all_decl = spec;
    decl->all_decl_list = 0;
    decl->declaration_type = declaration_type;

    struct stmt_struct* stmt = (struct stmt_struct*)malloc(sizeof(struct stmt_struct));
    stmt->decl_stmt_field = decl;
    if (declaration_type == var_t)
        stmt->type = decl_t;
    else if (declaration_type == const_t)
        stmt->type = const_decl_t;

    return stmt;
}

struct stmt_struct* create_decl_stmt_from_list(struct decl_all_list_struct* decl_spec_list, enum decl_type declaration_type) {
    struct decl_stmt_struct* decl = (struct decl_stmt_struct*)malloc(sizeof(struct decl_stmt_struct));

    decl->all_decl_list = decl_spec_list;
    decl->all_decl = 0;
    decl->declaration_type = declaration_type;

    struct stmt_struct* stmt = (struct stmt_struct*)malloc(sizeof(struct stmt_struct));
    stmt->decl_stmt_field = decl;
    if (declaration_type == var_t)
        stmt->type = decl_t;
    else if (declaration_type == const_t)
        stmt->type = const_decl_t;

    return stmt;
}

//TO DO не используется create_top_level_func
struct highest_decl_struct* create_highest_decl_func(struct func_decl_struct* func_decl) {
    struct highest_decl_struct* result = (struct highest_decl_struct*)malloc(sizeof(struct highest_decl_struct));
    result->func_decl = func_decl;
    
    return result;
}

struct highest_decl_list_struct* create_highest_decl_list(struct highest_decl_struct* first_top_level_decl) {
    struct highest_decl_list_struct* list = (struct highest_decl_list_struct*)malloc(sizeof(struct highest_decl_list_struct));
    list->first = first_top_level_decl;
    list->last = first_top_level_decl;
    first_top_level_decl->next = 0;

    return list;
}

struct highest_decl_list_struct* add_to_highest_decl_list(struct highest_decl_list_struct* list, struct highest_decl_struct* next_top_level_decl) {
    list->last->next = next_top_level_decl;
    list->last = next_top_level_decl;
    next_top_level_decl->next = 0;

    return list;
}

struct package_struct* create_package_decl(char* package_name) {
    struct package_struct* result = (struct package_struct*)malloc(sizeof(struct package_struct));
    result->package_name = package_name;

    return result;
}

struct import_struct* create_import_with_alias(char* alias, char* path) {
    struct import_struct* result = (struct import_struct*)malloc(sizeof(struct import_struct));
    result->alias = alias;
    result->import_path = path;

    return result;
}

struct import_struct* create_import(char* path) {
    struct import_struct* result = (struct import_struct*)malloc(sizeof(struct import_struct));
    result->import_path = path;
    result->alias = nullptr;

    return result;
}

struct import_list_struct* create_import_list(struct import_struct* first_import_spec) {
    struct import_list_struct* list = (struct import_list_struct*)malloc(sizeof(struct import_list_struct));
    list->first = first_import_spec;
    list->last = first_import_spec;
    first_import_spec->next = 0;

    return list;
}

struct import_list_struct* add_to_import_list(struct import_list_struct* list, struct import_struct* next_element) {
    list->last->next = next_element;
    list->last = next_element;
    next_element->next = 0;

    return list;
}

struct import_one_of_list_struct* create_import_decl(struct import_struct* import_spec) {
    struct import_one_of_list_struct* result = (struct import_one_of_list_struct*)malloc(sizeof(struct import_one_of_list_struct));
    result->import = import_spec;

    return result;
}

struct import_one_of_list_struct* create_import_decl_one_of_list_list(struct import_list_struct* list) {
    struct import_one_of_list_struct* result = (struct import_one_of_list_struct*)malloc(sizeof(struct import_one_of_list_struct));
    result->import_list = list;

    return result;
}

struct import_decl_list_struct* create_import_decl_list(struct import_one_of_list_struct* first_import_decl) {
    struct import_decl_list_struct* list = (struct import_decl_list_struct*)malloc(sizeof(struct import_decl_list_struct));
    list->first = first_import_decl;
    list->last = first_import_decl;
    first_import_decl->next = 0;

    return list;
}

struct import_decl_list_struct* add_to_import_decl_list(struct import_decl_list_struct* list, struct import_one_of_list_struct* next_element) {
    list->last->next = next_element;
    list->last = next_element;
    next_element->next = 0;

    return list;
}

struct program_struct* create_program(struct package_struct* package, struct highest_decl_list_struct* decls) {
    struct program_struct* program = (struct program_struct*)malloc(sizeof(struct program_struct));
    program->package = package;
    program->declarations = decls;
    program->imports = 0;

    return program;
}

struct program_struct* create_program_with_imports(struct package_struct* package, struct import_decl_list_struct* imports, struct highest_decl_list_struct* decls) {
    struct program_struct* program = (struct program_struct*)malloc(sizeof(struct program_struct));
    program->package = package;
    program->declarations = decls;
    program->imports = imports;

    return program;
}

struct complex_data_type* create_complex_data_type(enum type_type type) {
    struct complex_data_type* complex_data_type = (struct complex_data_type*)malloc(sizeof(struct complex_data_type));

    complex_data_type->type = type;

    return complex_data_type;
}

struct complex_data_type* create_function_type(struct prototype_struct* func_signature) {
    struct complex_data_type* complex_data_type = (struct complex_data_type*)malloc(sizeof(struct complex_data_type));

    complex_data_type->type = func_t;
    complex_data_type->func_type = func_signature;

    return complex_data_type;
}

struct complex_data_type* create_array_type(struct node* length, struct complex_data_type* element_type) {
    struct array_type_struct* array_type = (struct array_type_struct*)malloc(sizeof(struct array_type_struct));

    array_type->type = element_type;
    array_type->length = length;

    struct complex_data_type* complex_data_type = (struct complex_data_type*)malloc(sizeof(struct complex_data_type));
    complex_data_type->type = arr_t;
    complex_data_type->array_type = array_type;
    
    return complex_data_type;
}

struct stmt_struct* create_assignment(enum assignment_type type, struct node_list_struct* left, struct node_list_struct* right) {
    struct assignment_stmt_struct* assignment_stmt = (struct assignment_stmt_struct*)malloc(sizeof(struct assignment_stmt_struct));
    assignment_stmt->left = left;
    assignment_stmt->right = right;
    assignment_stmt->type = type;

    struct stmt_struct* assignment = (struct stmt_struct*)malloc(sizeof(struct stmt_struct));

    assignment->type = all_assignment_t;
    assignment->assignment_field = assignment_stmt;

    return assignment;
}

struct stmt_struct* create_node_stmt(struct node* expression) {
    struct stmt_struct* expr = (struct stmt_struct*)malloc(sizeof(struct stmt_struct));

    expr->type = expr_stmt_t;
    expr->node_field = expression;

    return expr;
}

struct stmt_struct* create_block(struct stmt_list_struct* statements) {
    struct stmt_body_struct* block = (struct stmt_body_struct*)malloc(sizeof(struct stmt_body_struct));
    block->list = statements;

    struct stmt_struct* block_stmt = (struct stmt_struct*)malloc(sizeof(struct stmt_struct));

    block_stmt->type = body_t;
    block_stmt->body_field = block;

    return block_stmt;
}

struct return_values_struct* create_type_of_return(struct complex_data_type* type) {
    struct return_values_struct* func_return = (struct return_values_struct*)malloc(sizeof(struct return_values_struct));

    func_return->return_type = type;
    func_return->return_values = 0;

    return func_return;
}

struct return_values_struct* create_return_with_values(struct param_list_struct* return_values) {
    struct return_values_struct* func_return = (struct return_values_struct*)malloc(sizeof(struct return_values_struct));

    func_return->return_values = return_values;
    func_return->return_type = 0;

    return func_return;
}

struct node* create_func_call(struct node* callable, struct node_list_struct* args) {
    struct node* func_call = (struct node*)malloc(sizeof(struct node));

    func_call->type = call;
    func_call->args = args;
    func_call->left = callable;

    return func_call;
}

struct stmt_struct* create_short_decl(struct id_struct* identifier, struct node* expression) {
    struct stmt_struct* stmt = (struct stmt_struct*)malloc(sizeof(struct stmt_struct));

    struct decl_stmt_struct* short_var_decl_value = (struct decl_stmt_struct*)malloc(sizeof(struct decl_stmt_struct));
    short_var_decl_value->all_decl = create_all_decl(identifier, expression, 0);
    short_var_decl_value->declaration_type = var_t;

    stmt->short_var_decl_field = short_var_decl_value;
    stmt->type = short_decl_t;

    return stmt;
}

struct highest_decl_struct* create_highest_declaration(struct decl_stmt_struct* decl_stmt) {
    struct highest_decl_struct* top_level_decl = (struct highest_decl_struct*)malloc(sizeof(struct highest_decl_struct));
    top_level_decl->decl = decl_stmt;

    return top_level_decl;
}

struct node* create_id_use_in_package_node(char* package_name, char* id_in_package) {
    struct node* qualified_id = (struct node*)malloc(sizeof(struct node));

    qualified_id->left = create_id_node(package_name);
    qualified_id->right = create_id_node(id_in_package);
    qualified_id->type = qualified_identifier_t;

    return qualified_id;
}

struct node* create_method_use_in_package_node(char* package_name, char* name_of_method, struct node_list_struct* args)
{
    struct node* qualified_call_of_method = (struct node*)malloc(sizeof(struct node));

    qualified_call_of_method->type = qualified_call_method_t;
    qualified_call_of_method->args = args;
    qualified_call_of_method->left = create_id_node(package_name);
    qualified_call_of_method->right = create_id_node(name_of_method);

    return qualified_call_of_method;
};


struct stmt_struct* create_continue_stmt() {
    struct stmt_struct* continue_stmt = (struct stmt_struct*)malloc(sizeof(struct stmt_struct));
    continue_stmt->type = continue_t;

    return continue_stmt;
}

struct stmt_struct* create_break_stmt() {
    struct stmt_struct* break_stmt = (struct stmt_struct*)malloc(sizeof(struct stmt_struct));
    break_stmt->type = break_t;

    return break_stmt;
}