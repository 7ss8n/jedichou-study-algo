/*
 * File: program0603.cpp
 * 本程序有三个函数first, second, main
 */

#include <iostream>
using namespace std;

void first() { cout << "first method() ...\n"; };
void second() { cout << "second method() ...\n"; };

int main()
{
	cout << "Message from main.\n";
	first(); second();
	cout << "Back in function main again.\n";
	return 0;
}
