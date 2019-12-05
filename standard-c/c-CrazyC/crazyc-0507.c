// Crazy C - code sample - 0507, page 146

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int m, n;
	int i;
	
	printf("Please input two integers\n");
	scanf("%d%d", &m, &n);
	
	// error process
	if ( m <= 0 || n <= 0) {
		printf("The input is wrong.\n");
		return 1;
	}
	
	// Notice:
	// 1. If you input [100000000000 3], you will spend 4 second to get result.
	//   1.1 And output is "1215752192 and 3 the [GongYueShu] is [1]".
	//   1.2 Please notice "100000000000" value change to "1215752192".
	// 2. If you input [3 100000000000], the result jump to screen right now.
	for( i=m; m%i != 0 || n%i != 0; i--)
	;

	printf("%d and %d the [GongYueShu] is [%d].\n", m, n, i);
	printf("%d and %d the [GongBeiShu] is [%d].\n", m, n, m / i * n);
	
	return 0;
}