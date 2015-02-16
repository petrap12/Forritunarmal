#ifndef LEXER_H_INCLUDED
#define LEXER_H_INCLUDED
#include <iostream>
#include <string>
#include "token.h"
using namespace std;

class Lexer: public Token
{
	public:
		TokenPtr nextToken();
		void errorMessage();
	private:
		TokenPtr token;
};
typedef Lexer* LexerPtr;

TokenPtr Lexer::nextToken()
{
	bool inTokenCode=true;
	TokenPtr nxt = new Token("amma", INT);
	
	return nxt;
}

void Lexer::errorMessage()
{
	cout << "Token not valid" << endl;
	//exit(1);
}

#endif // LEXER_H_INCLUDED

