/* File: a.c
 * Desc: compile erro with duplicate main function.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("hello world\n");
	return 0;
}

/*
 * gcc a.c b.c -o a.out
 * Error message: 
 *
 * tmp/ccOAbvyh.o: In function `main':
 * b.c:(.text+0x0): multiple definition of `main'
 * /tmp/ccyiC6mc.o:a.c:(.text+0x0): first defined here
 * collect2: error: ld returned 1 exit status
 */

