/* MingJie C - list0406.c */

#include <stdio.h>

int main(void)
{
	int no = 1;
	int sum = 0;

	do {
		sum += no;
		no++;
	} while ( no <= 5);

	printf("sum(1:5)=%d\n", sum);

	return (0);
}
