/*******************************************************************************
 * File name    : Program3_05.c
 * Create time  : 2008-1-28 20:51
 * Description  :
 *   1. Program 3.5 Testing letters the easy way
 *   2. Compatible with VuGen 11.
 ******************************************************************************/

#include <stdio.h>

int program3_5(void)
{
    char letter ='B';                           /* Stores an input character */

    printf("Enter an upper case letter:");      /* Prompt for input */
    scanf(" %c", &letter);                      /* Read the input character */

    if((letter >= 'A') && (letter <= 'Z'))      /* Verify uppercase letter */
    {
        letter += 'a'-'A';                      /* Convert to lowercase */
        printf("You entered an uppercase %c.\n", letter);
    }
    else
        printf("You did not enter an uppercase letter.\n");

    return 0;
}
