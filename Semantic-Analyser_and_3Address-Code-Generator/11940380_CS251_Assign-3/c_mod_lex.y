%{
#include <stdio.h>
#include <string.h>
extern int lineno;
int yylex();
void yyerror(char *s);
extern int iserr;

struct ST{
	char symbol[100];
	int type;
	int scope; 
	float value;
	int dim;
	int widths[1000];
	int offsets[1000];
}SYMBOL_TABLE[100];

struct exist{
	int f;
	float v;
	int t;
	int i;
};

struct case_queue{
	int label;
	char val[100];
	int scope;
}cq[100];


int size[3] = {2,4,1};	
int cqs = 0;
int label_stack[10000];
int cur_scope=0;
int total_symbol=0;
int tt;
int temp_count=0, label_count=0;
int label_top=-1;

int INSERT_SYMBOL(char symbol[100], int type){
	int i;
	for(i=total_symbol-1;i>=0;i--){
		if(strcmp(symbol,SYMBOL_TABLE[i].symbol)==0 && SYMBOL_TABLE[i].scope==cur_scope){			
			return 0;
		}
	}
	strcpy(SYMBOL_TABLE[total_symbol].symbol, symbol);
	//printf("%s\n", SYMBOL_TABLE[total_symbol].symbol);
	SYMBOL_TABLE[total_symbol].type = type;
	SYMBOL_TABLE[total_symbol].scope = cur_scope;
	SYMBOL_TABLE[total_symbol].value = 0;
	total_symbol++;
	return 1;
}

struct exist GET_SYMBOL_VALUE( char symbol[100]){
	int i;
	struct exist s;
	for(i=total_symbol-1;i>=0;i--){
		if(strcmp(symbol,SYMBOL_TABLE[i].symbol)==0){			
			s.f=1;
			s.v=SYMBOL_TABLE[i].value;
			s.t=SYMBOL_TABLE[i].type;
			s.i = i;
			return s;
		}
	}
	s.f=0;
	return s;
}

int SET_SYMBOL_VALUE( char symbol[100], float value, int type){
	int i;
	for(i=total_symbol-1;i>=0;i--){
		if(strcmp(symbol,SYMBOL_TABLE[i].symbol)==0 && SYMBOL_TABLE[i].type==type){			
			SYMBOL_TABLE[i].value=value;
			return 1;
		}
	}
	
    return 0;
}

void CREATE_TEMP(char *temp, int type){
	int i; 
	do{
		sprintf(temp, "t%d", temp_count++);
		i = INSERT_SYMBOL(temp, type);
	}while(i!=1);
}

%}

%error-verbose

%union{
	struct{
  		float VALUE;
		int TYPE;
		char CODE[100];
		int index;
		char offset[100];
		int count;
	}value_type;
  	
}


%token INTEGER FLOATING CHARACTER STRING MAIN
%token ID
%token CHAR INT FLOAT
%token L_SHIFT R_SHIFT OP_IN OP_DE OP_GE OP_LE OP_EQ OP_NE LOG_AND LOG_OR
%token CASE DEFAULT IF ELSE SWITCH WHILE RETURN VOID

%type <value_type> exp_simple type_specifier init_declarator_list init_declarator declarator INTEGER FLOATING CHARACTER postfix_exp unary_exp mdm_exp as_exp shift_exp relational_exp equality_exp and_exp exor_exp or_exp assignment_exp initializer exp ID initializer_list unary_op logical_and_exp logical_or_exp

%start program_body
%%

exp_simple
	: ID {struct exist s=GET_SYMBOL_VALUE($1.CODE); if(s.f==0) {yyerror("Variable not declared in the current scope\n");} else if(s.f==1) {$$.TYPE = s.t; $$.VALUE = s.v; strcpy($$.CODE, $1.CODE);$$.index=s.i;}}
	| INTEGER {$$.TYPE = 1;$$.VALUE = $1.VALUE;char temp[100]; /*CREATE_TEMP(temp, $1.TYPE);*/ sprintf(temp, "%d", (int)($1.VALUE)); strcpy($$.CODE, temp);}
	| FLOATING {$$.TYPE = 2;$$.VALUE = $1.VALUE; char temp[100];/* CREATE_TEMP(temp, $1.TYPE);*/ sprintf(temp, "%f", $1.VALUE); strcpy($$.CODE, temp);}
	| CHARACTER {$$.TYPE = 3; char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("%s = %s\n", temp, $1.CODE); strcpy($$.CODE, temp);}
	| STRING
	| '(' exp ')' {$$.TYPE = $2.TYPE;$$.VALUE = $2.VALUE;strcpy($$.CODE, $2.CODE);}
	;

