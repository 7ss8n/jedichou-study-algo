// File: bvc2010-ex0401.cpp
// Calculating gas mileage

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

int main() {

	// Define variables
	const int MAX(20);
	double gas[MAX];
	long miles[MAX];
	int count(0);
	char indicator('y');

	// Process user input
	while( ('y' == indicator) || ('Y' == indicator) ) {
		cout << endl << "Enter gas quantity: ";
		cin >> gas[count];
		cout << "Enter odometer reading: ";
		cin >> miles[count];
		++count;
		cout << "Do you want to enter another (y or n)?";
		cin >> indicator;
	}

	if ( count <= 1 ) {
		cout << endl << "Sorry - at least two readings are necessary.";
		return 0;
	}

	// Output result
	for (int i = 1; i < count; i++) {
		cout << endl
			 << setw(2) << i << "."
			 << "Gas purchased - " << gas[1] << " gallons"
			 << " resulted in "
			 << (miles[i] - miles[i-1])/gas[i] << " miles per gallon.";
	}

	// Quit program
	cout << endl;
	return 0;
}
