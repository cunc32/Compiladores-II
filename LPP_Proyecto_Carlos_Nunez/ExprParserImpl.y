
%define parse.error verbose
%define api.pure full

%parse-param {ExprParser& parser}

%code top {

#include <iostream>
#include <stdexcept>
#include "ExprLexer.hpp"
#include "ExprParser.hpp"


#define yylex(v) static_cast<int>(parser.getLexer().nextToken(v))

void yyerror(const ExprParser& parser, const char *msg)
{
      std::cout << "Line no.:" << (const_cast<ExprParser&>(parser)).getLexer().getLine() << std::endl;
      std::cout << "Column no.: " << (const_cast<ExprParser&>(parser)).getLexer().getColumn() << std::endl;
      throw std::runtime_error(msg);
}

}

%code requires {
#include <string>
#include <variant>

class ExprParser; // Forward declaration

using ParserValueType = std::variant<std::string, double>;

#define YYSTYPE ParserValueType
#define YYSTYPE_IS_DECLARED 1

}

%token OpAdd "+"
%token OpMult "*"
%token OpenPar "("
%token ClosePar ")"
%token Number "numero"
%token Ident "identificador"
%token OpEq "="
%token Semi ";"
%token OpSub "-"
%token DefInt "entero"
%token DefDbl "real"
%token DefStr "cadena"
%token DefChar "caracter"
%token DefBool "booleano"
%token DefArr "arreglo"
%token de "de"
%token DefFunc "funcion"
%token DefProc "procedimiento"
%token Var "var"
%token Inicio "inicio"
%token Fin "fin"
%token Final "final"
%token StructSi "si"
%token Entonces "entonces"
%token StructSino "sino"
%token StructPara "para"
%token StructMientras "mientras"
%token Haga "haga"
%token Str "StringConstant"
%token OpDiv "div"
%token OpMod "mod"
%token CompEq "=="
%token CompDif "<>"
%token CompLess "<"
%token CompELess "<="
%token CompGreat ">"
%token CompEGreat ">="
%token Hex "Hexa"
%token Binary "Binary"
%token Comma ","
%token Escriba "Escriba"
%token Leer "Leer"
%token Verdadero "Verdadero"
%token Falso "Falso"
%token OppAssign "<-"
%token Char "constantCharacter"
%token Repita "Repita"
%token Hasta "Hasta"
%token Y "Y"
%token O "O"
%token OpenBr "["
%token CloseBr "]"
%token Llamar "Llamar"
%token Colon ":"
%token Retorne "Retorne"
%token Type "Tipo"
%token Es "Es"
%token Lea "Lea"

%%

program: Inicio codeBlock Fin
      | defBlock Inicio codeBlock Fin
      | defBlock funcsAndProcs Inicio codeBlock Fin
      | funcsAndProcs Inicio codeBlock Fin
      | typeBlock Inicio codeBlock Fin
      | typeBlock defBlock Inicio codeBlock Fin
      | typeBlock defBlock funcsAndProcs Inicio codeBlock Fin
      | typeBlock funcsAndProcs Inicio codeBlock Fin
;

codeBlock: codeBlock line
      | line
;

line: write
      | read
      | allAssign
      | structures
      | calls
      | return
;

return: Retorne expr
;

read: Lea id
;

write: write Comma Str
      | write Comma expr
      | Escriba Str
      | Escriba expr
      | Escriba Char
;

typeBlock: typeBlock defType
      | defType
;

defType: Type Ident Es varType
      | Type Ident Es DefArr OpenBr expr CloseBr de varType
;

varType: DefInt
      | DefChar
      | DefBool
      | Ident
;

arrId: Ident OpenBr expr CloseBr
;

id: Ident
      | arrId
      | subprId
;

valBool: Verdadero
      | Falso
;

compOp: OpEq
      | CompEq
      | CompDif
      | CompLess
      | CompELess
      | CompGreat
      | CompEGreat