postfix_exp
	: exp_simple {$$.TYPE = $1.TYPE;strcpy($$.CODE, $1.CODE);$$.VALUE = $1.VALUE;$$.index = $1.index;$$.count=0;}
	| postfix_exp '[' exp ']' {if(($3.TYPE == 1)&&(SYMBOL_TABLE[$$.index].dim > 0)){$$.TYPE = $1.TYPE;if($1.count==0){char temp[100];CREATE_TEMP(temp,1); printf("%s = %s * %d\n",temp, $3.CODE, SYMBOL_TABLE[$$.index].offsets[0]); strcpy($$.offset,temp);}else{char temp1[100],temp2[100]; CREATE_TEMP(temp1,1);CREATE_TEMP(temp2,1); printf("%s = %s * %d\n",temp1, $3.CODE, SYMBOL_TABLE[$$.index].offsets[$1.count]); printf("%s = %s + %s\n",temp2, $1.offset, temp1); strcpy($$.offset,temp2);}strcpy($$.CODE,$1.CODE);$$.count=$1.count+1;if($$.count==SYMBOL_TABLE[$$.index].dim){char temp[100]; CREATE_TEMP(temp,1); printf("%s = %s[%s]\n", temp, $1.CODE, $$.offset);char copys[100]; sprintf(copys,"%s[%s]", $1.CODE, $$.offset);strcpy($$.offset,copys); strcpy($$.CODE, temp);} $$.index=$1.index;}else{yyerror("Array index should be integer\n"); return 0;}}
	| postfix_exp OP_IN {$$.TYPE = $1.TYPE;char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("%s = %s\n", temp, $1.CODE); printf("%s = %s + 1\n", $1.CODE, $1.CODE);strcpy($$.CODE, temp);}
	| postfix_exp OP_DE {$$.TYPE = $1.TYPE;char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("%s = %s\n", temp, $1.CODE); printf("%s = %s - 1\n", $1.CODE, $1.CODE);strcpy($$.CODE, temp);}

	;

unary_exp
	: postfix_exp {$$.TYPE = $1.TYPE;strcpy($$.CODE, $1.CODE);$$.VALUE = $1.VALUE;strcpy($$.offset, $1.offset);}
	| OP_IN unary_exp {$$.TYPE = $2.TYPE;char temp[100]; CREATE_TEMP(temp, $2.TYPE); printf("%s = %s + 1\n", $2.CODE, $2.CODE); printf("%s = %s\n", temp, $2.CODE); strcpy($$.CODE, temp);}
	| OP_DE unary_exp {$$.TYPE = $2.TYPE;char temp[100]; CREATE_TEMP(temp, $2.TYPE); printf("%s = %s - 1\n", $2.CODE, $2.CODE); printf("%s = %s\n", temp, $2.CODE); strcpy($$.CODE, temp);}
	| unary_op unary_exp {$$.TYPE = $2.TYPE;char temp[100]; CREATE_TEMP(temp, $2.TYPE); printf("%s = %s%s\n", temp, $1.CODE,$2.CODE); strcpy($$.CODE, temp);}
	| '~' unary_exp {if($2.TYPE == 2){yyerror("Expression should be integer\n"); return 0;}else{$$.TYPE = $2.TYPE;char temp[100]; CREATE_TEMP(temp, $2.TYPE); printf("%s = ~%s\n", temp,$2.CODE); strcpy($$.CODE, temp);}}
	;

unary_op
	: '!' {strcpy($$.CODE, "!");}
	| '+' {strcpy($$.CODE, "+");}	
	| '-' {strcpy($$.CODE, "-");}
	;


