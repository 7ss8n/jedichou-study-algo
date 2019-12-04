/* head first c - page 78 */
#include <stdio.h>
int main(void)
{
	char mask[] = "Alive";
	char *jimmy = mask;
	printf("Masked radier is %s, Jimmy is %s\n", mask, jimmy);
	mask[0] = 'D';
	mask[1] = 'E';
	mask[2] = 'A';
	mask[3] = 'D';
	mask[4] = '!';
	printf("Masked radier is %s, Jimmy is %s\n", mask, jimmy);
	return 0;
}
