/* MingJie C - list0603.c */

#include <stdio.h>

int sqr(int x) { return x*x; }
int diff(int x, int y) { return x > y ? x-y : y-x; }

int main(void) {
	int kx, ky, kx2, ky2;

	puts("Pls input two integer.");
	printf("kx: "); scanf("%d", &kx);
	printf("ky: "); scanf("%d", &ky);

	/* Process temporary variable */
	kx2 = sqr(kx);
	ky2 = sqr(ky);
	
	/* Output */
	printf("diff of square: %d\n", diff(kx2, ky2));

	return 0;
}
