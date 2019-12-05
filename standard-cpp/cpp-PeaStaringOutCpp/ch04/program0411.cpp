// Starting Out with CPP.pdf, page 171
// Description
//   This program demonstrates the nested if statement.

#include <iostream>
using namespace std;

int main()
{
	char employed,		// Currently employed, Y or N
		 recentGrad;	// Recent graduate, Y or N

	// Is the user employed and a recent graduate?
	cout << "Answer the following questions\n";
	cout << "with either Y for Yes or ";
	cout << "N for No.\n";
	cout << "Are you employed? ";
	cin >> employed;
	cout << "Have you graduated from collage ";
	cout << "in the past two years? ";
	cin >> recentGrad;

	// Determine the user's loan qualification.
	if (employed == 'Y')
	{
		if ( recentGrad == 'Y' )
		{
			cout << "You qualify for the special ";
			cout << "interest rate.\n";
		}
		else  // Not a recent grad, but employed
		{
			cout << "You must have graduated from ";
			cout << "colleage in the past two\n";
			cout << "years to quanlify.\n";
		}
	}
	else // Not employed
	{
		cout << "You must be employed to quanlify.\n";
	}
}
