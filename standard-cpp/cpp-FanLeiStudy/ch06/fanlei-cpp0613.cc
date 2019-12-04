// File: fanlei-cpp0613.cc
// 6.13 析构对象数组

#include <iostream>
using std::cout;
using std::endl;

class A {
public:
	A();
	~A();
};

A::A()  { cout << "Constructor method execute. \n"; }
A::~A() { cout << "Deconstrctor method execute.\n"; }

int main()
{
	// 程序初始化时调用构造函数
	A a[2];
	
	cout << "execute other comments.." << endl;

	// 程序退出时候对象销毁，则执行析构函数 
	return 0;
}
