/* head first c - page 68 */
#include <stdio.h>
int main(void)
{
	int content[] = {1, 2, 3};
	int *choice = content;
	content[0] = 2;
	content[1] = content[2];
	content[2] = *choice;
	printf("%d", choice[2]);
	return 0;
}
