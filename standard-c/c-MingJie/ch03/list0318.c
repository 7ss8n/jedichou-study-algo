/* MingJie C - list0318.c */

#include <stdio.h>

int main(void)
{
	int num;

	printf("Pls input an integer: ");
	scanf("%d", &num);

	switch (num % 3) {
		case 0: puts("num % 3 = 0");	break;
		case 1: puts("num % 3 = 1");	break;
		case 2: puts("num % 3 = 2");	break;
	}

	return (0);
}
