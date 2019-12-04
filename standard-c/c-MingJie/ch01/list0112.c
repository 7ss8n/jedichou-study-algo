#include <stdio.h>

int main(void)
{
	int n1, n2;
	int sum;

	puts("Pls input two integers");
	printf("n1: "); scanf("%d", &n1);
	printf("n2: "); scanf("%d", &n2);

	sum = n1 + n2;

	printf("n1+n2=%d\n", sum);

	return (0);
}
