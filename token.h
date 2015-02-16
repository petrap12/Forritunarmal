#ifndef TOKEN_H_INCLUDED
#define TOKEN_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Token
{
    public:
	    enum TokenCode { ID, ASSIGN, SEMICOL, INT, PLUS, MINUS,
	                    MULT, LPAREN, RPAREN, PRINT, END, ERROR};
	    TokenCode tCode;
	    Token(string lexeme){lexeme = ""; digit=false; alpha=false;}
		void setLexeme(string lex){lexeme = lex;}
		string getLexeme(){return lexeme;}
		void setDigit(bool dig){digit = dig;}
		bool getDigit(){return digit;}
		void setAplha(bool alp){alpha = alp;}
		bool getAplha(){return alpha;}
	private:
		string lexeme;
		bool digit;
		bool alpha;
};
typedef Token* TokenPtr;

#endif // TOKEN_H_INCLUDED

