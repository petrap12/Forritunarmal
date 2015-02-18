import java.io.IOException;

public class Parser
{
	Token thisToken = null;
	Lexer thisLexer = null;

	//{
	// LPAREN, RPAREN,};

	public void parse() throws IOException
	{
		thisToken = thisLexer.nextToken();
		if(thisToken.tCode == Token.TokenCode.ERROR) //ERROR token
			syntaxError();
		if(thisToken.tCode == Token.TokenCode.END) //END token
			return;
		if(thisToken.tCode == Token.TokenCode.SEMICOL) //SEMICOL token
		{
			//if we get here it means the line is done. 
			//Therefor we get the next token and start from the beginning.
			thisToken = thisLexer.nextToken();
			parse();
			return;
		}
		else if(thisToken.tCode != Token.TokenCode.SEMICOL)
		{
			//Else we are still looking at the same line.
			//Therefor we don't have END, ERROR or SEMICOL and go to parsing() again.
			//After parsing and getting the next token there, we must start from the beginning.
			parsing();
			parse();
			return;
		}
		else
		{
			syntaxError();
		}
	}
	
	private void parsing() throws IOException      
    {
    	if(thisToken.tCode == Token.TokenCode.ID) //ID token
    	{
    		System.out.println("PUSH " + thisToken.lexeme);
    		thisToken = thisLexer.nextToken();
    		return;
    	}
    	if(thisToken.tCode == Token.TokenCode.PRINT) //PRINT token
    	{
    		System.out.println("PUSH " + thisToken.lexeme);
    		System.out.println("PRINT");
    		thisToken = thisLexer.nextToken();
    		return;
    	}
    	if(thisToken.tCode == Token.TokenCode.INT) //INT token
    	{
    		System.out.println("PUSH " + thisToken.lexeme);
    		thisToken = thisLexer.nextToken();
    		return;
    	}
    	if(thisToken.tCode == Token.TokenCode.ASSIGN) //ASSIGN token
    	{
    		thisToken = thisLexer.nextToken();
    		parsing();
    		System.out.println("ASSIGN");
    		return;
    	}
    	if(thisToken.tCode == Token.TokenCode.PLUS) //PLUS token
    	{
    		thisToken = thisLexer.nextToken();
    		parsing();
    		System.out.println("PLUS");
    		return;
    	}
    	if(thisToken.tCode == Token.TokenCode.MINUS) //MINUS token
    	{
    		thisToken = thisLexer.nextToken();
    		parsing();
    		System.out.println("MINUS");
    		return;
    	}
    	if(thisToken.tCode == Token.TokenCode.MULT) //MULT token
    	{
    		thisToken = thisLexer.nextToken();
    		parsing();
    		System.out.println("MULT");
    		return;
    	}
        
    }

 	public void syntaxError()
 	{
 		System.out.println("Syntax error");
 		System.exit(-1);
 	}
}
