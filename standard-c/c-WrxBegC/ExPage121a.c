/*
 * Use switch comment, example 2.
 * File name: ExPage121a.c
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
    switch(tolower(input))
    {
      case 'a': case 'e': case 'i': case 'o': case 'u':
           printf("The character is a vowel.");
           break;
      case 'b': case 'c': case 'd': case 'f': case 'g':
      case 'h': case 'j': case 'k': case 'l': case 'm':
      case 'n': case 'p': case 'q': case 'r': case 's':
      case 't': case 'v': case 'w': case 'x': case 'y':
      case 'z':
           printf("The character is a consonant");
           break;
      default:
           printf("The character is not a letter.");
           break;
    }
    
    /* Exit program */
    printf("\nPlease press any key to exit...");
    getch();
    
    return 0;
}
