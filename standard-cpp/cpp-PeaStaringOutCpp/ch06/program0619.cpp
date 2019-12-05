// program0619.cpp
// Section: global constants
// This program calculates gross pay.

#include <iostream>
#include <iomanip>

using namespace std;

// Global constants
const double PAY_RATE = 22.55;  // Hourly pay rate
const double BASE_HOURS = 40.0;  // Max non-overtime hours
const double OT_MULTIPLIER = 1.5; // Overtime multiplier

// Function prototype
double getBasePay(double);
double getOvertimePay(double);

// main function
int main()
{
	double hours;  // Hours worked
	double basePay;  // Base pay
	double overtime = 0.0; // overtime pay
	double totalPay;  // Total pay

	// Get the number of hours worked.
	cout << "How many hours did you work? ";
	cin >> hours;

	// Get the amount of base pay.
	basePay = getBasePay(hours);

	// Get overtime pay, if any.
	if (hours > BASE_HOURS)
		overtime = getOvertimePay(hours);

	// Calculate total pay
	totalPay = basePay + overtime;

	// Set up numeric output formatting
	cout << setprecision(2) << fixed << showpoint;

	// Display the pay.
	cout << "Base pay: $" << basePay << endl
		 << "Overtime pay $" << overtime << endl
		 << "Total pay $" << totalPay << endl;

	return 0;
}

// The getBasePay function accepts the number of
// hours worked as an argument and returns the
// employee's pay for non-overtime hours.
double getBasePay(double hoursWorked)
{
	double basePay; // to hold base pay
	
	// Determine base pay.
	basePay = 
		hoursWorked > BASE_HOURS ?
		BASE_HOURS * PAY_RATE :
		hoursWorked * PAY_RATE;

	return basePay;
}

// The getOvertimePay function accepts the number
// of hours worked as an argument and returns the
// employee's overtime pay.
double getOvertimePay(double hoursWorked)
{
	// To hold overtime pay
	double overtimePay;

	overtimePay =
		hoursWorked > BASE_HOURS ?
		(hoursWorked - BASE_HOURS) * PAY_RATE * OT_MULTIPLIER :
		0.0;

	return overtimePay;
}
