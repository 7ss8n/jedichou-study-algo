// File: bvc2010-ex0406.cpp
// Initializing pointers with strings

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	
	// Define variables
	// Jedi: there is a standard style
	const char *pstr1 = "Robert Redford";
	const char *pstr2 = "Hopalong Cassidy";
	const char *pstr3 = "Lassie";
	const char *pstr4 = "Slim Pickens";
	const char *pstr5 = "Boris Karloff";
	const char *pstr6 = "Oliver Hardy";
	const char *pstr = "You lucky star is ";
	int dice(0);

	// Accept user input
	cout << "Pick a luck star!" << endl
		 << "Enter a number between 1 and 6: ";
	cin >> dice;

	// Process and output result
	switch(dice) {
		case 1:
			cout << pstr << pstr1;
			break;
		case 2:
			cout << pstr << pstr2;
			break;
		case 3:
			cout << pstr << pstr3;
			break;
		case 4:
			cout << pstr << pstr4;
			break;
		case 5:
			cout << pstr << pstr5;
			break;
		case 6:
			cout << pstr << pstr6;
			break;
		default:
			cout << "Sorry, you haven't got a lucky star.";
			break;
	}

	// Quit program
	return 0;
}
