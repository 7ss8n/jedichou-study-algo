/* MingJie C - list0419 */

#include <stdio.h>

int main(void)
{
	int row, col, level;

	printf("level number: ");
	scanf("%d", &level);

	for (row = 1; row < level; row++) {
		for (col = 1; col <= level-row; col++) putchar(' ');
		for (col = 1; col <= row; col++) putchar('*');
		putchar('\n');
	}

	return (0);
}
