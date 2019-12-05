#include <iostream>

int main()
{
	using std::cout;
	using std::cin;

	cout << "Pls input an integer:\n";
	int x;
	cin >> x;

	if (x>1)
		if (x<100) cout << "x greater than 1, and less then 100\n";
	else	
		if (x<1) cout << "x less than 1\n";
		else cout << "x equal 1\n";

	return 0;
}