mdm_exp
	: unary_exp {$$.TYPE = $1.TYPE;strcpy($$.CODE, $1.CODE);$$.VALUE = $1.VALUE;}
	| mdm_exp '*' unary_exp {if($1.TYPE!=$3.TYPE){yyerror("Type mismatch"); return 0;} else{$$.TYPE = $1.TYPE;char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("%s = %s * %s\n", temp, $1.CODE, $3.CODE); strcpy($$.CODE, temp);}}
	| mdm_exp '/' unary_exp {if($1.TYPE!=$3.TYPE){yyerror("Type mismatch"); return 0;} else{$$.TYPE = $1.TYPE;char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("%s = %s / %s\n", temp, $1.CODE, $3.CODE); strcpy($$.CODE, temp);}}
	| mdm_exp '%' unary_exp {if($1.TYPE==2 || $3.TYPE==2){yyerror("operands of type 'float' not allowed for this operator"); return 0;} else{if($1.TYPE!=$3.TYPE){yyerror("Type mismatch"); return 0;} else{$$.TYPE = 1;char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("%s = %s %% %s\n", temp, $1.CODE, $3.CODE); strcpy($$.CODE, temp);}}}


	;

as_exp
	: mdm_exp {$$.TYPE = $1.TYPE;strcpy($$.CODE, $1.CODE);$$.VALUE = $1.VALUE;}
	| as_exp '+' mdm_exp {/*printf("%d %d\n",$1.TYPE,$3.TYPE);*/ if($1.TYPE!=$3.TYPE){yyerror("Type mismatch"); return 0;} else{$$.TYPE = $1.TYPE;char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("%s = %s + %s\n", temp, $1.CODE, $3.CODE); strcpy($$.CODE, temp);}}
	| as_exp '-' mdm_exp {if($1.TYPE!=$3.TYPE){yyerror("Type mismatch"); return 0;} else{$$.TYPE = $1.TYPE;char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("%s = %s - %s\n", temp, $1.CODE, $3.CODE); strcpy($$.CODE, temp);}}

	;

shift_exp
	: as_exp {$$.TYPE = $1.TYPE;strcpy($$.CODE, $1.CODE);$$.VALUE = $1.VALUE;}
	| shift_exp L_SHIFT as_exp {if($1.TYPE==2 || $3.TYPE==2){yyerror("operands of type 'float' not allowed for this operator"); return 0;} else{if($1.TYPE!=$3.TYPE){yyerror("Type mismatch"); return 0;} else{$$.TYPE = 1;char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("%s = %s << %s\n", temp, $1.CODE, $3.CODE); strcpy($$.CODE, temp);}}}

	| shift_exp R_SHIFT as_exp {if($1.TYPE==2 || $3.TYPE==2){yyerror("operands of type 'float' not allowed for this operator"); return 0;} else{if($1.TYPE!=$3.TYPE){yyerror("Type mismatch"); return 0;} else{$$.TYPE = 1;char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("%s = %s >> %s\n", temp, $1.CODE, $3.CODE); strcpy($$.CODE, temp);}}}


	;

relational_exp
	: shift_exp {$$.TYPE = $1.TYPE;strcpy($$.CODE, $1.CODE);$$.VALUE = $1.VALUE;}
	| relational_exp '<' shift_exp {if($1.TYPE!=$3.TYPE){yyerror("Type mismatch"); return 0;} else{$$.TYPE = 1; char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("if %s < %s goto L%d\n%s = 0\ngoto L%d\nL%d: %s = 1\nL%d: ", $1.CODE, $3.CODE, label_count, temp, label_count+1, label_count, temp, label_count+1); label_count+=2; strcpy($$.CODE, temp);}}
	| relational_exp OP_LE shift_exp {if($1.TYPE!=$3.TYPE){yyerror("Type mismatch"); return 0;} else{$$.TYPE = 1; char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("if %s <= %s goto L%d\n%s = 0\ngoto L%d\nL%d: %s = 1\nL%d: ", $1.CODE, $3.CODE, label_count, temp, label_count+1, label_count, temp, label_count+1); label_count+=2; strcpy($$.CODE, temp);}}
	| relational_exp '>' shift_exp {if($1.TYPE!=$3.TYPE){yyerror("Type mismatch"); return 0;} else{$$.TYPE = 1; char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("if %s > %s goto L%d\n%s = 0\ngoto L%d\nL%d: %s = 1\nL%d: ", $1.CODE, $3.CODE, label_count, temp, label_count+1, label_count, temp, label_count+1); label_count+=2; strcpy($$.CODE, temp);}}
	| relational_exp OP_GE shift_exp {if($1.TYPE!=$3.TYPE){yyerror("Type mismatch"); return 0;} else{$$.TYPE = 1; char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("if %s >= %s goto L%d\n%s = 0\ngoto L%d\nL%d: %s = 1\nL%d: ", $1.CODE, $3.CODE, label_count, temp, label_count+1, label_count, temp, label_count+1); label_count+=2; strcpy($$.CODE, temp);}}
	;

