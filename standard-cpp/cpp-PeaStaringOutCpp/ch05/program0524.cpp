// Starting Out with CPP.pdf, page 283
// This program lets the user enter a filename.

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
  // Define some variables.
  ifstream input;
  string filename;
  int num;

  // Get the file name from the user.
  cout << "Enter the filename: ";
  cin >> filename;

  // Open the file.
  input.open(filename);

  // If the file successfully opened, process it.
  if (input) {
    // Read the numbers from the file and
	// display them.
	while (input >> num) cout << num << endl;

	// Close the file.
	input.close();
  } 
  else {
    // Output error message.
	cout << "Error opening the file.\n";
  }

  return 0;
}
