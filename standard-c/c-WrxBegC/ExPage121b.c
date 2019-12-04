/*
 * Use switch comment, example 3.
 * File name: ExPage121b.c
 */

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main(void)
{
    char input;
    
    /* Input a character from keyborad. */
    printf("Please input a character.. ");
    scanf("%c", &input);
    
    /* Process input and output result */
    if(!isalpha(input))
    {
      printf("The character is not a letter!");
    }                    
    else
    {
      switch(tolower(input))
      {
        case 'a': case 'e': case 'i': case 'o': case 'u':
             printf("The character is a vowel.");
             break;
        default:
             printf("The character is a consonant.");
             break;
      }
    }
    
    /* Exit program */
    printf("\nPlease press any key to exit...");
    getch();
    
    return 0;
}
