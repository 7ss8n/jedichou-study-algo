/*******************************************************************************
 * Filename     : Program7_8.c
 * Create time  : 2007/12/28 pm 1:27
 * Description  : 
 *   Program 7.8 Getting the values in a two-dimensional array
 *   This example takes the previous example a bit further 
 *   using a for loop: 
 ******************************************************************************/

#include <stdio.h>

int program7_8(void) {
    int i=0;
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
   
    /* List all elements of the array */
    for( i ; i < 9; i++)
        printf(" board: %c\n", *(*board + i));
    
    return 0;
}
