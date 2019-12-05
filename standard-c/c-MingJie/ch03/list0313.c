/* MingJie C - list0313.c */

#include <stdio.h>

int main(void)
{
	int v1, v2, max;

	puts("Pls input two integers.");
	printf("v1: "); scanf("%d", &v1);
	printf("v2: "); scanf("%d", &v2);

	max = (v1>v2) ? v1 : v2;
	printf("The max is %d.\n", max);

	return (0);
}
