/* Program 8.5 The change that does */
#include <stdio.h>

int change(int *pnumber);  /* Function prototype */

int main(void) 
{
	int number = 10;
	int *pnumber = &number;
	int result = 0;

	result = change(pnumber);
	printf("In main, result = %d number = %d\n", result, number);
	return 0;
}

/* Definition of the function change() */
int change(int *pnumber)
{
	*pnumber *= 2;
	printf("In function change, *pnumber = %d\n", *pnumber);
	return *pnumber;
}
