// File: jedi-puzzle-20180419-2312.c
// Use bit operator to calculator 25 * 25
// Puzzle from jedichou at 2018.4.19 23:12 PM.

#include <stdio.h>

int main(void)
{
	int n = 25, result = 0;
	result = (n<<4) + (n<<3) + n; // right
//  result = n<<4 + n<<3 + n;     // wrong, get zero

	printf("%d\n", result);

	return 0;
}
