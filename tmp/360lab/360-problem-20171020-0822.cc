#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	float a=0.0, b=0.0, c=0.0, avg=0.0;
	cin >> a;
	cin >> b;
	cin >> c;
	avg = (a + b + c) / 3;
	cout << "avg " 
	     << setprecision(3) << avg
	     << endl;
	return 0;
}
