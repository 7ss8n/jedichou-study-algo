#include <iostream>
using namespace std;
class A {
public:
	A()  { cout<<"A class constructor running\n"; }
	~A() { cout<<"A class desconstructor running\n"; }
private:
	int i;
};

int main() {
	A *p = new A;
	delete p;
	return 0;
}
