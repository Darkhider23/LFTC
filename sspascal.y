%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define YYDEBUG 1

#define TIP_INT 1
#define TIP_REAL 2
#define TIP_CHAR 3

double stiva[20];
int sp;
extern int yylex();
extern void yyerror(char* s);
void push(double x)
{ stiva[sp++]=x; }

double pop()
{ return stiva[--sp]; }

%}

%union {
  	int l_val;
	char *p_val;
}
%token CONST
%token VAR
%token DO
%token THEN
%token PRINT
%token RETURN
%token INT
%token WHILE
%token ELSE
%token FOR
%token VOID
%token END
%token CLASS
%token IF
%token READ
%token INCLUDE
%token IOSTREAM
%token USING
%token NAMESPACE
%token STD
%token MAIN
%token COUT
%token PROGRAM
%token PARA_C
%token PARA_O
%token REAL
%token ARRAY_O
%token ARRAY_C
%token BARA_C
%token BARA_O
%token OUTPUT_STREAM

%token ID
%token <p_val> CONST_INT
%token <p_val> CONST_REAL
%token <p_val> CONST_CAR
%token STRING
%token CONST_SIR
%token NR_BAZA10
%token CONSTANTA

%token ATRIB
%token NE
%token LT
%token GE
%token LE
%token GT
%token EQ

%left '+' '-'
%left DIV MOD '*' '/'
%left OR
%left AND
%left NOT



%%
program: 		INT MAIN PARA_O PARA_C BARA_O declaration_list statement_list RETURN CONST_REAL ';' BARA_C
;
declaration_list 	: declaration ';'
			|declaration ';' declaration_list
;
declaration:	 	arraydecl ';'
;			
type:			INT
			| REAL
;			
arraydecl: 		type ID ARRAY_O ARRAY_C '=' BARA_O BARA_C ';'
			| type ID ARRAY_O NR_BAZA10 ARRAY_C '='
;
statement_list:     	statement ';'
                    	| statement ';' statement_list
                    	;
statement:          	simple_statement 
		    	| compound_statement
		    	;
simple_statement:   	assignment 
		    	| output_stream
			;

output_stream:	       	COUT OUTPUT_STREAM output
		    	;
		
output:             	CONST_INT
		    	| CONST_REAL
		    	;

compound_statement:     while_statement
		    	;
  
expresion:		expresion '+' term ';'
			|term ';'
;
assignment:		ID '=' expresion ';'
;
			
term:			term '*' factor ';'
			|factor ';'
;			
factor:			PARA_O expresion PARA_C ';'
			|ID ';'
;
while_statement: 	WHILE PARA_O condition PARA_C BARA_O statement_list BARA_C
;
condition:		expresion relation expresion
;
relation:		LT
			|LE
			|GT
			|GE
			|ATRIB
			|EQ
			|NE
;


%%

void yyerror(char *s)
{
  printf("%s\n", s);
}

extern FILE *yyin;

int main(int argc, char **argv)
{
  if(argc>1) yyin = fopen(argv[1], "r");
  if((argc>2)&&(!strcmp(argv[2],"-d"))) yydebug = 1;
  if(!yyparse()) fprintf(stdout,"\tO.K.\n");
}
