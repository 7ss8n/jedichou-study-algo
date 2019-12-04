#include <iostream>
using namespace std;

int main()
{
	int a = 99;
	
	// process
	if (a < 10)       cout << "a小于10" << endl;
	else if (a < 20)  cout << "a大于10，小于20" << endl;
	else if (a < 40)  cout << "a大于10，小于40" << endl;
	else if (a < 90)  cout << "a大于10，小于90" << endl;
	else              cout << "a大于90" << endl;
	cout << "程序结束!" << endl;
	return 0;
}
