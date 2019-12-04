/* Basic C problem
 * file: bsc1201
 * read a char and write to file
 */

#include <stdio.h>

int main()
{
	/* variables define */
	FILE *fp; /* file pointer */
	char c;
	
	/* get key input */
	printf("Pls input a char: ");
	scanf("%c", &c);

	/* if has a file error */
	if ( (fp=fopen("file.txt", "w")) == NULL )
	{
		printf("Open file error.\n");
		exit(1);
	}

	/* write char to file and close file */
	fputc(c, fp);
	fclose(fp);

	/* exit */
	return 0;
}
