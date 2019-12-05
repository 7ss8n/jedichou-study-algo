/* MingJie C - ex0301.c */

#include <stdio.h>

int main(void)
{
	int va, vb;

	puts("Pls input two integers: ");
	printf("va: "); scanf("%d", &va);
	printf("vb: "); scanf("%d", &vb);

	if (va % vb)
		puts("va % vb != zero");
	else
		puts("B is a divisor of A");

	return (0);
}
