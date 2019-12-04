// Starting Out with CPP.pdf, Page 473
// File: program0804.cpp

// This program uses the bubble sort algorithm to sort an
// arra in ascending order.

#include <iostream>
using namespace std;

// Function prototype
void sortArray(int [], int);
void showArray(const int [], int);

int main() {
  // Array of unsorted values
	int values[6] = {7, 2, 3, 8, 9, 1};

	// Display the values.
	cout << "The unsorted values are: \n";
	showArray(values, 6);

	// Sort the values.
	sortArray(values, 6);

	// Display them again.
	cout << "The sorted values are:\n";
	showArray(values, 6);

	return 0;
}

// ********************************************************
// Definition of function sortArray
