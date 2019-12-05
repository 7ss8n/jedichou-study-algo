/* MingJie C - list0510.c */

#include <stdio.h>

#define MAX 5

int main(void) {
	
	/* Define variables */
	int i;
	int rate[MAX];
	int sum = 0;

	/* accept user input */
	puts("Pls input numbers.");
	for (i=0; i<MAX; i++) {
		printf("%2d: ", i+1);
		scanf("%d", &rate[i]);
		sum += rate[i];
	}

	/* output */
	printf("Total:%5d\n", sum);
	printf("Avg  :%5.1f\n", (double)sum/MAX);

	return 0;
}
