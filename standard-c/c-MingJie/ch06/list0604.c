/* File: list0604.c, 
 * From: MingJie C
 * Description: create a pow function.
 */

#include <stdio.h>

double pow(double dx, int num)
{
	int i;
	double tmp = 1.0;
	for (i = 1; i <= num; i++)
		tmp *= dx;
	return (tmp);
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
