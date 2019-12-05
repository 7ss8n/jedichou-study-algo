/* MingJie C - list0501.c */

#include <stdio.h>

int main(void)
{
	int val1;
	int val2;
	int val3;
	int val4;
	int val5;
	int sum = 0;

	puts("Pls input vals");
	printf("val1: "); scanf("%d", &val1);
	printf("val2: "); scanf("%d", &val2);
	printf("val3: "); scanf("%d", &val3);
	printf("val4: "); scanf("%d", &val4);
	printf("val5: "); scanf("%d", &val5);

	sum += val1;
	sum += val2;
	sum += val3;
	sum += val4;
	sum += val5;

	printf("sum: %d\n", sum);
	printf("avg: %5.1f\n", (double) sum / 5);

	return (0);
}
