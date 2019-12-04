// From Wrox Begin C
// Program 9.8 A Program to list the command line arguments

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i = 0;
	printf("Program name: %s\n", argv[0]);
	
	// int i = 0;
	for(i=0; i<argc; i++)
		printf("Argument %d: %s\n", i, argv[i]);

	return 0;
}

// Todo:
// If commented line 8 and uncommented line 11, cl will pop errors.
// There has no error when use gcc complie.
