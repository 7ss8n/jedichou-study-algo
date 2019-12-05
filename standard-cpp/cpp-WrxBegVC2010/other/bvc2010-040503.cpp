#include <iostream>
using namespace std;
int main(void) {
	const size_t LENGTH = 22;
	const char source[LENGTH] = "The more the merrier!";
	char destination[LENGTH];

	cout << "The destination string is:"
		 << strcpy(destination, source)
		 << endl;

	return 0;
}
