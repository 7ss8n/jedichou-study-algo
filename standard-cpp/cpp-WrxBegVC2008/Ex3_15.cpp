// From Wrox Begining Visual C++ 2008, Page 146
// Ex3_15.cpp
// main project file

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	wchar_t letter;
	Console::Write(L"输入一个字母: ");
	letter = Console::Read();

	if ( letter >= 'A' && letter <= 'Z') {
		Console::WriteLine(L"你输入的是个大写");
		return 0;
	}

	if ( letter >= 'a' && letter <= 'z') {
		Console::WriteLine(L"你输入的是个小写");
		return 0;
	}

	Console::WriteLine(L"你输入的到底是什么鬼玩意");
	return 0;
}
