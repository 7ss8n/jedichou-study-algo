/*******************************************************************************
 * Filename     : Program7_7.c
 * Create time  : 2007/12/28 pm 1:22
 * Description  :
 *   Program 7.7 Two-Dimensional arrays and pointers
 *   You¡¦ll look first at some of the addresses related 
 *   to your array, board, with this example:
 ******************************************************************************/

#include <stdio.h>

int program7_7(void) {
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    
    printf("address of board : %p\n", board);
    printf("address of board[0][0] : %p\n", &board[0][0]);
    printf("but what is in board[0] : %p\n", board[0]);
    
    return 0;
}
