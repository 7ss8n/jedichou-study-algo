#include <stdio.h>
int main(void)
{
	char str[] = "C language pointer";
	char *p_str;
	p_str = str;
	while (*p_str)
	{
		printf("%c : %p\n", *p_str);
		p_str++;
	}
	return 0;
}
