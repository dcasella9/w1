//Author:   Daniel Casella
//ID:       107918161
//Date:     09/11/17
//Workshop: 1
//File:     CString.h

#pragma once
//system files
#include <iostream>

//declare namespaces
using namespace std;

//define namespace
namespace w1 {

//general defined variable
	const int MAX = 3;
	
	//class declaration
	class CString
	{
		//character string
		char str[MAX + 1];
	public:

	//constructor
		CString(char* s);
	//public member function
		void display(ostream& os);
	};

	//output stream declaration
	ostream& operator<<(ostream& os, CString& cs);
}