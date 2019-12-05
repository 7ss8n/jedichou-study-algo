// Fanlei: fanlei0805.cpp
// Descripition: this pointer

#include <iostream>
using namespace std;

class A
{
public:
	int get() const { return counter;}
	void set (int x) {
		this->counter = x;
		cout << "this variable save address: " << this << endl;
	}
private:
	int counter;
};

int main()
{
	// First instance.
	A a;
	a.set(9);
	cout << "object a address: " << &a << endl;
	cout << "a.counter: " << a.get() << endl << endl;

	// Second instance.
	A b;
	b.set(999);
	cout << "object b address: " << &b << endl;
	cout << "b.counter: " << b.get() << endl;

	return 0;
}
