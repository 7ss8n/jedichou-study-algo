/*******************************************************************************
 * File name    : Program3_04.c
 * Create time  : 2008-01-28 20:45
 * Update time  : 2012-12-20 14:15
 * Description  :
 *   1. Converting uppercase to lowercase using wide characters
 *   2. Notice wchar_t type.
 *   3. VuGen 11 donot contained wchar_t type.
 *   4. There have some problem about wchar_t type, wprintf function.
 ******************************************************************************/
#include <stdio.h>

int program3_4(void)
{
    wchar_t letter = 0;                                     /* Stores a character */

    printf("Enter an uppercase letter:");                   /* Prompt for input */
    scanf("%lc", &letter);                                  /* Read a character */

    /* Check whether the input is uppercase */
    if(letter >= L'A')                                      /* Is it A or greater? */
    {
        if(letter <= L'Z') /* and is it Z or lower? */      /* It is uppercase */
        {
            letter = letter - L'A'+ L'a';                   /* Convert from upper- to lowercase */
            printf("You entered an uppercase %lc\n", letter);
        }
        else /* It is not an uppercase letter */
        {
            printf("Try using the shift key, Bud! I want a capital letter.\n");
        }
    }

    return 0;
}
