/* MingJie C - list0305.c
 * Check input number is zero */

#include <stdio.h>

int main(void)
{
	int num;

	printf("Pls input an integer: ");
	scanf("%d", &num);

	if (num)
		puts("The num is not zero");
	else
		puts("The num is zero");

	return (0);
}
