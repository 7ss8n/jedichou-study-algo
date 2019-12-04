// program0627
// This program uses overloaded functions

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
int square(int);
double square(double);

int main()
{
	int userInt;
	double userFloat;

	// Get an int and a double.
	cout << fixed << showpoint << setprecision(2);
	cout << "Enter an integer and a floating-point value: ";
	cin >> userInt >> userFloat;

	// Display their squares.
	cout << "Here are their squares: ";
	cout << square(userInt) << " and " << square(userFloat);
	return 0;
}

int square(int n) { return n*n; }
double square(double n) { return n*n; }
