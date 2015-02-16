#ifndef LEXER_H_INCLUDED
#define LEXER_H_INCLUDED
#include <iostream>
#include <string>
#include "token.h"
using namespace std;

class Lexer: public Token
{
	public:
		Lexer();
		TokenPtr nextToken();
		void errorMessage();
		
	private:
		TokenPtr thisToken;
		string arrTokens [];
};
typedef Lexer* LexerPtr;

Lexer::Lexer()
{
	arrTokens[0] = ("=");
	arrTokens[1] = (";");
	arrTokens[2] = ("+");
	arrTokens[3] = ("-");
	arrTokens[4] = ("*");
	arrTokens[5] = ("(");
	arrTokens[6] = (")");	


	//{ ID,INT,PRINT, END, ERROR};
}
TokenPtr Lexer::nextToken()
{
	bool inTokenCode=true;
	//TokenPtr nxt = new Token("amma", INT);
	//string buff = getline(cin, );
	
	return thisToken;
}

void Lexer::errorMessage()
{
	cout << "Token not valid" << endl;
	//exit(1);
}


#endif // LEXER_H_INCLUDED

