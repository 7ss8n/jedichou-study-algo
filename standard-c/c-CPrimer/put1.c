/* C Primer - demo 11.10, put1.c */

#include <stdio.h>

/* don't change string */
void put1(const char *string) {
	while (*string != '\0')
		putchar(*string++);
}

int main(void) {
	
	/* define string */
	char msg1[50] = "This is a test for C Primer";
	char *msg2 = "Another string";

	/* output */
	put1(msg1);
	put1(msg2);

	return 0;
}
