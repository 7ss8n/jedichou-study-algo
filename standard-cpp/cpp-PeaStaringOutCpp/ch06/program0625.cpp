// program0625.cpp
// This program uses a reference variable
// as a function parameter.

#include <iostream>
using namespace std;

void doubleNum(int &);

int main()
{
	int value = 4;
	
	cout << "In main, value is " << value << endl;
	cout << "Now calling doubleNum..." << endl;
	cout << "Before process value is " << value << endl;
	doubleNum(value);
	cout << "Now back in main. value is " << value << endl;
	return 0;
}

// Definition of doubleNum.
// The parameter refVar is reference variable.
// The value in refVar is doubled.
void doubleNum(int &refVar)
{
	refVar *= 2;
}
