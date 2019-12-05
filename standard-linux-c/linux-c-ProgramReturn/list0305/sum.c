// file: sum.c

#include <stdio.h>
int main(void)
{
	int i, sum;
	for (i = 1; i <= 10; i++)
		sum += i;
	printf("the sum is : %d\n", sum);
	return 0;
}
