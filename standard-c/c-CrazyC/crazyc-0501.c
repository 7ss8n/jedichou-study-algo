/* Crazy C - code example 5-1 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int counter = 0;
	
	while( counter < 3) {
		counter += 1;
		printf("The %d times\n", counter);
	}
	
	system("PAUSE");
	return 0;
}
