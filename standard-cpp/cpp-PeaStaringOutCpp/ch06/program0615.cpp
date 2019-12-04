// program0615.cpp
// This program uses a function that returns true or false.

#include <iostream>
using namespace std;

bool isEven(int);

int main()
{
	int val;

	// Get a number from the user.
	cout << "Enter an integer and I will tell you ";
	cout << "if it is even or odd: ";
	cin >> val;

	// Indicate wheter it is even or odd.
	if (isEven(val))
		cout << val << " is even.\n";
	else
		cout << val << " is odd.\n";

	return 0;
}

bool isEven(int num)
{
	return num % 2 == 0;
}
