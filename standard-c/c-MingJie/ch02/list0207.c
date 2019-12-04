/* 
 * MingJie C - list0207.c
 * use double variable to calculate
 */

#include <stdio.h>

int main(void)
{
	/* define variables */
	double vx, vy;

	// accept user inputs
	puts("Pls input two doubles");
	printf("vx: "); scanf("%lf", &vx);
	printf("vy: "); scanf("%lf", &vy);

	/* output */
	printf("vx+vy=%f\n", vx+vy);
	printf("vx-vy=%f\n", vx-vy);
	printf("vx*vy=%f\n", vx*vy);
	printf("vx/vy=%f\n", vx/vy);
	
	/* 
	 * Notice: will be get an error
	 *   message -> invalid operands for binary operation
	 * printf("vx%%vy=%f\n", vx%vy);
	 */

	/* program terminate */
	return (0);
}
