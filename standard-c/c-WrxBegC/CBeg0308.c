/*
 * Program 3.8 Lucky Lotteries
 * File name: CBeg0308.c
 */

#include <stdio.h>
#include <conio.h>

int main(void)
{
    /* Define */
    int choice = 0; /* The number chosen */
    
    /* Get the choice input */
    printf("\nPick a number between 1 and 10 and you may win a prize! ");
    scanf("%d", &choice);
    
    /* Check for an invalid selection */
    if( (choice>10) || (choice<1) )
        choice = 11;  /* Select invalid choice message */
        
    switch(choice)
    {
        case 7:
            printf("\nCongratulations!");
            printf("\nYou win the collected works of Amos Gruntfuttock.");
            break;  /* Jumps to the end of the block */
        
        case 2:
            printf("\nYou win the folding thermometer-pen-watch-umbrella.");
            break;  /* Jumps to the end of the block */
        
        case 8:
            printf("\nYou win the lifetime supply of aspirin tablets.");
            break;  /* Jumps to the end of the block */
            
        case 11:
            printf("\nTry between 1 and 10. You wasted your guess.");
            /* No break - so continue with the next statement */
            
        default:
            printf("\nSorry, you lose.\n");
            break;
    }
    
    printf("\nPress any key to exit");
    getch();
    
    return 0;
}
