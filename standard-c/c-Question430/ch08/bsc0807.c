/*
 * bsc0807.c
 * SPEC: use point modify str and output to screen
 */

#include <stdio.h>

void main()
{
	/* define a str and output */
	char *p = "Hello C! ";
	puts(p);

	/* change content and output */
	p = "Hello everybody!";
	puts(p);
}
