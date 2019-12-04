// Ex5_06gai.cpp
// Passing a two-dimensional array to a function
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
using namespace std;

// function prototype
//void yield(double *array[3][4], int n);
void yield(double **array, int n);


int main(int argc, char** argv) {
		/*
	double beanstmp[3][4] = new double[3][4] {
		{1.0, 2.0, 3.0, 4.0},
		{5.0, 6.0, 7.0, 8.0},
		{9.0, 10.0, 11.0, 12.0}
	};*/
		double beanstmp[3][4] ={
		{1.0, 2.0, 3.0, 4.0},
		{5.0, 6.0, 7.0, 8.0},
		{9.0, 10.0, 11.0, 12.0}
	};

	double beans[3][4];
	memset((void *)beans, 0, sizeof(beans));
	memcpy((void *)beans, (void *)beanstmp, sizeof(beans));
	
	cout <<  "sizeof(beans)  "<< sizeof(beans)<< endl;
	cout << "&beans[0][0] : sizeof(double)" << &beans[0][0] << "  "<< sizeof(double)<< endl;
	cout << "&beans[0][1] : " << &beans[0][1] << endl;
	cout << "&beans[0][1] : " << &beans[0][0] + sizeof(double) << endl;
	cout << "&beans[0][0]+sizeof - &beans[0][1] : " <<(( &beans[0][0] + sizeof(double) ) - (&beans[0][1]))<< endl;

	int beans_length = (sizeof beans)/(sizeof beans[0][0]);
	cout << "beans length = " << beans_length << endl;

	double *p = &beans[0][0];
	
	//yield(&beans, beans_length);
	//
	cout << "&beans + 1 :" << *(p + sizeof(p)) << endl;
	yield(&p, beans_length);
	
	return 0;
}

void yield(double **array, int n) {

	double sum = 0.0;
	//double *ptmp =  array[0][0];
	//cout << **(&array + sizeof(double)) << endl;
	cout << "&array :" << *(*array + sizeof(double))<< endl;
	//cout << *(array[0][0] + sizeof(ptmp))<< endl;
	//
	//for(int i = 0; i < n; i++) {
	//	cout << *(ptmp + sizeof(double)) << endl;
		//cout << *array[0][2] << endl;
		// sum += **(array + sizeof(double));
	//}
	// return sum;

	// TODO compile error:
	// Ex5_06gai.cpp(18) : error C2664: 'yield' : cannot convert parameter 1 
	//   from 'double [3][4]' to 'double *'
	// Types pointed to are unrelated; conversion requires reinterpret_cast,
	//   C-style cast or function-style cast
}
