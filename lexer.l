%{
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "parser.tab.h"
struct program_struct* root;
#include "create_tree.cpp"
#include "tree_nodes.h"


extern int yyparse(void);
extern int yylex(void);
extern int yyerror(char * s);
int error_string = 1;

int yyerror(char * s)
{
	printf("Error!\n%s on line %d\n", s, error_string);
	return -1;
}

/*
    Функция для конкотенации выделенной памяти (char) и строки(для успешного её последуещего очищения 
    [in|out]    str1 - выделенная память 
    [in]        str2 - присоединяемая строка 
*/
void safe_strcat(char** str1, const char* str2)
{
    // результирующая строка(строка буфер
    char* finalString = NULL;
    int n = 0;

    // Длина результирующей строки
    if (str1) n += strlen(*str1);
    if (str2) n += strlen(str2);

    // Выделяю память 
    finalString = (char*)malloc((n + 2) * sizeof(char));

    // Проверка успешного выделения памяти
    if ((str1 || str2) && (finalString != NULL))
    {
        if (str1) strcpy(finalString, *str1);
        if (str2) strcat(finalString, str2);
    }
    free(*str1);
    *str1 = finalString;
}


// Удаление всех символов из строки совпадающих с данным
void delete_char_from_str(char str[], char sim) {
    int i, j;
    for (i = j = 0; str[i] != '\0'; i++)
        if (str[i] != sim)
            str[j++] = str[i];
    str[j] = '\0';
}

// Строку в двоичное число
int str_to_binary_num(char* str, int len) {
    int num = 0;
    int negative = str[0] == '-';
    int j = 1;
    for (int i = len; i > 0 && (str[i] != 'b' || str[i] != 'B'); i--){
        if (str[i] == '1') {
            num += j;
        }
        if(str[i] == '0' || str[i] == '1')
            j *= 2;
    }
    if (negative) {
        num = -num;
    }
    return num;
}
%}

%option noyywrap
%option never-interactive


DECIMAL_LIT -?[0-9](_?[0-9]+)*

BINARY_LIT -?0[bB](_?[0-1]+)+

OCTAL_LIT -?0[oO](_?[0-7]+)+

HEX_LIT -?0[xX](_?[0-9A-Fa-f]+)+

ID [_a-zA-Z][_0-9a-zA-Z]*

%x COMMENT
%x MULTI_LINES_COMMENT
%x RUNE
%x RAW_STRING_LITERALS 
%X INTERPRETED_STRING_LITERALS

%%
%{
    char* text = '\0';
    char* buffer = '\0';
    int tmp;
%}

int {
	printf("int\n");
	return INT_KEYWORD;
}

bool {
	printf("bool\n");
	return BOOL_KEYWORD;
}

string {
	printf("string\n");
	return STRING_KEYWORD;
}

true {
	printf("true\n");
	return TRUE_KEYWORD;
}

false {
	printf("false\n");
	return FALSE_KEYWORD;
}



break {
    printf("Keyword: %s\n", yytext);
    return BREAK_KEYWORD;
}

default {printf("Keyword: %s\n", yytext);}

func {
    printf("Keyword: %s\n", yytext);
    return FUNC_KEYWORD;
}

case {printf("Keyword: %s\n", yytext);}

go {printf("Keyword: %s\n", yytext);}

map {printf("Keyword: %s\n", yytext);}

struct {printf("Keyword: %s\n", yytext);}

else {
    printf("Keyword: %s\n", yytext);
    return ELSE_KEYWORD;
}

goto {printf("Keyword: %s\n", yytext);}

package {
    printf("Keyword: %s\n", yytext);
    return PACKAGE_KEYWORD;
}

switch {printf("Keyword: %s\n", yytext);}

const {
    printf("Keyword: %s\n", yytext);
    return CONST_KEYWORD;
}

fallthrough {printf("Keyword: %s\n", yytext);}

if {
    printf("Keyword: %s\n", yytext);
    return IF_KEYWORD;
}

range {printf("Keyword: %s\n", yytext);}

type {printf("Keyword: %s\n", yytext);}

continue {
    printf("Keyword: %s\n", yytext);
    return CONTINUE_KEYWORD;
}

for {
    printf("Keyword: %s\n", yytext);
    return FOR_KEYWORD;
}

import {
    printf("Keyword: %s\n", yytext);
    return IMPORT_KEYWORD;
}

return {
    printf("Keyword: %s\n", yytext);
    return RETURN_KEYWORD;
}

var {
    printf("Keyword: %s\n", yytext);
    return VAR_KEYWORD;
}

"+" {printf( "Operator: %s\n", yytext ); return '+';}

"&" {printf( "Operator: %s\n", yytext );}

"+=" {printf( "Operator: %s\n", yytext ); return PLUS_ASSIGN;}

