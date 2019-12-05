/* head first c - use fgets replace scanf */
#include <stdio.h>
int main(void) {
	char a[5];
	printf("Pls input something:");
	fgets(a, sizeof(a), stdin);
	printf("You input: %s\n", a);
	printf("Integer size: %d\n", sizeof(1));
	return 0;
}
