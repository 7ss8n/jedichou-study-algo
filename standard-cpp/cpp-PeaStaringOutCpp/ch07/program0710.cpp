// program0710.cpp
// This program demostrates the range-based for loop.
#include <iostream>
using namespace std;

int main()
{
	// Define an array of integers
	int numbers[] = { 10, 20, 30, 40, 50 };

	// Display the value in the array.
	// vc++ 2010 style
	for each (auto val in numbers)
		cout << "value: " << val
			 << " : address " << &val << endl;

	return 0;
}
