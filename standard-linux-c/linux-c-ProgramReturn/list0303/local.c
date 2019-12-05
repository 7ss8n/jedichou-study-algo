// list 3-3, local.c
// Linux C program - the return of the King.

#include <stdio.h>

int add(int a, int b) { return a+b; }
int main(void) {
	
	// init array	
	int array[5];
	int i = 0;

	// assign value to element of array
	while (i < 5) {
		int res;
		res = add(i, 1);
		array[i] = res;
		i++;
	}

	for (i = 0; i < 5; i++) {
		printf("array[%d]: %d\n", i+1, array[i]);
	}

	return 0;
}
