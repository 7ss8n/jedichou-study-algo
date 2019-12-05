/*
 * Crazy C - code sample - 0506, page 141
 * Target: How to use for loop.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	
	for( i = 0; i < 3; i++)
		printf("The %dth loop.\n", i);
	printf("For loop is complete, and i variable value is: [%d].\n", i);
	
	return 0;
}