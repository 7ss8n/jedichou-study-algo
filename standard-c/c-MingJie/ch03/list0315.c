/* MingJie C - list0315.c */

#include <stdio.h>

int main(void)
{
	int n1, n2, max, min;

	puts("Pls input two integers.");
	printf("n1: "); scanf("%d", &n1);
	printf("n2: "); scanf("%d", &n2);

	if (n1 > n2)
	{
		max = n1;
		min = n2;
	}
	else
	{
		max = n2;
		min = n1;
	}

	printf("The max is %d.\n", max);
	printf("The min is %d.\n", min);

	return (0);
}
