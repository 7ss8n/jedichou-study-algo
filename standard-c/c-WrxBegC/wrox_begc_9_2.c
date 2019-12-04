// File name : wrox_begc_9_2.c
// Program 9.2 Arrays of Pointers to functions

#include <stdio.h>

// Function prototypes
int sum(int, int);
int mul(int, int);
int sub(int, int);

int main(void) {
	
	// Define operate number and function point array
	int i = 0;
	int a = 10, b = 5, result = 0;
	int (*pfun[3])(int, int);	// Define function pointer array

	// Bind function to function pointer
	pfun[0] = sum; pfun[1] = mul; pfun[2] = sub;

	// Output process result
	for( i = 0; i < 3; i++) {
		result = pfun[i](a, b);
		printf("Result = %d\n", result);
	}

	// Call all three functions through pointer in an expression
	result = pfun[1](pfun[0](a, b), pfun[2](a, b));
	printf("The product of the sum and difference = %d\n", result);

	return 0;
}

// Implement function prototype
int sum(int x, int y) { return x+y; }
int mul(int x, int y) { return x*y; }
int sub(int x, int y) { return x-y; }
