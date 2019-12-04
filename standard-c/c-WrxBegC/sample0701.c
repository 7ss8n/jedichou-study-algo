/* Program 7.1 A simple program using pointers */
#include <stdio.h>

int main(void)
{
	int number = 0;			/* A variable of type int initialized to 0 */
	int *pointer = NULL;	/* A pointer that can point to type int */

	/* Output number's address and value */
	number = 10;
	printf("number's address: %p\n", &number);
	printf("number's value: %d\n", number);
	printf("pointer's value: %p\n\n", &pointer);
	
	/* Store the address of number in pointer */
	pointer = &number;
	printf("pointer's address: %p\n", &pointer);
	printf("pointer's size: %d bytes\n", sizeof(pointer) );
	printf("pointer's value: %p\n", pointer);
	printf("pointer's point to: %d\n", *pointer);

	return 0;
}
