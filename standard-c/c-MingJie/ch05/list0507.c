/* MingJie C - list0507.c */

#include <stdio.h>

int main(void) {

	int i, vx[5];

	for (i=0; i<5; i++) {
		printf("vx[%d]: ", i);
		scanf("%d", &vx[i]);
	}

	for (i=0; i<5; i++)
		printf("vx[%d]=%d\n", i, vx[i]);

	return 0;
}
