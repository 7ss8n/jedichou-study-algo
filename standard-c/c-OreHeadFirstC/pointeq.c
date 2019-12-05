/* head first c - Point's  four 4 style
 * array[3] == *(array+3) == *(3+array) == 3[array]
 * Jedi note: 3[array] is very special for me
 */

#include <stdio.h>
int main(void)
{
	int a[] = {1, 2, 3, 4};
	printf("a[3]   = %d, and address %p\n", a[3], a[3]);
	printf("*(a+3) = %d, and address %p\n", *(a+3), *(a+3));
	printf("*(3+a) = %d, and address %p\n", *(3+a), *(3+a));
	printf("3[a]   = %d, and address %p\n", 3[a], 3[a]);

	return 0;	
}
