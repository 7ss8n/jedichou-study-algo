#include <iostream>

int main()
{
	using std::cout;
	using std::cin;

	cout << "Pls input an integer:\n";
	int x; cin >> x;

	if (x > 1 && x < 100)
		cout << "x greater than 1 and less than 100\n";
	else
		cout << "x greater than 100 or equal 100\n";

	return 0;	
}
