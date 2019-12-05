// program0629.cpp
// This program shows how the exit function causes
// a program to stop executing.

#include <iostream>
#include <cstdlib> // Neede for the exit function
using namespace std;

void function();

int main()
{
	function();
	return 0;
}

// This function simply demostrates that exit can be
// used to terminate a program from a function other
// than main.
void function()
{
	cout << "This program terminate with the exit function.\n";
	cout << "Bye!\n";
	exit(0);
	cout << "This message will never be displayed\n";
	cout << "because the program has already terminated.\n";
}
