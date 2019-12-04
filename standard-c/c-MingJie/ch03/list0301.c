/* MingJie C - list0301.c */

#include <stdio.h>

int main(void)
{
	int vx;

	printf("Pls input an integer: ");
	scanf("%d", &vx);

	if (vx % 5)
		puts("vx % 5 != 0");

	return (0);
}
