%{
#include<stdio.h>
#include<string.h>
#include "c_mod_lex.tab.h" 
extern int yyval; 
int iserr=0;
int lineno =1;
extern struct ST{
	char symbol[100];
	int type;
	int scope; 
	float value;
	int dim;
	int widths[1000];
	int offsets[1000];
}SYMBOL_TABLE[100];
extern int cur_scope;
extern int total_symbol;

%}

%%
"char"			{ return(CHAR); }
"int"			{ return(INT); }
"float"			{ return(FLOAT); }
"case"			{ return(CASE); }
"default"		{ return(DEFAULT); }
"else"			{ return(ELSE); }
"if"			{ return(IF); }
"return"		{ return(RETURN); }
"switch"		{ return(SWITCH); }
"while"			{ return(WHILE); }
"main"			{ return(MAIN); } 
"void"			{ return(VOID); }
"<<" { return L_SHIFT; }
">>" { return R_SHIFT; }

"++" { return OP_IN; }
"--" { return OP_DE; }

">=" { return OP_GE; }
"<=" { return OP_LE; }
"==" { return OP_EQ; }
"!=" { return OP_NE; }
"&&" { return LOG_AND; }
"||" { return LOG_OR; }

"("|")"|"["|"]"|"."|"!"|"~"|"++"|"--"|"&"|"+"|"-"|"/"|"="|"*"|"%"|"<"|">"|"^"|"|"|"?"|":"|"="|","   { return((char)(yytext[0])); }

";"  { return(';'); }

"{"  { cur_scope++; return('{'); }

"}"  { total_symbol--; while(SYMBOL_TABLE[total_symbol].scope==cur_scope){total_symbol--;}; total_symbol++; cur_scope--; return('}'); }
	
[0-9]+ { yylval.value_type.VALUE=atoi(yytext);  return INTEGER; }	

([0-9]*)(("."[0-9]*)|"")(("E"|"e")("+"|"-"|"")([0-9]+)|"") {yylval.value_type.VALUE=atof(yytext); return FLOATING; }

\'([^'\n\t]|\\n|\\0|\\'|\\t)\' {strcpy(yylval.value_type.CODE, yytext); return CHARACTER; }

\"([^\"\n]|(\\\"))*[^".h"]\" {return STRING; }
								
([a-zA-Z]|"_")([a-zA-Z0-9_]*) { strcpy(yylval.value_type.CODE, yytext); return ID;}    

"/*"[^*/]*"*/" ;

"//".*\n {lineno++;}

" "|\t {;}

\n {lineno++;}

"/*"[^*/]*|"*/" {printf("line:%d Incomplete multiline comment\n", lineno); iserr=1; return 0;}

. {printf("Unidentified symbol or String/Character not enclosed properly within quotes or header file or define\n"); iserr=1; return 0;}										
%%

int yywrap() 
{ 
    return 1; 
} 
  