"&=" {printf( "Operator: %s\n", yytext );}

"&&" {printf( "Operator: %s\n", yytext );}

"==" {printf( "Operator: %s\n", yytext ); return EQUAL;}

"!=" {printf( "Operator: %s\n", yytext ); return NOT_EQUAL;}

"(" {printf( "Operator: %s\n", yytext ); return '(';}

")" {printf( "Operator: %s\n", yytext ); return ')';}

"-" {printf( "Operator: %s\n", yytext ); return '-';}

"|" {printf( "Operator: %s\n", yytext );}

"-=" {printf( "Operator: %s\n", yytext ); return MINUS_ASSIGN;}

"|=" {printf( "Operator: %s\n", yytext );}

"||" {printf( "Operator: %s\n", yytext );}

"<" {printf( "Operator: %s\n", yytext ); return LESS;}

"<=" {printf( "Operator: %s\n", yytext ); return LESS_OR_EQUAL;}

"[" {printf( "Operator: %s\n", yytext ); return '[';}

"]" {printf( "Operator: %s\n", yytext ); return ']';}

"*" {printf( "Operator: %s\n", yytext ); return '*';}

"^" {printf( "Operator: %s\n", yytext );}

"*=" {printf( "Operator: %s\n", yytext ); return MULTIPLY_ASSIGN;}

"^=" {printf( "Operator: %s\n", yytext );}

">" {printf( "Operator: %s\n", yytext ); return GREATER;}

">=" {printf( "Operator: %s\n", yytext ); return GREATER_OR_EQUAL;}

"{" {printf( "Operator: %s\n", yytext ); return '{';}

"}" {printf( "Operator: %s\n", yytext ); return '}';}

"/" {printf( "Operator: %s\n", yytext ); return '/';}

"<<" {printf( "Operator: %s\n", yytext );}

"/=" {printf( "Operator: %s\n", yytext ); return DIVISION_ASSIGN;}

"<<=" {printf( "Operator: %s\n", yytext );}

"++" {printf( "Operator: %s\n", yytext ); return INC;}

"=" {printf( "Operator: %s\n", yytext ); return '=';}

":=" {printf( "Operator: %s\n", yytext ); return SHORT_EQUALS;}

"," {printf( "Operator: %s\n", yytext ); return ',';}

";" {printf( "Separator: %s\n", yytext ); return ';';}

"%" {printf( "Operator: %s\n", yytext ); return '%';}

">>" {printf( "Operator: %s\n", yytext );}

"%=" {printf( "Operator: %s\n", yytext );}

">>=" {printf( "Operator: %s\n", yytext );}

"--" {printf( "Operator: %s\n", yytext ); return DEC;}

"!" {printf( "Operator: %s\n", yytext ); return '!';}

"..." {printf( "Operator: %s\n", yytext );}

"." {printf( "Operator: %s\n", yytext ); return '.';}

":" {printf( "Operator: %s\n", yytext ); return ':';}

"&^" {printf( "Operator: %s\n", yytext );}

"&^=" {printf( "Operator: %s\n", yytext );}

_ {printf( "Empty ID: %s\n", yytext );} 

\n {return '\n';}

[ \t]* {}



{ID} {
    text = '\0';
    text = (char*)malloc((yyleng + 1) * sizeof(char));
    strcpy(text, yytext);
    printf("Identifier: %s\n", text);
    yylval.Id = (char*)malloc(strlen(yytext) + 1);
	strcpy(yylval.Id, text);
    free(text);
    return ID;
}

{DECIMAL_LIT} {
    text = '\0';
    text =(char*)malloc((yyleng + 1) * sizeof(char));
    strcpy(text, yytext);
    delete_char_from_str(text, '_');
    printf("Demacial const: %d\n", atoi(text));
    yylval.Int_val = atoi(text);
    free(text);
    return INT;
}

{BINARY_LIT} {
    text = '\0';
    text =(char*)malloc((yyleng + 1) * sizeof(char));
    strcpy(text, yytext);
    delete_char_from_str(text, '_');
    printf("The binary const: %d\n", str_to_binary_num(text, yyleng)); 
    yylval.Int_val = str_to_binary_num(text, yyleng);
    free(text);
    return INT;
}

{OCTAL_LIT} {
    text = '\0';
    tmp = 0;
    text =(char*)malloc((yyleng + 1) * sizeof(char));
    strcpy(text, yytext);
    delete_char_from_str(text, '_');
	delete_char_from_str(text, 'o');
	delete_char_from_str(text, 'O');
	sscanf_s(text, "%o", &tmp);
    printf("The octal const: %d\n", tmp);
    yylval.Int_val = tmp;
    free(text);
    return INT;
}

