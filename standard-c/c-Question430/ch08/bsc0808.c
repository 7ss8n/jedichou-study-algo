/* file: bsc0808.c
 * desc: use point to concat two strings
 */

#include <stdio.h>

int main()
{
	/* define strings and pointers */
	char a1[50], a2[20];
	char *p1 = a1, *p2 = a2;

	/* program start */
	printf("bsc0808 starting ...\n");

	/* get strings from keyboard */
	printf("input a1: ");
	gets(a1);
	printf("input a2: ");
	gets(a2);

	/* move p1 to last of a1 */
	while (*p1)
		p1++;

	/* add content to p1 tail */
	while (*p2)
		*p1++ = *p2++;
	*p1++ = '\0'; /* add end tag to tail */

	/* output */
	printf("The result is: %s\n", a1);

	return 0;
}
