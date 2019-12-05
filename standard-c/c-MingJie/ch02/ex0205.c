/* MingJie C - ex0205.c */

#include <stdio.h>

int main(void)
{
	int ia, ib;

	puts("Pls input two integers");
	printf("ia: "); scanf("%d", &ia);
	printf("ib: "); scanf("%d", &ib);

	double output = (double)ia/ (double)ib;
	printf("a/b*100%% = %f%%\n", output);

	return (0);
}
