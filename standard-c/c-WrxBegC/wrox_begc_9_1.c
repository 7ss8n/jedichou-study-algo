// File name: wrox_begc_9_1.c
// Program 9.1 Pointing to functions

#include <stdio.h>

// Function Prototype
int sum(int, int);
int mul(int, int);
int sub(int, int);

// Main method
int main(void) {
	// Define opearte number and function point
	int a = 10;
	int b = 5;
	int result = 0;
	int (*pfun)(int, int);	// Function pointer declaration

	// Use function point to bind method and call it.
	pfun = sum; result = pfun(a, b); printf("result = %d\n", result);
	pfun = mul; result = pfun(a, b); printf("result = %d\n", result);
	pfun = sub; result = pfun(a, b); printf("result = %d\n", result);
}

// Implement function protype
int sum(int x, int y) { return x+y; }
int mul(int x, int y) { return x*y; }
int sub(int x, int y) { return x-y; }
