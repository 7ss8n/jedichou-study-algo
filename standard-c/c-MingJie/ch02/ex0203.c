/*
 * MingJie C - ex0203.c
 *   read a float and echo it.
 */

#include <stdio.h>

int main(void)
{
	double fn;

	printf("Pls input a float: ");
	scanf("%lf", &fn);

	printf("fn=%f\n", fn);

	return (0);
}
