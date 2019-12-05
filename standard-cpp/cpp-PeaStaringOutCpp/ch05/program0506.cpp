// Starting Out with CPP.pdf, page 242
// This program displays a list of numbers and their squares.

#include <iostream>
using namespace std;

int main()
{
	const int MIN_NUMBER = 1;
	const int MAX_NUMBER = 10;
	int num = MIN_NUMBER;

	cout << "Number Number Squared\n";
	cout << "------------------------\n";
	while (num <= MAX_NUMBER)
	{
		cout << num << "\t\t" << (num * num) << endl;
		num++;
	}

	return 0;
}
