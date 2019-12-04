// Ref: OReilly C++ Cookbook
// Sample 5-1 Get current time and world time
// Study by Jedi Chou. 2016.4.1 08:06 AM

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	// Current date/time based on current system
	time_t now = time(0);

	// Convert now to tm struct for local timezone
	tm* localtm = localtime(&now);

	// Convert now to tm struct for UTC
	tm* gmtm = gmtime(&now);

	if (gmtm != NULL) {
		cout << "The UTC date and time is: " << asctime(gmtm) << endl;
	}
	else {
		cerr << "Failed to get UTC date and time " << endl;
		return EXIT_FAILURE;
	}
}
