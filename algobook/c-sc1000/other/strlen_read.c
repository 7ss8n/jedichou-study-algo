#include <string.h>

size_t (strlen_s)(const char *s)
{
	char *sc;
	for (sc=s;*sc!='\0';++sc)
	;
	return (sc-s);
}

int main()
{
	char *a="abc";
	printf("strlen output: %d\n",strlen(a));
	printf("sizeof output: %d\n", sizeof(a));
	printf("strlen_s: %d\n", strlen_s(a));
}