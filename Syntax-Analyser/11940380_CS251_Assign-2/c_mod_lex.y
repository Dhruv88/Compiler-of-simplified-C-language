%{
#include <stdio.h>
extern int lineno;
int yylex();
void yyerror(char *s);
extern int iserr;
%}

%error-verbose

%token ID INTEGER FLOATING CHARACTER STRING SIZEOF
%token INCLUDE DEFINE HEADER_FILE 

%token EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOID
%token STRUCT UNION
%token KER_OP KER_CL L_SHIFT R_SHIFT OP_IN OP_DE OP_GE OP_LE OP_EQ OP_NE LOG_AND LOG_OR A_ASSIGN M_ASSIGN S_ASSIGN D_ASSIGN R_ASSIGN BA_ASSIGN BE_ASSIGN BO_ASSIGN LS_ASSIGN RS_ASSIGN ELLIPSIS
%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GLOBAL CONTINUE BREAK RETURN

%start program_body
%%

exp_simple
	: ID
	| INTEGER
	| FLOATING
	| CHARACTER
	| STRING
	| '(' exp ')'
	;

postfix_exp
	: exp_simple
	| postfix_exp '[' exp ']'
	| postfix_exp isker '(' ')'
	| postfix_exp isker '(' argument_exp_list ')'
	| postfix_exp '.' ID
	| postfix_exp OP_IN
	| postfix_exp OP_DE

	;

isker
	: /* empty */
	| KER_OP INTEGER ',' INTEGER KER_CL 
	;

unary_exp
	: postfix_exp
	| OP_IN unary_exp
	| OP_DE unary_exp
	| unary_op cast_exp
	| SIZEOF unary_exp
	| SIZEOF '(' type_name ')'
	;

unary_op
	: '~'
	| '!'
	| '*'
	| '+'
	| '-'
	| '&'
	;

cast_exp
	: unary_exp
	| '(' type_name ')' cast_exp
	
	;

mdm_exp
	: cast_exp
	| mdm_exp '*' cast_exp
	| mdm_exp '/' cast_exp
	| mdm_exp '%' cast_exp

	;

as_exp
	: mdm_exp
	| as_exp '+' mdm_exp
	| as_exp '-' mdm_exp

	;

shift_exp
	: as_exp
	| shift_exp L_SHIFT as_exp
	| shift_exp R_SHIFT as_exp

	;

relational_exp
	: shift_exp
	| relational_exp '<' shift_exp
	| relational_exp OP_LE shift_exp
	| relational_exp '>' shift_exp
	| relational_exp OP_GE shift_exp

	;

equality_exp
	: relational_exp
	| equality_exp OP_EQ relational_exp
	| equality_exp OP_NE relational_exp

	;

and_exp
	: equality_exp
	| and_exp '&' equality_exp

	;

exor_exp
	: and_exp
	| exor_exp '^' and_exp

	;

or_exp
	: exor_exp
	| or_exp '|' exor_exp

	;

logical_and_exp
	: or_exp
	| logical_and_exp LOG_AND or_exp

	;

logical_or_exp
	: logical_and_exp
	| logical_or_exp LOG_OR logical_and_exp

	;

exp_con
	: logical_or_exp
	| logical_or_exp '?' exp ':' exp_con

	;

assignment_exp
	: exp_con
	| unary_exp assignment_op assignment_exp

	;

assignment_op
	: '='
	| M_ASSIGN
	| D_ASSIGN
	| R_ASSIGN
	| A_ASSIGN
	| S_ASSIGN
	| LS_ASSIGN
	| RS_ASSIGN
	| BA_ASSIGN
	| BE_ASSIGN
	| BO_ASSIGN

	;

exp
	: assignment_exp
	| exp ',' assignment_exp

	;

argument_exp_list
	: assignment_exp
	| argument_exp_list ',' assignment_exp

	;

dec
	: dec_specifiers ';'
	| dec_specifiers init_declarator_list ';'

	;

dec_specifiers
	: storage_class_specifier
	| storage_class_specifier dec_specifiers
	| type_specifier
	| type_specifier dec_specifiers
	| CONST
	| CONST dec_specifiers

	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator

	;

init_declarator
	: declarator
	| declarator '=' initializer

	;

storage_class_specifier
	: EXTERN
	| STATIC
	| AUTO
	| REGISTER

	;


type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| struct_or_union_specifier

	;

struct_or_union_specifier
	: struct_or_union ID '{' struct_dec_list '}'
	| struct_or_union '{' struct_dec_list '}'
	| struct_or_union ID

	;

struct_or_union
	: STRUCT
	| UNION

	;

struct_dec_list
	: type_name struct_declarator_list ';'
	| struct_dec_list type_name struct_declarator_list ';'
	;

type_name
	: type_specifier type_name
	| type_specifier
	| CONST type_name
	| CONST

	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator

	;

struct_declarator
	: declarator
	| ':' exp_con
	| declarator ':' exp_con

	;

declarator
	: ID
	| '(' declarator ')'
	| declarator '[' exp_con ']'
	| declarator '[' ']'
	| declarator '(' param_type_list ')'
	| declarator '(' id_list ')'
	| declarator '(' ')'
	;


param_type_list
	: param_list
	| param_list ',' ELLIPSIS
	;

param_list
	: param_dec
	| param_list ',' param_dec

	;

param_dec
	: dec_specifiers declarator
	| dec_specifiers

	;

id_list
	: ID
	| id_list ',' ID

	;


initializer
	: assignment_exp
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'

	;

initializer_list
	: initializer
	| initializer_list ',' initializer

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
	: ID ':' stmt
	| CASE exp_con ':' stmt
	| DEFAULT ':' stmt

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
	: IF '(' exp ')' stmt
	| IF '(' exp ')' stmt ELSE stmt
	| SWITCH '(' exp ')' stmt
	;

loop_stmt
	: WHILE '(' exp ')' stmt
	| DO stmt WHILE '(' exp ')' ';'
	| FOR '(' exp_stmt exp_stmt ')' stmt
	| FOR '(' exp_stmt exp_stmt exp ')' stmt
	| FOR '(' dec exp_stmt exp ')' stmt

	;

jump_stmt
	: CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN exp ';'

	;

program_body
	: func_ker_globalvar
	| program_body func_ker_globalvar

	;

func_ker_globalvar
	: function_definition
	| dec
	| GLOBAL function_definition
	| preprocessors
	;

preprocessors
	: INCLUDE HEADER_FILE
	| DEFINE 
	;

function_definition
	: dec_specifiers declarator dec_list compound_stmt
	| dec_specifiers declarator compound_stmt
	| declarator dec_list compound_stmt
	| declarator compound_stmt

	;

%%

int main() 
{ 
    extern FILE *yyin; 
    printf("*****Starting Syntax Analysis. Scanning from input.txt...*****\n");
    yyin=fopen("input.txt","r"); 
    yyparse();
    if(iserr == 0)
    printf("*****Finished Syntax Analysis! No errors found*****\n");
    else
    printf("*****Errors found!*****\n");
} 

void yyerror(char *s) {
    fprintf(stderr, " line:%d %s\n",lineno, s);
    iserr = 1;
}