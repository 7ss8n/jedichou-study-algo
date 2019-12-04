#include <iostream>
using namespace std;
int main(void) {
	char str1[30] = "Many hands";
	char * str2(" make light work.");
	strcat(str1, str2);
	cout << str1 << endl;
	return 0;
}
