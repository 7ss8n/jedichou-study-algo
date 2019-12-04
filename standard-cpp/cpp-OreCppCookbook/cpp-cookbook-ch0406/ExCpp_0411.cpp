// Use boost to split string
#include <iostream>
#include <string>
#include <list>
#include <boost/algorithm/string.hpp>

using namespace std;
using namespace boost;

int main() {
	string s = "One,two,three,four";
	list<string> results;

	// Note this is boost::split
	split(results, s, is_any_of(","));

	for( list<string>::const_iterator p = results.begin();
		 p != results.end();
		 ++p) {
		cout << *p << endl;
	}

	return 0;
}
