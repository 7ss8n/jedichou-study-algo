// File : bvc2010-ex0301.cpp
// Description: A nested if demostration
// Begin Visual C++ Program.pdf, page 104

#include <iostream>
using namespace std;

int main(void) {
	// Store input in here
	char letter(0);

	// Prompt for the input then read a character
	cout << "Enter a letter: ";
	cin >> letter;

	if( letter >= 'A') {
		if( letter <= 'Z') {
			cout << "You entered a captial letter." << endl;
			return 0;
		}
	}

	if( letter >= 'a') {
		if( letter <= 'z') {
			cout << "You enter a small letter." << endl;
			return 0;
		}
	}

	cout << "You did not either a letter." << endl;
	return 0;
}
