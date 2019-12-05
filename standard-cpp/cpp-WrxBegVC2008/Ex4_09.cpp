// From Wrox Begining Visual C++ 2008, Page 177
// Ex4_09.cpp
// Calculating primes
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

int main(void)
{
	// Define const and variable
	const int MAX = 100;
	long primes[MAX] = { 2, 3, 5 };
	long trial = 5;
	int count = 3;
	int found = 0;

	// Find primes
	do
	{
		trial += 2;
		found = 0;

		for( int i = 0; i < count; i++)
		{
			found = (trial % *(primes + i)) == 0;
			if (found)
				break;
		}

		if ( found == 0 )
			*(primes + count++) = trial;

	} while (count < MAX);

	// Output primes
	for( int i = 0; i < MAX; i++)
	{
		if ( i % 5 == 0)
			cout << endl;
		cout << setw(10) << *(primes + 1);
	}
	cout << endl;

	// Program end
	return 0;
}
