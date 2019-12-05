#include <stdio.h>
void main()
{
	int x[6], a=0, b, c=14;
	do
	{
		x[a] = c % 2;
		a++;
		c /= 2;
	} while (c >= 1);
	for (b=a-1; b>=0; b--) printf("%d ", x[b]);
	printf("\n");
}
