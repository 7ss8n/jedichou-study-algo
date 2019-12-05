/*
** The program get message from standard input and print these message.
** Every line behind standard input.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_COLS  20         /* Max columns */
#define MAX_INPUT 1000       /* Max length for line */

int read_column_numbers(int columns[], int max);
void rearrange( char *output, char const *input,
                int n_columns, int const columns[]);

int main(void)
{
    int n_columns;
    int columns[MAX_COLS];
    char input[MAX_INPUT];
    char output[MAX_INPUT];

    /* read lable */
    n_columns = read_column_numbers(columns, MAX_COLS);

    /* read, process and print standard input message */
    while( gets(input) != NULL )
    {
        printf("Original input : %s\n", input);
        rearrange(output, input, n_columns, columns);
        printf("Rearranged line: %s\n", output);
    }

    return EXIT_SUCCESS;
}

int read_column_numbers(int columns[], int max)
{
    int num = 0;
    int ch;

    /* Get label, stop action if number less than zero */
    while( num<max && scanf("%d", &columns[num]) == 1 && columns[num] >= 0)
        num += 1;

    /* Verify number of labels (label is paried). */
    if( num%2 != 0 )
    {
        puts( "Last column number is not paired.");
        exit( EXIT_FAILURE );
    }

    while( (ch=getchar()) != EOF && ch != '\n')
        ;

    return num;
}

void rearrange( char *output, char const *input,
                int n_columns, int const columns[])
{
    int col;
    int output_col;
    int len;

    len = strlen( input );
    output_col = 0;
}
