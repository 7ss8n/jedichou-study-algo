/*
 * File name: cpdao0201.c
 * Description: Cָ����֮��, Page 24
 * Author: Jedi Chou, 2016.7.12 19:25 PM
 */

#include <stdio.h>

int main(void)
{
	char str[] = "China BeiJing LongMai";

	char *pstr;		// ����һ��charָ��
	pstr = &str[6]; // ��ʼ��charָ�룬ʹָ�����pstrָ������str
	
	printf("str: %s\n", str);
	printf("pstr ָ��str[6]: %c\n", *pstr);

	return 0;
}
