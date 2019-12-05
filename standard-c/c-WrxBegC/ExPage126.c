/*
 * File name: ExPage126.c
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
            printf("\nYou responded in the affirmative.");
            break;
        
        case 'N':
            printf("\nYou responed in the negative.");
            break;
            
        default:
            printf("\nYou did not respond correctly...");
            break;
    }
    
    printf("\nPress any key to exit");
    getch();
    
    return 0;
}
