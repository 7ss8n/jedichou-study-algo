/*******************************************************************************
 * File name    : Program3_09.c
 * Create time  : 2008-01-30 12:25
 * Update time  : 2012-12-20 17:42
 * Description  :
 *   Testing cases
 ******************************************************************************/

#include <stdio.h>

int program3_9(void)
{
    char answer = 0;    /* Stores an input character */

    printf("Enter Y or N: ");
    scanf(" %c", &answer);

    switch(answer)
    {
        /* <case 1> + <case 2> + ... + <case N>  */
        case 'y': case 'Y':
            printf("\nYou responded in the affirmative.");
            break;
        case 'n': case 'N':
            printf("\nYou responded in the negative.");
            break;
        default:
            printf("\nYou did not respond correctly...");
            break;
    }

    return 0;
}
