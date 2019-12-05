// Ex2_04.cpp
// using escape sequences
#include "stdafx.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

int ex0204()
{
	char newline = '\n';
	cout << newline;
	cout << "\"We\'ll make our escape in sequence\", he said.";
	cout << "\n\tThe program\'s over, it\'s time take make a beep beep.\a\a";
	cout << newline;

	return 0;
}
