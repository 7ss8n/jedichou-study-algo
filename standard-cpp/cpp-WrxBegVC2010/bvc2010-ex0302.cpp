// File: bvc2010-ex0302.cpp
// Description: using the extended if

#include <iostream>
using namespace std;

int main(void) {
	// Define variable
	long number(0L);

	// Use input
	cout << "Enter an integer number less than 2 billion: ";
	cin >> number;

	// process data
	if( number % 2L)
		cout << "Number is odd." << endl;
	else
		cout << "Number is even." << endl;

	return 0;
}
