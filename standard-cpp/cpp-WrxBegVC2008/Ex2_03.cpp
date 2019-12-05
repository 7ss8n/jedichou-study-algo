// Ex2_03.cpp
// Exercising output
#include "stdafx.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

int ex0203()
{
	int num1 = 1234, num2 = 5678;
	
	cout << endl;
	cout << setw(6) << num1 << setw(6) << num2;
	cout << endl;

	return 0;
}
