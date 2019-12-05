/* MingJie C - list0312.c */

#include <stdio.h>

int main(void)
{
	int n1, n2, n3, max;

	puts("Pls input 3 integer: ");
	printf("n1: "); scanf("%d", &n1);
	printf("n2: "); scanf("%d", &n2);
	printf("n3: "); scanf("%d", &n3);

	max = n1;
	if (n2 > max) max = n2;
	if (n3 > max) max = n3;

	printf("The max is %d.\n", max);

	return (0);
}
