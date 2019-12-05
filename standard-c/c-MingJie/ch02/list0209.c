/* MingJie C - list0209 */

#include <stdio.h>

int main(void)
{
	double dx, dy;

	puts("Pls input two float.");
	printf("dx: "); scanf("%lf", &dx);
	printf("dy: "); scanf("%lf", &dy);

	printf("avg(dx, dy)=%f\n", (dx+dy)/2.0);

	return (0);
}
