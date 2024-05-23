#ifndef __ExprLexer_HPP__
#define __ExprLexer_HPP__

#include <iosfwd>
#include <string>
#include "ExprParserImpl.hpp"

enum class Token: int {
    Eof = 0,
    Error = 256,
    Undef = 257,
    OpAdd = 258,
    OpMult = 259,
    OpenPar = 260,
    ClosePar = 261,
    Number = 262,
    Ident = 263,
    OpEq = 264,
    Semi = 265,
    OpSub = 266,
    DefInt = 267,
    DefDbl = 268,
    DefStr = 269,
    DefChar = 270,
    DefBool = 271,
    DefArr = 272,
    de = 273,
    DefFunc = 274,
    DefProc = 275,
    Var = 276,
    Inicio = 277,
    Fin = 278,
    Final = 279,
    StructSi = 280,
    Entonces = 281,
    StructSino = 282,
    StructPara = 283,
    StructMientras = 284,
    Haga = 285,
    Str = 286,
    OpDiv = 287,
    OpMod = 288,
    CompEq = 289,
    CompDif = 290,
    CompLess = 291,
    CompELess = 292,
    CompGreat = 293,
    CompEGreat = 294,
    Hex = 295,
    Binary = 296,
    Comma = 297,
    Escriba = 298,
    Leer = 299,
    Verdadero = 300,
    Falso = 301,
    OpAssign = 302,
    Char = 303,
    Repita = 304,
    Hasta = 305,
    Y = 306,
    O = 307,
    OpenBr = 308,
    CloseBr = 309,
    Llamar = 310,
    Colon = 311,
    Retorne = 312,
    Type=313,
    Es=314,
    Lea=315
};

class ExprLexer
{
public:
    using yyscan_t = void*;

public:
    ExprLexer(std::istream& _in);
    ~ExprLexer();

    Token nextToken(ParserValueType *lval)
    { return nextTokenHelper(yyscanner, lval); }

    const int getLine() const;

    const int getColumn() const;

    std::string text() const;

    static const char *tokenString(Token tk);

private:
    Token nextTokenHelper(yyscan_t yyscanner, ParserValueType *lval);

private:
    std::istream& in;
    yyscan_t yyscanner;
};

#endif
