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

%token MAIN
%token RETURN
%token IF
%token WHILE
%token FOR
%token COUT
%token CIN
%token ELSE
%token ID
%token INT
%token FLOAT
%token STRING
%token <p_val> CONST_INT
%token <p_val> CONST_REAL
%token <p_val> CONST_CHAR
%token CONST_STR

%token CHAR
%token REAL

%token ATRIB
%token NE
%token LE
%token GE
%token STRICT_LESS
%token STRICT_GREAT
%token OUTPUT_STREAM
%token INPUT_STREAM
%token PAR_O
%token PAR_C
%token BRA_O
%token BRA_C

%left '+' '-'
%left DIV MOD
%left OR
%left AND
%left NOT
%left EQUALITY

//%type <l_val> expr_stat factor_stat constanta
%%
program:            INT MAIN PAR_O PAR_C BRA_O declaration_list statement_list RETURN CONST_INT ';' BRA_C 
		    ;
declaration_list:   declaration ';'
		    | declaration ';' declaration_list
		    ;
declaration:	    type ID
		    | type ID ',' ID
		    ;
type:               INT
		    | FLOAT 
		    | CHAR 
		    | STRING
		    ;                    
statement_list:     statement ';'
                    | statement ';' statement_list
                    ;
statement:          simple_statement 
		    | compound_statement
		    ;
simple_statement:   assignment 
		    | input_output
		    ;
assignment:         ID ATRIB expression
		    ;
expression:         term '+' expression
		    | term
		    ;
term:               term '*' factor 
		    | factor
		    ;
factor:             PAR_O expression PAR_C
		    | ID
		    | constant
		    ;
input_output:       CIN INPUT_STREAM input 
		    | COUT OUTPUT_STREAM output
		    ;
input:              CONST_STR
		    | CONST_INT
		    | CONST_REAL
		    | CONST_CHAR
		    | ID
		    ;
output:             CONST_STR 
		    | CONST_INT
		    | CONST_REAL
		    | CONST_CHAR
		    | ID
		    ;
compound_statement: if_statement 
		    | while_statement
		    ;  
if_statement:       IF PAR_O condition PAR_C BRA_O statement_list BRA_C 
		    | IF PAR_O condition PAR_C BRA_O statement_list BRA_C ELSE BRA_O statement_list BRA_C
		    ;
condition:          expression relation expression 
                    ;
relation:	    NE
		    | LE
		    | GE
		    | STRICT_LESS
		    | STRICT_GREAT
		    | OR
		    | AND
		    | NOT
		    | EQUALITY
		    ;
constant:	    CONST_INT
		    | CONST_REAL
		    | CONST_CHAR
		    ;		                   
while_statement:    WHILE PAR_O condition PAR_C BRA_O statement_list BRA_C
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
