/* Program 7.8 Getting the values in a two-dimensional array */
/* Jedi Chou - 20130812-1407 */
#include <stdio.h>

int main(void)
{
	long board[3][3] = {
		{'1', '2', '3'},
		{'4', '5', '6'},
		{'7', '8', '9'}
	};

	/* List all elements of the array */
	for(int i=0; i<9; i++) {
		printf("Board: %c\n", *(*board+i));
	}
	
	return 0;
}
