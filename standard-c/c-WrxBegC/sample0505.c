/* Program 5.5 Using the & operator */
#include <stdio.h>

int main(void)
{
	/* declare some integer variables */
	long a = 1L;
	long b = 2L;
	long c = 3L;

	/* declare some floating-point variable */
	double d = 4.0;
	double e = 5.0;
	double f = 6.0;

	/* OUTPUT */
	printf("A variable of type long occupies %d type.\n", sizeof(long));
	printf("Here are the addresses of some variables of type long:\n");
	printf("The address of a is: %p\n", &a);
	printf("The address of b is: %p\n", &b);
	printf("The address of c is: %p\n\n", &c);

	printf("A variable of type double occupies %d type.\n", sizeof(double));
	printf("Here are the addresses of some variables of type long:\n");
	printf("The address of a is: %p\n", &d);
	printf("The address of b is: %p\n", &e);
	printf("The address of c is: %p\n", &f);

	return 0;

}
