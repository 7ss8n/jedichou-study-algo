/* 
 * MingJie C - ex0311.c
 * Use switch modify list0304.c
 */

#include <stdio.h>

int main(void)
{
	int no;

	printf("Pls input an integer.");
	scanf("%d", &no);

	switch (no % 2) {
		case 1: puts("num is odd number");  break;
		case 0: puts("num is even number"); break;
	}

	return (0);
}
