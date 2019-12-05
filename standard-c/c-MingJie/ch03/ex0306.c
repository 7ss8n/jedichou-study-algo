/* MingJie C - ex0306.c */

#include <stdio.h>

int main(void)
{
	int v1, v2, v3, v4, max;

	puts("Pls input 4 integers.");
	printf("v1: "); scanf("%d", &v1);
	printf("v2: "); scanf("%d", &v2);
	printf("v3: "); scanf("%d", &v3);
	printf("v4: "); scanf("%d", &v4);

	max = v1;
	if (v2 > max) max = v2;
	if (v3 > max) max = v3;
	if (v4 > max) max = v4;

	printf("The max is %d.\n", max);

	return (0);
}
