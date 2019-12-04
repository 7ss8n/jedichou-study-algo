/* Program 6.9A 
 * Finding occurrences of one wide character string in another 
 */

#include <stdio.h>
#include <wchar.h>

int main(void)
{
	wchar_t text[100];		/* Input buffer for string to be searched */
	wchar_t substring[40];	/* Input buffer for string sough */

	// Get text
	printf("Enter the string to be searched [<100]:\n");
	fgetws(text, 100, stdin);

	// Get substring
	printf("Enter the string sought [<40]:\n");
	fgetws(substring, 40, stdin);

	/* Overwrite the newline character in each string */
	text[wcslen(text)-1] = L'\0';
	substring[wcslen(substring)-1] = L'\0';

	printf("First string is:\n%S\n", text);
	printf("Second string is:\n%S\n", substring);

	/* Convert both string to uppercase. */
	for(int i=0; (text[i]=towupper(text[i])); i++);
	for(int i=0; (substring[i]=towupper(substring[i])); i++);

	/* Output result */
	printf("The second string %s found in the first.",
		   ( (wcsstr(text, substring) == NULL) ? "was not":"was")
	);

	return 0;
}
