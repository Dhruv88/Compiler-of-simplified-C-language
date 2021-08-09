%{
#include<stdio.h>
#include "c_mod_lex.tab.h" 
extern int yyval; 
int iserr=0;
int lineno =1;
%}

%%
"void"			{ return(VOID); }
"char"			{ return(CHAR); }
"short"			{ return(SHORT); }
"signed"		{ return(SIGNED); }
"unsigned"		{ return(UNSIGNED); }
"int"			{ return(INT); }
"long"			{ return(LONG); }
"double"		{ return(DOUBLE); }
"float"			{ return(FLOAT); }
"const"			{ return(CONST); }
"extern"		{ return(EXTERN); }
"auto"			{ return(AUTO); }
"register"		{ return(REGISTER); }
"static"		{ return(STATIC); }
"__global__"		{ return(GLOBAL); }
"struct"		{ return(STRUCT); }
"union"			{ return(UNION); }
"break"			{ return(BREAK); }
"case"			{ return(CASE); }
"continue"		{ return(CONTINUE); }
"default"		{ return(DEFAULT); }
"do"			{ return(DO); }
"else"			{ return(ELSE); }
"for"			{ return(FOR); }
"if"			{ return(IF); }
"return"		{ return(RETURN); }
"sizeof"		{ return(SIZEOF); }
"switch"		{ return(SWITCH); }
"while"			{ return(WHILE); }

"<<<" { return KER_OP; }
">>>" { return KER_CL; }
"..." { return ELLIPSIS; }

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

"+=" {return A_ASSIGN;}
"*=" {return M_ASSIGN;}
"-=" {return S_ASSIGN;}
"/=" {return D_ASSIGN;}
"%=" {return R_ASSIGN;}
"&=" {return BA_ASSIGN;}
"^=" {return BE_ASSIGN;}
"|=" {return BO_ASSIGN;}
"<<=" {return LS_ASSIGN;}
">>=" {return RS_ASSIGN;}

"("|")"|"["|"]"|"."|"!"|"~"|"++"|"--"|"&"|"+"|"-"|"/"|"="|"*"|"%"|"<"|">"|"^"|"|"|"?"|":"|"="|","   { return((char)(yytext[0])); }

";"  { return(';'); }

"{"  { return('{'); }

"}"  { return('}'); }

"#include" { return INCLUDE; }
("#define")(" ")*([a-zA-Z]|"_")([a-zA-Z0-9_]*)(" ")*.* { return DEFINE; } 

"<"([a-zA-Z]|"_")([a-zA-Z0-9_]*)".h>"|\"([a-zA-Z]|"_")([a-zA-Z0-9_]*)".h"\" {return HEADER_FILE;}
	
[0-9]+ { yylval=atoi(yytext); return INTEGER; }	

([0-9]*)(("."[0-9]*)|"")(("E"|"e")("+"|"-"|"")([0-9]+)|"") {yylval=atoi(yytext); return FLOATING; }

\'([^'\n\t]|\\n|\\0|\\'|\\t)\' {return CHARACTER; }

\"([^\"\n]|(\\\"))*[^".h"]\" {return STRING; }
								
([a-zA-Z]|"_")([a-zA-Z0-9_]*) { return ID;}    

"/*"[^*/]*"*/" ;

"//".*\n ;

" "|\t {;}

\n {lineno++;}

"/*"[^*/]*|"*/" {printf("line:%d Incomplete multiline comment\n", lineno); iserr=1; return 0;}

. {printf("Unidentified symbol or String/Character not enclosed properly within quotes or header file or define\n"); iserr=1; return 0;}										
%%

int yywrap() 
{ 
    return 1; 
} 
  

