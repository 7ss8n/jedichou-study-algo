/* MingJie C - list0211.c */

#include <stdio.h>

int main(void)
{
	int na, nb, nc;
	int sum;
	double avg;

	puts("Pls input three integers");
	printf("na: "); scanf("%d", &na);
	printf("nb: "); scanf("%d", &nb);
	printf("nc: "); scanf("%d", &nc);

	sum = na + nb + nc;
	avg = (double) sum/3;

	printf("sum: %5d\n", sum);
	printf("avg: %5.1f\n", avg);

	return (0);
}
