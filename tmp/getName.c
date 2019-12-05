#include <stdio.h>
#include <windows.h>

int main()
{
	char a[255];
	unsigned long size = 255;
	
	// Call windows API
	GetComputerName(a, &size);
	printf("The computer name is :\n");
	printf("%s\n", a);
	
	return 0;
}
