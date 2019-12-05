#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	cout << "Pls input an integer:" << endl;
	int x;
	cin >> x;

	if (!x==0)
		cout << "x not equal zero." << endl;
	else
		cout << "x equal zero." << endl;

	return 0;
}
