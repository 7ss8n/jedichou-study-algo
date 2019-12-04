#include <iostream>
using namespace std;
inline int func(int);

int main() {
	int x;
	cout << "Pls input a num: ";
	cin >> x;
	cout << "The input num is " << func(x) << endl;
	return 0;
}

int func(int x) {
	return x;
}
