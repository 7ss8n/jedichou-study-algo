// From Wrox Begin C, Page 353
// File name : wrox_begc_9_6.c
// Program 9.6, Calculating factorials using recursion

#include <stdio.h>
#include <stdlib.h>

unsigned long factorial(unsigned long);

int main() {
	unsigned long number = 0L;
	printf("Enter an integer: ");
	scanf(" %lu", &number);
	printf("The factorial is %lu\n", factorial(number));
	return 0;
}

unsigned long factorial(unsigned long n) {
	return (n < 2L) ? n : n*factorial(n-1);
}
