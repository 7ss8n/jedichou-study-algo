/* MingJie C - list0601.c */

#include <stdio.h>

int max(int x, int y) { return x > y ? x : y; }

int main(void) 
{
	int na = 30, nb = 15;
	int nc = 14, nd = 33;
	printf("max1: %d\n", max(na, nb));
	printf("max2: %d\n", max(nc, nd));
	return 0;
}

