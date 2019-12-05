/* File operation
 * bsc1202.c
 * SPEC:
 *  a. get char from keyboard.
 *  b. write char to file.
 *  c. until * stop write.
 */

#include <stdio.h>

int main()
{
	/* define variables */
	FILE *fp;
	char c;

	/* process file error */
	if ( (fp=fopen("file.txt", "w")) == NULL)
	{
		printf("Open file error.\n");
		exit(1);
	}

	/* write char to file */
	c = getchar();
	while ( c != '*')
	{
		fputc(c, fp);
		c = getchar();
	}
	
	/* close file */
	fclose(fp);

	/* exit */
	return 0;
}
