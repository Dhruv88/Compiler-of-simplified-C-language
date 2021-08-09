%{
#include<stdio.h>
%}

%%

"void"|"char"|"short"|"int"|"long"|"float"|"double"|"signed"|"unsigned"|"const"|"auto"|"extern"|"static"|"__global__"|"register"|"struct"|"typedef"|"union"|"break"|"return"|"continue"|"if"|"else"|"else if"|"switch"|"case"|"default"|"for"|"do"|"while"|"#define"|"#include" {printf("%s\tKEYWORD\n",yytext);} 

"(void)"|"(char)"|"(short)"|"(int)"|"(long)"|"(float)"|"(double)"|"(long double)"|("(signed "|"(unsigned ")("char)"|"short)"|"int)")|("(signed "|"(unsigned ")("long"|"long long")(")"|" int)")|"("|")"|"["|"]"|"->"|"."|"!"|"~"|"++"|"--"|"&"|"sizeof"|"+"|"-"|"/"|"="|"*"|"%"|"<<<"|">>>"|"<<"|">>"|"<="|">="|"<"|">"|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|"="|"+="|"*="|"-="|"/="|"%="|"&="|"^="|"!="|"<<="|">>="|","   {printf("%s\tOPERATOR\n",yytext);}

";"  {printf("%s\tSEPARATOR\n",yytext);}

"{"  {printf("%s\tBLOCK-START\n",yytext);}

"}"  {printf("%s\tBLOCK-END\n",yytext);}
	
[0-9]+ {printf("%s\t INTEGER \n",yytext);}	

([0-9]*)(("."[0-9]*)|"")(("E"|"e")("+"|"-"|"")([0-9]+)|"") {printf("%s\t FLOAT \n",yytext);}

\'([^'\n\t]|\\n|\\0|\\'|\\t)\' {printf("%s\t CHARACTER \n",yytext);}

\"([^\"\n]|(\\\"))*\" {printf("%s\t STRING \n",yytext);}

"<"([a-zA-Z]|"_")([a-zA-Z0-9_]*)".h>" {printf("%s\tHEADER_FILE\n",yytext);}
								
([a-zA-Z]|"_")([a-zA-Z0-9_]*) {printf("%s\tIDENTIFIER\n",yytext);}    

"/*"[^*/]*"*/" ;

"//".*\n ;

" "|\t|\n;

.  {printf("%s\tERROR\n",yytext);}										
%%

int yywrap() 
{ 
    return 1; 
} 
  

int main() 
{ 
    extern FILE *yyin; 
    printf("*****Starting Lexical Analysis. Scanning from input.txt...*****\n");
    yyin=fopen("input.txt","r"); 
    yylex(); 
    printf("*****Finished Lexical Analysis!*****\n");
} 