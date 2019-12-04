// File: bvc2010-ex0408.cpp
// Flexible array management using sizeof

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	
	// Define variables
	const char* pstr[] = {
		"Robert Redford", "Hopalong Cassidy",
		"Lassie", "Slim Pickens",
		"Boris Karloff", "Oliver Hardy"
	};
	const char* pstart = "Your lucky star is ";
	int count = (sizeof pstr) / (sizeof pstr[0]);
	int dice = 0;

	// accept user input
	cout << "Pick a lucky star!"
		 << " Enter a number (1-6): ";
	cin >> dice;

	// process and output result
	if ( dice >= 1 && dice <= count )
		cout << pstart << pstr[dice-1];
	else
		cout << "Sorry, you haven't got a lucky star.";

	// quit program
	return 0;
}
