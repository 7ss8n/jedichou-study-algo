// File: bvc2010-ex0314.cpp
// Using nested loops to generate a multiplecation table

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

int main() {
	
	// define variables
	const int size(12);
	int i(0), j(0);

	// process data
	cout << endl
		 << size << " by " << size << " Multiplication Table " << "\n\n";
	
	cout << endl << "    |";

	for( i = 1; i <= size; i++ )
		cout << setw(3) << i << " ";
	cout << endl;
	
	for( i = 0; i <= size; i++)
		cout << "____";

	for( i = 1; i <= size; i++) {
		cout << endl << setw(3) << i << " |";
		for ( j = 1; j <= size; j++)
			cout << setw(3) << i*j << " ";
	}
	cout << endl;

	return 0;
}
