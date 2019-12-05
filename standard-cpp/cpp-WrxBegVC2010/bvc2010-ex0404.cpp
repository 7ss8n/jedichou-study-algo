// File bvc2010-ex0404.cpp
// Storing strings in an array
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {

	// Define variables
	char stars[6][80] = {
		"Robert Redford", "Hopalong Cassidy",
		"Lassie", "Slim Pickens",
		"Boris Karloff", "Oliver Hardy"
	};
	int dice(0);

	// Accept user input
	cout << endl
		 << "Pick a lucky star!"
		 << "Enter a number between 1 and 6: ";
	cin >> dice;

	// Process data
	if ( dice >= 1 && dice <=6 )
		cout << endl
			 << "You lucky star is " << stars[dice-1];
	else
		cout << endl
			 << "Sorry, U haven't got a lucky star.";

	// Quit program
	cout << endl;
	return 0;
}
