#ifndef TOKEN_H_INCLUDED
#define TOKEN_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Token
{
    public:
	    Token(string lexeme){lexeme = ""; tCode = ID;}

		void setLexeme(string lex){lexeme = lex;}
		string getLexeme(){return lexeme;}
	private:
		string lexeme;
		enum TokenCode { ID, ASSIGN, SEMICOL, INT, PLUS, MINUS,
	                    MULT, LPAREN, RPAREN, PRINT, END, ERROR};
	    TokenCode tCode;
};
typedef Token* TokenPtr;

#endif // TOKEN_H_INCLUDED

