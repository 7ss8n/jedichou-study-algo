/* MingJie C - list0303.c */

#include <stdio.h>

int main(void)
{
	int vx;

	printf("Pls input an integer: ");
	scanf("%d", &vx);

	if (vx % 5)
		puts("vx can not div by 5");
	else
		puts("vx can div by 5");

	return (0);
}
