// program0608.cpp

#include <iostream>
use namespace std;

void showSum(int, int, int);

int main() {
	int value1, value2, value3;
	cout << "Input three numbers: ";
	cin >> value1 >> value2 >> value3;

	showSum(value1, value2, value3);
	return 0;
}

void showSum(int value1, int value2, int value3) {
	cout << "Total " << value1 + value2 + value3 << endl;
}
