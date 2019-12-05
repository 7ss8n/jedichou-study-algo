/* echo lastest number of an integer */
#include <stdio.h>
int main(void)
{
	int num;

	printf("Pls input an integer: ");
	scanf("%d", &num);

	printf("The lastest number is [%d].\n", num % 10);

	return (0);
}
