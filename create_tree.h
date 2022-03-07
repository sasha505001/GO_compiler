#pragma once

#include "tree_nodes.h"
#include <stdio.h>

void print_program_tree(struct program_struct* program, FILE* output_file);
void print_program(struct program_struct* program, FILE* output_file);
void print_import_list(struct import_decl_list_struct* imports, void* parent, FILE* output_file);
void print_import(struct import_one_of_list_struct* import_decl, FILE* output_file);
void print_package(struct package_struct* package, void* parent, FILE* output_file);
void print_highest_decl_list(struct highest_decl_list_struct* decls, void* parent, FILE* output_file);
void print_highest_decl(struct highest_decl_struct* decl, void* parent, FILE* output_file);
void print_function(struct func_decl_struct* func, FILE* output_file);
void print_func_prototype(struct prototype_struct* prototype, FILE* output_file);
void print_func_params(struct param_list_struct* params, FILE* output_file);
void print_func_param(struct param_struct* param, FILE* output_file);
void print_declaration(struct decl_stmt_struct* decl, FILE* output_file);
void print_all_decl_struct(struct decl_all_struct* decl, FILE* output_file);
void print_declaration_list(struct decl_all_list_struct* decl_list, FILE* output_file);
void print_stmt(struct stmt_struct* stmt, FILE* output_file);
void print_expr(struct node* node, FILE* output_file);
void print_body(struct stmt_body_struct* body, FILE* output_file);
void print_stmt_list(struct stmt_list_struct* list, void* parent, FILE* output_file);
void print_branch(struct if_stmt_block_struct* if_stmt_part, FILE* output_file);
void print_if(struct if_stmt_struct* if_stmt, FILE* output_file);
void print_for(struct for_stmt_struct* for_stmt, FILE* output_file);
void print_return(struct return_stmt_struct* return_stmt, FILE* output_file);
void print_array_literal(struct array_lit_struct* array_literal, FILE* output_file);
void print_array_type(struct array_type_struct* array_type, FILE* output_file);
void print_array_elements(struct array_element_list_struct* elements, FILE* output_file);
void print_array_element(struct array_element_struct* element, FILE* output_file);
void print_type(struct complex_data_type* type, FILE* output_file);
void print_node(const char* label, void* node_pointer, FILE* output_file);
void print_edge(void* parent_node, void* child_node, const char* edge_label, FILE* output_file);
void print_expr_list(struct node_list_struct* list, void* parent, FILE* output_file);
void print_assignment(struct assignment_stmt_struct* assignment, FILE* output_file);
