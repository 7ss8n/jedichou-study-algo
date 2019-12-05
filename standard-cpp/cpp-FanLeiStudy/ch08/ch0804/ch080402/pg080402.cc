#include <iostream>
using namespace std;

class A 
{
public:
	A() { 
		cout << "construct method executing...\n";
		i = 999;
	}
private:
	int i;
};

int main()
{
	A *p = new A;
	return 0;
}
