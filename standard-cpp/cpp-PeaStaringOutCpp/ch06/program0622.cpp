// program0922.cpp
// This program uses a static local variable

#include <iostream>
using namespace std;

void showStatic();

int main()
{
	for (int count = 0; count < 5; count++)
		showStatic();
	return 0;
}

void showStatic()
{
	// Jedi: notice this feature!
	static int statNum;
	cout << "statNum is " << statNum << endl;
	statNum++;
}
