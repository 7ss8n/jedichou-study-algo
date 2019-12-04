// FanLei: Begin C++ novice to professional.
// File: UseConst.cpp
// Description: Use const keyword

#include <iostream>
using namespace std;

class A
{
public:
	void func(int x, int y) { num1=x; num2=y; }
	void print() const { cout << "Multi result: " << num1 * num2 << endl; }
private:
	int num1, num2;
};

int main()
{
	// define and calcuate
	A calculator1, calculator2;
	calculator1.func(2,2);
	calculator2.func(3,2);

	// output
	calculator1.print();
	calculator2.print();

	// quit
	return (0);
}
