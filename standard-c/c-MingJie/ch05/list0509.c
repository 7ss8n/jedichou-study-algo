/* MingJie C - list0509.c */

#include <stdio.h>

int main(void) {
	
	/* Define variables */	
	int i;
	int rate[5];
	int sum = 0;

	/* Get values */
	for (i=0; i<5; i++) {
		printf("%2d: ", i+1);
		scanf("%d", &rate[i]);
		sum += rate[i];
	}

	/* Output */
	printf("Total: %5d\n", sum);
	printf("Avg  : %5.1f\n", (double)sum / 5);

	return 0;
}
