/* MingJie C - ex0309.c */

#include <stdio.h>

int main(void)
{
	int n1, n2, n3;

	puts("Pls input three integers.");
	printf("n1: "); scanf("%d", &n1);
	printf("n2: "); scanf("%d", &n2);
	printf("n3: "); scanf("%d", &n3);

	if ( n1 == n2 && n1 == n3)
		puts("all is same");
	else if (
		(n1 == n2 && n1 != n3) ||
		(n1 == n3 && n1 != n2) ||
		(n2 == n3 && n1 != n2)
	)
		puts("two integer equal");
	else
		puts("all different");

	return (0);
}
