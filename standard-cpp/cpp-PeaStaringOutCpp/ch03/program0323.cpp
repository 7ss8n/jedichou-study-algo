// Starting Out with CPP.pdf, page 123
// Description:
//   This program successfully use both
//   cin >> and cin.get() for keyboard input.
#include <iostream>
using namespace std;

int main()
{
	char ch;
	int number;

	cout << "Enter a number: ";
	cin >> number;
	cin.ignore();	// skip the newline character
	cout << "Enter a character: ";
	ch = cin.get();
	cout << "Thank You!\n";
	return 0;
}
