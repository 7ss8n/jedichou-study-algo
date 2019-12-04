/* File: list0605.c, 
 * From: MingJie C
 * Description: Use while to modify pow function.
 */

#include <stdio.h>

double pow(double dx, int num)
{
	double r = 1.0;
	while (num-- > 0)
		r *= dx;
	return r;
}

int main(void)
{
	int n;
	double x;

	/* User input */
	printf("Pls input a float: ");   scanf("%lf", &x);
	printf("Pls input a integer: "); scanf("%d", &n);

	/* Output calculate result */
	printf("pow(%.2f, %d) = %.2f\n", x, n, pow(x, n));

	return 0;
}
