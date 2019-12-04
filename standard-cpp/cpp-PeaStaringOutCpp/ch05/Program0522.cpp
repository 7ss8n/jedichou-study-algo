// Starting Out with CPP.pdf, page 280
// This program reads data from a file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream input;
  int num;

  // Open the file.
  input.open("Nums.txt");

  // Read the numbers from the file
  // and display them.
  while (input >> num) {
    cout << num << endl;
  }

  // Close the file.
  input.close();
  return 0;
}