{HEX_LIT} {
    text = '\0';
    tmp = 0;
    text =(char*)malloc((yyleng + 1) * sizeof(char));
    strcpy(text, yytext);
    delete_char_from_str(text, '_');
    sscanf(text, "%x", &tmp);
    printf("Hexadecimal constant: %x \n", tmp);
    yylval.Int_val = tmp;
    free(text);
    return INT;
}



\/\/ {
    text = '\0';
    text = (char*)malloc((yyleng + 1) * sizeof(char));   
    strcpy(text, yytext); 
    BEGIN(COMMENT);
} 

\/\* {
    text = '\0';  
    text = (char*)malloc((yyleng + 1) * sizeof(char));
    strcpy(text, yytext);
    BEGIN(MULTI_LINES_COMMENT);
}

\' {
    text = '\0';
    text = (char*)malloc((yyleng + 1) * sizeof(char));
    strcpy(text, yytext);
    BEGIN(RUNE);
}

\" {
    text = '\0';
    text = (char*)malloc((yyleng + 1) * sizeof(char));
    strcpy(text, yytext);
    BEGIN(INTERPRETED_STRING_LITERALS);
}

\` {
    text = '\0';
    text = (char*)malloc((yyleng + 1) * sizeof(char));
    strcpy(text, yytext);
    BEGIN(RAW_STRING_LITERALS);
}


<RUNE,INTERPRETED_STRING_LITERALS>\\a safe_strcat(&text, "\a");
<RUNE,INTERPRETED_STRING_LITERALS>\\b safe_strcat(&text, "\b");
<RUNE,INTERPRETED_STRING_LITERALS>\\f safe_strcat(&text, "\f");
<RUNE,INTERPRETED_STRING_LITERALS>\\n safe_strcat(&text, "\n");
<RUNE,INTERPRETED_STRING_LITERALS>\\r safe_strcat(&text, "\r");
<RUNE,INTERPRETED_STRING_LITERALS>\\t safe_strcat(&text, "\t");
<RUNE,INTERPRETED_STRING_LITERALS>\\v safe_strcat(&text, "\v");
<RUNE,INTERPRETED_STRING_LITERALS>\\\\ safe_strcat(&text, "\\");
<RUNE,INTERPRETED_STRING_LITERALS>\\\' safe_strcat(&text, "\'");
<RUNE,INTERPRETED_STRING_LITERALS>\\\" safe_strcat(&text, "\"");
<RUNE,INTERPRETED_STRING_LITERALS><<EOF>> {
    printf("Error: there is no closed quotation mark");
}


<COMMENT>.* {
    safe_strcat(&text, yytext); 
	printf("The one line comment: %s\n", text);
    free(text);
	BEGIN(INITIAL);
}

<MULTI_LINES_COMMENT>[^\\\n\*/]+ {safe_strcat(&text,yytext);}
<MULTI_LINES_COMMENT>"\n" {safe_strcat(&text, "\\n");}
<MULTI_LINES_COMMENT><<EOF>> {
    printf("Error: no character ending a multiline comment ");
    BEGIN(INITIAL);
}
<MULTI_LINES_COMMENT>"*/" {
    safe_strcat(&text, "*/");
    printf("The multi-line comment: %s\n",text);
    free(text);
    BEGIN(INITIAL);
}

<RUNE>[^'] {
    safe_strcat(&text,yytext);
}

<RUNE>"'" {
    safe_strcat(&text, "\'");
    printf("The rune literal: %s\n",text);
    free(text);
    BEGIN(INITIAL);
    return STRING;
}

<INTERPRETED_STRING_LITERALS>[^\"\\\n]+ {safe_strcat(&text, yytext);}
<INTERPRETED_STRING_LITERALS>\" {
    safe_strcat(&text, "\"");
    delete_char_from_str(text, '\"');
    printf("The interpreted string literals: %s\n", text);
    yylval.String = (char*)malloc(strlen(text) + 1); 
    strcpy(yylval.String, text);
    free(text);
    BEGIN(INITIAL);
    return STRING;
}


<RAW_STRING_LITERALS>[^`]+ {safe_strcat(&text,yytext);}
<RAW_STRING_LITERALS>\` {
    safe_strcat(&text, "`");
    printf("The raw string literals: %s\n", text);
    free(text);
    BEGIN(INITIAL);
}
<RAW_STRING_LITERALS><<EOF>> {
    printf("Error: there is no character closing the line");
    BEGIN(INITIAL);
}


%%

int main(int argc, char* argv[]) {

    int i;
    for( i = 0; i < argc; i++){
        printf("Argument %d: %s\n", i, argv[i]);
    }

    yyin = fopen(argv[1], "r");
    printf("open\n");
    FILE* tree = fopen("tree.dot", "w");
    printf("create\n\n");

    yyparse();

    printf("parsed\n");
    print_program_tree(root, tree);

    printf("created tree file\n");
    fclose(tree);
    fclose(yyin);
    return 0;
}

