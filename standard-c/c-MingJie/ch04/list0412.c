/* MingJie C - list0412.c */

#include <stdio.h>

int main(void)
{
	int i, no;

	printf("Pls input an integer: ");
	scanf("%d", &no);

	for (i = 0; i <= no; i++)
		printf("%d ", i);
	putchar('\n');

	return (0);
}
