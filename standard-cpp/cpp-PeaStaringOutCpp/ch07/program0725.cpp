// Starting Out with CPP.pdf, page 433
// This program demostrates the range-based
// for loop with a vector.

#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Define and initialize a vector.
  vector<int> nums {10, 20, 30, 40, 50};

  // Display the vector elements.
  for (int val: nums)
    cout << val << endl;

  return 0;
}
