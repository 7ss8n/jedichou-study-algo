// Starting Out with CPP.pdf, page 428
// This program is a driver that tests a function
// comparing the contents of two int arrays.

#include <iostream>
using namespace std;

// Function Prototype
bool testPIN(const int [], const int [], int);

int main() {
	const int NUM_DIGITS = 7;  // Numbr of digits in a PIN
	int pin1[NUM_DIGITS] = {2, 4, 1, 8, 7, 9, 0};  // Base set of values.
	int pin2[NUM_DIGITS] = {2, 4, 6, 8, 7, 9, 0};  // Only 1 elt different.
	int pin3[NUM_DIGITS] = {1, 2, 3, 4, 5, 6, 7};  // All diff.

	if (testPIN(pin1, pin2, NUM_DIGITS))
	  cout << "Error: pin1 and pin2 report to be the same.\n";
	else
	  cout << "Success: pin1 and pin2 are diff.\n";

	if (testPIN(pin1, pin3, NUM_DIGITS))
	  cout << "Error: pin1 and pin3 report to be same.\n";
	else
      cout << "Success: pin1 and pin2 are diff.\n";

	if (testPIN(pin1, pin1, NUM_DIGITS))
	  cout << "Success: pin1 and pin1 report to be the same.\n";
	else
	  cout << "Error: pin1 and pin1 report to be diff.\n";

	return 0;
}

// ********************************************************
// The following function accepts two int array. The
// arrays are compared. If they contain the same values,
// true is returned. If they contain different values,
// false is returned.
// ********************************************************
bool testPIN(const int custPIN[], const int databasePIN[], int size) {
  for (int index = 0; index < size; index++)
    if (custPIN[index] != databasePIN[index])
	  return false;
  return true;
}
