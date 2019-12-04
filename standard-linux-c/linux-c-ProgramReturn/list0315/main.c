/*
 * File: main.c
 * Desc: 

#include <stdio.h>

extern int array[];
extern int sum();
extern int get_max();
extern void print();

int main(void)
{
	int all = sum(), max = get_max();
	print();
	printf("sum: %d\n", all);
	printf("max: %d\n", max);
	
	return 0;
}