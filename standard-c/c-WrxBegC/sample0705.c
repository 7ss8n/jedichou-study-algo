/* Program 7.5 Arrays and pointers taken further */
#include <stdio.h>
#include <string.h>

int main(void)
{
	char ar[] = "a string";
	char *p = ar;

	for(int i=0; i<strlen(ar); i++)
		printf("ar[%d]=%c *(p+%d)=%c &ar[%d]=%p p+%d=%p\n",
				i, ar[i], i, *(p+i), i, &ar[i], i, p+i);

	return 0;
}
