/*
 * File name: cpdao0201.c
 * Description: C指针编程之道, Page 24
 * Author: Jedi Chou, 2016.7.12 19:25 PM
 */

#include <stdio.h>

int main(void)
{
	char str[] = "China BeiJing LongMai";

	char *pstr;		// 定义一个char指针
	pstr = &str[6]; // 初始化char指针，使指针变量pstr指向数组str
	
	printf("str: %s\n", str);
	printf("pstr 指向str[6]: %c\n", *pstr);

	return 0;
}
