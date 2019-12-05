/* MingJie C - list0410.c */

#include <stdio.h>

int main(void)
{
	int no;

	printf("Pls input an integer: ");
	scanf("%d", &no);

	while (no-- > 0)
		putchar('*');
	putchar('\n');

	return (0);
}
