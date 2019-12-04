// Starting Out with CPP.pdf, page 159-160
// Description:
//   This program demonstrates how floating-ping
//   round-off errors can make equality operations
//   unreliable.

#include <iostream>
using namespace std;

int main()
{
	double a = 1.5;
	double b = 1.5;

	a += 0.00000000000000000001;

	if (a == b)
		cout << "Both a and b are the sampe." << endl;
	else
		cout << "a and b are not same." << endl;

	return 0;
}
