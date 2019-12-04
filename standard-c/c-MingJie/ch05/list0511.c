/* MingJie C - list0511.c */

#include <stdio.h>

#define MAX 5

int main(void) {
	
	/* Define variables */
	int i;
	int rate[MAX];
	int max, min;

	/* Get user input */
	puts("Pls input numbers.");
	for (i=0; i<MAX; i++) {
		printf("%2d: ", i+1);
		scanf("%d", &rate[i]);
	}

	/* Iterate array and get min and max value */
	min = max = rate[0];
	for (i=1; i<MAX; i++) {
		if(rate[i] > max) max=rate[i];
		if(rate[i] < min) min=rate[i];
	}

	/* output min/max */
	printf("max:%d\n", max);
	printf("min:%d\n", min);

	return 0;
}
