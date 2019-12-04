/* 
 * C Primer - demo 11.1
 * Jedi Chou at 2018.3.9 23.10
 */

#include <stdio.h>

/* macro define */
# define MSG "define string example 1"
# define LIM 5
# define LINELEN 81

int main(void)
{
	/* define */
	const char msg1[40]   = "define string example 2";
	const char msg2[]     = "define string example 3";
	const char *msg3      = "define string example 4";
	const char *msg4[LIM] = {
		"define string example 5-0",
		"define string example 5-1",
		"define string example 5-2"
	};

	/* output by printf */
	printf("Tips: output by printf method.\n");
	printf("%s\n", MSG);
	printf("%s\n", msg1);
	printf("%s\n", msg2);
	printf("%s\n", msg3);
	printf("%s\n", *msg4);
	printf("%s\n", msg4[0]);
	printf("%s\n", msg4[1]);

	return 0;
}
