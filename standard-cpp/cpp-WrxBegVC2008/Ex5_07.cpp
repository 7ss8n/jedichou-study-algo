// Ex5_07.cpp
// using a lvalue reference to modify caller arguments
#include <iostream>
using namespace std;

// function prototype
int incr10(int& num);

// function main
int main(void) {
	int num = 3;
	int value = 6;

	int result = incr10(num);
	cout << "incr10(num) = " << result << ", num = " << num << endl;

	result = incr10(value);
	cout << "incr10(value) = " << result << ", num = " << num << endl;

	return 0;
}

// function incr10
int incr10(int& num) {
	cout << "incr10 method receive: " << num << endl;
	num += 10;
	return num;
}
