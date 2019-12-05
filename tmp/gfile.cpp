#include <stdio.h>

void CreateMyFile(char * szFileName, int nFileLength);

// Use
int main()
{
	// 1-10KB
	CreateMyFile("1KB.txt",   1024);				// 1KB
	CreateMyFile("5KB.txt",   1024*5);				// 5KB
	CreateMyFile("10KB.txt",  1024*10);				// 10KB

	// 11KB-1MB
	CreateMyFile("11KB.txt",  1024*11);				// 11KB
	CreateMyFile("512KB.txt", 1024*512);			// 0.5MB
	CreateMyFile("1MB.txt",   1024*1024);			// 1MB

	// 1.1MB-10MB
	CreateMyFile("1.1MB.txt", 1024*1024*1.1);		// 1.1MB
	CreateMyFile("5MB.txt", 1024*1024*5);			// 5MB
	CreateMyFile("10MB.txt", 1024*1024*10);			// 10MB

	// 10.1MB-40MB
	CreateMyFile("10.1MB.txt", 1024*1024*10.1);		// 10.1MB
	CreateMyFile("20MB.txt", 1024*1024*20);			// 20MB
	CreateMyFile("40MB.txt", 1024*1024*40);			// 40MB

	// 40.1MB-100MB
	CreateMyFile("40.1MB.txt", 1024*1024*41.1);		// 40.1MB
	CreateMyFile("70MB.txt", 1024*1024*70);			// 70MB
	CreateMyFile("100MB.txt", 1024*1024*100);		// 100MB

	// 100.1MB-200MB
	CreateMyFile("100.1MB.txt", 1024*1024*100.1);	// 100.1MB
	CreateMyFile("150MB.txt", 1024*1024*150);		// 150MB
	CreateMyFile("200MB.txt", 1024*1024*200);		// 200MB

	// 200.1MB-300MB
	CreateMyFile("200.1MB.txt", 1024*1024*200.1);	// 200.1MB
	CreateMyFile("250MB.txt", 1024*1024*250);		// 250MB
	CreateMyFile("300MB.txt", 1024*1024*300);		// 300MB

	// 300.1MB-400MB
	CreateMyFile("300.1MB.txt", 1024*1024*300.1);	// 300.1MB
	CreateMyFile("350MB.txt", 1024*1024*350);		// 350MB
	CreateMyFile("400MB.txt", 1024*1024*400);		// 400MB

	// 400.1MB-500MB
	CreateMyFile("400.1MB.txt", 1024*1024*400.1);	// 400.1MB
	CreateMyFile("450MB.txt", 1024*1024*450);		// 450MB
	CreateMyFile("500MB.txt", 1024*1024*500);		// 500MB
	
	// 500.1MB-600MB
	CreateMyFile("500.1MB.txt", 1024*1024*500.1);	// 500.1MB
	CreateMyFile("550MB.txt", 1024*1024*550);		// 550MB
	CreateMyFile("600MB.txt", 1024*1024*600);		// 600MB
	
	return 0;
}

void CreateMyFile(char * szFileName, int nFileLength)
{
	// Create the file
	FILE* fp = fopen(szFileName, "wb+");
	
	if(fp == NULL)
	{
	   printf("File can not open.\n");
	}
	else
	{
		// Process:
		//   1. Move file point to location that you define.
		//   2. Put an random dat at the end of file.
		fseek(fp, nFileLength-1, SEEK_SET);
		fputc(32, fp);
		fclose(fp);
	}
}
