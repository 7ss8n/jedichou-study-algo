// File: pg080404.cc
// Description: 8.4.4, 访问堆中的数据成员
// From: 从新手到高手C++全方位学习, p105

#include <iostream>
using namespace std;

class A
{
public:
	
	A()
	{ 
		cout << "A's constructor executing...  " << endl;
		i = new int(999);
	}

	~A() 
	{ 
		cout << "A's deconstructor executing..." << endl; 
		delete i;
	}

	int  get() const { return *i; }
	void set(int x)  { *i = x; }
private:
	int *i;
};

int main()
{
	// createa *p at heap
	A *p = new A;

	// access class method
	cout << p->get() << endl;
	p->set(0);
	cout << p->get() << endl;

	// destory p
	delete p;

	return 0;
}