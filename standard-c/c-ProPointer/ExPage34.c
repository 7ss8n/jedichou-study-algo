/* From O'Reiily Understanding and Using C Pointers - Page 34 */
#include <stdio.h>
int main() {
	int *pi = (int*)malloc(sizeof(int));
	*pi = 5;
	printf("*pi: %d\n", *pi);
	free(pi);
}
