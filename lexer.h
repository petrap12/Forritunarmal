#ifndef LEXER_H_INCLUDED
#define LEXER_H_INCLUDED
#include <iostream>
#include <string>
#include "token.h"


using namespace std;

class Lexer: public Token
{
	public:
		string nextToken();
};

string Lexer::nextToken()
{
	Lexer apple;
	apple.setLexeme("worked");
	Lexer orange;
	orange.setLexeme("maybe");

	

	/*Lexer banana;
	banana.lexeme = "this worked";
	return banana.lexeme;*/
	/*Token banana;
	banana.lexeme = "this worked"*/
	return "yes";
}



#endif // LEXER_H_INCLUDED

