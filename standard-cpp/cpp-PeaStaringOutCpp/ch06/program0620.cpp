// program0620.cpp
// This program demostrates how a local variable
// can shadow the name of a global constant

#include <iostream>
using namespace std;

const int BIRDS = 500;
void california();

int main()
{
	cout << "In main there are " << BIRDS
		 << " birds.\n";
	california();
	return 0;
}

void california()
{
	const int BIRDS = 10000;
	cout << "In california function: BIRDS = " << BIRDS
		 << " birds." << endl;
}
