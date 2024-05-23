%option noyywrap
%option reentrant
%option yylineno
%option caseless
%option extra-type = "std::istream *"

%{
#include <iostream>
#include <cstdlib>
#include "ExprLexer.hpp"

#define YY_DECL Token ExprLexer::nextTokenHelper(yyscan_t yyscanner, ParserValueType *lval)
#define yyterminate() return Token::Eof
#define YY_USER_ACTION\
    yyset_column(yyget_column(yyscanner) + yyget_leng(yyscanner), yyscanner);

#define YY_INPUT(buf, result, max_size) \
    { \
        auto *in = yyget_extra(yyscanner); \
        in->read(buf, max_size); \
        result = in->gcount(); \
    }
%}

%x comment
%x str

%%
[ \t\n]	{  }
[\r\n] {    }
"//"[^\n]*\n { }
"/*"        { BEGIN(comment); }
\"          { BEGIN(str); }
\'[^\n]\'   { return Token::Char; }


"Entero"    { return Token::DefInt; }
"Real"      { return Token::DefDbl; }
"Cadena"    { return Token::DefStr; }
"Caracter"  { return Token::DefChar; }
"Booleano"  { return Token::DefBool; }
"Arreglo"   { return Token::DefArr; }
"de"        { return Token::de; }
"Funcion"   { return Token::DefFunc; }
"Procedimiento" { return Token::DefProc; }
"var"       { return Token::Var; }
"Inicio"    { return Token::Inicio; }
"Fin"       { return Token::Fin; }
"Final"     { return Token::Final; }
"Si"        { return Token::StructSi; }
"Entonces"  { return Token::Entonces; }
"Sino"      { return Token::StructSino; }
"Para"      { return Token::StructPara; }
"Mientras"  { return Token::StructMientras; }
"Haga"      { return Token::Haga; }
"Escriba"   { return Token::Escriba; }
"Leer"      { return Token::Leer; }
"verdadero" { return Token::Verdadero; }
"falso"     { return Token::Falso; }
"repita"    { return Token::Repita; }
"Hasta"     { return Token::Hasta; }
"Y"         { return Token::Y; }
"O"         { return Token::O; }
"Llamar"    { return Token::Llamar; }
":"         { return Token::Colon; }
"Retorne"   { return Token::Retorne; }
"Tipo"      { return Token::Type; }
"Es"        { return Token::Es; }
"Lea"       { return Token::Lea; }


"+"		    { return Token::OpAdd; }
"-"		    { return Token::OpSub; }
"*"		    { return Token::OpMult; }
"div"		{ return Token::OpDiv; }
"mod"		{ return Token::OpMod; }
"("		    { return Token::OpenPar; }
")"		    { return Token::ClosePar; }
"["         { return Token::OpenBr; }
"]"         { return Token::CloseBr; }
"="         { return Token::OpEq; }
"<-"        { return Token::OpAssign; }
"=="        { return Token::CompEq; }
"<>"        { return Token::CompDif; }
"<"         { return Token::CompLess; }
"<="        { return Token::CompELess; }
">"         { return Token::CompGreat; }
">="        { return Token::CompEGreat; }
";"         { return Token::Semi; }
","         { return Token::Comma; }
"0x"([0-9a-fA-F])+  { return Token::Hex; }
"0b"[0-1]+          { return Token::Binary; }
[0-9]+(\.[0-9]+)?	{ *lval = std::atof(yytext); return Token::Number; }
[a-zA-Z_][a-zA-Z0-9_]*	{ *lval = std::string(yytext); return Token::Ident; }
.		{ std::cerr << "Invalid symbol: " << yytext[0] << '\n'; return Token::Error; }

<str>[^"]* {  }
<str>\" { BEGIN(INITIAL); return Token::Str; }

<comment>"*/" { BEGIN(INITIAL); }
<comment>.|\n { /* Nothing */ }
<comment><<EOF>> { std::cerr << "Warning: Block comment without close\n";  }
%%
