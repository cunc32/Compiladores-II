
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
#include "ExprAst.hpp"

class ExprParser; // Forward declaration

using ParserValueType = Node *;

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
%token SinoSi "Sino Si"

%%

start: program { parser.createAsm($1->genProgramCode()); }

program: Inicio codeBlock Fin { $$ = new Program((DefBlockStmt*)nullptr, (Stmt*)$2); }
      | defBlock Inicio codeBlock Fin { $$ = new Program((DefBlockStmt*)$1, (Stmt*)$3); }
      | defBlock funcsAndProcs Inicio codeBlock Fin
      | funcsAndProcs Inicio codeBlock Fin
      | typeBlock Inicio codeBlock Fin
      | typeBlock defBlock Inicio codeBlock Fin
      | typeBlock defBlock funcsAndProcs Inicio codeBlock Fin
      | typeBlock funcsAndProcs Inicio codeBlock Fin
;

codeBlock: codeBlock line { $$ = new BlockStmt($1, $2); }
      | line { $$ = $1; }
;

line: write { $$ = $1; }
      | read { $$ = $1; }
      | allAssign { $$ = $1; }
      | structures { $$ = $1; }
      | calls { $$ = $1; }
      | return { $$ = $1; }
;

return: Retorne expr
;

read: Lea id
;

write: write Comma Str
      | write Comma expr
      | Escriba Str { $$ = new PrintStrStmt((Expr*)$2); }
      | Escriba expr { $$ = new PrintIntStmt((Expr*)$2); }
      | Escriba Char { $$ = new PrintChStmt((Expr*)$2); }
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

simpleDef: simpleDef Comma Ident { $$ = new DefList((DefList*)$1, new DefVar((IdExpr*)$3)); }
      | varType Ident { $$ = new DefVar((IdExpr*)$2); }
;

def: simpleDef { $$ = $1; }
      | DefArr OpenBr expr CloseBr de varType Ident
;

defBlock: defBlock def { $$ = new DefBlockStmt((DefBlockStmt*)$1, (DefStmt*)$2); }
      | def { $$ = new DefStmt((DefList*)$1); }
;

paramType: Var varType Ident {}
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
      { $$ = new FuncDefStmt((IdExpr*)$2, (ParamList*)$4, (Stmt*)$9); }
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

repeat: Repita codeBlock Hasta boolExpr { $$ = new DWhileStmt((Expr*)$4, (Stmt*)$2); }
;

while: StructMientras boolExpr Haga codeBlock Fin StructMientras { $$ = new WhileStmt((Expr*)$2, (Stmt*)$4); }
;

for: StructPara assign Hasta expr Haga codeBlock Fin StructPara { $$ = new ForStmt((AssignStmt*)$2, (Expr*)$4, (Stmt*)$6); }
;

if: StructSi boolExpr Entonces codeBlock Fin StructSi { $$ = new IfStmt((Expr*)$2, (Stmt*)$4, (Stmt*)nullptr); }
      | StructSi boolExpr Entonces codeBlock else Fin StructSi { $$ = new IfStmt((Expr*)$2, (Stmt*)$4, (Stmt*)$5); }
      | StructSi boolExpr Entonces codeBlock elseBlock Fin StructSi { $$ = new IfStmt((Expr*)$2, (Stmt*)$4, (Stmt*)$5); }
;

else: StructSino codeBlock { $$ = $2; }
;

elseIf: SinoSi boolExpr Entonces codeBlock { $$ = new ElseIfStmt((Expr*)$2, (Stmt*)$4); }
;

elseBlock: elseBlock elseIf { $$ = new BlockStmt((Stmt*)$1, (Stmt*)$2); }
      | elseIf { $$ = $1; }
;

structures: repeat { $$ = $1; }
      | while { $$ = $1; }
      | for { $$ = $1; }
      | if { $$ = $1; }
;

assign: Ident OppAssign expr { $$ = new AssignStmt((IdExpr*)$1, (Expr*)$3); }
      | Ident OppAssign valBool
      | Ident OppAssign Char
;

arrAssign: arrId OppAssign expr
      | arrId OppAssign Char
      | arrId OppAssign valBool
;

allAssign: assign { $$ = $1; }
      | arrAssign { $$ = $1; }
;

expr: expr OpAdd term { $$ = new AddExpr((Expr*)$1, (Expr*)$3); }
      | expr OpSub term { $$ = new SubExpr((Expr*)$1, (Expr*)$3); }
      | term { $$ = $1; }
;

term: term OpMult factor { }
      | term OpDiv factor { }
      | term OpMod factor { }
      | factor { $$ = $1; }
;

factor: OpenPar expr ClosePar { }
      | Number { $$ = $1; }
      | id  { $$ = $1; } /* Revisar tabla existente si no existe es nueva variable */
;

boolExpr: boolExpr O boolTerm { }
      | boolTerm { $$ = $1; }
;

boolTerm: boolTerm Y boolFactor { }
      | boolFactor { $$ = $1; }
;

boolFactor: OpenPar boolExpr ClosePar { }
      | boolOperation { $$ = $1; }
;

boolOperation: expr OpEq expr { $$ = new EqExpr((Expr*)$1, (Expr*)$3); }
      | expr CompEq expr { $$ = new EqExpr((Expr*)$1, (Expr*)$3); }
      | expr CompDif expr { $$ = new NeExpr((Expr*)$1, (Expr*)$3); }
      | expr CompLess expr { $$ = new LTExpr((Expr*)$1, (Expr*)$3); }
      | expr CompELess expr { $$ = new LETExpr((Expr*)$1, (Expr*)$3); }
      | expr CompGreat expr { $$ = new GTExpr((Expr*)$1, (Expr*)$3); }
      | expr CompEGreat expr { $$ = new GETExpr((Expr*)$1, (Expr*)$3); }
;