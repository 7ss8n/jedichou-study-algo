// program0614.cpp
// this program converts cups to fluid ounces.

#include <iostream>
#include <iomanip>

using namespace std;

void showIntro();
double getCups();
double cupsToOunces(double);

int main()
{
	// variable for the cups and ounces.
	double cups, ounces;

	// set up numeric output formatting.
	cout << fixed << showpoint << setprecision(1);

	// display an intro screen.
	showIntro();

	// get the number of cups.
	cups = getCups();

	// convert to fluid ounces.
	ounces = cupsToOunces(cups);

	// display the number of ounces.
	cout << cups << " cups equlas "
		 << ounces << " ounces.\n";

	return 0;
}

// The showIntro function display an
// introductory screen.
void showIntro()
{
	cout << "This program converts measurements\n"
		 << "in cups to fluid ounces. For you\n"
		 << "reference the formula is :\n"
		 << " 1 cup = 8 fluid ounces\n\n";
}

// The getCups function prompts the user
// to enter the number of cups and then
// returns that value as a double.
double getCups()
{
	double cups;
	cout << "Enter the number of cups: ";
	cin >> cups;
	return cups;
}

// The cupsToOunces function accepts a
// number of cups as an argument and
// returns the equivalent number of fluid
// ounces as double
double cupsToOunces(double cups)
{
	return cups * 8;
}
