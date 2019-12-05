/* MingJie C - list0310.c */

#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("Pls input two integers.");
	printf("n1: "); scanf("%d", &n1);
	printf("n2: "); scanf("%d", &n2);

	if   (n1 > n2) printf("The bigger number is %d.\n", n1);
	else           printf("The bigger number is %d.\n", n2);

	return (0);
}
