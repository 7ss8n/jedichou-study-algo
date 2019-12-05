// program0923.cpp
// This program shows that a static local variable
// is only initialized once.

#include <iostream>
using namespace std;

void showStatic()
{
	static int intNumber = 5;
	cout << "showStatic function, intNumber = "
		 << intNumber << endl;
	intNumber++;
}

int main()
{
	// call the showStatic function five times.
	for (int count = 0; count < 5; count++)
		showStatic();
	return 0;
}
