// File: bvc2010-ex0312.cpp
// Using a while loop to compute an average

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	
	// define variables	
	double value(0.0);
	double sum(0.0);
	int i(10);
	char indicator('y');

	// process data
	while ( 'y' == indicator ) {
		cout << endl
			 << "Enter a value: ";
		cin >> value;
		++i;
		sum += value;
		cout << endl
			 << "Do you want to enter another value (y or n)? ";
		cin >> indicator;
	}

	// output final result
	cout << endl
		 << "The average of the " << i
		 << " values you entered is " << sum/i << "."
		 << endl;

	// quit program
	return 0;
}
