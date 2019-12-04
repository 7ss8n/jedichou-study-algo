// array-p250.cc
// description: Create a simple array

#include <iostream>
int main()
{
	int a[5];
	int i;
	for (i=0; i<5; i++)
		a[i] = i;
	for (i=0; i<5; i++)
		std::cout << a[i] << "\n";

	return 0;
}
