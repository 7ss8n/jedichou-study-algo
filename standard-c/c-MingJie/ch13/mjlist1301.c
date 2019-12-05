/*
 * File: mjlist1301
 * Description: open or close file
 */

#include <stdio.h>

int main(void)
{
	FILE *fp;
	fp = fopen("abc", "r");

	if (fp == NULL)
		printf("File open failed.\n");
	else
		fclose(fp);

	return (0);
}
