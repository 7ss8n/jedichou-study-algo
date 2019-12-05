/* Program 4.6 The almost indefinite loop - computing an average */
#include <stdio.h>
#include <ctype.h>  /* For tolower() function */

int main(void)
{
	char answer = 'N';	/* Records yes or no to continue the loop */
	double total = 0.0;	/* Total of values entered */
	double value = 0.0;	/* Value entered */
	int count = 0;		/* Number of values entered */

	printf("\nThis program calculates the average of any"
			" number of values.");

	for(;;)  /* Indefinite loop */
	{
		printf("\nEnter a value: ");
		scanf(" %lf", &value);
		total += value;
		++count;

		/* check for more input */
		printf("Do you want to enter another value? (Y or N): ");
		scanf(" %c", &answer);

		if(tolower(answer) == 'n')
			break;
	}

	/* output the average to 2 decimal places */
	printf("\nThe average is %.21f\n", total/count);
	return 0;
}
