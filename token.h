#ifndef TOKEN_H_INCLUDED
#define TOKEN_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class Token
{
    public:
    string lexeme;
    /*TokenCode tCode;
    enum TokenCode { ID, ASSIGN, SEMICOL, INT, PLUS, MINUS,
                    MULT, LPAREN, RPAREN, PRINT, END, ERROR};*/
    public:
    	Token(string lexeme){lexeme = "";}
};


#endif // TOKEN_H_INCLUDED

