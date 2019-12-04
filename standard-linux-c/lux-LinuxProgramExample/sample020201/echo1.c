/*
 * Linux Program by Example.pdf
 * Chapter 2.2.1 The V7 echo program
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	register int i, nflag;
	
	nflag = 0;
	if (argc > 1 && argv[1][0] == '-' && argv[1][1] == 'n') {
		nflag++;
		argc--;
		argv++;
	}
	for (i=1; i<argc; i++) {
		fputs(argv[i], stdout);
		if (i < argc-1)
			putchar(' ');
	}
	if (nflag == 0)
		putchar('\n');
	exit(0);
}
