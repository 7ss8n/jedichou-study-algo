/* MingJie C - list0408.c */

#include <stdio.h>

int main(void)
{
	int no;

	printf("Pls input an integer: ");
	scanf("%d", &no);

	while (no >= 0)
		printf("%d ", no--);
	putchar('\n');

	return (0);
}
