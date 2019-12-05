/* MingJie C - list0411.c */

#include <stdio.h>

int main(void)
{
	/* Define variables */
	int i = 0;
	int sum = 0;
	int num, tmp;

	/* Get use input number */
	printf("input an integer: ");
	scanf("%d", &num);

	/* accept use values */
	while ( i < num ) {
		printf("No. %d: ", ++i);
		scanf("%d", &tmp);
		sum += tmp;
	}

	/* process sum and avg */
	printf("sum value: %d\n", sum);
	printf("avg value: %.2f\n", (double) sum / num);

	return (0);
}
