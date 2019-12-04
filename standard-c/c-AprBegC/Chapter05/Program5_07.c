/*******************************************************************************
 * File name    : Program5_07.c
 * Create time  : 2008-1-31 16:36
 * Description  : 
 *   Program 5.7 Tic-Tac-Toe 
 *   // TODO : Must updates
 ******************************************************************************/

#include <stdio.h>

int program5_7(void) {
    int player = 0;         /* Player number - 1 or 2 */
    int winner = 0;         /* The winning player */
    int i;                  /* Loop counter */
    char board[3][3] = {    /* The board */
        {'1', '2', '3'},    /* Initial values are reference numbers */
        {'4', '5', '6'},    /* used to select a vacant square for */
        {'7', '8', '9'}     /* a turn. */
    };
    
    /* The main game loop. The game continues for up to 9 turns */
    /* As long as there is no winner */
    for(i = 0; i<9 && winner==0; i++) {
        /* Display the board */
        printf("\n\n");
        printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
        printf("---+---+---\n");
        printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
        printf("---+---+---\n");
        printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
        player = i%2 + 1; /* Select player */
        /* Code to play the game */
    }
    /* Code to output the result */
    return 0;
}
