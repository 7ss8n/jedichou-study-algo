/* MingJie C - list0210.c */

#include <stdio.h>

int main(void)
{
	int na, nb;

	puts("Pls input two integers");
	printf("na: "); scanf("%d", &na);
	printf("nb: "); scanf("%d", &nb);

	printf("avg(na, nb)=%f\n", (double)(na+nb)/2);

	return (0);
}
