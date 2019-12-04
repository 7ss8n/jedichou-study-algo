/* MingJie C - list0512.c */

#include <stdio.h>

#define MAX 5

int main(void)
{
	/* Define variables */
	int i;
	int snum = 0;
	int rate[MAX];
	int succes[MAX];

	/* Get use input */
	for (i=0; i<MAX; i++) {
		printf("%2d: ", i+1);
		scanf("%d", &rate[i]);
		if (rate[i] > 60)
			succes[snum++] = i;
	}

	/* output */
	puts("\n");
	puts("success");
	puts("-------");
	for (i=0; i<snum; i++)
		printf("%2d: %3d\n", succes[i]+1, rate[succes[i]]);

	return 0;
}
