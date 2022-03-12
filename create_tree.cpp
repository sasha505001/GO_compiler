#include "create_tree.h"
#include "string.h"

void print_program_tree(struct program_struct* program, FILE* output_file) {
	fprintf(output_file, "digraph G{\n");
	fprintf(output_file, "Id%p [label=\"program\"]\n", program);
	if (program->package != 0) {
		print_package(program->package, program, output_file);
	}
	if (program->imports != 0) {
		print_import_list(program->imports, program, output_file);
	}
	if (program->declarations != 0) {
		print_highest_decl_list(program->declarations, program, output_file);
	}
	fprintf(output_file, "}");
}

void print_import_list(struct import_decl_list_struct* imports, void* parent, FILE* output_file) {
	if (imports != 0) {
		struct import_one_of_list_struct* current_import_decl = imports->first;
		while (current_import_decl != 0) {
			print_import(current_import_decl, output_file);
			fprintf(output_file, "Id%p->Id%p;\n", parent, current_import_decl);
			current_import_decl = current_import_decl->next;
		}
	}
}

void print_import(struct import_one_of_list_struct* import_decl, FILE* output_file) {
	fprintf(output_file, "Id%p [label=\"import_decl\"]\n", import_decl);
	struct import_struct* current = 0;
	if(import_decl->import != 0){
		current = import_decl->import;
	}
	else{
		if(import_decl->import_list != NULL){
			current = import_decl->import_list->first;
		}
	}
	
	while(current != 0){		
		if (current->alias != NULL) {
			// Print import with alias	
			fprintf(output_file, "Id%p [label=\"%s as %s\"];\n", current, current->import_path, current->alias);
			fprintf(output_file, "Id%p->Id%p;\n", import_decl, current);
		}
		else {
			// Print import just with import path
			fprintf(output_file, "Id%p [label=\"%s\"]\n", current, current->import_path);
			fprintf(output_file, "Id%p->Id%p [label=\"imported\\npackage\"];\n", import_decl, current);
		}
		current = current->next;
	}
}

void print_package(struct package_struct* package, void* parent, FILE* output_file) {
	fprintf(output_file, "Id%p [label=\"package %s\"]\n", package, package->package_name);
	print_edge(parent, package, "package", output_file);
}

void print_highest_decl_list(struct highest_decl_list_struct* decls, void* parent, FILE* output_file) {
	print_node("highest_decls", decls, output_file);
	print_edge(parent, decls, "decls", output_file);
	struct highest_decl_struct* current_decl = decls->first;
	while (current_decl != 0) {
		print_highest_decl(current_decl, decls, output_file);
		current_decl = current_decl->next;
	}
}

void print_highest_decl(struct highest_decl_struct* decl, void* parent, FILE* output_file) {
	if (decl->func_decl != 0) {
		print_function(decl->func_decl, output_file);
		print_edge(parent, decl->func_decl, "", output_file);
	}
	else {
		print_declaration(decl->decl, output_file);
		print_edge(parent, decl->decl, "", output_file);
	}
}

void print_function(struct func_decl_struct* func, FILE* output_file) {
	print_node("func_decl", func, output_file);
	print_func_prototype(func->prototype, output_file);
	print_body(func->body->body_field, output_file);

	print_edge(func, func->prototype, "prototype", output_file);
	print_edge(func, func->body->body_field, "body", output_file);
}

void print_func_prototype(struct prototype_struct* prototype, FILE* output_file) {
	print_node("func", prototype, output_file);

	fprintf(output_file, "IdFuncName%p [label=\"%s\"]; \n", prototype, prototype->func_name);
	fprintf(output_file, "Id%p -> IdFuncName%p [label=\"name\"]\n", prototype, prototype);

	if (prototype->params != 0) {
		print_func_params(prototype->params, output_file);
		print_edge(prototype, prototype->params, "", output_file);
	}

	if (prototype->return_value != 0 && prototype->return_value->return_values != 0) {
		print_func_params(prototype->return_value->return_values, output_file);
		print_edge(prototype, prototype->return_value->return_values, "return", output_file);
	}
	else if (prototype->return_value != 0 && prototype->return_value->return_type != 0) {
		print_type(prototype->return_value->return_type, output_file);
		print_edge(prototype, prototype->return_value->return_type, "return", output_file);
	}
}

void print_func_params(struct param_list_struct* params, FILE* output_file) {
	if (params != 0) {
		struct param_struct* current = params->first;

		print_node("params", params, output_file);

		while (current != 0) {
			print_func_param(current, output_file);
			print_edge(params, current, "", output_file);
			current = current->next;
		}
	}
}

