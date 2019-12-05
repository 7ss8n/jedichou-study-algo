// program0920.cpp
// This program shows that local variables do
// not retain their values between function calls.

#include <iostream>
using namespace std;

// Definition of function showLocal
// The initial value of localNum, which is 5, is diplayed.
// The value of localNum is then changed to 99 before the
// function returns.
void showLocal()
{
	int localNum = 5;
	cout << "localNum is " << localNum << endl;
	localNum = 99;
}

int main()
{
	showLocal();
	showLocal();
	return 0;
}
