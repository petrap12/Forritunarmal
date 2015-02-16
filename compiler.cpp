#include <iostream>
#include "lexer.h"
#include "parser.h"
using namespace std;

//This program should be finished
int main(){
    Lexer myLexer = new Lexer();
    Parser myParser = new Parser(myLexer);
    myParser.parse();

    return 0;
};

