// Ref: OReilly C++ Cookbook
// Format a date or time string
// Study by Jedi Chou. 2016.4.1 08:13 AM

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <string>
#include <stdexcept>
#include <iterator>
#include <sstream>

using namespace std;

ostream& formatDataTime(ostream& out, const tm& t, const char* fmt) {
	/*  TODO: need fixed 
	 *  In visual c++ has 17 errors.
	 *  In cygwin g++ has 2 errors.
	 */
	const time_put<char>& dateWriter = use_facet<time_put<char> >(out.getloc());
	int n = strlen(fmt);
	if (dateWriter.put(out, out, ' ', &t, fmt, fmt + n).failed()) {
		throw runtime_error("failure to format date time");
	}
	return out;
}

string dateTimeToString(const tm& t, const char* format) {
	stringstream s;
	formatDataTime(s, t, format);
	return s.str();
}

tm now () {
	time_t now = time(0);
	return *localtime(&now);
}

int main() {
	try {
		string s = dateTimeToString(now(), "%A %B, %d % Y %I:%M%p");
		cout << s << endl;
		s = dateTimeToString(now(), "%Y-%m-%d %H:%M:%S");
		cout << s << endl;
	}
	catch (...) {
		cerr << "failed to format date time" << endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
