// Starting Out with CPP.pdf, page 281
// This program tests for file open errors.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream input;
  int num;

  // Open the file.
  input.open("Bads.txt");

  if (input) {
    // Read the numbers from the file and display them
	while (input >> num) {
	  cout << num << endl;
	}

	// Close the file.
	input.close();
  }
  else {
    // Display an error message
	cout << "Error opening the file.\n";
  }

  return 0;
}
