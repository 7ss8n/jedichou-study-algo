#include <stdio.h>
#include <stdlib.h>

int multiplayelements(int array[], int size) {
	int mult = 1, i = 0;
	for(; i<size; i++)
		mult *= array[i];
	return mult;
}

int main() {
	int adt[] = {1,2,3,4}, result=0;
	int size = sizeof(adt)/sizeof(adt[0]);
	result = multiplayelements(adt, size);
	printf("%d\n", result);
	return 0;
}
