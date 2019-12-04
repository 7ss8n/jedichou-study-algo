// program0606.cpp

#include <iostream>
using namespace std;

void dispValue(int);

int main()
{
	cout << "call dispValue func ...\n";
	dispValue(5);
	cout << "quit main func!\n";
	
	return 0;
}

void dispValue(int num)
{
	cout << "output at dispValue inside: " << num << endl;
}
