#ifndef LEXER_H_INCLUDED
#define LEXER_H_INCLUDED
#include <iostream>
#include <string>
#include "token.h"
using namespace std;

class Lexer
{
	public:
		string nextToken();
	private:
		TokenPtr token;
};
typedef Lexer* LexerPtr;

string Lexer::nextToken()
{
	/*Lexer apple;
	apple.setLexeme("worked");*/
	return "yes";
}



#endif // LEXER_H_INCLUDED

