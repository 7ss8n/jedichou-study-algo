#include <stdio.h>

int add(int a, int b) { return a + b; }
int b = 10; // global variable
int mul(int a) { return a * b; }
int main(void)
{
	int res1 = add(1, 5);
	int res2 = mul(1);
	printf("rest1: %d, rest2: %d\n", res1, res2);
	printf("the global b: %d\n", b);
}