void print_func_param(struct param_struct* param, FILE* output_file) {
	print_node("param", param, output_file);
	print_node(param->id->name, param->id, output_file);
	print_type(param->type, output_file);

	print_edge(param, param->id, "id", output_file);
	print_edge(param, param->type, "type", output_file);
}

void print_declaration(struct decl_stmt_struct* decl, FILE* output_file) {
	if (decl->declaration_type == const_t){
		print_node("const_decl", decl, output_file);
	} else if (decl->declaration_type == var_t)
		print_node("var decl", decl, output_file);

	if (decl->all_decl != 0) {
		print_all_decl_struct(decl->all_decl, output_file);
		print_edge(decl, decl->all_decl, "", output_file);
	} else if (decl->all_decl_list != 0) {
		print_declaration_list(decl->all_decl_list, output_file);
		print_edge(decl, decl->all_decl_list, "", output_file);
	}
}

void print_all_decl_struct(struct decl_all_struct* decl, FILE* output_file) {
	print_node("decl", decl, output_file);

	print_node(decl->id->name, decl->id, output_file);
	print_edge(decl, decl->id, "identifier", output_file);

	if (decl->type != 0) {
		print_type(decl->type, output_file);
		print_edge(decl, decl->type, "type", output_file);
	}

	if (decl->values != 0) {
		print_expr(decl->values, output_file);
		print_edge(decl, decl->values, "value", output_file);
	}
}

void print_declaration_list(struct decl_all_list_struct* decl_list, FILE* output_file) {
	struct decl_all_struct* current = decl_list->first;

	print_node("decls", decl_list, output_file);

	while (current != 0) {
		print_all_decl_struct(current, output_file);
		print_edge(decl_list, current, "", output_file);

		current = current->next;
	}
}

void print_stmt(struct stmt_struct* stmt, FILE* output_file) {
	print_node("stmt", stmt, output_file);
	switch (stmt->type) {
	case empty_stmt_t:
		print_node("empty_stmt", stmt, output_file);
		break;

	case if_stmt_t:
		print_if(stmt->if_stmt_field, output_file);
		print_edge(stmt, stmt->if_stmt_field, "", output_file);
		break;

	case all_assignment_t:
		print_assignment(stmt->assignment_field, output_file);
		print_edge(stmt, stmt->assignment_field, "", output_file);
		break;

	case for_loop_t:
		print_for(stmt->for_stmt_field, output_file);
		print_edge(stmt, stmt->for_stmt_field, "for", output_file);
		break;

	case short_decl_t:
		print_declaration(stmt->short_var_decl_field, output_file);
		print_edge(stmt, stmt->short_var_decl_field, "short_var", output_file);
		break;

	case decl_t:
		print_declaration(stmt->decl_stmt_field, output_file);
		print_edge(stmt, stmt->decl_stmt_field, "var_decl", output_file);
		break;

	case const_decl_t:
		print_declaration(stmt->decl_stmt_field, output_file);
		print_edge(stmt, stmt->decl_stmt_field, "const_decl", output_file);
		break;

	case body_t:
		print_body(stmt->body_field, output_file);
		print_edge(stmt, stmt->body_field, "body", output_file);
		break;
        
	case expr_stmt_t:
		print_expr(stmt->node_field, output_file);
		print_edge(stmt, stmt->node_field, "node_stmt", output_file);
		break;

	case return_stmt_t:
		print_return(stmt->return_stmt_field, output_file);
		print_edge(stmt, stmt->return_stmt_field, "return", output_file);
		break;

	case inc_t:
		fprintf(output_file, "IdInc%p [label=\"++\"]\n", stmt);
		fprintf(output_file, "Id%p->IdInc%p\n", stmt, stmt);
		print_expr(stmt->node_field, output_file);
		fprintf(output_file, "IdInc%p->Id%p\n", stmt, stmt->node_field);
		break;

	case dec_t:
		fprintf(output_file, "IdInc%p [label=\"--\"]\n", stmt);
		fprintf(output_file, "Id%p->IdInc%p\n", stmt, stmt);
		print_expr(stmt->node_field, output_file);
		fprintf(output_file, "IdInc%p->Id%p\n", stmt, stmt->node_field);
		break;

	case continue_t:
		fprintf(output_file, "IdContinue%p [label=\"continue\"];\n", stmt);
		fprintf(output_file, "Id%p -> IdContinue%p;\n", stmt, stmt);
		break;

	case break_t:
		fprintf(output_file, "IdBreak%p [label=\"break\"];\n", stmt);
		fprintf(output_file, "Id%p -> IdBreak%p;\n", stmt, stmt);
		break;
	}
}

