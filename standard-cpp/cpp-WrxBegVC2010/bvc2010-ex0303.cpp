// File:bvc2010-ex0303.cpp
// Description: Testing for a letter using logical operators

#include <iostream>
using namespace std;

int main(void) {
	// Define variable and accpet user input
	char letter(0);
	cout << "Enter a character: ";
	cin >> letter;

	// Process use input
	if(
		( (letter >= 'A') && (letter <='Z') ) ||
		( (letter >= 'a') && (letter <='z') ) )
		cout << "You entered a letter." << endl;
	else
		cout << "The character is not a letter";

	// Exit
	return 0;
}
