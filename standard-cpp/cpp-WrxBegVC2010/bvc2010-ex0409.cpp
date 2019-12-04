// file: bvc2010-ex0409.cpp
// calculating primes

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

int main() {
	
	// define variables	
	const int MAX = 100;
	long primes[MAX] = {2, 3, 5};
	long trial = 5;
	int count = 3;
	bool found = false;

	// process
	do {
		trial += 2;
		found = false;
		for (int i = 0; i < count; i++) {
			found = (trial % *(primes + i) == 0);
			if (found)
				break;
		}
		if (!found)
			*(primes + count++) = trial;
	} while (count < MAX);

	// output primes 5 to a line
	for (int i = 0; i < MAX; i++) {
		if ( i % 5 == 0)
			cout << endl;
		cout << setw(10) << *(primes + i);
	}

	// quit program
	return 0;
}