;

simpleDef: simpleDef Comma Ident
      | varType Ident
;

def: simpleDef
      | DefArr OpenBr expr CloseBr de varType Ident
;

defBlock: defBlock def
      | def
;

paramType: Var varType Ident
      | Var DefArr OpenBr Number CloseBr de varType Ident
      | varType Ident
      | DefArr OpenBr Number CloseBr de varType Ident
;

paramList: paramList Comma paramType
      | paramType
;

procDef: DefProc Ident OpenPar paramList ClosePar defBlock Inicio codeBlock Fin
      | DefProc Ident OpenPar paramList ClosePar Inicio codeBlock Fin
      | DefProc Ident OpenPar ClosePar defBlock Inicio codeBlock Fin
      | DefProc Ident OpenPar ClosePar Inicio codeBlock Fin
      | DefProc Ident defBlock Inicio codeBlock Fin
      | DefProc Ident Inicio codeBlock Fin
;

funcDef: DefFunc Ident OpenPar paramList ClosePar Colon varType defBlock Inicio codeBlock Fin
      | DefFunc Ident OpenPar paramList ClosePar Colon varType Inicio codeBlock Fin
      | DefFunc Ident OpenPar ClosePar Colon varType defBlock Inicio codeBlock Fin
      | DefFunc Ident OpenPar ClosePar Colon varType Inicio codeBlock Fin
      | DefFunc Ident Colon varType defBlock Inicio codeBlock Fin
      | DefFunc Ident Colon varType Inicio codeBlock Fin
;

funcsAndProcs: funcsAndProcs procDef
      | funcsAndProcs funcDef
      | procDef
      | funcDef
;

paramEnter: paramEnter Comma expr
      | expr
;

calls: Llamar subprId
      | Llamar Ident 
;

subprId: Ident OpenPar ClosePar
      | Ident OpenPar paramEnter ClosePar
;

repeat: Repita codeBlock Hasta boolExpr
;

while: StructMientras boolExpr Haga codeBlock Fin StructMientras
;

for: StructPara assign Hasta expr Haga codeBlock Fin StructPara
;

if: StructSi boolExpr Entonces codeBlock Fin StructSi
      | StructSi boolExpr Entonces codeBlock StructSino codeBlock Fin StructSi
;

structures: repeat
      | while
      | for
      | if
;

assign: Ident OppAssign expr { parser.assign(std::get<std::string>($1), std::get<double>($3)); }
      | Ident OppAssign valBool
      | Ident OppAssign Char
;

arrAssign: arrId OppAssign expr
      | arrId OppAssign Char
      | arrId OppAssign valBool
;

allAssign: assign
      | arrAssign
;

expr: expr OpAdd term { $$ = std::get<double>($1) + std::get<double>($3); }
      | expr OpSub term { $$ = std::get<double>($1) - std::get<double>($3); }
      | term { $$ = $1; }
;

term: term OpMult factor { $$ = std::get<double>($1) * std::get<double>($3);  }
      | term OpDiv factor { $$ = std::get<double>($1) / std::get<double>($3);  }
      | term OpMod factor { $$ = std::get<double>($1) / std::get<double>($3);  }
      | factor { $$ = $1; }
;

factor: OpenPar expr ClosePar { $$ = $2; }
      | Number { $$ = $1; }
      | id  {
            $$ = parser.constValue(std::get<std::string>($1));
      }
;

boolExpr: boolExpr O boolTerm { $$ = std::get<double>($1) + std::get<double>($3); }
      | boolTerm { $$ = $1; }
;

boolTerm: boolTerm Y boolFactor { $$ = std::get<double>($1) * std::get<double>($3);  }
      | boolFactor { $$ = $1; }
;

boolFactor: OpenPar boolExpr ClosePar { $$ = $2; }
      | boolOperation { $$ = $1; }
;

boolOperation: expr compOp expr
;