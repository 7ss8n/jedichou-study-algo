// Starting Out with CPP.pdf, page 272
// This program writes user input to a file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream output;
  int num1, num2, num3;

  // Open an output file.
  output.open("Nums.txt");

  // Get three numbers from the user.
  cout << "Enter a number: ";
  cin >> num1;
  cout << "Enter another number: ";
  cin >> num2;
  cout << "One more time. Enter a number: ";
  cin >> num3;

  // Write the numbers to the file.
  output << num1 << endl;
  output << num2 << endl;
  output << num3 << endl;

  // Close the file.
  output.close();
  cout << "Done.\n";

  return 0;
}
