// program0611.cpp
// This program uses a function to perform division.
// If division by zero is detected, the function returns.

#include <iostream>
using namespace std;

void divide(double, double);

int main()
{
	double num1, num2;

	cout << "Enter two numbers and I will divide the first" << endl;
	cout << "number by the second number: ";
	cin >> num1 >> num2;
	divide(num1, num2);
	return 0;
}

void divide(double num1, double num2)
{
	if (num2 == 0.0 )
	{
		cout << "Sorry, I cannot divide by zero" << endl;
		return;
	}
	else
	{
		cout << "The answer is " << (num1/num2) << endl;
	}
}
