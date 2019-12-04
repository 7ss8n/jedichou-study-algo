// File: bvc2010-ex0407.cpp
// Initializing pointers with strings

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	
	// Define variable
	const char* pstr[] = {
		"Robert Redford", "Hopalong Cassidy",
		"Lassie", "Slim Pickens",
		"Boris Karloff", "Oliver Hardy"
	};
	const char *pstart = "You lucky star is ";
	int dice = 0;

	// Accept user input
	cout << "Pick a lucky star! "
		 << "Enter a number (1-6): ";
	cin >> dice;

	// Process data and output
	if ( dice >= 1 && dice <= 6 )
		cout << pstart << pstr[dice-1];
	else
		cout << "Sorry, you haven't got a lucky star.";

	// quit program
	return 0;
}
