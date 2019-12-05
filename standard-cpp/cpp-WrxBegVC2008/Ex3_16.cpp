// From Wrox Begining Visual C++ 2008, Page 147
// Ex3_16.cpp : main project file.
// Testing key presses in a loop.

#include "stdafx.h"
using namespace System;

int main( array<System::String ^> ^args)
{
	Console::WriteLine(L"按个键试试看(按Esc键退出)");
	ConsoleKeyInfo keyPress;

	do
	{
		keyPress = Console::ReadKey(true);
		Console::Write(L"你按下的键是");
		if( safe_cast<int>(keyPress.Modifiers) > 0 )
			Console::Write(L" {0},", keyPress.Modifiers);
		Console::WriteLine(L" {0} 对应的字母是 {1}",
						   keyPress.Key, keyPress.KeyChar);
	} while ( keyPress.Key != ConsoleKey::Escape);

	return 0;
}
