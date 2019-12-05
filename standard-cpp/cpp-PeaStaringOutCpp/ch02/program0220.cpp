// Starting Out with CPP.pdf, page 61
// Description:
//   This program can't find its variable.

#include <iostream>
using namespace std;

int main()
{
	cout << value;  // Error! value not defined yer!
	int value = 100;
	return 0;
}
