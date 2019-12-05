/* Program 6.6 Comparing strings */
#include <stdio.h>
#include <string.h>

int main(void)
{
	char word1[20];	/* Stores the first word */
	char word2[20];	/* Stores the second word */

	/* Read 1st word */
	printf("\nType in the first word (less than 20 characters):\n1: ");
	scanf("%19s", word1);

	/* Read 2nd word */
	printf("Type in the second word (less than 20 characters):\n2: ");
	scanf("%19s", word2);

	/* Compare the two words */
	if( strcmp(word1, word2) == 0 )
		printf("word1 same as word2\n");
	else
		/* Here has a bug - 2013.2.21 */
		printf("%s precedes %s",
			   ( strcmp(word1, word2) < 0 ) ? word1 : word2,
			   ( strcmp(word2, word1) < 0 ) ? word2 : word1
		);

	return 0;
}
