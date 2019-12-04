/* O(N*N) example */
#include <stdio.h>
int main()
{
	int i, j, n=10, s=0;
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			s+=i;
	printf("s=%d\n", s);
	return 0;
}
