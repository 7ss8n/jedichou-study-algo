// program0707.cpp
// This program initializes a string array.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int SIZE = 9;
	string books[SIZE] = 
	{
		"Core Java I", "Core Java II", "HTML5 in Action",
		"Road for God", "Go with wind", "Professional C#",
		"Google vs Microsoft", "Dont let me think", "Crazy C"
	};

	for (int count = 0; count < SIZE; count++)
		cout << books[count] << endl;

	return 0;
}
