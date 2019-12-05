/*******************************************************************************
 * Filename     : Program7_9.c
 * Create time  : 2007/12/28 pm 1:36
 * Description  :
 *   Program 7.9 Multidimensional arrays and pointers
 ******************************************************************************/

#include <stdio.h>

int program7_9(void) {
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    char *pboard = *board; /* A pointer to char */
    int i = 0;
    
    for( i ; i < 9; i++)
        printf(" board: %c\n", *(pboard + i));
    
    return 0;
}