equality_exp
	: relational_exp {$$.TYPE = $1.TYPE;strcpy($$.CODE, $1.CODE);$$.VALUE = $1.VALUE;}
	| equality_exp OP_EQ relational_exp {if($1.TYPE!=$3.TYPE){yyerror("Type mismatch"); return 0;} else{$$.TYPE = 1; char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("if %s == %s goto L%d\n%s = 0\ngoto L%d\nL%d: %s = 1\nL%d: ", $1.CODE, $3.CODE, label_count, temp, label_count+1, label_count, temp, label_count+1); label_count+=2; strcpy($$.CODE, temp);}}
	| equality_exp OP_NE relational_exp {if($1.TYPE!=$3.TYPE){yyerror("Type mismatch"); return 0;} else{$$.TYPE = 1; char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("if %s != %s goto L%d\n%s = 0\ngoto L%d\nL%d: %s = 1\nL%d: ", $1.CODE, $3.CODE, label_count, temp, label_count+1, label_count, temp, label_count+1); label_count+=2; strcpy($$.CODE, temp);}}

	;

and_exp
	: equality_exp {$$.TYPE = $1.TYPE;strcpy($$.CODE, $1.CODE);$$.VALUE = $1.VALUE;}
	| and_exp '&' equality_exp {if($1.TYPE==2 || $3.TYPE==2){yyerror("operands of type 'float' not allowed for this operator"); return 0;} else{if($1.TYPE!=$3.TYPE){yyerror("Type mismatch"); return 0;} else{$$.TYPE = 1;char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("%s = %s & %s\n", temp, $1.CODE, $3.CODE); strcpy($$.CODE, temp);}}}

	;

exor_exp
	: and_exp {$$.TYPE = $1.TYPE;strcpy($$.CODE, $1.CODE);$$.VALUE = $1.VALUE;}
	| exor_exp '^' and_exp {if($1.TYPE==2 || $3.TYPE==2){yyerror("operands of type 'float' not allowed for this operator"); return 0;} else{if($1.TYPE!=$3.TYPE){yyerror("Type mismatch"); return 0;} else{$$.TYPE = 1;char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("%s = %s ^ %s\n", temp, $1.CODE, $3.CODE); strcpy($$.CODE, temp);}}}

	;

or_exp
	: exor_exp {$$.TYPE = $1.TYPE;strcpy($$.CODE, $1.CODE);$$.VALUE = $1.VALUE;}
	| or_exp '|' exor_exp {if($1.TYPE==2 || $3.TYPE==2){yyerror("operands of type 'float' not allowed for this operator"); return 0;} else{if($1.TYPE!=$3.TYPE){yyerror("Type mismatch"); return 0;} else{$$.TYPE = 1;char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("%s = %s | %s\n", temp, $1.CODE, $3.CODE); strcpy($$.CODE, temp);}}}

	;

logical_and_exp
	: or_exp {$$.TYPE = $1.TYPE;strcpy($$.CODE, $1.CODE);$$.VALUE = $1.VALUE;}
	| logical_and_exp LOG_AND or_exp {if($1.TYPE!=1 || $3.TYPE!=1){yyerror("operands of type 'int' are needed"); return 0;} else{$$.TYPE = 1;char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("%s = %s && %s\n", temp, $1.CODE, $3.CODE); strcpy($$.CODE, temp);}}

	;

