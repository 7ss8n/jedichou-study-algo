// File: fanlei-cpp0702.cc
// Description: Use goto carefully.

#include <iostream>
using std::cout;

int main()
{
	int i=1;
	if ( i < 28 )
		goto yes;
	std::cout << "*";
	i++;
	goto yes;
	std::cout << "\n Program execute finished\n";
	std::cout << "***************************\n";
yes:;
	return 0;
}