void print_expr(struct node* node, FILE* output_file) {
	switch (node->type) {
	case integer:
		print_node("INT", node, output_file);
		fprintf(output_file, "IdValue%p [label=\"%d\"]\n", node, node->int_value);
		fprintf(output_file, "Id%p->IdValue%p\n", node, node);
		break;

	case string:
		print_node("STRING", node, output_file);
		fprintf(output_file, "IdValue%p [label=\"%s\"]\n", node, node->string_value);
		fprintf(output_file, "Id%p->IdValue%p\n", node, node);
		break;

	case boolean:
		print_node("BOOLEAN", node, output_file);
		if (node->int_value == 0) {
			fprintf(output_file, "IdValue%p [label=\"false\"]\n", node);
		} 
		else {
			fprintf(output_file, "IdValue%p [label=\"true\"]\n", node);
		}
		fprintf(output_file, "Id%p->IdValue%p\n", node, node);
		break;

	case unary_minus:
		print_node("Unary -", node, output_file);
		print_expr(node->left, output_file);
		print_edge(node, node->left, "", output_file);
		break;

	case plus:
		print_node("Plus +", node, output_file);
		print_expr(node->left, output_file);
		print_expr(node->right, output_file);
		print_edge(node, node->left, "", output_file);
		print_edge(node, node->right, "", output_file);
		break;

	case minus:
		print_node("Minus -", node, output_file);
		print_expr(node->left, output_file);
		print_expr(node->right, output_file);
		print_edge(node, node->left, "", output_file);
		print_edge(node, node->right, "", output_file);
		break;

	case mul:
		print_node("Multiplication *", node, output_file);
		print_expr(node->left, output_file);
		print_expr(node->right, output_file);
		print_edge(node, node->left, "", output_file);
		print_edge(node, node->right, "", output_file);
		break;

	case divide:
		print_node("Divide /", node, output_file);
		print_expr(node->left, output_file);
		print_expr(node->right, output_file);
		print_edge(node, node->left, "", output_file);
		print_edge(node, node->right, "", output_file);
		break;

	case less:
		print_node("Less <", node, output_file);
		print_expr(node->left, output_file);
		print_expr(node->right, output_file);
		print_edge(node, node->left, "left", output_file);
		print_edge(node, node->right, "right", output_file);
		break;

	case greater:
		print_node("Greater >", node, output_file);
		print_expr(node->left, output_file);
		print_expr(node->right, output_file);
		print_edge(node, node->left, "", output_file);
		print_edge(node, node->right, "", output_file);
		break;

	case less_or_equal:
		print_node("LessEql <=", node, output_file);
		print_expr(node->left, output_file);
		print_expr(node->right, output_file);
		print_edge(node, node->left, "", output_file);
		print_edge(node, node->right, "", output_file);
		break;

	case greater_or_equal:
		print_node("GreaterEql >=", node, output_file);
		print_expr(node->left, output_file);
		print_expr(node->right, output_file);
		print_edge(node, node->left, "", output_file);
		print_edge(node, node->right, "", output_file);
		break;

	case equal:
		print_node("Equal ==", node, output_file);
		print_expr(node->left, output_file);
		print_expr(node->right, output_file);
		print_edge(node, node->left, "", output_file);
		print_edge(node, node->right, "", output_file);
		break;

	case not_equal:
		print_node("Not equal !=", node, output_file);
		print_expr(node->left, output_file);
		print_expr(node->right, output_file);
		print_edge(node, node->left, "", output_file);
		print_edge(node, node->right, "", output_file);
		break;


	case call:
		print_node("Func call", node, output_file);
		print_expr(node->left, output_file); 
		print_edge(node, node->left, "func name", output_file);
		if (node->args != 0) {
			print_node("Args", node->args, output_file);
			print_edge(node, node->args, "args", output_file);
			struct node* current_arg = node->args->first;

			int arg_index = 0;

			while (current_arg != 0) {
				print_expr(current_arg, output_file);
				fprintf(output_file, "Id%p -> Id%p [label=\"%i\"]; \n", node->args, current_arg, arg_index);

				current_arg = current_arg->next;
				arg_index++;
			}
		}

		break;

	case array_indexing:
		print_node("[]", node, output_file);
		print_expr(node->left, output_file);
		print_expr(node->right, output_file);

		print_edge(node, node->left, "array", output_file);
		print_edge(node, node->right, "index", output_file);
		break;

	case id_t:
		print_node(node->string_value, node, output_file);
		break;

	case array_lit:
		print_node("node", node, output_file);
		print_array_literal(node->array, output_file);
		print_edge(node, node->array, "", output_file);
		break;

	case qualified_identifier_t:
		fprintf(output_file, "Id%p [label=\"%s.%s\"]; \n", node, node->left->string_value, node->right->string_value);

	case qualified_call_method_t:
	
		print_node("call method from package", node, output_file);
		print_expr(node->left, output_file); 
		print_edge(node, node->left, "package name", output_file);
		print_expr(node->right, output_file);
		print_edge(node, node->right, "function name", output_file);
		if (node->args != 0) {
			print_node("Args", node->args, output_file);
			print_edge(node, node->args, "args", output_file);
			struct node* current_arg = node->args->first;

			int arg_index = 0;

			while (current_arg != 0) {
				print_expr(current_arg, output_file);
				fprintf(output_file, "Id%p -> Id%p [label=\"%i\"]; \n", node->args, current_arg, arg_index);

				current_arg = current_arg->next;
				arg_index++;
			}
		}
		break;
	default:
		break;
	}
}

