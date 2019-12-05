/*
 * File: mjlist1208.c
 * Description: Use struct array
 */

#include <stdio.h>

#define NUMBER 5  /* number of student */

/* student struct */
typedef struct {
	char name[20];	/* student's name */
	int height;		/* student's height */
	float weight;	/* student's weight */
	long schols;	/* student's schols */
} student;

/* swap student struct */
void swap(student *x, student *y)
{
	student temp = *x;
	*x = *y;
	*y = temp;
}

/* sort by height */
void sort(student data[], int n)
{
	int k = n - 1;
	while (k >= 0) {
		int i, j;
		for (i = 1, j = -1; i <= k; i++)
		{
			if (data[i-1].height > data[i].height) {
				j = i - 1;
				swap(&data[i], &data[j]);
			}
		}
		k = j;
	}
}

/* Program start from here */
int main(void)
{
	/* define problem variables */
	int i;
	student std[] = {
		{ "Jedi",  173,  165,   9700 },
		{ "Kiwi",  121,  61.0,  0    },
		{ "Becky", 163,  110.0, 1000 }
	};

	/* process data */
	sort(std, NUMBER);

	/* output result */
	puts("---------------------------");
	for (i=0; i<NUMBER; i++)
		printf(
			"%-8s %6d%6.1f%7d\n",
			std[i].name,
			std[i].height,
			std[i].weight,
			std[i].schols
		);
	puts("---------------------------");

	/* program finish */
	return (0);
}
