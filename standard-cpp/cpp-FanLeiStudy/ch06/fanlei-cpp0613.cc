// File: fanlei-cpp0613.cc
// 6.13 ������������

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
	// �����ʼ��ʱ���ù��캯��
	A a[2];
	
	cout << "execute other comments.." << endl;

	// �����˳�ʱ��������٣���ִ���������� 
	return 0;
}