void print_body(struct stmt_body_struct* body, FILE* output_file) {
	fprintf(output_file, "Id%p [label=\"body\"];\n", body);
	print_stmt_list(body->list, body, output_file);
}

void print_stmt_list(struct stmt_list_struct* list, void* parent, FILE* output_file) {
	if (list != 0) {
		struct stmt_struct* current = list->first;

		while (current != 0) {
			print_stmt(current, output_file);
			print_edge(parent, current, "", output_file);

			current = current->next;
		}
	}
}

void print_initial_if(struct if_stmt_block_struct* if_stmt_part, FILE* output_file) {
	print_node("Begin_if", if_stmt_part, output_file);
	if (if_stmt_part->pre_condition_stmt != 0) {
		print_stmt(if_stmt_part->pre_condition_stmt, output_file);
		print_edge(if_stmt_part, if_stmt_part->pre_condition_stmt, "PreCondStmt", output_file);
	}

	print_expr(if_stmt_part->condition, output_file);
	print_edge(if_stmt_part, if_stmt_part->condition, "Cond", output_file);

	print_body(if_stmt_part->if_body->body_field, output_file);
	print_edge(if_stmt_part, if_stmt_part->if_body->body_field, "Body", output_file);
}

void print_if(struct if_stmt_struct* if_stmt, FILE* output_file) {
	print_node("IfStmt", if_stmt, output_file);
	print_initial_if(if_stmt->if_stmt_block, output_file);
	print_edge(if_stmt, if_stmt->if_stmt_block, "", output_file);

	if (if_stmt->else_if_stmts != 0) {
		struct if_stmt_block_struct* current = if_stmt->else_if_stmts->first;
		while (current != 0) {
			print_initial_if(current, output_file);
			print_edge(if_stmt, current, "else-if", output_file);
			current = current->next;
		}
	}

	if (if_stmt->else_body != 0) {
		print_body(if_stmt->else_body->body_field, output_file);
		print_edge(if_stmt, if_stmt->else_body->body_field, "else", output_file);
	}
}

void print_for(struct for_stmt_struct* for_stmt, FILE* output_file) {
	print_body(for_stmt->body->body_field, output_file);
	fprintf(output_file, "Id%p -> Id%p;\n", for_stmt, for_stmt->body->body_field);

	if(for_stmt->type == for_with_block || for_stmt->type == for_with_condition) {
		print_expr(for_stmt->for_condition, output_file);
		fprintf(output_file, "Id%p -> Id%p [label=\"condition\"];\n", for_stmt, for_stmt->for_condition);
	}

	if (for_stmt->type == for_with_block) {
		print_stmt(for_stmt->for_block_init_stmt, output_file);
		fprintf(output_file, "Id%p -> Id%p [label=\"init stmt\"];\n", for_stmt, for_stmt->for_block_init_stmt);

		print_stmt(for_stmt->for_block_post_stmt, output_file);
		fprintf(output_file, "Id%p -> Id%p [label=\"post stmt\"];\n", for_stmt, for_stmt->for_block_post_stmt);
	}

	char for_label[100];
	switch (for_stmt->type) {
	case for_with_condition:
		strcpy(for_label, "for\\n(condition only)");
		break;
	case for_with_block:
		strcpy(for_label, "for\\n(clause)");
		break;
	case empty_for:
		strcpy(for_label, "for\\n(infinite)");
		break;
	default:
		strcpy(for_label, "for");
		break;
	}

	fprintf(output_file, "Id%p [label=\"%s\"];\n", for_stmt, for_label);
}

