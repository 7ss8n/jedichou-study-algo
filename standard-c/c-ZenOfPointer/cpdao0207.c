/*
 * File name: cpdao0207.c
 * Description: C指针编程之道, Page 35-36
 * Author: Jedi Chou, 2016.7.12 20:11 PM
 */

#include <stdio.h>

int main(void)
{
	char ver[] = "Gate Ver1.00 20100427";
	char *p_ver;
	p_ver = ver;
	while (*p_ver) {
		printf("%c", *p_ver);
		p_ver++;
	}
	
	printf("\n");

	return 0;
}
