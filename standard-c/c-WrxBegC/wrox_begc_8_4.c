/* Program 8.4 The change that doesn't */
#include <stdio.h>

int change(int number); /* Function prototype */

int main(void) {
	// Variable define
	int number = 10;	// Staring Value
	int result = 0;		// Place to put the returned value
	
	// Process
	result = change(number);
	printf("In main, result = %d\t number = %d\n", result, number);

	// The End.
	return 0;
}

// Definition of the function change()
int change(int number) {
	number = 2 * number;
	printf("IN change FUNCTION, number = %d\n", number);
	return number;
}
