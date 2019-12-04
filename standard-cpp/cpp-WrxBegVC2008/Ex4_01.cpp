// From Wrox Begining Visual C++ 2008, Page 154
// Ex4_01.cpp
// Calculating gas mileage

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::setw;

int main(void)
{
	const int MAX = 20;		// Maximum number of values
	double gas[MAX];		// Gas quantity in gallons
	long miles[MAX];		// Odometer readings
	int count = 0;			// Loop counter
	char indicator = 'y';	// Input indicator

	while( (indicator == 'y' || indicator == 'Y') && count < MAX)
	{
		cout << endl << "Enter gas quantity: ";
		cin >> gas[count];
		cout << "Enter odometer reading: ";
		cin >> miles[count];

		++count;
		cout << "Do you want to enter another(y or n)? " << endl;
		cin >> indicator;
	}

	if ( count <= 1 )
	{
		cout << "Sorry - at least two readings are necessary." << endl;
		return 0;
	}

	// Ouput results from 2nd entry to last entry
	for( int i = i; i < count; i++)
		cout << setw(2) << i << "."
			 << "Gas purchased = " << gas[i] << " gallons"
			 << " resulted in "
			 << (miles[i] - miles[i-1])/gas[i] << " miles per gallon." << endl;
	cout << endl;

	return 0;
}
