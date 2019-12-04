// use inline at class's method
#include <iostream>
using namespace std;

class A {
	public:
		inline void func(int, int);
		inline void print();
	private:
		int i, j;
};

int main()
{
	A a;
	a.func(80,25);
	a.print();
	return 0;
}

void A::func(int x, int y) { i=x; j=y; }
void A::print() { cout << "Two nums mul result: " << i*j << endl; }
