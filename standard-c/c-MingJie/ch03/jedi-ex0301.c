#include <stdio.h>

int main(void)
{
	int iv, tail;

	printf("Pls input an integer: ");
	scanf("%d", &iv);

	while (iv)
	{
		tail = iv % 10;
		printf("tail is %d\n", tail);
		iv = (iv - tail) / 10;	
	}

	return (0);
}
