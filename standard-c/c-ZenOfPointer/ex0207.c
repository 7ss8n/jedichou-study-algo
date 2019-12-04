#include <stdio.h>
int main(void)
{
	char ver[] = "Gate Ver1.00 20100427";
	char *p_ver;
	p_ver = ver;
	while (*p_ver)
	{
		printf("%c:%p\n", *p_ver, p_ver);
		*p_ver++;
	}
	printf("\n");
	return 0;
}
