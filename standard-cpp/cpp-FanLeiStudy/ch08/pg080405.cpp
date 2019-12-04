#include <iostream>
using namespace std;

class A {
public:
	A();
	~A();
	int get() const {return *i;}
	void set(int x) {*i=x;}
private:
	int *i;
};

A::A() 
{
	cout << "A::A() ..." << endl;
	i = new int[999];
}

A::~A() 
{
	cout << "A::~A() ..." << endl;
	delete i;
}

int main() 
{
	// *i does not initialize
	A *a_instance = new A; 
	cout << a_instance->get() << endl;

	// set value
	a_instance->set(852);
	cout << a_instance->get() << endl;

	// delete pointer
	delete a_instance;

	return 0;
}


