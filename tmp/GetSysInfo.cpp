#include <Windows.h>
#include <stdio.h>

#define MAXBYTE 256

void GetSysInfo();

int main()
{
	GetSysInfo();
	return 0;
}

void GetSysInfo() {
	// function variable define
	char szComputerName[MAXBYTE] = {0};
	char szUserName[MAXBYTE] = {0};
	unsigned long nSize = MAXBYTE;
	OSVERSIONINFO OsVer;

	// get os version
	OsVer.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
	GetVersionEx(&OsVer);

	// output os version
	if ( OsVer.dwPlatformId == VER_PLATFORM_WIN32_NT )
	{
		if (OsVer.dwMajorVersion == 5 && OsVer.dwMinorVersion == 1) 
		{
			printf("Windows XP %s\r\n", OsVer.szCSDVersion);
		} 
		else if (OsVer.dwMajorVersion == 5 && OsVer.dwMinorVersion == 0) 
		{
			printf("Windows 2000\r\n");
		}
		else 
		{
			printf("High than Windows 2000\r\n");
		}
	}
	else
	{
		printf("Other System\r\n");
	}

	// get current computer name
	GetComputerName(szComputerName, &nSize);
	printf("Computer Name is %s\r\n", szComputerName);

	// get current user name
	nSize = ;
	GetUserName(szUserName, &nSize);
	//printf("Current User Name is %s\r\n", szUserName);
}
