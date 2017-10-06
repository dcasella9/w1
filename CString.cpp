//Author:   Daniel Casella
//ID:       107918161
//Date:     09/11/17
//Workshop: 1
//File:     CString.cpp


#define _CRT_SECURE_NO_WARNINGS

//system defined files
#include <iostream>
#include <cstring>

//user defined file
#include "CString.h"

//declare namespace
using namespace std;

//define namespace
namespace w1 {

	//constructor
	CString::CString(char* s)
	{
		
		strncpy(str, s, MAX);
		str[MAX] = '\0';

	}

	//display member function
	void CString::display(ostream& os)
	{
		os << str;
	}

	//output stream function definition
	ostream& operator<<(ostream& os, CString& cs)
	{
		static int count = 0; //internal linkage, lasts lifetime of function, invisible outside this scope

		os << count << ": ";
		count++;
		cs.display(os);
		
		return os;
		
	}
}