/* C++/CLI inline asm */

#include "stdafx.h"

using namespace System;

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

int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Hello World");
	Console::WriteLine(pow2(3, 5));
	Console::WriteLine(add2());
	Console::WriteLine(sub2());
    return 0;
}
