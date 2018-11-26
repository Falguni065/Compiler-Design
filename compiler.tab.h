
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
     FLOAT = 259,
     CHAR = 260,
     DOUBLE = 261,
     LSB = 262,
     RSB = 263,
     SEMI = 264,
     COMMA = 265,
     NUMBER = 266,
     EQUAL = 267,
     PLUS = 268,
     MINUS = 269,
     CROSS = 270,
     DIV = 271,
     DEFAULT = 272,
     WHILE = 273,
     MOD = 274,
     FTB = 275,
     LTB = 276,
     FFB = 277,
     LFB = 278,
     IF = 279,
     FS = 280,
     GE = 281,
     GR = 282,
     LE = 283,
     LS = 284,
     EQ = 285,
     NEQ = 286,
     PRINT = 287,
     ELSE = 288,
     FOR = 289,
     INC = 290,
     DEC = 291,
     COS = 292,
     COE = 293,
     LOS = 294,
     LOE = 295,
     SWITCH = 296,
     CASE = 297,
     STOP = 298,
     COL = 299,
     VAR = 300
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 21 "compiler.y"

    int valname;
    char varname[1000];



/* Line 1676 of yacc.c  */
#line 104 "compiler.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


