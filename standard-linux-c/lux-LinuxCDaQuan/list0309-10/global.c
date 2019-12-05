/*
 * File: global.c
 * From: Linux C Programming
 */

#include <stdio.h>

int i;

void f() {
	int a[10];
	/* 原书这里是100，但执行时会遇到错误 */
	for (i=0; i<10; i++)
		a[i] = i;
}

int main(void) {
	int counter = 0;
	for (;counter <= 100; counter++)
		f();
	printf("main function.\n");
	return 0;
}
