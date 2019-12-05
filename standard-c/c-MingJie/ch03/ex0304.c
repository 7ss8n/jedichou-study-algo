/* MingJie C - ex0304.c */

#include <stdio.h>

int main(void)
{
	int va, vb;

	puts("Pls input two integers: ");
	printf("va: "); scanf("%d", &va);
	printf("vb: "); scanf("%d", &vb);

	if (va >  vb) puts("va > vb");
	if (va == vb) puts("va == vb");
	if (va <  vb) puts("va < vb");

	return (0);
}
