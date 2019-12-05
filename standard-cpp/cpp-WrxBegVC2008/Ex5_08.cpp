// Ex5_08.cpp
// Using a reference to modify caller arguments

#include <iostream>

using std::cout;
using std::endl;

// function prototype
int incr10(const int& num);

// program start here
int main(void)
{
	// declared const to test for temporary creation
	const int num = 3;
	int value = 6;

	// The first output.
	int result = incr10(num);
	cout << endl << "The first output:";
	cout << endl << "incr10(num) = " << result;
	cout << endl << "num = " << num;

	// 
	
}

// function to increment a variable by 10
// function with const reference argument
int incr10(const int& num)
{
	cout << endl << "value received = " << num;
	
	// this statement would now be illegal
	// num += 10;
	
	// return the incremented value
	return num+10;
}
