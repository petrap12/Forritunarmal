import java.io.IOException;
import java.io.*;

public class Lexer
{
	//void errorMessage(); we need an exception code
	char arrSymbols [];
	String arrStrings [];

	 public Lexer()
	 {
	 	arrSymbols[0] = ('='); //ASSIGN
		arrSymbols[1] = (';'); //SEMICOL
		arrSymbols[2] = ('+'); //PLUS
		arrSymbols[3] = ('-'); //MINUS
		arrSymbols[4] = ('*'); //MULT
		arrSymbols[5] = ('('); //LPAREN
		arrSymbols[6] = (')'); //RPAREN

		arrStrings[0] = ("print"); //PRINT
		arrStrings[1] = ("end"); //END
		arrStrings[2] = ("error"); //ERROR
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
					tokens(letter, arrSymbols[i]);
					inTokenCode = true;
				}
			}

			//not ready
			//{ ID,INT,PRINT, END, ERROR};
			for(int i=0; inTokenCode || i<3; i++)
			{
				if(buff == arrStrings[i])
				{
					otokens(buff);
					inTokenCode = true;
				}
			}


		}
	}

    public Token tokens(char letter, char thisToken)
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

    Token otokens(String input)
    {
    	if(input == "print")
    	{
    		return new Token (input, Token.TokenCode.PRINT);
    	}
    	else if(input == "end")
    	{
    		return new Token (input, Token.TokenCode.END);
    	}
    	else
    	{
    		return new Token (input, Token.TokenCode.ERROR);
    	}
    }

    boolean isDigit(String input)
    {
    	for(int i=0; i<input.length(); i++)
    	{
    		char c = input.charAt(i);
    		if(!Character.isDigit(c));
    			return false;
    	}
    	return true;
    }

    boolean isAlpha(String input)
    {
    	for(int i=0; i<input.length(); i++)
    	{
    		char c = input.charAt(i);
    		if(!Character.isLetter(c));
    			return false;
    	}
    	return true;
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
