/* MingJie C - list0203.c */
#include <stdio.h>

int main(void)
{
	int na, nb;

	puts("Pls input two integers");
	printf("na: "); scanf("%d", &na);
	printf("nb: "); scanf("%d", &nb);

	printf("na/nb = %d, mod=%d\n", na/nb, na%nb);

	return (0);
}
