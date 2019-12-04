#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	cout << "Pls input a number that greater than 1:" << endl;
	int x;
	cin >> x;

	if (x>1 || x<100) cout << "x greater than 1 and less than 100" << endl;
	else
		cout << "x greater than or equal 100" << endl;

	return 0;
}
