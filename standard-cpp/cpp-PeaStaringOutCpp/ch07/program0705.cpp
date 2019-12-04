// program0705.cpp
// This program unsafely access an area of memory
// by writing values beyond an array's boundary.
// warning: If you compile and run this program
// , it could crash.

#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 3;
	int values[SIZE];
	int count;

	for (count = 0; count < 5; count++)
		values[count] = 100;

	// overflow
	for (count = 0; count < 5; count++)
		cout << values[count] << endl;

	return 0;
}
