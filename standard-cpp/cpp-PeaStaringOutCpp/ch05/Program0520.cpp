// Starting Out with CPP.pdf, page 277
// This program reads numbers from a file

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream in;
  int val1, val2, val3, sum;

  // Open the file.
  in.open("Nums.txt");

  // Read the three numbers from the file.
  in >> val1;
  in >> val2;
  in >> val3;

  // Close the file.
  in.close();

  // Calculate the sum of the numbers.
  sum = val1 + val2 + val3;

  // Display the three numbers.
  cout << "Here are the numbers:\n"
	   << val1 << " " << val2
	   << " " << val3 << endl;

  // Display the sum of the numbers.
  cout << "Their sum is: " << sum << endl;

  return 0;
}