logical_or_exp
	: logical_and_exp {$$.TYPE = $1.TYPE;strcpy($$.CODE, $1.CODE);}
	| logical_or_exp LOG_OR logical_and_exp {if($1.TYPE!=1 || $3.TYPE!=1){yyerror("operands of type 'int' are needed"); return 0;} else{$$.TYPE = 1;char temp[100]; CREATE_TEMP(temp, $1.TYPE); printf("%s = %s || %s\n", temp, $1.CODE, $3.CODE); strcpy($$.CODE, temp);}}

	;


assignment_exp
	: logical_or_exp {$$.TYPE = $1.TYPE;strcpy($$.CODE, $1.CODE);$$.VALUE = $1.VALUE;}
	| unary_exp '=' assignment_exp {if($1.TYPE == $3.TYPE){$$.TYPE = $1.TYPE;if($1.offset[strlen($1.offset)-1]==']'){printf("%s = %s\n", $1.offset, $3.CODE);}else{ printf("%s = %s\n", $1.CODE, $3.CODE);}}else{yyerror("Type not matching"); return 0;}}

	;

exp
	: assignment_exp {$$.TYPE = $1.TYPE; strcpy($$.CODE, $1.CODE);$$.VALUE = $1.VALUE;}
	| exp ',' assignment_exp

	;

dec
	: type_specifier init_declarator_list {$2.TYPE = $1.TYPE;}';' 
	; 

init_declarator_list
	: init_declarator {//printf("type%d\n", tt);
				$1.TYPE = tt;}
	| init_declarator_list ',' init_declarator {$1.TYPE = tt; $3.TYPE = tt;}

	;

init_declarator
	: declarator {$1.TYPE = tt;if(SYMBOL_TABLE[$$.index].dim>0){SYMBOL_TABLE[$$.index].offsets[SYMBOL_TABLE[$$.index].dim-1]=size[tt-1]; for(int i = SYMBOL_TABLE[$$.index].dim-1; i >= 1;i--){SYMBOL_TABLE[$$.index].offsets[i-1] = SYMBOL_TABLE[$$.index].offsets[i]*SYMBOL_TABLE[$$.index].widths[i];}} }
	| declarator '=' initializer {if(tt != $3.TYPE){yyerror("Type not matching"); return 0;} $1.TYPE = tt;if(SYMBOL_TABLE[$$.index].dim==1){char valc[100];strcpy(valc,""); int i=0; int j=0;for(i=0;i<strlen($3.CODE);i++){if($3.CODE[i]!=','){char ct[2]; ct[0]=$3.CODE[i]; ct[1]='\0';strcat(valc,ct);}else{printf("%s[%d] = %s\n", $1.CODE, j, valc); j+=size[tt-1]; strcpy(valc,"");}}printf("%s[%d] = %s\n", $1.CODE, j, valc);}else{printf("%s = %s\n", $1.CODE, $3.CODE);}}

	;


type_specifier
	: CHAR	{tt=3;$$.TYPE = 3;}
	| INT	{tt=1;$$.TYPE = 1;}
	| FLOAT	{tt=2;$$.TYPE = 2;}
	
	;



declarator
	: ID {if(INSERT_SYMBOL($1.CODE, tt)==0){yyerror("Variable with same name already declared");return 0;} strcpy($$.CODE,$1.CODE);$$.index = total_symbol-1;SYMBOL_TABLE[$$.index].dim=0;}
	| declarator '[' logical_or_exp ']' {if($3.TYPE==1){$1.TYPE=tt; SYMBOL_TABLE[$$.index].widths[SYMBOL_TABLE[$$.index].dim++] = $3.VALUE;$$.index = $1.index;strcpy($$.CODE,$1.CODE);} else{yyerror("Size of array must be integer");return 0;}}
	;


initializer
	: assignment_exp {$$.TYPE = $1.TYPE; strcpy($$.CODE,$1.CODE);$$.VALUE = $1.VALUE;}
	| '{' initializer_list '}' {$$.TYPE = $2.TYPE;strcpy($$.CODE,$2.CODE);}

	;

