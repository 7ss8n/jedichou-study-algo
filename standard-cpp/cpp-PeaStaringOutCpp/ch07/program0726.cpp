// Starting Out with CPP.pdf, page 434
// This program demostrates the range-based for
// loop with a vector.

#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Define and initialize a vector
  vector<int> nums(5);

  // Get value for the vector elements.
  for (int &val: nums) {
    cout << "Enter an integer value: ";
	cin >> val;
  }

  // Display the vector elements.
  cout << "Here are the values you entered:\n";
  for (int val: nums)
    cout << val << endl;

  return 0;
}
