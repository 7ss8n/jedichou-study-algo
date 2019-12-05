#include <stdio.h>
#define LEN 10
int main(void)
{
	char i;
	char str[LEN] = "LongMai";
	printf("%s\n", str);
	for (i=0; i<LEN; i++)
	{
		printf("%c\t%d\t:%p\n", str[i], str[i], &str[i]);
	}
	return 0;
}
