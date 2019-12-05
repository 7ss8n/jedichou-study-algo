// Starting Out with CPP.pdf, page 275
// This program reads data from a file.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream input;
  string name;

  input.open("Names.txt");
  cout << "Reading data from the file.\n";

  input >> name;
  cout << name << endl;

  input >> name;
  cout << name << endl;

  input >> name;
  cout << name << endl;

  input.close();
  return 0;
}
