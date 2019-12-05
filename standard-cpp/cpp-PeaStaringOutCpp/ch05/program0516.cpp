// Starting Out with CPP.pdf, page 271
// This program writes data to a single line in a file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream output;
  output.open("demofile.txt");

  cout << "Now writing data to the file.\n";

  // Write four names to the file.
  output << "Sarah";
  output << "Zin";
  output << "Sammy";

  // Close the file
  output.close();
  cout << "Done.\n";

  return 0;
}
