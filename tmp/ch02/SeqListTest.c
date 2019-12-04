#include <stdio.h>

typedef struct {
    char key[15];
    char name[20];
    int age;
} DATA;

#include "SeqList.h"
#include "SeqList.c"

// foreach output DATA element
int SeqListAll(SeqListType *SL)
{
    int i;
    for (i=1; i <= SL->ListLen; i++)
    {
        printf(
            "%s, %s, %d",
            SL->ListData[i].key,
            SL->ListData[i].name,
            SL->ListData[i].age
        );
    }
}

int main()
{
    /* variables define */
    int i;
    SeqListType SL;
    DATA data, *pdata;
    char key[15];
    
    /* Initialize SL */
    SeqListInit(&SL);


    return 0;
}