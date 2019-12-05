#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string s1 = "Jedi Chou";
	string s2;
	s2.assign(s1.rbegin(), s1.rend());
	cout << s2 << endl;
	return 0;
}
