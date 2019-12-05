// File name : wrox_begc_9_3.c
// Program 9.3 Passing a Pointer to a function

#include <stdio.h>

// Function prototype
int sum(int, int);
int mul(int, int);
int sub(int, int);
int call_func(int(*pfun)(int, int), int x, int y);

// Main method
int main(void) {

	// Define operate number and call sum
	int a = 10, b = 5, result = 0;
	printf("The result is %d\n", call_func(sum, a, b));
	printf("The result is %d\n", call_func(mul, a, b));
	printf("The result is %d\n", call_func(sub, a, b));

	return 0;
}

// Implement function prototype
int sum(int x, int y) { return x+y; }
int mul(int x, int y) { return x*y; }
int sub(int x, int y) { return x-y; }
int call_func(int(*pfun)(int, int), int x, int y) { return pfun(x, y); }
