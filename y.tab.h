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
    BEGIN = 259,                   /* BEGIN  */
    VAR = 260,                     /* VAR  */
    DO = 261,                      /* DO  */
    THEN = 262,                    /* THEN  */
    PRINT = 263,                   /* PRINT  */
    RETURN = 264,                  /* RETURN  */
    INT = 265,                     /* INT  */
    WHILE = 266,                   /* WHILE  */
    ELSE = 267,                    /* ELSE  */
    FOR = 268,                     /* FOR  */
    VOID = 269,                    /* VOID  */
    END = 270,                     /* END  */
    CLASS = 271,                   /* CLASS  */
    IF = 272,                      /* IF  */
    READ = 273,                    /* READ  */
    INCLUDE = 274,                 /* INCLUDE  */
    IOSTREAM = 275,                /* IOSTREAM  */
    USING = 276,                   /* USING  */
    NAMESPACE = 277,               /* NAMESPACE  */
    STD = 278,                     /* STD  */
    MAIN = 279,                    /* MAIN  */
    COUT = 280,                    /* COUT  */
    PROGRAM = 281,                 /* PROGRAM  */
    ID = 282,                      /* ID  */
    CONST_INT = 283,               /* CONST_INT  */
    CONST_REAL = 284,              /* CONST_REAL  */
    CONST_CAR = 285,               /* CONST_CAR  */
    STRING = 286,                  /* STRING  */
    CONST_SIR = 287,               /* CONST_SIR  */
    CHAR = 288,                    /* CHAR  */
    INTEGER = 289,                 /* INTEGER  */
    REAL = 290,                    /* REAL  */
    ATRIB = 291,                   /* ATRIB  */
    NE = 292,                      /* NE  */
    LT = 293,                      /* LT  */
    GE = 294,                      /* GE  */
    LE = 295,                      /* LE  */
    DIV = 296,                     /* DIV  */
    MOD = 297,                     /* MOD  */
    OR = 298,                      /* OR  */
    AND = 299,                     /* AND  */
    NOT = 300                      /* NOT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define CONST 258
#define BEGIN 259
#define VAR 260
#define DO 261
#define THEN 262
#define PRINT 263
#define RETURN 264
#define INT 265
#define WHILE 266
#define ELSE 267
#define FOR 268
#define VOID 269
#define END 270
#define CLASS 271
#define IF 272
#define READ 273
#define INCLUDE 274
#define IOSTREAM 275
#define USING 276
#define NAMESPACE 277
#define STD 278
#define MAIN 279
#define COUT 280
#define PROGRAM 281
#define ID 282
#define CONST_INT 283
#define CONST_REAL 284
#define CONST_CAR 285
#define STRING 286
#define CONST_SIR 287
#define CHAR 288
#define INTEGER 289
#define REAL 290
#define ATRIB 291
#define NE 292
#define LT 293
#define GE 294
#define LE 295
#define DIV 296
#define MOD 297
#define OR 298
#define AND 299
#define NOT 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "sspascal.y"

  	int l_val;
	char *p_val;

#line 162 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
