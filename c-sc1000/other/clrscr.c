#include <stdio.h>
int main(void)
{
	printf("Use a character to clear screen\n");
	printf("\033[2J"); // use this string to clear screen at linux
	return 0;
}
