#include <stdio.h>

void foo(void)
{
	int b;
	printf("%d\n", b);
}

void bar(void)
{
	int a = 42;
}

int main(void)
{
	bar();
	foo();
}
