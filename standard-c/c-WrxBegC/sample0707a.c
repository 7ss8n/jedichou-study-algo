/* Program 7.7 A Two-Dimensional arrays */
/* Jedi Chou - 20130812-1403 */
#include <stdio.h>

int main(void)
{
	long board[3][3] = {
		{'1', '2', '3'},
		{'4', '5', '6'},
		{'7', '8', '9'}
	};

	printf("Value of board[0][0] : %c\n", board[0][0]);
	printf("Value of *board[0]   : %c\n", *board[0]);
	printf("Value of **board     : %c\n", **board);
	return 0;
}
