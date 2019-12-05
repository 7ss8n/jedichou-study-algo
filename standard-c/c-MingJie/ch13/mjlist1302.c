/*
 * File: mjlist1302.c
 * Description: read height and weight.
 */
#include <stdio.h>

int main(void)
{
	FILE	*fp;
	int		niuzu = 0;
	char	name[100];
	double	height, weight;
	double	hsum = 0.0;
	double	wsum = 0.0;

	if ((fp = fopen("hw.dat", "r")) == NULL)
	{
		printf("Open hw.dat failed.\n");
	}
	else
	{
		while (fscanf(fp, "%s%lf%lf", &name, &height, &weight) == 3) {
			printf("%-10s %5.1f %5.1f\n", name, height, weight);
			niuzu++;
			hsum += height;
			wsum += weight;
		}

		printf("======================\n");
		printf("%-10s %5.1f %5.1f\n", "Avg", hsum/niuzu, wsum/niuzu);
		fclose(fp);
	}

	return (0);
}
