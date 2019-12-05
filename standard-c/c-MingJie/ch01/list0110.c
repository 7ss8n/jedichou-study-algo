/* get an integer and echo ten multi number */
#include <stdio.h>

int main(void)
{
	/* define variable */
	int num;

	/* process */
	printf("Pls input an integer: ");
	scanf("%d", &num);
	printf("The num * 10 = %d\n", 10*num);

	/* quit program */
	return (0);
}
