#ifndef __EXPR_PARSER_HPP__
#define __EXPR_PARSER_HPP__

#include "ExprParserImpl.hpp"
#include "ExprLexer.hpp"
#include <unordered_map>
#include <iostream>
#include <fstream>
#include <vector>

class ExprParser
{
public:
    ExprParser(ExprLexer& lexer, const std::string& asmFile)
      : lexer(lexer), asmFile(asmFile)
    {}

    int parse();

    void createAsm(const std::string& code);
    
    ExprLexer& getLexer()
    { return lexer; }

private:
    std::vector<Node *> stmts;
    double value;
    ExprLexer& lexer;
    const std::string& asmFile;
};

#endif
