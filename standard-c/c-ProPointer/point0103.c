#include <stdio.h>
int main() {
	int num = 512;
	int *p = &num;
	printf("int *p, addr: %d, val: %d\n");
	printf("int *p, addr: %x, val: %x\n");
	printf("int *p, addr: %o, val: %o\n");
	printf("int *p, addr: %p, val: %p\n");
	return 0;
}
