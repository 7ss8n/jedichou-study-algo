#include <stdio.h>
#include <math.h>

void main()
{
	float number;
	double f, i;
	printf("input the numer:");
	scanf("%f", &number);
	f = modf(number, &i);
	printf("%f=%f+%f", number, i, f);
}
