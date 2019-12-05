// File: 0125.c
// From sc1000, page 52

#include <stdio.h>
#include <math.h>

int fact(int n)
{
	if (n==1)
		return 1;
	else
		return fact(n-1)*n;
}

float calculatex(float height, int x)
{
	float nr = 1;
	int k;
	for (k = 0; k <=x; k++)
		nr *= (float)(height-k);
	if (x==0)
		return nr;
	else
		return nr/(float)fact(x+1);
}

int diff(int y[], int m)
{
	return y[m+1]-y[m];
}

int main()
{
	int x[20];
	int y[20];
	int i = 0;
	int j = 0;
	int k = 0;
	int noe = 0;
	static int count = 0;
	int dx = 0;
	static float sy = 0;
	static float height = 0.0;

	printf("No of observations: ");
	scanf("%d", &noe);
	
	printf("Determination Point :");
	scanf("%d", &dx);

	for (i = 0; i < noe; i++)
	{
		printf("Enter independent variable :");
		scanf("%d", &x[i]);
		printf("Enter the dependent variable :");
		scanf("%d", &y[i]);
	}

	sy += y[0];
	height = (float)(dx-x[0])/(float)noe;
	for (i = 0; i < noe - 1; i++)
	{
		for (j = 0, k=0; k<noe-i-1; j++, k++)
			y[k] = diff(y, j);
		sy += calculatex(height, i) * y[0];
	}

	printf("Value at %d is %f\n", dx, sy);
	return 0;
}
