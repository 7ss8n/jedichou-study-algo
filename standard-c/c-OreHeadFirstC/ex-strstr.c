/* head first c - how to use strstr() */
#include <stdio.h>
int main()
{
	char *s0 = "dyfunctional";
	char *s1 = "fun";
	if (strstr(s0, s1))
		puts("find it!\n");
	return 0;
}
