// File: pg73.cpp
// Description: use goto

#include <iostream>
using std::cout;
using std::endl;
int main() {
	int i = 1;
number: i++;
	std::cout << "*";
	if (i < 10) goto number;
	cout << "\nProgram out" << endl;
	return (0);
}
