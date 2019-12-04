/* MingJie C - list0409.c */

#include <stdio.h>

int main(void)
{
	int i, no;

	printf("Pls input an integer: ");
	scanf("%d", &no);

	i = 0;
	while (i <= no)
		printf("%d ", i++);
	putchar('\n');

	return (0);
}
