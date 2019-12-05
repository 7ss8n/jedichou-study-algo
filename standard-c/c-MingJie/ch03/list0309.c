/* MingJie C - list0309.c */

#include <stdio.h>

int main(void)
{
	int num;

	printf("Pls input an integer: ");
	scanf("%d", &num);

	if      (num == 0) puts("The num is 0.");
	else if (num > 0 ) puts("The num great than 0.");
	else               puts("The num less than 0.");

	return (0);
}
