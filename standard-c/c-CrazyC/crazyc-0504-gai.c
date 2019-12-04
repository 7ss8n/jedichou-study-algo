/*
 * Crazy C - code sample - 0504 - GAI, from page 135.
 * Question: Accept some integers from keyboard, and
 *   calculate total value and average value.
 */
 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Define variables
	int input_integer, counter = 0, sum = 0;
	
	// Use while to accept input, and process counter and sum.
	// Notice: Use "comment1, comment2" to process input tips.
	while( printf("Please input a integer, beside character will be complete input: "), \
		   scanf("%d", &input_integer) == 1 )
	{
		sum += input_integer;
		counter += 1;
	}
	
	// Output result.
	// Notice: you must use double() function to execute convert.
	printf("The numbers is [%d].\n", counter);
	printf("The sum is:[%d], average[%f].\n", sum, (double)sum/(double)counter);
	
	system("PAUSE");
	return 0;
}