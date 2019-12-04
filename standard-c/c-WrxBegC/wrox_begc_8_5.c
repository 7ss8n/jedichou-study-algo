// Program 8.5 The change that does
#include <stdio.h>

// Function prototype
int change(int *number);

int main(void) {
	// Variable definition
	int number = 10;		// Staring value
	int *pnumber = &number;	// Pointer to staring value
	int result = 0;

	// Process
	result = change(pnumber);
	printf("In main, result=%d\tnumber=%d\n", result, number);

	// The End.
	return 0;
}

// Definition of the function change()
int change(int *pnumber) {
	*pnumber *= 2;
	printf("IN change FUNCTION: *pnumber=%d\n", *pnumber);
	return *pnumber;
}
