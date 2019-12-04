// inline2.cpp
#include <stdio.h>

int pow2(int num, int power) {
	__asm {
		mov eax, num
		mov ecx, power
		shl eax, cl
	}
}

int add2() {
	unsigned int a=38, b=30;
	__asm {
		mov eax, a
		mov ebx, b
		add eax, ebx
		mov a, eax
	}
}

int sub2() {
	unsigned int a=30, b=15;
	__asm {
		mov eax, a
		mov ebx, b
		sub eax, ebx
		mov a, eax
	}
}

int main() {
	printf("pow2():%d\n", pow2(3,5));
	printf("add2():%d\n", add2());
	printf("sub2():%d\n", sub2());
	return 0;
}
