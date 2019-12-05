/*
 * Question: sets A and B are defined by
 * A = {3, 5, 7, 8} and B = {x, y, z}
 * 
 * Answer by true or false
 * a) A contains 3
 * b) B contains 3
 * c) A without x
 * d) B contains y
 * e) B contains z
 * 
 * Tiny C Compiler 0.9.27 - Copyright (C) 2001-2006 Fabrice Bellard
 * 
 * Under Windows 10 sub linux
 *  jedi@MIS-F3216338:/mnt/d$ tcc -run c-sets-quiz-20181227.c
 *  A: [3, 5, 7, 8]
 *  B: [7, 3, 9]
 *  A contains 3: true
 *  B contains 3: true
 *  A without x: true
 *  B contains y: false
 *  B contains z: false
 */

#include <stdbool.h>
#define ASIZE 4
#define BSIZE 3

bool Contain(int arr[], int elt, int MAX);
void printArr(int arr[], char* name, int MAX);

int main(void)
{
	// define variables
	int A[ASIZE] = {3, 5, 7, 8};
	int B[BSIZE] = {7, 3, 9};
	int x=10, y=11, z=12;

	// display array
	printArr(A, "A", ASIZE);
	printArr(B, "B", BSIZE);
	
	// answer questions
	printf("A contains 3: %s\n", Contain(A, 3, ASIZE) ? "true" : "false");
	printf("B contains 3: %s\n", Contain(B, 3, ASIZE) ? "true" : "false");
	printf("A without x: %s\n", !Contain(A, x, ASIZE) ? "true" : "false");
	printf("B contains y: %s\n", Contain(B, y, BSIZE) ? "true" : "false");
	printf("B contains z: %s\n", Contain(B, z, BSIZE) ? "true" : "false");
}

bool Contain(int arr[], int elt, int MAX)
{
	for (int i=0; i<MAX; i++)
		if (arr[i] == elt)
			return true;
	return false;
}

void printArr(int arr[], char* name, int MAX)
{
	printf("%s: [", name);
	for (int i=0; i<MAX; i++)
		i == MAX-1 ? printf("%d", arr[i]) : printf("%d, ", arr[i]);
	printf("]\n");
}
