/* MingJie C - list0402.c */

#include <stdio.h>

int main(void)
{
	int num;

	/* Get a right user input */
	do {
		printf("Pls input an integer: ");
		scanf("%d", &num);
		puts( num < 0 ? "Integer must greater than zero" : "");
	} while ( num < 0);

	/* Reserve echo */
	puts("Reserve number is: ");
	do {
		printf("%d", num % 10);
		num = num / 10;
	} while (num > 0);
	puts("");

	return (0);
}
