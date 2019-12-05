/* MingJie C - list0311.c */

#include <stdio.h>

int main(void)
{
	int n1, n2, max;

	puts("Pls input two integers.");
	printf("n1: "); scanf("%d", &n1);
	printf("n2: "); scanf("%d", &n2);

	if (n1 > n2) max=n1; else max=n2;
	printf("The bigger number is %d\n", max);

	return (0);
}
