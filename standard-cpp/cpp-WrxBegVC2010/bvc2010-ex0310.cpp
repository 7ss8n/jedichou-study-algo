// File: bvc2010-ex0310.cpp
// Using an infinite for loop to compute an average

#include <iostream>
using namespace std;

int main(void) {
	double value(0.0), sum(0.0);
	int i(0);
	char indicator('n');

	for(;;) {
		cout << endl
			 << "Enter a value: ";
		cin >> value;
		++i;
		sum += value;

		cout << endl
			 << "Do you want to enter another value (enter y or n)? ";
		cin >> indicator;
		if ( ('n' == indicator) || ('N' == indicator) )
			break;
	}

	cout << endl
		 << "The average of the " << i
		 << " values you entered is " << sum/i << "."
		 << endl;

	return 0;
}
