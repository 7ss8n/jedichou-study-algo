/* MingJie C - list0518.c */

#include <stdio.h>

int main(void)
{
	/* define variables */
	int i, no;
	int prime[500];
	int ptr = 0;
	unsigned long counter = 0;

	/* add 1st and 2nd prime to prime array */
	prime[ptr++] = 2;
	prime[ptr++] = 3;

	for (no = 5; no <= 1000; no += 2) {
		for (i=1; i<ptr; i++) {
			counter++;
			if (no % prime[i] == 0)
				break;
		}
		if (ptr == i)
			prime[ptr++] = no;
	}

	for (i=0; i<ptr; i++)
		printf("%d\n", prime[i]);

	printf("counter value: [%d]\n", counter);

	return 0;
}
