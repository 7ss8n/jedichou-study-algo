// Starting Out with CPP.pdf, page 273
// This program writes user input a file.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ofstream output;
  string name1, name2, name3;

  // Open an output file.
  output.open("Names.txt");

  // Get the names from user input.
  cout << "Enter the names of three freinds.\n";
  cout << "Friend #1: "; cin >> name1;
  cout << "Friend #2: "; cin >> name2;
  cout << "Friend #3: "; cin >> name3;

  // Write the names to the file.
  output << name1 << endl;
  output << name2 << endl;
  output << name3 << endl;
  cout << "The names were saved to a file.\n";

  // Close the file
  output.close();

  return 0;
}
