/*
 * File: fast.c
 * From: Linux C programming
 */
#include <stdio.h>

int func(int a) {
	return a+1;
}

int main(void) {
	int res;
	res = func(1) * 3;
	printf("the result: %d\n", res);
	return 0;
}
