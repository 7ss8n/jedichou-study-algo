/*
 * Program 3.9 Testing cases
 * File name: CBeg0309.c
 */

#include <stdio.h>
#include <conio.h>

int main(void)
{
    /* Define - Stores an input character */
    char answer = 0;
    
    printf("Enter Y or N: ");
    scanf(" %c", &answer);
    
    switch( answer )
    {
        case 'y': case 'Y':
            printf("\nYou responded in the affirmative.");
            break;
        
        case 'n': case 'N':
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
