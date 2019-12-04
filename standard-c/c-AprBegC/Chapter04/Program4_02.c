/*******************************************************************************
 * File name    : Program4_01.c
 * Create time  : 2008-1-30 14:02
 * Description  : 
 *   Program 4.2 Drawing a box 
 ******************************************************************************/

#include <stdio.h>

int program4_2(void) {
    int count ;                         /* Gcc under C99 */
    
    printf("\n**************");         /* Draw the top of the box */
    for( count = 1 ; count <= 8 ; ++count)
        printf("\n*            *");     /* Draw the sides of the box */
    printf("\n**************\n");       /* Draw the bottom of the box */
    return 0;
}
