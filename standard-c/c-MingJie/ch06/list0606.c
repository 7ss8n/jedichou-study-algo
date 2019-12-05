/*
 * File: list0606.c
 * Reference: Ming Jie C
 * Description: Call function at function.
 */

#include <stdio.h>

int max4(int x, int y, int z, int w) {
	return max(max(x, y), max(z, w));
}

int max(int n1, int n2) {
	return n1 > n2 ? n1 : n2;
}

int main(void) {
	
	/* Define */
	int kx, ky, kz, kw;

	/* Accept user input */
	printf("x: "); scanf("%d", &kx);
	printf("y: "); scanf("%d", &ky);
	printf("z: "); scanf("%d", &kz);
	printf("w: "); scanf("%d", &kw);

	/* Print max value */
	printf("The max is: %d\n", max4(kx, ky, kz, kw));

	return (0);
}
