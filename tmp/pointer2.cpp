#include <iostream>
using namespace std;
int main() {
	int a;
	int *p;
	p = &a;

	cout << "&a: " << &a << endl;
	cout << "p: " << p << endl;

	return 0;
}