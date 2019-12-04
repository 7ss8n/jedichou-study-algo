// program0612.cpp
// this program use a function that return a value.

#include <iostream>
using namespace std;

int sum(int, int);

int main()
{
	int value1 = 20;
	int value2 = 40;
	int total;

	// call the sum function, passing the contents of
	// value1 and value2 as argument. assign the return
	// value to the total variable.
	total = sum(value1, value2);

	// display the sum of the values.
	cout << "The sum of " << value1 << " and "
		 << value2 << " = " << total << endl;

	return 0;
}

int sum(int a, int b) { return a + b; }

