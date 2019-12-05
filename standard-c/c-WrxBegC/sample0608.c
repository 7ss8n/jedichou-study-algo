/* Program 6.8 Testing characters in a string */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char buffer[80];		/* Input buffer */
	int i = 0;				/* Buffer index */
	int num_letters = 0;	/* Number of letter in input */
	int num_digits = 0;		/* Number of digits in input */

	/* Read a string into buffer */
	printf("Enter a string (length less than 80): \n");
	gets(buffer);

	/* Process */
	while( buffer[i] != '\0' )
	{
		if( isalpha(buffer[i]) )
			num_letters++;
		if( isdigit(buffer[i]) )
			num_digits++;
		i++;
	}

	/* Output result */
	printf("\n%d letters in the \"%s\"",  num_letters, buffer);
	printf("\n%d digits in the \"%s\"",   num_digits,  buffer);

	return 0;
}
