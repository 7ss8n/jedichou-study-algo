/*
 * File: program0602.cpp
 * 循环调用displayMessage函数
 */

#include <iostream>
using namespace std;

/*
 * Definition of function dispMessage
 * This function displays a greeting.
 */
void dispMessage()
{
	cout << "Hello from the function dispMessage().\n";
}

/* 主函数 */
int main()
{
	cout << "The message from main.\n";
	for (int count = 0; count <= 5; count++)
		dispMessage();
	cout << "Message output done.\n";
	return 0;
}