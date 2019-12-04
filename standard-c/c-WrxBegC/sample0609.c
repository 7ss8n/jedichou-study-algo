/* Program 6.9 Finding occurrences of one string in another */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char text[100];		/* Input buffer for string to be searched */
	char substring[40];	/* Input buffer for string sought */

	/* Get text */
	printf("Enter the string to be searched [<100]:\n");
	fgets(text, sizeof(text), stdin);

	/* Get substring*/
	printf("Enter the string sought [<40]:\n");
	fgets(substring, sizeof(substring), stdin);

	/* Convert both string to uppercase */
	for( int i=0; ( text[i] = toupper(text[i]) ); i++);
	for( int i=0; ( substring[i] = toupper(substring[i]) ); i++);

	/* Output result */
	printf("The second string %s found in the first",
		   ( (strstr(text, substring) == NULL) ? "was not":"was")
		  );

	return 0;
}
