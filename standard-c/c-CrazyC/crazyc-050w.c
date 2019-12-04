/* Crazy C - code example (death loop) */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 1;
	while( a = 0 )
		;
	
	printf("%d\n", a);
	
	system("PAUSE");
	return 0;
}
