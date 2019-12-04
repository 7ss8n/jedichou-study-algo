/* Program 2.11 Finding the limits */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	printf("char from %d to %d\n", CHAR_MIN, CHAR_MAX);
	printf("unsigned char from %d to %d\n", 0, UCHAR_MAX);
	printf("short from %d to %d\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short from %d to %d\n", 0, USHRT_MAX);
	return 0;
}
