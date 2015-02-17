public class Lexer
{
	Lexer();
	Token nextToken();
	void errorMessage();
	Token thisToken;
	char arrSymbols [];
	enum TokenCode {allTokens = Token::ERROR};
	
	public static void main(String[] args) {
 		System.out.println("Hello World");
 	}	
}
