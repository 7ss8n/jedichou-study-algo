// program0607.cpp

#include <iostream>
using namespace std;

void dispValue(int);

int main()
{
	cout << "call dispValue function.\n";
	dispValue(5);
	dispValue(10);
	dispValue(2);
	dispValue(16);
	cout << "quit main.\n";
	return 0;
}

void dispValue(int num)
{
	cout << "dispValue function output: " << num << endl;
}
