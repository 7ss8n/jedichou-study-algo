// Starting Out with CPP.pdf - page 234
// This program demostrates a simple while loop.

#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	
	while (number < 5)
	{
		cout << "Hello\n";
		number++;
	}
	cout << "That's all!\n";
	return 0;
}
