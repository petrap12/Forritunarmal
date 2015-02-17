#include <iostream>
#include <string>
#include "parser.h"
#include "lexer.h"
#include "token.h"
using namespace std;
string Parser::parse()
{
	//reads from a file
	ifstream myReadFile;
    myReadFile.open("example.txt");
    char output[100];
    if (myReadFile.is_open()) {
        while (!myReadFile.eof()) {
            myReadFile >> output;
            cout<<output;
        }
    }
    myReadFile.close();
}