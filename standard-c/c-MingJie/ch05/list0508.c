/* MingJie C - list0508.c */

#include <stdio.h>

int main(void) {
	
	/* variables define */
	int i;
	int vx[5];

	/* fill element */
	for (i=0; i<5; i++) {
		printf("vx[%d]: ", i);
		scanf("%d", &vx[i]);
	}

	/* swap twice */
	/* Jedi: the puzzle method */
	for (i=0; i<2; i++) {
		int temp = vx[i];
		vx[i]    = vx[4-i];
		vx[ 4-i] = temp;
	}

	/* output */
	for (i=0; i<5; i++)
		printf("vx[%d]=%d\n", i, vx[i]);

	return 0;
}
