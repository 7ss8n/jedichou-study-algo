// From Wrox Begining Visual C++ 2008, Page 232
// Ex5_03.cpp
// A successful attempt to modify caller arguments
#include <iostream>
using std::cout;
using std::endl;

// Function prototype
int incr10(int* num);

int main(void)
{
	int num = 3;
	int* pnum = &num;	// Pointer to num

	cout << endl << "Address passed = " << pnum;

	int result = incr10(pnum);
	cout << endl << "incr10(pnum) = " << result;

	cout << endl << "num = " << num << endl;
	return 0;
}

// function to increment a variable by 10
int incr10(int* num)
{
	*num += 10;
	return *num;
}
