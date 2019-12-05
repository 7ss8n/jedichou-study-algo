/* File: ex0603.c
 * Descript: Write a cube function.
 */

#include <stdio.h>

int cube(int n) { return n*n*n; }

int main(void) {
	int in;
	printf("Pls input a num: "); scanf("%d", &in);
	printf("cube(n): %d\n", cube(in));
	return 0;
}
