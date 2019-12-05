int a = 123;
int main(void) { return 0;}

/*
 * > gcc c1.c c2.c
 *
 * [error message]
 * /tmp/ccdbKbYL.o:(.data+0x0): multiple definition of `a'
 * /tmp/ccoBIcVf.o:(.data+0x0): first defined here
 * collect2: error: ld returned 1 exit status
 */
