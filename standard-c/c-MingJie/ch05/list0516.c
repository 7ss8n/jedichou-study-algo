/* MingJie C - list0516.c */

#include <stdio.h>

int main(void)
{
	int i, no;
	unsigned long counter = 0;

	no = 2;
	printf("%d\n", no++);

	for ( ; no <= 2000; no += 2) {
		for (i=2; i<no; i++) {
			counter++;
			if (no % i == 0)
				break;
		}

		if ( no == i )
			printf("%d\n", no);
	}

	printf("Counter value: [%d]\n", counter);
}
