/* MingJie C - list0307.c */

#include <stdio.h>

int main(void)
{
	int v1, v2;

	puts("Pls input two integers");
	printf("v1: "); scanf("%d", &v1);
	printf("v2: "); scanf("%d", &v2);

	if (v1 != v2)
		puts("x1 unequal x2");
	else
		puts("x1 equal x2");

	return (0);
}
