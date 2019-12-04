#include <iostream>
using namespace std;
int main() {
	int i;
	int *p;

	// process-1
	cout << "i addr: " << &i << endl;
	cout << "p value: " << p << endl;
	cout << "p addr: " << &p << endl;

	i = 3;
	cout << "after i = 3" << endl;
	cout << "i addr: " << &i << endl;
	
	p = &i;
	cout << "after p = &i" << endl;
	cout << "i addr: " << &i << endl;
	cout << "p value: " << p << endl;
	cout << "p addr: " << &p << endl;

	return 0;
}
