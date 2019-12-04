#include <stdio.h>

int main() {
	int num = 0;
	int *p = &num;
	
	printf("num addss:%d, val:%d\n", &num, num);
	printf("p addss:%d, val:%d\n", &p, p);
	
	return 0;
}

