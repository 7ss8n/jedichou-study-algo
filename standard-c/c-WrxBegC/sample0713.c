/* Program 7.13 Generalizing string input */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const size_t BUFFER_LEN = 128;	/* Length of input buffer */
const size_t NUM_P = 100;		/* Maximum number of string */

int main(void)
{
	char buffer[BUFFER_LEN];	/* Input buffer */
	char *pS[NUM_P];			/* Initial a string */
	char *pbuffer = buffer;		/* Pointer to buffer */
	int i = 0;					/* Loop counter */

	//////////////////////////////////////////////////////////////////////////
	// Notice: (Jedi Chou, 2013-8-24 16:40)
	// gcc (GCC) 4.5.0
	//////////////////////////////////////////////////////////////////////////
	// char *pS[NUM_P] = { NULL };
	// Compile this comment will be happend a error:
	//   sample0713.c In function 'main':
	//   sample0713.c:12:2 error: variable-sized object may not be initialized
	//   sample0713.c:12:2 warning: exces elements in array initializer
	//   sample0713.c:12:2 warning: (near initialization for 'pS')
	//////////////////////////////////////////////////////////////////////////

	printf("\nYou can enter up to %u message each up to %u characters.", NUM_P, BUFFER_LEN-1);

	for( i=0; i<NUM_P; i++ )
	{
		pbuffer = buffer;	/* Set pointer to beginning of buffer */
		printf("\nEnter %s message, or press Enter to end\n", i>0 ? "another" : "a");

		/* Read a string of up to BUFFER_LEN characters */
		while( (pbuffer-buffer<BUFFER_LEN-1) && ( (*pbuffer++ = getchar()) != '\n') );

		/* Check for empty line indicating end of input */
		if( (pbuffer-buffer) < 2)
			break;

		/* Check for string too long */
		if( (pbuffer-buffer)==BUFFER_LEN && *(pbuffer-1)!='\n' )
		{
			printf("String too long - maximum %d characters allowed.", BUFFER_LEN);
			i--;
			continue;
		}
		*(pbuffer-1) = '\0';	/* Add terminator */

		pS[i] = (char*)malloc(pbuffer-buffer);	/* Get memory for string */
		if(pS[i] == NULL)						/* Check we actually got some... */
		{
			printf("\nOut of memory - ending program.");
			return 1;
		}

		/* Copy string from buffer to new memory */
		strcpy(pS[i], buffer);
	}

	/* Output all the string */
	printf("\nIn reverse order, the strings you entered are:\n");
	while( --i >= 0 )
	{
		printf("\n%s", pS[i] );	/* Display strings last to first */
		free(pS[i]);			/* Release the memory we got */
		pS[i] = NULL;			/* Set pointer back to NULL for safety */
	}
	return 0;
}

