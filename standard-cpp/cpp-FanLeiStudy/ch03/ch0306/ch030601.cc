// 3.6 ȫ�ֱ���

#include <iostream>
using namespace std;

void func();
int x=3, y=4;

int main() {
	cout << "main函数中 -> "
	     << " x:" << x
	     << " y:" << y << endl;
	func();
	return 0;
}

void func() {
	cout << "func函数中 -> "
	     << " x:" << x
	     << " y:" << y << endl;
}
