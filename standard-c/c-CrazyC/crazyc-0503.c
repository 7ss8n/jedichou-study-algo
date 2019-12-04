/* Crazy C - code sample - 05-03 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double my_float = 1.00007, sum = 0.;
	int sign = 1;
	
	while( my_float <= 10.00007)
	{
		sum += sign * my_float;
		my_float += 1;
		sign = -sign;
		printf("The sum current sum is [ %1f ] \n", sum);
	}
	
	printf("\nFinal sum is [ %1f ] \n", sum);
	
	/* system("PAUSE"); */
	return 0;
}