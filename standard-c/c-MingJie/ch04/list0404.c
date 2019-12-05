/* MingJie C - list0404.c */

#include <stdio.h>

int main(void)
{
	int number = 1;
	int sum = 0;

	do {
		sum += number;
		number += 1;
	} while (number <= 5);

	printf("sum(1-5) = %d\n", sum);

	return (0);
}
