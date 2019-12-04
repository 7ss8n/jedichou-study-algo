/* 
 * File: sum.c
 * From: Linux Program
 * List: Code list 0305 
 */

#include <stdio.h>

int main(void)
{
	int i;
	int sum; // do not initialize

	for (i=1; i<=10; i++)
		sum += i;

	printf("the sum is : %d\n", sum);
	return 0;
}
