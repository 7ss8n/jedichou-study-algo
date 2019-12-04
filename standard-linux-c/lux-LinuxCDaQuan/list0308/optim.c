/*
 * File: optim.c
 * From: Linux C Programming
 */

#include <stdio.h>

int count = 0; /* global counter variable */

int func(int a) {
	count++;
	return a+1;
}

int main(void) {
	int res;
	res = 3 * func(1);
	printf("the result : %d\n", res);
	printf("the counter: %d\n", count);
	return 0;
}
