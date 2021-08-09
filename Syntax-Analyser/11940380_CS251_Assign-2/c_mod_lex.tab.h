
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
     ID = 258,
     INTEGER = 259,
     FLOATING = 260,
     CHARACTER = 261,
     STRING = 262,
     SIZEOF = 263,
     INCLUDE = 264,
     DEFINE = 265,
     HEADER_FILE = 266,
     EXTERN = 267,
     STATIC = 268,
     AUTO = 269,
     REGISTER = 270,
     CHAR = 271,
     SHORT = 272,
     INT = 273,
     LONG = 274,
     SIGNED = 275,
     UNSIGNED = 276,
     FLOAT = 277,
     DOUBLE = 278,
     CONST = 279,
     VOID = 280,
     STRUCT = 281,
     UNION = 282,
     KER_OP = 283,
     KER_CL = 284,
     L_SHIFT = 285,
     R_SHIFT = 286,
     OP_IN = 287,
     OP_DE = 288,
     OP_GE = 289,
     OP_LE = 290,
     OP_EQ = 291,
     OP_NE = 292,
     LOG_AND = 293,
     LOG_OR = 294,
     A_ASSIGN = 295,
     M_ASSIGN = 296,
     S_ASSIGN = 297,
     D_ASSIGN = 298,
     R_ASSIGN = 299,
     BA_ASSIGN = 300,
     BE_ASSIGN = 301,
     BO_ASSIGN = 302,
     LS_ASSIGN = 303,
     RS_ASSIGN = 304,
     ELLIPSIS = 305,
     CASE = 306,
     DEFAULT = 307,
     IF = 308,
     ELSE = 309,
     SWITCH = 310,
     WHILE = 311,
     DO = 312,
     FOR = 313,
     GLOBAL = 314,
     CONTINUE = 315,
     BREAK = 316,
     RETURN = 317
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


