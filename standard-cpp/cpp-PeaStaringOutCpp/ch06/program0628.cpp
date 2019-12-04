// program0628.cpp
// This program demostrates overloaded functions to
// calculate the gross weekly pay of hourly paid or
// salaried employees.

#include <iostream>
#include <iomanip>
using namespace std;

void getChoice(char &);
double calcWeeklyPay(int, double);
double calcWeeklyPay(double);

int main()
{
	char selection; // Menu selection
	int worked;  // Hours worked
	double rate;  // Hourly pay rate
	double yearly;  // Yearly salary

	// Set numeric output formatting.
	cout << fixed << showpoint << setprecision(2);

	// Display the memu and get a selection.
	cout << "Do you want to calculate the weekly pay of\n";
	cout << "(H) an hourly paied employee, or \n";
	cout << "(S) a salaried employee?\n";
	getChoice(selection);

	// Process the menu selection.
	switch (selection)
	{
		// Hourly paid employee
		case 'H':
		case 'h':
			cout << "How many hours were worked? ";
			cin >> worked;
			cout << "What is the hourly pay rate? ";
			cin >> rate;
			cout << "The gross weekly pay is $";
			cout << calcWeeklyPay(worked, rate) << endl;
			break;
		// Salaried employee
		case 'S':
		case 's':
			cout << "What is the annual salary? ";
			cin >> yearly;
			cout << "The gross weekly pay is $";
			cout << calcWeeklyPay(yearly) << endl;
			break;
	}

	return 0;
}

// Definition of function getChoice
// The parameter letter is a reference to a char.
// This function asks the user for an H or an S and
// return the valiedated input.
void getChoice(char &letter)
{
	// Get the user's selection.
	cout << "Enter your choice (H or S): ";
	cin >> letter;

	// Validate the selection.
	while (
		letter != 'H' && letter != 'h' &&
		letter != 'S' && letter != 's'
	)
	{
		cout << "Please enter H or S: ";
		cin >> letter;
	}
}

// Definition of verloaded function calcWeeklyPay.
// This function calculates the gross weekly pay of
// an hourly paid employee. The parameter hours holds
// the number of hours worked. The parameter payRate
// holds the hourly pay rate. The function returns
// the weekly salary.
double calcWeeklyPay(int hours, double payRate)
{
	return hours * payRate;
}

// Definition of overload function calcWeeklyPay.
// This function calculates the gross weekly pay of
// a salaried employee. The parameter holds the
// employee's annual salary. The function returns
// the weekly salary.
double calcWeeklyPay(double annSalary)
{
	return annSalary / 52;
}
