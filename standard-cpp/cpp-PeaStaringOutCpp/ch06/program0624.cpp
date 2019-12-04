// program0624.cpp
// Section: Default Arguments
// This program demostrates default function arguments.

#include <iostream>
using namespace std;

void displayStarts(int = 10, int = 1);

int main()
{
	displayStarts();
	cout << endl;
	displayStarts(5);
	cout << endl;
	displayStarts(7, 3);

	return 0;
}

// Definition of function displayStarts
// The default argument for cols is 10 and for row is 1.
// This function displays a square of asterisks.
void displayStarts(int cols, int rows)
{
	// Nested loop. The outer loop controls the rows
	// and the inner loop controls the columns.
	for( int down = 0; down < rows; down++)
	{
		for (int across = 0; across < cols; across++)
			cout << "*";
		cout << endl;
	}
}
