#include <stdio.h>
#define VER_LEN 22
int main(void)
{
	char ver[VER_LEN] = "Gate Ver1.00 20100427";
	char idx, *p_ver;
	for (idx=0; idx<VER_LEN; idx++)
	{
		printf("%c", ver[idx]);
	}
	printf("\n");
	p_ver = ver;
	while (*p_ver)
	{
		printf("%c", *p_ver);
		*p_ver++;
	}
	printf("\n");	
	return 0;
}
