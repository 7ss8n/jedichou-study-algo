// Example 6-10: save string to a set object
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
	set<string> setStr;
	string s;

	s = "Bill";   setStr.insert(s);
	s = "Steven"; setStr.insert(s);
	s = "Randy";  setStr.insert(s);
	s = "Howard"; setStr.insert(s);

	for(set<string>::const_iterator p = setStr.begin();
		p != setStr.end(); ++p)
		cout << *p << endl;

	return 0;
}
