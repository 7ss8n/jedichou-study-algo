/*
 * File: addr.c
 * Descprition: Verify variables address change when program execute.
 * From: Linux C Program - The King Return
 * Study: Jedi Chou, skyzhx@163.com
 * Date: 2019.1.15 15:27 PM
 */
 
#include <stdio.h>
int main()
{
	int a, b;
	printf("0x%x\n", &a);
	printf("0x%x\n", &b);
}