initializer_list
	: initializer {$$.TYPE = $1.TYPE;strcpy($$.CODE,$1.CODE);}
	| initializer_list ',' initializer {if($1.TYPE != $3.TYPE){yyerror("Assignment type mismatch");return 0;} $$.TYPE = $1.TYPE;strcat($$.CODE,",");strcat($$.CODE,$3.CODE);}

	;

stmt
	: labeled_stmt
	| compound_stmt
	| exp_stmt
	| selection_stmt
	| loop_stmt
	| jump_stmt
	;

labeled_stmt
	: CASE logical_or_exp ':' {printf("L%d: ", label_count); cq[cqs].label = label_count++;strcpy(cq[cqs].val, $2.CODE);cq[cqs].scope = cur_scope;cqs++;} stmt {printf("goto L%d\n", label_stack[label_top]);}
	| DEFAULT ':' {printf("L%d: ", label_count); cq[cqs].label = label_count++;strcpy(cq[cqs].val, "def");cq[cqs].scope = cur_scope;cqs++;} stmt {printf("goto L%d\n", label_stack[label_top]);}

	;

compound_stmt
	: '{' '}'
	| '{' stmt_list '}'
	| '{' dec_list '}'
	| '{' dec_list stmt_list '}'
	;

dec_list
	: dec
	| dec_list dec

	;

stmt_list
	: stmt
	| stmt_list stmt
	;

exp_stmt
	: ';'
	| exp ';'
	| error ';' {yyerror("; missing"); return 0;}
	| error '}' {yyerror("; missing"); return 0;}
	;

selection_stmt
	: IF '(' exp ')' {if($3.TYPE!=1){yyerror("Condition should be an expression with value 0 or 1"); return 0;} printf("if %s == 0 goto L%d\n", $3.CODE, label_count); label_stack[++label_top] = label_count++;} sub
	| SWITCH {printf("goto L%d\n", label_count); label_stack[++label_top] = label_count++; label_stack[++label_top] = label_count++;} '(' exp ')' stmt {printf("L%d: ", label_stack[label_top-1]);int c=0; for(int i=0;i<cqs-1;i++){ if(cq[i].scope == cur_scope+1){printf("if %s == %s goto L%d\n", $4.CODE, cq[i].val, cq[i].label);c++;}} printf("goto L%d\n", cq[cqs-1].label);c++;printf("L%d: ", label_stack[label_top]); cqs -= c; label_top-=2;}
	;

sub 
	: stmt {printf("L%d: ", label_stack[label_top--]);} sub1
	;

sub1
	: /* empty */
	| ELSE stmt
	;


loop_stmt
	: WHILE {printf("L%d: ", label_count);label_stack[++label_top] = label_count++;} '(' exp ')' {if($4.TYPE!=1){yyerror("Condition should be an expression with value 0 or 1"); return 0;} printf("if %s == 0 goto L%d\n", $4.CODE, label_count); int temp = label_stack[label_top--]; label_stack[++label_top] = label_count++; label_stack[++label_top] = temp;} stmt {printf("goto L%d\n", label_stack[label_top--]); printf("L%d: ", label_stack[label_top--]);}
	

jump_stmt
	: 
	| RETURN ';'
	| RETURN exp ';'

	;

program_body
	: type_specifier MAIN '(' arg ')' dec_list compound_stmt
	| type_specifier MAIN '(' arg ')' compound_stmt {printf("Return\n");}
	;

arg
	: /* empty */
	| VOID
	;


%%

int main() 
{ 
    extern FILE *yyin; 
    printf("*****Starting Three Address Code Generation. Scanning from input.txt...*****\n");
    yyin=fopen("input.txt","r"); 
    yyparse();
    int i;    
    /*for(i=0;i<total_symbol;i++){
		printf("%s = %f\n", SYMBOL_TABLE[i].symbol, SYMBOL_TABLE[i].type, SYMBOL_TABLE[i].scope);
    }*/
    if(iserr == 0)
    fprintf(stderr,"*****Finished Three Address Code Generation! No errors found*****\n");
    else
    fprintf(stderr,"*****Errors found!*****\n");

	
} 

void yyerror(char *s) {
    fprintf(stderr, " line:%d %s\n",lineno, s);
    iserr = 1;

}