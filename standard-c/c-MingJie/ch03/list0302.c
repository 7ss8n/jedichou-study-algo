/* MingJie C - list0302.c */

#include <stdio.h>

int main(void)
{
	int num;

	printf("Pls input an integer: ");
	scanf("%d", &num);

	if (num % 2)
		puts("num is odd");

	return (0);
}
