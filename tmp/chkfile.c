/*
 * File: chkfile.c
 * Description: check file exist.
 * Notice: This file will get an error at IA-32 architecture.
 */

#include <errno.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *fp;

	fp = fopen(argv[1], "r");
	if (fp == NULL) 
	{
		fprintf(stderr, "%s\n", strerror(errno));
		return errno;
	}

	printf("file exist\n");
	fclose(fp);
	return 0;
}
