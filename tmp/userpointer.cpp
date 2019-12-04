// File name: userpointer.cpp
// Description: 简单演示指针绑定前后的内存地址变化

#include <iostream>

using namespace std;

int main() {
	
	// 赋值
	int i;
	int *p;

	// 1. 赋值前地址和值
	cout << "赋值前" << endl;
	cout << "i addr: " << &i << endl;
	cout << "p value: " << p << endl;
	cout << "p addr: " << &p << endl;
	cout << endl;

	// 2. i赋值后的地址和值
	i = 3;
	cout << "赋值后 i = 3" << endl;
	cout << "i addr: " << &i << endl;
	cout << endl;
	
	// 3. p绑定为i的地址后
	p = &i;
	cout << "p绑定为i的地址后 p = &i" << endl;
	cout << "i addr: " << &i << endl;
	cout << "p value: " << p << endl;
	cout << "p addr: " << &p << endl;
	cout << "*p: " << *p << endl;
	cout << endl;

	return 0;
}
