// File: pg0805.cpp
// Description: this pointer

#include <iostream>
using namespace std;

////////////////////////////////////////////
// Class Counter
class Counter
{
public:
	int get() const  { return i; }
	void set (int x) { 
		this->i = x; 
		cout << "this variable memory address: "
		     << this << endl;
	}
private:
	int i;  // fact counter 
};

////////////////////////////////////////////
// main
int main(void)
{
	Counter counter_a;
	counter_a.set(9);
	cout << "counter_a's memory address: " << &counter_a << endl;
	cout << counter_a.get() << endl;

	Counter counter_b;
	counter_b.set(99);
	cout << "counter_a's memory address: " << &counter_b << endl;
	cout << counter_b.get() << endl;

	return 0;
}

