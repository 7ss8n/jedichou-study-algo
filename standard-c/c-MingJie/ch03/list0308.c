/* MingJie C - list0308.c */

#include <stdio.h>

int main(void)
{
	int vx;

	printf("Input an integer: ");
	scanf("%d", &vx);

	if (vx % 10 == 5)
		puts("The number of digits is 5");

	return (0);
}
