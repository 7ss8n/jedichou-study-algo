// File name: sum.c

#include <stdio.h>
int main(void)
{
	int i;
	int sum;
	for (i = 1; i <= 10; i++)
		sum += i;
	printf("The sum is : %d\n", sum);
	return 0;

	// Notice: The output is
	// The sum is : 55
	// Under gcc version 7.3.0 (Ubuntu 7.3.0-16ubuntu3)
}
