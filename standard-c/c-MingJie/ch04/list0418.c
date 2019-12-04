/* MingJie C - list0418.c */

#include <stdio.h>

int main(void)
{
	int i, j, ln;

	printf("tangle layer: ");
	scanf("%d", &ln);

	for (i = 1; i <= ln; i++) {
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}

	return (0);
}
