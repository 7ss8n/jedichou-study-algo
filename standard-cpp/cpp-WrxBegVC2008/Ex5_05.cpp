// Ex5_05.cpp
// Handling an array in a function as a pointer

// load library and namespace
#include <iostream>
using namespace std;

// function prototype
double average(double* array, int count);

int main(void)
{
	double values[] = {
		1.0, 2.0, 3.0, 4.0, 5.0,
		6.0, 7.0, 8.0, 9.0, 10.0
	};

	cout << endl << "Average = "
		 << average(values, (sizeof values)/(sizeof values[0])) << endl;

	return 0;
}

// average function
double average(double* array, int count)
{
	double sum = 0.0;
	for(int i=0; i<count; i++)
		sum += *array++;

	return (sum/count);
}
