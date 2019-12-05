/*
 * File: program0604.cpp
 * 本程序包含三个函数: main, deep, and deeper
 */

#include <iostream>
using namespace std;

void deeper()
{
	cout << "在deeper函数中...\n";
}

void deep()
{
	cout << "在deep函数中...\n";
	deeper();  // call function deepter
	cout << "准备退出deep函数.\n";
}

int main()
{
	cout << "在main函数中...\n";
	deep();
	cout << "准备退出main函数...\n";
	return 0;
}
