/* file name: display pointer values */
#include <stdio.h>
int main(void) {
	int num = 0;
	int *pi = &num;
	printf("Address of num: %d  Value: %d\n", &num, num);
	printf("Address of pi : %d  Value: %d\n", &pi, pi);
	return 0;
}
