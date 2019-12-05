/* MingJie C - ex0310.c */

#include <stdio.h>
#include <math.h>

int main(void)
{
	int n1, n2;

	puts("Pls input two integer.");
	printf("n1: "); scanf("%d", &n1);
	printf("n2: "); scanf("%d", &n2);

	if (abs(n1-n2) <= 10) puts("|n1-n2| <= 10\n");
	else puts("|n1-n2| >= 11");

	return (0);
}
