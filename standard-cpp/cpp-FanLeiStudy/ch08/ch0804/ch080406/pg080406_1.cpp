// File: pg080406_1.cpp
#include <iostream>
using namespace std;

//////////////////////////
// Class A define
class A
{
public:
	A();
	~A();
	int get() const {return *i; }
	void set (int x) { *i=x; }
private:
	int *i;
};

//////////////////////////
// Class A Constructor
A::A()
{
	cout << "Class A Constructor executing" << endl;
	i = new int(999);
}

//////////////////////////
// Class A Desconstructor
A::~A()
{
	cout << "Class A Descontructor executing" << endl;
	delete i;
}

//////////////////////////
// main
int main(void)
{
	// create->get->set->get
	A *instance = new A;
	cout << instance->get() << endl;
	instance->set(0);
	cout << instance->get() << endl;

	// Notice: without delete instance.
	// So the object exist in the heap(memory).

	// program complete
	return 0;
}
