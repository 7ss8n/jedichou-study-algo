// Starting Out with CPP.pdf, page 170
// Description
//   This program demostrates the nested if statement.

#include <iostream>
using namespace std;

int main()
{
	char employed,		// Currently employed, Y or N
		 recentGrad;	// Recent graduate, Y or N

	// Is the user employed and a recent graduate?
	cout << "Answer the following questions\n";
	cout << "with either Y for YES or ";
	cout << "N for NO.\n";
	cout << "Are your employed? ";
	cin >> employed;
	cout << "Have you graduated from college ";
	cout << "in the past two years? ";
	cin >> recentGrad;

	// Determine the user's loan qualifications.
	if (employed == 'Y')
	{
		if (recentGrad == 'Y')
		{
			cout << "You quanlify for the special ";
			cout << "interest rate.\n";
		}
	}
	return 0;
}
