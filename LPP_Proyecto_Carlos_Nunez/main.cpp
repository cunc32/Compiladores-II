#include <iostream>
#include <fstream>
#include <string>
#include "ExprLexer.hpp"
#include "ExprParser.hpp"

std::string findExtension(char* fileName) {
    std::string extension = "";
    int lastDot = 0;
    int i = 0;
    do {
        if (fileName[i] == '.') {
            lastDot = i;
        }
        i++;
    } while (fileName[i] != '\0');

    i = lastDot + 1;
    do {
        extension += fileName[i];
        i++;
    } while (fileName[i] != '\0');

    return extension;
}

int main(int argc, char *argv[]) 
{
    if (argc != 3) {
        std::cerr << "Not enough CLI arguments\n";
        return 1;
    }
    std::ifstream in(argv[1], std::ios::in);

    if (!in.is_open()) {
        std::cerr << "Cannot open file\n";
        return 1;
    }

    if (findExtension(argv[1]) != "lpp") {
        std::cerr << "Wrong expected file extension at input " << argv[1] << std::endl;
        std::cerr << "Expected: .lpp" << std::endl;
        return 1;
    }

    ExprLexer lexer(in);
    ExprParser parser(lexer, argv[2]);

    try {
        parser.parse();
        std::cout << "Compiled with no errors" << std::endl;
        return 0;
    }
    catch (const std::runtime_error& ex) {
        std::cerr << ex.what() << '\n';
        return 1;
    }
}