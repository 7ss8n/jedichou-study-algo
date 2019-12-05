#include <stdio.h>

double Mean(double marks[], double weights[], int size)
{
	double MarksWeightageProuctSum = 0;
	double WeightageSum = 0;
	int i = 0;
	for ( i = 0; i < size; i++)
	{
		MarksWeightageProuctSum += marks[i] * weights[i];
		WeightageSum += weights[i];
	}
	return MarksWeightageProuctSum/WeightageSum;
}

int main()
{
	double w[] = {1,2,3,4};
	double m[] = {100,78,89,78};
	printf("%f\n",Mean(m,w,4));
	return 0;
}
