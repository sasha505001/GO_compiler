%{
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

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



void delete_char_from_str(char str[], char sim) {
    int i, j;
    for (i = j = 0; str[i] != '\0'; i++)
        if (str[i] != sim)
            str[j++] = str[i];
    str[j] = '\0';
}

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

break {printf("Keyword: %s\n", yytext);}

default {printf("Keyword: %s\n", yytext);}

func {printf("Keyword: %s\n", yytext);}

case {printf("Keyword: %s\n", yytext);}

go {printf("Keyword: %s\n", yytext);}

map {printf("Keyword: %s\n", yytext);}

struct {printf("Keyword: %s\n", yytext);}

else {printf("Keyword: %s\n", yytext);}

goto {printf("Keyword: %s\n", yytext);}

package {printf("Keyword: %s\n", yytext);}

switch {printf("Keyword: %s\n", yytext);}

const {printf("Keyword: %s\n", yytext);}

fallthrough {printf("Keyword: %s\n", yytext);}

if {printf("Keyword: %s\n", yytext);}

range {printf("Keyword: %s\n", yytext);}

type {printf("Keyword: %s\n", yytext);}

continue {printf("Keyword: %s\n", yytext);}

for {printf("Keyword: %s\n", yytext);}

import {printf("Keyword: %s\n", yytext);}

return {printf("Keyword: %s\n", yytext);}

var {printf("Keyword: %s\n", yytext);}

"+" {printf( "Operator: %s\n", yytext );}

"&" {printf( "Operator: %s\n", yytext );}

"+=" {printf( "Operator: %s\n", yytext );}

"&=" {printf( "Operator: %s\n", yytext );}

"&&" {printf( "Operator: %s\n", yytext );}

"==" {printf( "Operator: %s\n", yytext );}

"!=" {printf( "Operator: %s\n", yytext );}

"(" {printf( "Operator: %s\n", yytext );}

")" {printf( "Operator: %s\n", yytext );}

"-" {printf( "Operator: %s\n", yytext );}

"|" {printf( "Operator: %s\n", yytext );}

"-=" {printf( "Operator: %s\n", yytext );}

"|=" {printf( "Operator: %s\n", yytext );}

"||" {printf( "Operator: %s\n", yytext );}

"<" {printf( "Operator: %s\n", yytext );}

"<=" {printf( "Operator: %s\n", yytext );}

"[" {printf( "Operator: %s\n", yytext );}

"]" {printf( "Operator: %s\n", yytext );}

"*" {printf( "Operator: %s\n", yytext );}

"^" {printf( "Operator: %s\n", yytext );}

"*=" {printf( "Operator: %s\n", yytext );}

"^=" {printf( "Operator: %s\n", yytext );}

">" {printf( "Operator: %s\n", yytext );}

">=" {printf( "Operator: %s\n", yytext );}

"{" {printf( "Operator: %s\n", yytext );}

"}" {printf( "Operator: %s\n", yytext );}

"/" {printf( "Operator: %s\n", yytext );}

"<<" {printf( "Operator: %s\n", yytext );}

"/=" {printf( "Operator: %s\n", yytext );}

"<<=" {printf( "Operator: %s\n", yytext );}

"++" {printf( "Operator: %s\n", yytext );}

"=" {printf( "Operator: %s\n", yytext );}

":=" {printf( "Operator: %s\n", yytext );}

"," {printf( "Operator: %s\n", yytext );}

";" {printf( "Separator: %s\n", yytext );}

"%" {printf( "Operator: %s\n", yytext );}

">>" {printf( "Operator: %s\n", yytext );}

"%=" {printf( "Operator: %s\n", yytext );}

">>=" {printf( "Operator: %s\n", yytext );}

"--" {printf( "Operator: %s\n", yytext );}

"!" {printf( "Operator: %s\n", yytext );}

"..." {printf( "Operator: %s\n", yytext );}

"." {printf( "Operator: %s\n", yytext );}

":" {printf( "Operator: %s\n", yytext );}

"&^" {printf( "Operator: %s\n", yytext );}

"&^=" {printf( "Operator: %s\n", yytext );}

_ {printf( "Empty ID: %s\n", yytext );} 

\n {printf("Separator: \\n%s", yytext );}

[ \t]* {}



{ID} {
    text = '\0';
    text = (char*)malloc((yyleng + 1) * sizeof(char));
    strcpy(text, yytext);
    printf("Identifier: %s\n", text);
    free(text);
}

{DECIMAL_LIT} {
    text = '\0';
    text =(char*)malloc((yyleng + 1) * sizeof(char));
    strcpy(text, yytext);
    delete_char_from_str(text, '_');
    printf("Demacial const: %d\n", atoi(text));
    free(text);
}

{BINARY_LIT} {
    text = '\0';
    text =(char*)malloc((yyleng + 1) * sizeof(char));
    strcpy(text, yytext);
    delete_char_from_str(text, '_');
    printf("The binary const: %d\n", str_to_binary_num(text, yyleng));  
    free(text);
}

{OCTAL_LIT} {
    text = '\0';
    text =(char*)malloc((yyleng + 1) * sizeof(char));
    strcpy(text, yytext);
    delete_char_from_str(text, '_');
	delete_char_from_str(text, 'o');
	delete_char_from_str(text, 'O');
	sscanf_s(text, "%o", &tmp);
    printf("The octal const: %d\n", tmp);
    free(text);
}

{HEX_LIT} {
    text = '\0';
    text =(char*)malloc((yyleng + 1) * sizeof(char));
    strcpy(text, yytext);
    delete_char_from_str(text, '_');
    sscanf(text, "%x", &tmp);
    printf("Hexadecimal constant: %x \n", tmp);
    free(text);
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
    safe_strcat(&text, "\*\/");
    printf("The multi-line comment: %s\n",text);
    free(text);
    BEGIN(INITIAL);
}

<RUNE>.{1} {safe_strcat(&text,yytext);}
<RUNE><<EOF>> {
    printf("Error:there is no symbol completing the rune");
    BEGIN(INITIAL);
}
<RUNE>\' {
    safe_strcat(&text, "\'");
    printf("The rune literal: %s\n",text);
    free(text);
    BEGIN(INITIAL);
}

<INTERPRETED_STRING_LITERALS>[^\"\\\n]+ {safe_strcat(&text, yytext);}
<INTERPRETED_STRING_LITERALS>\" {
    safe_strcat(&text, "\"");
    printf("The interpreted string literals: %s\n", text);
    free(text);
    BEGIN(INITIAL);
}


<RAW_STRING_LITERALS>[^`]+ {safe_strcat(&text,yytext);}
<RAW_STRING_LITERALS>\` {
    safe_strcat(&text, "\`");
    printf("The raw string literals: %s\n", text);
    free(text);
    BEGIN(INITIAL);
}
<RAW_STRING_LITERALS><<EOF>> {
    printf("Error: there is no character closing the line");
    BEGIN(INITIAL);
}


%%

void main(int argc, char* argv[])
{
    
    yyin = fopen("C:\\Users\\astre\\Desktop\\flex_origine\\test.txt", "r");
   
	yylex();
	
	//getch();

}