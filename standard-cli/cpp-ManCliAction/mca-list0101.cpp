#pragma comment (lib, "Advapi32")
#include <windows.h>
#include <tchar.h>
#include <lmcons.h>

using namespace System;

int main() {
	TCHAR buffer[UNLEN + 1];
	DWORD size = UNLEN + 1;
	GetUserName(buffer, &size);
	String^ greeting = "Hello";
	Console::WriteLine("{0} {1}",
		greeting, gcnew String(buffer));
	return 0;
}
