// File: bvc2010-ex0410.cpp
// Counting string characters using a pointer

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	// define variables
	const int MAX(80);
	char buffer[MAX];
	char* pbuffer(buffer);

	// accept user input
	cout << "Enter a string of less than "
		 << MAX << " characters:" << endl;
	cin.getline(buffer, MAX, '\n');

	// process data and output
	while(*pbuffer++);
	cout << "The string \"" << buffer
		 << "\" has " << pbuffer - buffer - 1 << " characters.";

	// quit program
	return 0;
}
