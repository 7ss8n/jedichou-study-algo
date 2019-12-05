/* head first c 
 * page 61, Why arrays really start at 0
 */

#include <stdio.h>

int main(void)
{
	int drinks[] = { 4, 2, 3 };

	// These lines of code are equivalent.
	printf("1st order: %i drinks\n", drinks[0]);
	printf("1st order: %i drinks\n", *drinks);

	// Same effective
	printf("3rd order: %i drinks\n", drinks[2]);
	printf("3rd order: %i drinks\n", *(drinks+2));

	return 0;
}
