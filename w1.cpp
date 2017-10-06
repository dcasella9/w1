//Author:   Daniel Casella
//ID:       107918161
//Date:     09/11/17
//Workshop: 1
//File:     w1.cpp

//system defined files
#include <iostream>
//user defined files
#include "CString.h"
#include "Process.h"

//declare namespace
using namespace std;

//main program
int main(int argc, char* argv[])
{
	cout << "Command Line: ";

	for (int arg = 0; arg < argc; arg++)
	{
		cout << " " << argv[arg];
	}
		cout << "\n";

	if (argc == 1) 
	{
		cout << "Insufficient number of arguments (min 1)\n";
	
		return 1;
	}

	cout << "Maximum number of characters stored : " << w1::MAX << "\n";

	for (int arg = 1; arg < argc; arg++)
	{
		process(argv[arg]);
	}
			return 0;
}
