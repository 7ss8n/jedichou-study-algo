/* MingJie C - list0403.c */

#include <stdio.h>

int main(void)
{
	int num, dig = 0;

	/* Accept user input */
	do {
		printf("Pls input an integer: ");
		scanf("%d", &num);
		puts( num < 0 ? "Number must be greater than zero" : "");
	} while (num < 0);

	/* Calculate */
	do {
		num /= 10;
		dig++;
	} while (num > 0);
	printf("Result is %d.\n", dig);

	return (0);
}
