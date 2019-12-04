/* Program 8.2 More scope in this one */
#include <stdio.h>

int main(void)
{
	int count = 0;  /* Declared in outer block */
	do
	{
		int count = 0;
		++count;
		printf("\ncount = %d", count);
	} while( ++count <= 8);

	printf("\ncount = %d\n", count);
	return 0;

}
