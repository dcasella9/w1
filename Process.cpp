//Author:   Daniel Casella
//ID:       107918161
//Date:     09/11/17
//Workshop: 1
//File:     Process.cpp

//system defined files
#include <iostream>
//user defined files
#include "CString.h"
#include "Process.h"

//declare namespace
using namespace std;

//function definition for char pointer
void process(char* s)
{
	//cout << "Process (" << s << ")\n";

	w1::CString cs(s);
	cout << cs << "\n";

}