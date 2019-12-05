/*
 * File name: cpdao0205.c
 * Description: C指针编程之道, Page 31
 * Author: Jedi Chou, 2016.7.12 20:02 PM
 */

#include <stdio.h>
#define LEN 10

int main(void)
{
	int i =0;
	char s[LEN] = "LongMai"; for (; i<LEN; i++) printf("%c: %p\n", s[i], &s[i]); printf("\n");
	char t[LEN]; for (i=0; i<LEN; i++) printf("%c: %p\n", t[i], &t[i]);
	return 0;
}