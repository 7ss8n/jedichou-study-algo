/* Program 6.3 Joining strings */
#include <stdio.h>

int main(void)
{
	char str1[40] = "To be or not to be";
	char str2[] = ",that is the question";
	int count1 = 0;		/* Length of str1 */
	int count2 = 0;		/* Length of str2 */

	/* Find the length of the first and second string */
	while( str1[count1] )
		count1++;
	while( str2[count2] )
		count2++;

	/* Check that we have enought space for both strings */
	if( sizeof str1 < count1 + count2 + 1)
		printf("\nYou can't put a quart into a pint pot.");
	else
	{
		/* Copy 2nd string to end of first */
		count2 = 0;
		while( str2[count2] )
			str1[count1++] = str2[count2++];
		str1[count1] = '\0';
		printf("\n%s\n", str1);
	}
				
	return 0;
}
