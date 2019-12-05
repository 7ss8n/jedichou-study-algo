// File: bvc2010-ex0411.cpp
// Calculating primes using dynamic memory allocation
#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::setw;

int main() {
	// define variables
	long* pprime(nullptr);
	long trial(5);
	int count(3);
	int found(0);
	int max(0);

	// accept user input
	cout << "Enter max (at least 4): ";
	cin >> max;
	if (max < 4)
		max = 4;

	// insert 2, 3, 5 to array
	pprime = new long[max]; // notice: 这里还是要做数组的初始化
	*pprime = 2;
	*(pprime + 1) = 3;
	*(pprime + 2) = 5;

	// process
	do {
		trial += 2;
		found = 0;

		for( int i = 0; i < count; i++ ) {
			found = (trial % *(pprime + i)) == 0;
			if (found)
				break;
		}

		if (found == 0)
			*(pprime + count++) = trial;
	} while (count < max);

	// Output primes 5 to a line
	for (int i = 0; i < max; i++) {
		if ( i % 5 == 0)
			cout << endl;
		cout << setw(10) << *(pprime + i);
	}

	// free up memory and reset the pointer
	delete [] pprime;
	pprime = nullptr;

	// quit program
	return 0;
}
