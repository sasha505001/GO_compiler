#include <stdio.h>

extern FILE * yyin;
extern int yyparse();
extern void print_program_tree(struct program_struct* program, FILE* output_file);

struct program_struct* root;

int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");

    FILE* tree = fopen("tree.dot", "w");

    yyparse();

    print_program_tree(root, tree);

    return 0;
}