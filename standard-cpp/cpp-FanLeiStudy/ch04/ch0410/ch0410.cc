#include <iostream>
using namespace std;

int main() {
	enum day {
		Sunday,Monday, Tuesday,
		Wednesday, Thursday, Friday,
		Saturday
	};
	
	day today;
	today = Monday;
	if ( today == Sunday || today == Saturday)
		cout << "Have a rest" << endl;
	else
		cout << "Work day" << endl;

	return 0;
}
