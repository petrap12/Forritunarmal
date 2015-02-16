#ifndef TOKEN_H_INCLUDED
#define TOKEN_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Token
{
    public:
		string lexeme;
		enum TokenCode { ID, ASSIGN, SEMICOL, INT, PLUS, MINUS,
	                    MULT, LPAREN, RPAREN, PRINT, END, ERROR};
	    TokenCode tCode;

	    Token(){lexeme = ""; tCode = ID;}
	    Token(string lex, TokenCode code){lexeme = lex; tCode = code;}
	
};
typedef Token* TokenPtr;

#endif // TOKEN_H_INCLUDED

