/*
 * File name: ExPage129.c
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int value = 12;
    int shiftcount = 3;
    int result = value << shiftcount;

    printf("result is %d\n", result);
    return 0;
}
