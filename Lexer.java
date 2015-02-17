import java.io.IOException;

public class Lexer
{
	//void errorMessage(); we need an exception code
	Token thisToken;
	char arrSymbols [];

	 public Lexer()
	 {
	 	arrSymbols[0] = ('='); //ASSIGN
		arrSymbols[1] = (';'); //SEMICOL
		arrSymbols[2] = ('+'); //PLUS
		arrSymbols[3] = ('-'); //MINUS
		arrSymbols[4] = ('*'); //MULT
		arrSymbols[5] = ('('); //LPAREN
		arrSymbols[6] = (')'); //RPAREN

		//{ ID,INT,PRINT, END, ERROR};
	 }

	 public Token nextToken() throws IOException
	 {
	 	boolean inTokenCode=false;
		String buff = "";
		char letter;

		while(true)
		{
			letter = (char) System.in.read();

			//If the letter contrains the TokenCode
			for(int i=0; inTokenCode || i<7; i++)
			{
				if(letter == arrSymbols[i])
				{
					let(letter, arrSymbols[i]);
					inTokenCode = true;
				}
			}
		}
	}

    public Token let(char letter, char thisToken)
    {
    	if(thisToken == '=')
		{
			return new Token (String.valueOf(letter), Token.TokenCode.ASSIGN);
		}
		else if(thisToken == ';')
		{
			return new Token (String.valueOf(letter), Token.TokenCode.SEMICOL);
		}
		else if(thisToken == '+')
		{
			return new Token (String.valueOf(letter), Token.TokenCode.PLUS);
		}
		else if(thisToken == '-')
		{
			return new Token (String.valueOf(letter), Token.TokenCode.MINUS);
		}
		else if(thisToken == '*')
		{
			return new Token (String.valueOf(letter), Token.TokenCode.MULT);
		}
		else if(thisToken == '(')
		{
			return new Token (String.valueOf(letter), Token.TokenCode.LPAREN);
		}
		else
		{
			return new Token (String.valueOf(letter), Token.TokenCode.RPAREN);
		}
    }

    public static  void main(String[] args) throws IOException {
        Lexer lexer = new Lexer();
        while(true)
        {
            Token token = lexer.nextToken();
            System.out.println(" " + token.tCode + " - " + token.lexeme);
        }
    }
}
