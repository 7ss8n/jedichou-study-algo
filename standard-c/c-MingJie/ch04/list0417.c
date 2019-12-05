/* MingJie C - list0417.c */

#include <stdio.h>

int main(void)
{
	int i, j;
	int width, height;

	puts("Pls input width & height.");
	printf("Width:  "); scanf("%d", &width);
	printf("Height: "); scanf("%d", &height);

	/* output */
	for (i = 1; i <= height; i++) {
		for (j = 1; j <= width; j++)
			printf("*");
		putchar('\n');
	}

	return (0);
}
