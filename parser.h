#ifndef PARSER_H_INCLUDED
#define PARSER_H_INCLUDED
#include <iostream>
#include <string>
#include "lexer.h"
#include "token.h"
using namespace std;

class Parser
{
	public:
		string parse();

	private:
		TokenPtr token;
		LexerPtr lexer;
};


#endif // PARSER_H_INCLUDED

