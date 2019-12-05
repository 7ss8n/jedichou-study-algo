/*******************************************************************************
 * File name    : Program4_01.c
 * Create tiem  : 2008-1-30 14:11
 * Description  :
 *   Program 4.1 List ten integers
 ******************************************************************************/

#include <stdio.h>

int program4_1(void) {
    int count = 1;
    for( ; count <= 10 ; ++count)
        printf("\n%d", count);
    printf("\nWe have finished.\n");
    return 0;
}
