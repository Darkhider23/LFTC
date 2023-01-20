/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CONST = 258,                   /* CONST  */
    VAR = 259,                     /* VAR  */
    DO = 260,                      /* DO  */
    THEN = 261,                    /* THEN  */
    PRINT = 262,                   /* PRINT  */
    RETURN = 263,                  /* RETURN  */
    INT = 264,                     /* INT  */
    WHILE = 265,                   /* WHILE  */
    ELSE = 266,                    /* ELSE  */
    FOR = 267,                     /* FOR  */
    VOID = 268,                    /* VOID  */
    END = 269,                     /* END  */
    CLASS = 270,                   /* CLASS  */
    IF = 271,                      /* IF  */
    READ = 272,                    /* READ  */
    INCLUDE = 273,                 /* INCLUDE  */
    IOSTREAM = 274,                /* IOSTREAM  */
    USING = 275,                   /* USING  */
    NAMESPACE = 276,               /* NAMESPACE  */
    STD = 277,                     /* STD  */
    MAIN = 278,                    /* MAIN  */
    COUT = 279,                    /* COUT  */
    PROGRAM = 280,                 /* PROGRAM  */
    PARA_C = 281,                  /* PARA_C  */
    PARA_O = 282,                  /* PARA_O  */
    REAL = 283,                    /* REAL  */
    ARRAY_O = 284,                 /* ARRAY_O  */
    ARRAY_C = 285,                 /* ARRAY_C  */
    BARA_C = 286,                  /* BARA_C  */
    BARA_O = 287,                  /* BARA_O  */
    OUTPUT_STREAM = 288,           /* OUTPUT_STREAM  */
    ID = 289,                      /* ID  */
    CONST_INT = 290,               /* CONST_INT  */
    CONST_REAL = 291,              /* CONST_REAL  */
    CONST_CAR = 292,               /* CONST_CAR  */
    STRING = 293,                  /* STRING  */
    CONST_SIR = 294,               /* CONST_SIR  */
    NR_BAZA10 = 295,               /* NR_BAZA10  */
    CONSTANTA = 296,               /* CONSTANTA  */
    ATRIB = 297,                   /* ATRIB  */
    NE = 298,                      /* NE  */
    LT = 299,                      /* LT  */
    GE = 300,                      /* GE  */
    LE = 301,                      /* LE  */
    GT = 302,                      /* GT  */
    EQ = 303,                      /* EQ  */
    DIV = 304,                     /* DIV  */
    MOD = 305,                     /* MOD  */
    OR = 306,                      /* OR  */
    AND = 307,                     /* AND  */
    NOT = 308                      /* NOT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define CONST 258
#define VAR 259
#define DO 260
#define THEN 261
#define PRINT 262
#define RETURN 263
#define INT 264
#define WHILE 265
#define ELSE 266
#define FOR 267
#define VOID 268
#define END 269
#define CLASS 270
#define IF 271
#define READ 272
#define INCLUDE 273
#define IOSTREAM 274
#define USING 275
#define NAMESPACE 276
#define STD 277
#define MAIN 278
#define COUT 279
#define PROGRAM 280
#define PARA_C 281
#define PARA_O 282
#define REAL 283
#define ARRAY_O 284
#define ARRAY_C 285
#define BARA_C 286
#define BARA_O 287
#define OUTPUT_STREAM 288
#define ID 289
#define CONST_INT 290
#define CONST_REAL 291
#define CONST_CAR 292
#define STRING 293
#define CONST_SIR 294
#define NR_BAZA10 295
#define CONSTANTA 296
#define ATRIB 297
#define NE 298
#define LT 299
#define GE 300
#define LE 301
#define GT 302
#define EQ 303
#define DIV 304
#define MOD 305
#define OR 306
#define AND 307
#define NOT 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "sspascal.y"

  	int l_val;
	char *p_val;

#line 178 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
