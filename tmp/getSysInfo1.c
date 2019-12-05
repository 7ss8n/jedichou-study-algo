#include <stdio.h>
#include <windows.h>

/*
 * Get system basic information use c
 */
int main()
{
	/* define pointer */
	SYSTEM_INFO sysInfo;
	OSVERSIONINFOEX osvi;

	// put local info to variables
	GetSystemInfo(&sysInfo);

	// Output
	printf("OEMId: %u\n", sysInfo.dwOemId);
	printf("CPU Architecture: %u\n", sysInfo.wProcessorArchitecture);
	printf("PageSize %u\n", sysInfo.dwPageSize);
	printf("App Min Address:%u\n", sysInfo.lpMinimumApplicationAddress);
	printf("App Max Address:%u\n", sysInfo.lpMaximumApplicationAddress);
	printf("Processor Mask:%u\n", sysInfo.dwActiveProcessorMask);
	printf("Number of Processor:%u\n", sysInfo.dwNumberOfProcessors);
	printf("Processor Type:%u\n", sysInfo.dwProcessorType);
	printf("Allocation Granlarity:%u\n", sysInfo.dwAllocationGranularity);
	printf("Processor Level:%u\n", sysInfo.wProcessorLevel);
	printf("Processor Revision:%u\n", sysInfo.wProcessorRevision);

	return 0;
}
