/* MingJie C - list0414.c */

#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int num, tmp;

	printf("Input an integer: ");
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		printf("No.%d:", i + 1);
		scanf("%d", &tmp);
		sum += tmp;
	}

	printf("sum value: %d\n", sum);
	printf("avg value: %.2f\n", (double)sum/num);

	return (0);
}
