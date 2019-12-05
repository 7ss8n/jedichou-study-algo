/*
 * File: program0601.cpp
 * 本示例代码包含两个函数main, displayMessage
 */

#include <iostream>
using namespace std;

/*
 * displayMessage函数
 * 本函数显示一个示例字符串
 */
void displayMessage()
{
	cout << "Hello from the function displayMessage.\n";
}

/* 主函数 */
int main()
{
	cout << "Hello from main.\n";
	displayMessage();
	cout << "Back in function main again.\n";
	return 0;
}
