#include <iostream>
using namespace std;
typedef unsigned short int ut;
int main()
{
	ut i;
	ut *p = 0;
	i = 5;
	p = &i;
	cout << "i=" << i << ", i addr: " << &i << endl;
	cout << "*p=" << *p << endl;

	// first process
	*p = 90;
	cout << endl << "after *p = 90;" <<endl;
	cout << "i=" << i << ", i addr: " << &i << endl;
	cout << "*p=" << *p << endl;

	// second process
	i = 9;
	cout << endl << "after i = 9;" <<endl;
	cout << "i=" << i << ", i addr: " << &i << endl;
	cout << "*p=" << *p << endl;

	return 0;
}
