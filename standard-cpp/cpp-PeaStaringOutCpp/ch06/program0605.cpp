// program0606.cpp
#include <iostream>
using namespace std;

void first();
void second();

int main()
{
	cout << "main func start\n";
	first();
	second();
	cout << "ready quit main func\n";
}

void first() { cout << "first func\n"; }
void second() { cout << "second func\n"; }
