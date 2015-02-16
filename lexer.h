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
		void errorMessage();
	private:
		TokenPtr token;
};
typedef Lexer* LexerPtr;

string Lexer::nextToken()
{
	string str = token->getLexeme();
	bool inTokenCode=true;

	for (int i = 0; i < str.size(); i++)
	{
    	if(isdigit(str[i]))
    		token->setDigit(true);

	}

	//Fara í gegnum öll lögleg token og athuga hvaða input kom
	//Hlýtur að vera betri leið til að gera þetta
	/*switch (temp)
	{
	    case 'ID':
	        // ..
	        break;
	    case 'ASSIGN':  
	    	//..
	    	break;
	    case 'SEMICOL':
	        // ..
	        break;
	    case 'INT':
	        // ..
	        break;
	    case 'PLUS':
	    	//..
	    	break;
	    case 'MINUS':
	    	//..
	    	break;
	    case 'MULT':
	    	//..
	    	break;
	    case 'LPAREN':
	    	//..
	    	break;
	    case 'RPAREN':
	    	//..
	    	break;
	    case 'PRINT':
	    	//..
	    	break;
	    case 'END':
	    	//..
	    	break;
	    case 'ERROR':
	    	//..
	     default:
	        errorMessage();
	        break;
	}*/
	/*Lexer apple;
	apple.setLexeme("worked");*/
	return str;
}

void Lexer::errorMessage()
{
	cout << "Token not valid" << endl;
	//exit(1);
}

#endif // LEXER_H_INCLUDED

