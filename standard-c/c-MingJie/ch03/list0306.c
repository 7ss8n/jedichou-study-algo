/* MingJie C - list0306.c */

#include <stdio.h>

int main(void)
{
	int x1, x2;

	puts("Pls input two integers");
	printf("x1: "); scanf("%d", &x1);
	printf("x2: "); scanf("%d", &x2);

	if (x1 == x2)
		puts("x1 equal x2");
	else
		puts("x1 unequal x2");

	return (0);
}
