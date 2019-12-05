// File name: sabc.c
// Lab by Jedi at 2013.4.17 11:37 AM.
// From < C language excises and lab guide>, 2009
//   Author: XuShiLiang ...
//   ISBN: 978-7-115-20015-0/TP

// Description: Calculate traingle area.

#include <math.h>
#include <stdio.h>

// Function sabc
double sabc(double a, double b, double c)
{
	double p, s;
	p = (a+b+c)/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}

void main()
{
	double a, b, c, sabc(); 
	printf("input a, b, c:");
	scanf("%lf%lf%lf", &a, &b, &c);
	printf("\ns=%f\n", sabc(a, b, c));
	
	// Bug: result will get "s=-1.#INDO"
	//   cause: scanf("%1f%1f%1f", &a, &b, &c);
}
