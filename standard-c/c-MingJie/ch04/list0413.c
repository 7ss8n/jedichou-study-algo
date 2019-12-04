/* MingJie C - list0413.c */

#include <stdio.h>

int main(void)
{
	int i, num;

	printf("Pls input an integer: ");
	scanf("%d", &num);

	printf("%d\n", num);

	for (i = 1; i <= num; i++)
		putchar('*');
	putchar('\n');

	return (0);
}
