#include <iostream>
#include <fstream>
#include "lexer.h"
#include "parser.h"
using namespace std;

int main ()
{
	ofstream outstream;
  	outstream.open ("compilerOutput.txt");
  	outstream << "Writing this to a file and something else plus this.\n";
  	outstream.close();
	return 0;
}

