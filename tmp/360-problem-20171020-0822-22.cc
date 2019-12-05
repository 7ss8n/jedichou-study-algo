#include <iostream>
using namespace std;
int main(void)
{
	int heads=0, legs=0;
	cin >> heads;
	cin >> legs;
	bool condition1 = (2 * heads) <= legs;
	bool condition2 = (4 * heads) >= legs;
	bool condition3 = (legs % 2) == 0;
	bool result = condition1 && condition2 && condition3;
	string output = result ? "Yes" : "No";
	cout << output << endl;

	return 0;
}
