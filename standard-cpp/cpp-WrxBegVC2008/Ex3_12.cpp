// From Wrox Begining Visual C++ 2008, Page 141
// Ex3_12.cpp
// Using a while loop to compute an average
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	double value;
	double sum;
	int i = 0;
	char indicator = 'y';

	while(indicator == 'y')
	{
		cout << endl
			 << "Enter a value: ";
		cin >> value;
		++i;
		sum += value;

		cout << endl
			 << "Do you want to enter another value (enter n to end)? ";
		cin >> indicator;
	}

	cout << endl
		 << "The average of the " << i
		 << " values you entered is " << sum/i << "."
		 << endl;

	return 0;
}
