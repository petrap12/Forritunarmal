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
		//TokenCode arrTokens [];
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

	//Don't know exactly how we implement the e's
	/*arrSymbols[0] = ("e"); //ID as e
	arrSymbols[1] = ("="); //ASSIGN
	arrSymbols[2] = (";"); //SEMICOL
	arrSymbols[3] = ("e"); //INT as e
	arrSymbols[4] = ("+"); //PLUS
	arrSymbols[5] = ("-"); //MINUS
	arrSymbols[6] = ("*"); //MULT
	arrSymbols[7] = ("("); //LPAREN
	arrSymbols[8] = (")"); //RPAREN
	arrSymbols[9] = ("e"); //PRINT as e
	arrSymbols[10] = ("e"); //END as e
	arrSymbols[11] = ("e"); //ERROR as e*/

	//This should work
	//puts all enums in the array arrTokens
	/*int count=0;
	for ( int fooInt = ID; fooInt != ERROR; fooInt++ )
	{
   		TokenCode foo = static_cast<TokenCode>(fooInt);
   		arrTokens[count] = foo;
   		count++;
	}*/

	//{ ID,INT,PRINT, END, ERROR};
}
Token Lexer::nextToken()
{
	bool inTokenCode=false;

	//Test to understand how TokenPtr works
	/*TokenPtr nxt = new Token("amma", INT);
	nxt->TokenCode.ASSIGN;
	nxt->lexeme = "moo";
	string mama = nxt->lexeme;*/

	string buff = "";

	while(true)
	{
		getline(cin, buff); //? don't know how to get stdin in another way

		for(int i=0; inTokenCode || i==6; i++)
		{
			if(buff == arrSymbols[i])
			{
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

