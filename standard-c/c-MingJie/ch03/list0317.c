/* MingJie C - list0317.c */

#include <stdio.h>

int main(void)
{
	int num;

	printf("Pls input an integer.");
	scanf("%d", &num);

	if      (num % 3 == 0) puts("num % 3 = 0");
	else if (num % 3 == 1) puts("num % 3 = 1");
	else                   puts("num % 3 = 2");

	return (0);
}
