/* Program 7.4 Arrays and pointers - A simple program */
#include <stdio.h>

int main(void)
{
	char multiple[] = "My string";
	
	char *p = &multiple[0];
	printf("The address of first array element : %p\n", p);

	p = multiple;
	printf("The address of array name : %p\n", p);

	return 0;
}
