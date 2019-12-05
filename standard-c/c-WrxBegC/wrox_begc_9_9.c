// From Wrox Begin C
// Program 9.9 REVERSI An Othello type game
// TODO: Page 370

#include <stdio.h>
#include <stdbool.h>

#define SIZE 6			// Board size
#define comp_c 'X'		// Computer's counter
#define player_c 'O'	// Player's counter

// Function prototypes
void display(char board[][SIZE]);
int valid_move(char board[][SIZE], bool moves[][SIZE], char player);

// Main function
int main(void)
{
	char board[SIZE][SIZE] = {0};	// The board
	char again;
	int row = 0;					// Board row index
	int col = 0;					// Board column index

	printf("REVERSI\n\n");
	printf("You can go first on the first game, then we will take turns.\n");
	scanf("%c", &again);

	// Blank all the board squares
	for( row = 0; row < SIZE; row++ )
		for ( col = 0; col < SIZE; col++ )
			board[row][col] = ' ';

	// Place the initial four counters in the center
	int mid = SIZE/2;

	board[mid-1][mid-1] = board[mid][mid] = player_c;
	board[mid-1][mid] = board[mid][mid-1] = comp_c;
	display(board);
	return 0;
}

// Function to display the board in its
// current state with row numbers and column
// letters to identify squares.
// Parameter is the board array.
void display(char board[][SIZE])
{

	// Display the column labels
	char col_label = 'a';	// Column label
	printf("\n ");			// Start top line
	for(int col = 0; col < SIZE; col++)
		printf("   %c", col_label + col);	// Display the top line
	printf("\n");						// End the top line

	// Display the row ...
	for( int row = 0; row < SIZE; row++) {
		
		// Display the top line for the current row
		printf("  +");
		for( int col = 0; col < SIZE; col++)
			printf("---+");
		printf("\n%2d|", row + 1);

		// Display the counters in current row
		for( int col = 0; col < SIZE; col++)
			printf(" %c |", board[row][col]);	// Display counters in row
		printf("\n");
	}

	// Finally display the bottom line of the board
	printf("  +");
	for(int col = 0; col < SIZE; col++)
		printf("---+");
	printf("\n");
}

// Calculates which squares are valid moves
// for player. Valid moves are recorded in the
// moves array - true indicates a valid move,
// false indicateds an invalid move.
// First parameter an invalid move.
// Second parameter is the board array.
// Third parameter identifies the player
// to make the move.
// Return valid move count.
int valid_move(char board[][SIZE], bool moves[][SIZE], char player)
{
	
	// Define inside variable
	int rowdelta = 0;		// Row increment around a square
	int coldelta = 0;		// Column increment around a square
	int x = 0;				// Row index when searching
	int y = 0;				// Column index when searching
	int no_of_moves = 0;	// Number of valid moves

	// Set the opponent
	char opponent = (player == player_c) ? comp_c : player_c;

	// Initialize moves array to false
	for( int row = 0; row < SIZE; row++ )
		for( int col = 0; col < SIZE; col++ )
			moves[row][col] = false;

	// Find squares for valid moves
	// A valid move must be on a blank square and must enclose
	// at least one opponet square between two player squares
	for( int row = 0; row < SIZE; row++ )
		for( int col = 0; col < SIZE; col++ )
		{
			if( board[row][col] != ' ')		// Is it a blank square?
				continue;					// No - so on to the next

			// Check all the squares around the blank squares
			// for the opponents counter
			for( rowdelta = -1; rowdelta <= 1; rowdelta++ )
				for( coldelta = -1; coldelta <= 1; coldelta++ )
				{
					// Don't check outside the array, or the current square
					if( row + rowdelta < 0 || row + rowdelta >= SIZE ||
						col + coldelta < 0 || col + coldelta >= SIZE ||
						( rowdelta == 0 && coldelta == 0) )
						continue;

					// Now check the square
					if( board[row + rowdelta][col + coldelta] == opponent )
					{
						// If we find the opponent, move in the delta
						// direction over opponent counters searching
						// for a player counter
						x = row + rowdelta;	// Move to
						y = col + coldelta;	// Opponent square

						// Look for a player square in the delta direction
						for(;;)
						{
							x += rowdelta;	// Go to next square
							y += coldelta;	// in delta direction

							// If we move outside the array, give up
							if( x < 0 || x >= SIZE || y < 0 || y >=SIZE )
								break;

							// If we find a blank square, give up
							if( board[x][y] == ' ')
								break;

							// If the square has a player counter
							// then we have a valid move
							if ( board[x][y] == player )
							{
								moves[row][col] = true;	//Mark as valid
								no_of_moves++;			// Increase valid moves count
								break;
							}
						}
					}
				}

		}

	return no_of_moves;
}
