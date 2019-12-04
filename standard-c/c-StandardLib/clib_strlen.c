/*
 * clib_strlen.c
 * Descritpion: Use C to create strlen function.
 * FULL REF: C standard library (Chinese version, Page c).
 * Author: Jedi Chou, skyzhx@163.com.
 * Date: 2019.2.16 14:20 PM
 */

#include <stdio.h>

/* Function prototype */
size_t (clib_Strlen) (const char *s);

int main()
{
	char *str = "Jedi Chou";
	printf("%s\n", str);
	printf("%d\n", strlen(str));
	printf("%d\n", clib_Strlen(str));
	return 0;
}

/* strlen function */
size_t (clib_Strlen) (const char *s)
{
	/* find length of s[] */
	const char *sc;
	for (sc = s; *sc != '\0'; sc++)
		;
	return (sc - s);
}

