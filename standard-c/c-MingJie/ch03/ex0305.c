/* MingJie C - ex0305.c */

#include <stdio.h>

int main(void)
{
	int va, vb, vc, min;

	puts("Pls input 3 nums: ");
	printf("va: "); scanf("%d", &va);
	printf("vb: "); scanf("%d", &vb);
	printf("vc: "); scanf("%d", &vc);

	min = va;
	if (min > vb) min = vb;
	if (min > vc) min = vc;

	printf("The min value is %d.\n", min);

	return (0);
}
