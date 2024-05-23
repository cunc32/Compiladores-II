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

#ifndef YY_YY_MNT_C_USERS_CARLO_ONEDRIVE_DOCUMENTOS_GITHUB_COMPILADORES_II_EXPRFLEXBISONV3_BUILD_EXPRPARSERIMPL_HPP_INCLUDED
# define YY_YY_MNT_C_USERS_CARLO_ONEDRIVE_DOCUMENTOS_GITHUB_COMPILADORES_II_EXPRFLEXBISONV3_BUILD_EXPRPARSERIMPL_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 26 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/ExprParserImpl.y"

#include <string>
#include <variant>

class ExprParser; // Forward declaration

using ParserValueType = std::variant<std::string, double>;

#define YYSTYPE ParserValueType
#define YYSTYPE_IS_DECLARED 1


#line 62 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.hpp"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    OpAdd = 258,                   /* "+"  */
    OpMult = 259,                  /* "*"  */
    OpenPar = 260,                 /* "("  */
    ClosePar = 261,                /* ")"  */
    Number = 262,                  /* "numero"  */
    Ident = 263,                   /* "identificador"  */
    OpEq = 264,                    /* "="  */
    Semi = 265,                    /* ";"  */
    OpSub = 266,                   /* "-"  */
    DefInt = 267,                  /* "entero"  */
    DefDbl = 268,                  /* "real"  */
    DefStr = 269,                  /* "cadena"  */
    DefChar = 270,                 /* "caracter"  */
    DefBool = 271,                 /* "booleano"  */
    DefArr = 272,                  /* "arreglo"  */
    de = 273,                      /* "de"  */
    DefFunc = 274,                 /* "funcion"  */
    DefProc = 275,                 /* "procedimiento"  */
    Var = 276,                     /* "var"  */
    Inicio = 277,                  /* "inicio"  */
    Fin = 278,                     /* "fin"  */
    Final = 279,                   /* "final"  */
    StructSi = 280,                /* "si"  */
    Entonces = 281,                /* "entonces"  */
    StructSino = 282,              /* "sino"  */
    StructPara = 283,              /* "para"  */
    StructMientras = 284,          /* "mientras"  */
    Haga = 285,                    /* "haga"  */
    Str = 286,                     /* "StringConstant"  */
    OpDiv = 287,                   /* "div"  */
    OpMod = 288,                   /* "mod"  */
    CompEq = 289,                  /* "=="  */
    CompDif = 290,                 /* "<>"  */
    CompLess = 291,                /* "<"  */
    CompELess = 292,               /* "<="  */
    CompGreat = 293,               /* ">"  */
    CompEGreat = 294,              /* ">="  */
    Hex = 295,                     /* "Hexa"  */
    Binary = 296,                  /* "Binary"  */
    Comma = 297,                   /* ","  */
    Escriba = 298,                 /* "Escriba"  */
    Leer = 299,                    /* "Leer"  */
    Verdadero = 300,               /* "Verdadero"  */
    Falso = 301,                   /* "Falso"  */
    OppAssign = 302,               /* "<-"  */
    Char = 303,                    /* "constantCharacter"  */
    Repita = 304,                  /* "Repita"  */
    Hasta = 305,                   /* "Hasta"  */
    Y = 306,                       /* "Y"  */
    O = 307,                       /* "O"  */
    OpenBr = 308,                  /* "["  */
    CloseBr = 309,                 /* "]"  */
    Llamar = 310,                  /* "Llamar"  */
    Colon = 311,                   /* ":"  */
    Retorne = 312,                 /* "Retorne"  */
    Type = 313,                    /* "Tipo"  */
    Es = 314,                      /* "Es"  */
    Lea = 315                      /* "Lea"  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int yyparse (ExprParser& parser);


#endif /* !YY_YY_MNT_C_USERS_CARLO_ONEDRIVE_DOCUMENTOS_GITHUB_COMPILADORES_II_EXPRFLEXBISONV3_BUILD_EXPRPARSERIMPL_HPP_INCLUDED  */
