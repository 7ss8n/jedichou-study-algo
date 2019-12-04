// bvc2010-ex0311.cpp
// Display ASCII codes for alphabetic characters

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	for (char capital='A', small='a'; capital <= 'Z'; capital++, small++)
		cout << endl
			 << "\t" << capital
			 << hex << setw(5) << static_cast <int> (capital)
			 << dec << setw(5) << static_cast <int> (capital)
			 << " " << small
			 << hex << setw(5) << static_cast <int> (small)
			 << dec << setw(5) << static_cast <int> (small);
	
	cout <<endl;
	return 0;
}
