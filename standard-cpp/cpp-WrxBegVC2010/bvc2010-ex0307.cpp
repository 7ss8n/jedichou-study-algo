// File: bvc2010-ex0307.cpp
// Description: Creating a loop with an if and a goto
#include <iostream>
using namespace std;

int main(void) {
	int i(1), sum(0);
	const int max(10);

loop:
	sum += i;
	if(++i <= max)
		goto loop;

	cout << "sum = " << sum << endl;
	cout << "i = " << i << endl;

	return 0;
}
