/*
 * File name: cpdao0202.c
 * Description: C指针编程之道, Page 26
 * Author: Jedi Chou, 2016.7.12 19:31 PM
 */

#include <stdio.h>

int main(void)
{
	char title[] = "China BeiJing LongMai";
	char *p_title;

	printf("title: %s\n", title);
	
	p_title = title;
	printf("p_title->title: %s\n", p_title);
	printf("*p_title-> %s\n\n", p_title);
	printf("&title = %p\n", &title);
	printf("p_title = %p\n", p_title);
	printf("&title[0] = %p\n", &title[0]);

	return 0;
}