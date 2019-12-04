/* MingJie C - ex0303.c */
#include <stdio.h>
int main(void)
{
	int vi;
	
	printf("Pls input an integer: ");
	scanf("%d", &vi);

	if (vi < 0)
		printf("abs(%d)=%d\n", vi, -vi);
	else
		printf("abs(%d)=%d\n", vi, vi);

	return (0);
}
