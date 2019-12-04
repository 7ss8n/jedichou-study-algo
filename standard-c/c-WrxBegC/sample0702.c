/* Program 7.2 What's the pointer */
#include <stdio.h>

int main(void)
{
	// define
	long num1 = 0L;
	long num2 = 0L;
	long *pnum = NULL;

	pnum = &num1;	// pnum stored address of num1
	*pnum = 2;		// Set num1 to 2
	++num2;
	num2 += *pnum;	// add num1 to num2

	printf("Operation 1\n");
	printf("num1 is %ld\n", num1);
	printf("num2 is %ld\n", num2);
	
	pnum = &num2;
	++*pnum;

	printf("Operation 2\n");
	printf("num1=%ld, num2=%ld, *pnum=%ld, *pnum+num2=%ld\n",
		   num1, num2, *pnum, *pnum+num2);

	return 0;
}
