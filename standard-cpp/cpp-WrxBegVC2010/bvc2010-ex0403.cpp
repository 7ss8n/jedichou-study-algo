// File: bvc2010-ex0403.cpp
// Counting string characters

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	
	// Define variables
	const int MAX(80);
	char buffer[MAX];
	int count(0);

	// Process: Read a string util \n
	cout << "Enter a string of less than "
		 << MAX << " characters:\n";
	cin.getline(buffer, MAX, '\n');

	// Process: Increment count as long as
	while( buffer[count] != '\0' )
		count++;

	cout << "The string \"" << buffer
		 << "\" has " << count << " characters.";
	
	// Quit program
	cout << endl;
	return 0;
}
