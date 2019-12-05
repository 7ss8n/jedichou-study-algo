// From Wrox Begining Visual C++ 2008, Page 144
// Ex3_14.cpp
// Using nested loops to generate a multiplication table
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

int main(void)
{
	const int size = 12;
	int i = 0, j = 0;

	cout << size << " by " << size
		 << " Multiplication Table" << endl << endl;
	cout << "     |";

	for( i = 1; i <= size; i++)
		cout << setw(3) << i << " ";

	cout << endl;

	for ( i = 0; i <= size; i++)
		cout << "____";

	for ( i = 1; i <= size; i++)
	{
		cout << endl
			 << setw(3) << i << "  |";
		for( j = 1; j <= size; j++)
			cout << setw(3) << i*j << " ";
	}
	cout << endl;

	return 0;
}
