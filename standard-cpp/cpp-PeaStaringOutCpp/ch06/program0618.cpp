// program0618.cpp
// This program has an uninitialized global variable.

#include <iostream>
using namespace std;

// Global variable, automatically set to zero
int globalNum;

int main()
{
	cout << "globalNum is " << globalNum << endl;
	return 0;
}
