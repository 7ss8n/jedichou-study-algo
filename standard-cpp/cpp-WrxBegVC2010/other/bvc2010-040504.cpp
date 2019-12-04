#include <iostream>
using namespace std;
int main(void) {
	char *str1("Jill");
	char *str2("Jacko");
	int result = strcmp(str1, str2);

	if (result < 0)
		cout << str1 << " is less than " << str2 << endl;
	else if (0 == result)
		cout << str1 << " is equal than " << str2 << endl;
	else
		cout << str1 << " is greater than " << str2 << endl;

	return 0;
}
