/*
 * File name: cpdao0203.c
 * Description: C指针编程之道, Page 27
 * Author: Jedi Chou, 2016.7.12 19:33 PM
 */

#include <stdio.h>

int main(void)
{
	char str[] = "C language pointer";
	char *p_str;
	p_str = str;

	while (*p_str) {
		printf("%c: %p\n", *p_str, p_str);
		*p_str++;
	}

	return 0;
}