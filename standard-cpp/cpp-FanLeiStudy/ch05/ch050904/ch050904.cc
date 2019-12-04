#include <iostream>

int main()
{
	using std::cout;
	using std::cin;

	cout << "Input x:\n"; int x; cin >> x;
	cout << "Input y:\n"; int y; cin >> y;
	cout << "Input z:\n"; int z; cin >> z;

	if ( x>1 && (y>1||z>1))
		cout << "x>1, y or z greater than 1\n";
	else
		cout << "x<1 or x=1, y and z less than 1, or others";

	return 0;
}
