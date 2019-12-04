// From Worx Begin C
// Program 9.5 Global variables

#include <stdio.h>
#include <stdlib.h>

// Declare a global variable
int count = 0;

// Declare function
void test1() { printf("test1 count = %d ", ++count); }
void test2() {
	static int count;	// Miss the global count
	printf(", test2 count = %d\n", ++count);
}

// Main function
int main() {
	int count = 0;		// Miss the global count
	for(; count < 5; count++) {	test1(); test2(); }
	return 0;
}
