/* Program 5.4 Reusing the numbers stored */
#include <stdio.h>

int main(void)
{
	int numbers[10];		/* Array storing 10 values */
	int count = 10;			/* Number of values to be read */
	long sum = 0L;			/* Sum of the numbers */
	float average = 0.0f;	/* Average of the numbers */

	printf("\nEnter the 10 numbers: \n");

	/* Read the ten numbers to be averaged */
	for( int i=0; i<count; i++ )
	{
		printf("%2d> ", i+1);
		scanf("%d", &numbers[i]);	/* Reade a number */
		sum += numbers[i];
	}

	average = (float)sum/count;		/* Calculate the average */

	for( int i=0; i<count; i++)
		printf("\nGrade Number %d was %d", i+1, numbers[i]);

	return 0;
}
