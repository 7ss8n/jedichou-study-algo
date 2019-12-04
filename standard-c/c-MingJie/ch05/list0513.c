/* MingJie C - list0513.c */

#include <stdio.h>

#define MAX 80

int main(void)
{
	/* Define variables */
	int i, j;
	int num;				/* fact student numbers */
	int score[MAX];			/* score array */
	int distrib[11] = {0};	/* socre distrib result */

	/* Get student numbers */
	printf("Pls input student number: ");
	do {
		scanf("%d", &num);
		if (num <1 || num > MAX)
			printf("Numbers between at [1 to %d]: ", MAX);
	} while (num <1 || num > MAX);

	/* Get student's score */
	puts("Pls input every student's score.");
	for (i=0; i<num; i++) {
		printf("Id[%2d]: ", i+1);
		do {
			scanf("%d", &score[i]);
			if (score[i] < 0 || score[i] > 100)
				printf("the score between at [0-100]. ");
		} while (score[i] < 0 || score[i] > 100);
		distrib[ score[i]/10 ]++;
	}

	/* print table header */
	puts("\nscore distrib");

	/* output distrib */
	for (i=10; i>=0; i--) {

		if (i == 10) 
			printf("      100: ");
		else 
			printf("%3d - %3d: ", i*10, i*10+9);

		for (j=0; j<distrib[i]; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
