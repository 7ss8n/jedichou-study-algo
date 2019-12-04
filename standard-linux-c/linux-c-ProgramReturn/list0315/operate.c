/*
 * File: operate.c
 * Desc: define array operate function.
 */
 
#include <stdio.h>
#define MAX 5

int array[MAX] = { 2, 7, 6, 4, 8, };

/* Get sum of array */
int sum()
{
	int sum = 0;
	for (int i=0; i < MAX; i++)
		sum += array[i];
	return sum;
}

/* Get max of array */
int get_max()
{
	int max = array[0];
	for (int i=0; i<MAX; i++)
		if (array[i] > max)
			max = array[i];
	return max;
}

/* Print elements */
void print()
{
	for (int i=0; i<MAX; i++)
		printf("%d, ", array[i]);
	printf("\n");
}