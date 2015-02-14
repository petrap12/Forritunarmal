#ifndef TOKEN_H_INCLUDED
#define TOKEN_H_INCLUDED
#include <iostream>
#include <string>

class Token:
{
    private:
    string lexeme;
    TokenCode tCode;
    enum TokenCode { ID, ASSIGN, SEMICOL, INT, PLUS, MINUS,
                    MULT, LPAREN, RPAREN, PRINT, END, ERROR}

}


#endif // TOKEN_H_INCLUDED

