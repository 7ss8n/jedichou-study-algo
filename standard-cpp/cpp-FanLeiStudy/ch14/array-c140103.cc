// array-c140103.cc
// Description: FanLei CPP, out of array size.

#include <iostream>
using namespace std;

int main()
{
	int a[5] = {0,1,2,3,4};
	int i;
	for (i=0; i<=5; i++)
		cout << a[i] << endl;

	return 0;
}
