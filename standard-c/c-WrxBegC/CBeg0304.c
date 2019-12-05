/*
 * Program 3.4 Converting uppercase to lowercase
 * Filename CBeg0304.c
 */
#include <stdio.h>
#include <conio.h>

int main(void)
{
    char letter = 0;
    
    printf("Enter an uppercase letter:");
    scanf("%c", &letter);
    
    // check whether the input is uppercase
    if(letter >= L'A')
        if(letter <= L'Z')
        {
            letter = letter - 'A' + 'a';
            printf("You entered an uppcase %lc\n", letter);                
        }
    else
        printf("Try using the shift key, Bud! I want a capital letter.\n");
    
    printf("\nPress any key to exit...");
    getch();
    
    return 0;
}
