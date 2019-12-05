/*
 * File: local.c
 * From: Linux C Programming
 */

#include <stdio.h>

void f() {
	int i;
	int a[10];
	for (i=0; i<100; i++)
		a[i] = i;
}

int main(void) {
	f();
	return 0;
}
