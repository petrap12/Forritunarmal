#ifndef TOKEN_H_INCLUDED
#define TOKEN_H_INCLUDED
#include <iostream>
#include <string>
#include "lexer.h"
using namespace std;

class Token
{
    public:
	    string lexeme;
	    enum TokenCode { ID, ASSIGN, SEMICOL, INT, PLUS, MINUS,
	                    MULT, LPAREN, RPAREN, PRINT, END, ERROR};
	    TokenCode tCode;
	    Token(string lexeme){lexeme = "";}
		void setLexeme(string lex){lexeme = lex;}
};
typedef Token* TokenPtr;

#endif // TOKEN_H_INCLUDED

