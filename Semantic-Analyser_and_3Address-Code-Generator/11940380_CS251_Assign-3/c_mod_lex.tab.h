
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTEGER = 258,
     FLOATING = 259,
     CHARACTER = 260,
     STRING = 261,
     MAIN = 262,
     ID = 263,
     CHAR = 264,
     INT = 265,
     FLOAT = 266,
     L_SHIFT = 267,
     R_SHIFT = 268,
     OP_IN = 269,
     OP_DE = 270,
     OP_GE = 271,
     OP_LE = 272,
     OP_EQ = 273,
     OP_NE = 274,
     LOG_AND = 275,
     LOG_OR = 276,
     CASE = 277,
     DEFAULT = 278,
     IF = 279,
     ELSE = 280,
     SWITCH = 281,
     WHILE = 282,
     RETURN = 283,
     VOID = 284
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 98 "c_mod_lex.y"

	struct{
  		float VALUE;
		int TYPE;
		char CODE[100];
		int index;
		char offset[100];
		int count;
	}value_type;
  	



/* Line 1676 of yacc.c  */
#line 95 "c_mod_lex.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


