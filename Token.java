public class Token
{
	String lexeme;
	enum TokenCode { ID, ASSIGN, SEMICOL, INT, PLUS, MINUS,
	                    MULT, LPAREN, RPAREN, PRINT, END, ERROR};
	TokenCode tCode;


	public Token(String lex, TokenCode cod)
        {
            this.lexeme = lex;
            this.tCode = cod;
        }
}
