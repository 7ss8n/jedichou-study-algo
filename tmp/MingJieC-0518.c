/*
 * File Name: MingJieC-0518.c
 * Description: Find prime that less than 1000, Vesion 4.
 */
#include <stdio.h>

int main(void)
{
	int i, no;
	int prime[500];
	int ptr = 0;
	unsigned long counter = 0;

	/* First prime, and second prime */
	prime[ptr++] = 2;
	prime[ptr++] = 3;

	/* Find other prime */
	for (no=5; no <= 1000; no += 2) {
		for (i=1; i < ptr; i++) {
			counter++;
			if (no % prime[i] == 0)
				break;
		}

		if (ptr == i) {
			prime[ptr++] = no;
		}
	}

	/* Output all prime */
	for (i=0; i < ptr; i++) {
		if (i == ptr - 1) {
			printf("%d\n", prime[i]);
		}
		else {
			printf("%d, ", prime[i]);
		}
	}

	/* Show number that MUL operations executed */
	printf("How many MUL operations executed: %lu\n", counter);

	return 0;
}
