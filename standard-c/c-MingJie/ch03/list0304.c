/* MingJie C - list0304.c */

#include <stdio.h>

int main(void)
{
	int no;

	printf("Pls input an integer: ");
	scanf("%d", &no);

	if (no % 2)
		puts("no is odd");
	else
		puts("no is even");

	return (0);
}
