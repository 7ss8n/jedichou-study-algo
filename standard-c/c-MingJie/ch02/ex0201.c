/* file:ex0201.c
 * input
 *   a: 54
 *   b: 84
 *   a/b = 64%
 */
#include <stdio.h>
int main(void)
{
	int a, b;

	puts("Pls input two integers:");
	printf("a: ");  scanf("%d", &a);
	printf("b: ");  scanf("%d", &b);

	printf("a/b = %2.f%%\n", 100*(float)a/b);

	return (0);
}
