/*
 * file: bsc0809.c
 * desc: simple function poionter
 */

#include <stdio.h>

void main()
{
	/* define variables */
	int max();
	int x, y, z, (*p)() = max;

	/* get x and y, and use function point to call max */
	scanf("%d%d", &x, &y);
	z = (*p)(x, y);

	/* output */
	printf("the max is %d", z);
}

int max(int a, int b)
{
	return a > b ? a : b;;
}
