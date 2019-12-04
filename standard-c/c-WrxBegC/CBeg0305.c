/*
 * Program 3.5 Testing letters the easy way
 * Filename: CBeg0305.c
 *
 * other: you can use tolower(letter) from ctype.h
 */
#include <stdio.h>
#include <conio.h>

int main(void)
{
    int letter = 0;
    
    printf("Enter an upper case letter:");
    scanf(" %c", &letter);
    
    if( (letter>=L'A') && (letter<=L'Z') )
    {
        letter += 'a' - 'A';
        printf("You entered an uppercase %lc.\n", letter);
    }
    else
        printf("You did not enter an uppercase letter.\n");
    
    printf("\nPress any key to exit...");
    getch();
    
    return 0;
}
