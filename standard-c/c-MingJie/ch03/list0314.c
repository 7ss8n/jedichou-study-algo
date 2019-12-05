/* MingJie C - list0314.c */

#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("Pls input two integers.");
	printf("n1: "); scanf("%d", &n1);
	printf("n2: "); scanf("%d", &n2);

	printf("|n1-n2|=%d\n", n1>n2 ? n1-n2 : n2-n1);

	return (0);	
}
