/* MingJie C - list0515.c */

#define MAX 2000

int main(void)
{
	int i, no;
	unsigned long counter = 0;

	for (no=2; no<=MAX; no++) {
		for (i=2; i<no ; i++) {
			counter++;
			if (no % i == 0)
				break;
		}
		if (no == i)
			printf("%d\n", no);
	}

	printf("counter value: %lu\n", counter);

	return 0;
}
