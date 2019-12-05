/*
 * File: list0607.c
 * Description: void function
 * Reference: Ming Jie C
 */

#include <stdio.h>

void put_starts(int num)
{
	while (num-- > 0)
		putchar('*');
}

int main(void)
{
	int i, ln;
	printf("Triganle level: ");
	scanf("%d", &ln);

	for (i = 1; i <= ln; i++) {
		put_starts(i);
		putchar('\n');
	}

	return (0);
}
