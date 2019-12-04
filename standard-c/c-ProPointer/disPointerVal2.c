/* 
 * file name: disPointerVal2.c
 * Description: display pointer values
 * From OReilly Understanding and Using C Pointers, page 9
 *
 * Table 1-2. Field specifiers
 * %x  displays the value s as a hexadecimal number
 * %o  displays the value as an octal number
 * %p  displays the value in an implementation-specific;
 *     typically as hexadecimal number
 */
#include <stdio.h>
int main(void) {
	
	/* define variable */
	int num = 0;
	int *pi = &num;
	
	/* output */
	printf("Address of pi: %d  Value: %d\n", &pi, pi);
	printf("Address of pi: %x  Value: %x\n", &pi, pi);
	printf("Address of pi: %o  Value: %o\n", &pi, pi);
	printf("Address of pi: %p  Value: %p\n", &pi, pi);

	return 0;
}
