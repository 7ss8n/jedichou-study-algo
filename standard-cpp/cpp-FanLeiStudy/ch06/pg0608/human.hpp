// file: human.hpp
#include <iostream>
using namespace std;
class A
{
public:
	void func(int x, int y) { i=x; j=y; }
	void print() { cout << "Multi result: " << i*j << endl; }
private:
	int i, j;
};
