/* 2-1 SeqList.h */
#include <stdio.h>
#include <string.h>
#define MAXSIZE 100

typedef struct
{
	DATA ListData[MAXSIZE+1];
	int ListLen;
} SeqListType;
