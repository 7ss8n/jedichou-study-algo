/* MingJie C - list0519.c */

#include <stdio.h>

int main(void)
{
	/* Define variables */
	int i, no;
	int prime[500];
	int ptr = 0;
	unsigned long counter = 0;

	/* Set 1st and 2nd element of prime arrary */
	prime[ptr++] = 2;
	prime[ptr++] = 3;

	for (no = 5; no <= 1000; no += 2) {
		int flag = 0;
		for (i = 1; counter++, prime[i] * prime[i] <= no; i++) {
			counter++;
			if ( no % prime[i] == 0) {
				flag = 1;
				break;
			}
		}
		if (!flag)
			prime[ptr++] = no;
	}

	for (i = 0; i < ptr; i++)
		printf("%d\n", prime[i]);

	printf("Counter value: %d\n", counter);

	return 0;
}
