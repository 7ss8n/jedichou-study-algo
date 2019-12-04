/*
 * File: mjlist1210.c
 */

#include <math.h>
#include <stdio.h>

#define sqr(n)    ((n) * (n))

typedef struct {
	int x;
	int y;
} point;

double distanceof(point pa, point pb)
{
	return (sqrt(sqr(pa.x - pb.x) + sqr(pa.y-pb.y)));
}

int main(void)
{
	point p1, p2;
	p1.x = 0;
	p1.y = 0;
	p2.x = 1;
	p2.y = 1;
	printf("%.5f\n", distanceof(p1, p2));
}

