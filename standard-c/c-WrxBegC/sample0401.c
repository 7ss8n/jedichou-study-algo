/* Program 4.1 List ten integers */
#include <stdio.h>

int sample0401(void)
{
	int count = 1;
	for(; count <= 10; ++count) {
		printf("\n%d", count);
	}
	printf("\nWe have finished.\n");
	return 0;
}
