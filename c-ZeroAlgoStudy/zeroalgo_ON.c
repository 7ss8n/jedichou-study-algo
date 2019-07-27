/* O(N) example */
#include <stdio.h>
int main()
{
	int i, n=10, s=0;
	for(i=0; i<n; i++)
		s+=i;
	printf("s=%d\n", s);
	return 0;
}
