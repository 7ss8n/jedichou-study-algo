// Example 4-15: find string
#include <string>
#include <iostream>
using namespace std;
int main()
{
	string s = "Charles Darwin";
	cout << s.find("ar") << endl;
	cout << s.rfind("ar") << endl;
	cout << s.find_first_of("swi") << endl;
	cout << s.find_first_not_of("Charles") << endl;
	cout << s.find_last_of("abg") << endl;
	cout << s.find_last_not_of("aDinrw") << endl;

	return 0;
}
