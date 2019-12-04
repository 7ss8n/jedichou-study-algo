#include <iostream>
using namespace std;
int main(void) {
	const size_t count = 30;
	char str1[count] = "Many hands";
	char *str2 = " make light work. So let's check this program branch is not normal";
	char *str3 = nullptr;
	
	errno_t error = strcat_s(str1, count, str3);
	
	// Jedi: is not run !
	if (error == 0)
		cout << "String joined success" << endl;
	else if (error == EINVAL)
		cout << "Error! Source or destination string is NULL." << endl;
	else if (error == ERANGE)
		cout << "Error! Destination string to small." << endl;

	return 0;
}