void print_return(struct return_stmt_struct* return_stmt, FILE* output_file) {
	print_node("return", return_stmt, output_file);
	print_expr_list(return_stmt->return_values, return_stmt, output_file);
}

void print_array_literal(struct array_lit_struct* array_literal, FILE* output_file) {
	fprintf(output_file, "Id%p [label=\"array literal\"]; \n", array_literal);

	print_array_type(array_literal->type, output_file);
	fprintf(output_file, "Id%p -> Id%p;\n", array_literal, array_literal->type);

	print_array_elements(array_literal->array_value, output_file);
	fprintf(output_file, "Id%p -> Id%p;\n", array_literal, array_literal->array_value);
}

void print_array_type(struct array_type_struct* array_type, FILE* output_file) {
	print_node("array type", array_type, output_file);
	print_type(array_type->type, output_file);
	print_edge(array_type, array_type->type, "element type", output_file);
	print_expr(array_type->length, output_file);
	print_edge(array_type, array_type->length, "array length", output_file);
}

void print_array_elements(struct array_element_list_struct* elements, FILE* output_file) {
	struct array_element_struct* current = elements->first;

	print_node("elements", elements, output_file);

	while (current != 0) {
		print_array_element(current, output_file);
		print_edge(elements, current, "", output_file);
		current = current->next;
	}
}

void print_array_element(struct array_element_struct* element, FILE* output_file) {
	print_node("array el", element, output_file);
	
	if (element->index >= 0) {
		fprintf(output_file, "IdKey%p [label=\"%i\"]; \n", element, element->index);
		fprintf(output_file, "Id%p -> IdKey%p [label=\"key\"]; \n", element, element);
	}

	print_expr(element->node, output_file);
	fprintf(output_file, "Id%p -> Id%p [label=\"value\"]; \n", element, element->node);
}

void print_type(struct complex_data_type* type, FILE* output_file) {
	switch (type->type) {
		case int_t:
			print_node("int", type, output_file);
			break;
		case bool_t:
			print_node("bool", type, output_file);
			break;
		case byte_t: 
			print_node("byte", type, output_file);
			break;
		case string_t:
			print_node("string", type, output_file);
			break;
		case func_t:
			print_node("composite type", type, output_file);
			print_func_prototype(type->func_type, output_file);
			
			print_edge(type, type->func_type, "", output_file);
			break;
		case arr_t:
			print_node("composite type", type, output_file);
			print_array_type(type->array_type, output_file);
			
			print_edge(type, type->array_type, "", output_file);
			break;
	}
}

void print_node(const char* label, void* node_pointer, FILE* output_file) {
	fprintf(output_file, "Id%p [label=\"%s\"]; \n", node_pointer, label);
}

void print_edge(void* parent_node, void* child_node, const char* edge_label, FILE* output_file) {
	fprintf(output_file, "Id%p -> Id%p [label=\"%s\"]; \n", parent_node, child_node, edge_label);
}

void print_expr_list(struct node_list_struct* list, void* parent, FILE* output_file) {
	if (list != 0) {
		struct node* current = list->first;

		while (current != 0) {
			print_expr(current, output_file);
			print_edge(parent, current, "", output_file);

			current = current->next;
		}
	}
}

void print_assignment(struct assignment_stmt_struct* assignment, FILE* output_file) {
	char assignment_label[4];

	switch(assignment->type) {
	case simple_assignment_t:
		strcpy(assignment_label, "=");
		break;

	case plus_assignment_t:
		strcpy(assignment_label, "+=");
		break;

	case minus_assignment_t:
		strcpy(assignment_label, "-=");
		break;

	case mul_assignment_t:
		strcpy(assignment_label, "*=");
		break;

	case div_assignment_t:
		strcpy(assignment_label, "/=");
		break;
	}

	print_node(assignment_label, assignment, output_file);
	
	struct node* left_current = assignment->left->first;
	struct node* right_current = assignment->right->first;

	int expr_index = 0;

	while (left_current != 0 && right_current != 0) {
		// Print assignment index
		fprintf(output_file, "Id%i%p [label=\"%i\"]; \n", expr_index, assignment, expr_index);

		// Print edge between assignment and assignment index
		fprintf(output_file, "Id%p -> Id%i%p; \n", assignment, expr_index, assignment);

		print_expr(left_current, output_file);
		fprintf(output_file, "Id%i%p -> Id%p [label=\"left\"];\n", expr_index, assignment, left_current);

		print_expr(right_current, output_file);
		fprintf(output_file, "Id%i%p -> Id%p [label=\"right\"];\n", expr_index, assignment, right_current);

		expr_index++;
		left_current = left_current->next;
		right_current = right_current->next;
	}
}