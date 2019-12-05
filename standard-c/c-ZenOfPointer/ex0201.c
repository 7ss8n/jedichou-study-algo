#include <stdio.h>
int main(void)
{
	char str[] = "China Beijing LongMai";
	char *pstr;
	pstr = &str[6];

	printf("str: %s\n", str);
	printf("pstr -> str[6]: %c\n", *pstr);

	return 0;
}
