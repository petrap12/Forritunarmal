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
		TokenCode arrTokens [];
};
typedef Lexer* LexerPtr;

Lexer::Lexer()
{
	//Don't know exactly how we implement the e's
	arrSymbols[0] = ("e"); //ID as e
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
	arrSymbols[11] = ("e"); //ERROR as e

	//This should work
	//puts all enums in the array arrTokens
	int count=0;
	for ( int fooInt = ID; fooInt != ERROR; fooInt++ )
	{
   		TokenCode foo = static_cast<TokenCode>(fooInt);
   		arrTokens[count] = foo;
   		count++;
	}
	//TokenPtr nxt1 = new
	// Token("amma", INT);
	//arrTokens[0] = (thisToken.->TokenCode->ASSIGN);
	/*arrSymbols[1] = (";");
	arrSymbols[2] = ("+");
	arrSymbols[3] = ("-");
	arrSymbols[4] = ("*");
	arrSymbols[5] = ("(");
	arrSymbols[6] = (")");*/
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
				//sending arrTokens[i] does not works:/
				//TokenPtr next = new Token(buff, arrTokens[i]);
				//return next;
			}
				

		}
	}
	
	Token.TokenCode = MULT;
	return new Token("*", tCode);
}

void Lexer::errorMessage()
{
	cout << "Token not valid" << endl;
	//exit(1);
}


#endif // LEXER_H_INCLUDED

