// From Wrox Begining Visual C++ 2008, Page 135
// Ex3_10.cpp
// Using an infinite for loop to compute an average
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	double value = 0.0;		// value entered stored here
	double sum = 0.0;		// Total of values accmulated here
	int i = 0;				// Count of number of values
	char indicator = 'n';	// Continue or not?

	for(;;)
	{
		cout << endl
			 << "Enter a value: ";
		cin >> value;		// Read a value
		++i;
		sum += value;

		cout << endl
			 << "Do you want to enter another value (enter n to end)? ";
		cin >> indicator;	// Read indicator
		if( (indicator == 'n') || (indicator == 'N') )
			break;
	}

	cout << endl
		 << "The average of the " << i
		 << " values you entered is " << sum/i << "."
		 << endl;

	return 0;
}
