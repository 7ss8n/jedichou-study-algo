// program0609.cpp

#include <iostream>
use namespace std;

void changeMe(int);

int main()
{
	int number = 12;
	cout << "change before, number=" << number << endl;
	changeMe(number);
	cout << "change after, number=" << number << endl;
	return 0;
}

void changeMe(int val)
{
	val = 0;
	cout << "In the changeMe function" << endl;
	cout << "value: " << val << endl;
}
