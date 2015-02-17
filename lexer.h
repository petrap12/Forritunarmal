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
		Token nextToken();
		void errorMessage();
		
	private:
		Token thisToken;
		string arrSymbols [];
		enum TokenCode {allTokens = Token::ERROR};
};
//typedef Lexer* LexerPtr;

Lexer::Lexer()
{
	arrSymbols[0] = ("="); //ASSIGN
	arrSymbols[1] = (";"); //SEMICOL
	arrSymbols[2] = ("+"); //PLUS
	arrSymbols[3] = ("-"); //MINUS
	arrSymbols[4] = ("*"); //MULT
	arrSymbols[5] = ("("); //LPAREN
	arrSymbols[6] = (")"); //RPAREN

	//{ ID,INT,PRINT, END, ERROR};
}
Token Lexer::nextToken()
{
	bool inTokenCode=false;
	string buff = "";

	while(true)
	{
		getline(cin, buff); //? don't know how to get stdin in another way

		for(int i=0; inTokenCode || i<7; i++)
		{
			if(buff == arrSymbols[i])
			{
				inTokenCode = true;
				Token nxt;
				nxt.lexeme = buff;
				if(arrSymbols[i] == "=")
					nxt.tCode = Token::ASSIGN;
				if(arrSymbols[i] == ";")
					nxt.tCode = Token::SEMICOL;
				if(arrSymbols[i] == "+")
					nxt.tCode = Token::PLUS;
				if(arrSymbols[i] == "-")
					nxt.tCode = Token::MINUS;
				if(arrSymbols[i] == "*")
					nxt.tCode = Token::MULT;
				if(arrSymbols[i] == "(")
					nxt.tCode = Token::LPAREN;
				if(arrSymbols[i] == ")")
					nxt.tCode = Token::RPAREN;
				return nxt;
			}
		}
	}

	return thisToken;
}

void Lexer::errorMessage()
{
	cout << "Token not valid" << endl;
	//exit(1);
}


#endif // LEXER_H_INCLUDED

