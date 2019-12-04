/*
 * File name: ExPage127.c
 * How to use goto comment.
 */

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main(void)
{
    /* Define - Stores an input character */
    char answer = 0;
    
    printf("Enter Y or N: ");
    scanf(" %c", &answer);
    
    switch( toupper(answer) )
    {
        case 'Y':
            goto FIRST;
        
        case 'N':
            goto SECOND;
            
        default:
            printf("\nYou did not respond correctly...");
            break;
    }

FIRST:    
    printf("\nYou responded in the affirmative.");
    printf("\nPress any key to exit");
    getch();
    return 0;
SECOND:
    printf("\nYou responed in the negative.");  
    printf("\nPress any key to exit");
    getch();
    return 0;
}
