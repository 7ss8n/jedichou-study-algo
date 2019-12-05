// file name: exchange.c
// description: swap by asm
#include <stdio.h>

void call_power2();
void call_exchange();
int power2(int num, int power);
void exchange(int *a, int *b);

int main(void)
{
	call_power2();
	call_exchange();
	return 0;
}

void call_power2()
{
	printf("3 times 2 to the power of 5 is %d\n", power2(3, 5));
}

void call_exchange()
{
	// TODO Jedi, something is wrong, the vale does not exchange. 2016.3.24, 12:12
	
	int a = 1;
	int b = 100;

	// before
	printf("before: a val-> %d\n", a);
	printf("before: b val-> %d\n", b);

	// after
	exchange(&a, &b);
	printf("after: a val-> %d\n", a);
	printf("after: b val-> %d\n", b);
}

int power2(int num, int power)
{
	__asm
	{
		mov eax, num;
		mov ecx, power;
		shl eax, cl;
	}
}

void exchange(int *a, int *b)
{
	__asm
	{
		mov eax, a;
		mov ebx, b;
		xchg eax, ebx;
	}
}
