// File: bvc2010-ex0308.cpp
// Description: Summing integers with a for loop
#include <iostream>
using namespace std;

int main(void) {
	int i(1), sum(0);
	const int max(10);

	for(i = 1; i <= max; i++)
		sum += i;

	cout <<"sum = " << sum << endl
	     <<"i = " << i << endl;

	return 0;
}
