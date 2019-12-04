/*******************************************************************************
 *  Filename     : Program8_01.c
 *  Create time  : 2007/12/29 pm 2:17
 *  Descritpion  : 
 *  Program 8.1 A microscopic program about scope
 *
 *  Let's take a simple example that involves a nested block that happens to be
 *  the body of a loop:
 ******************************************************************************/

#include <stdio.h>

int program8_1(void) {
    int count1 = 1;             /* Declared in outer block  */
    
    do {
        int count2 = 0;         /* Declared in inner block  */
        ++count2;
        printf("\ncount1 = %d count2 = %d", count1, count2);
    } while( ++count1 <= 8 );
    
    /* count2 no longer exists */
    printf("\ncount1 = %d\n", count1);
    
    return 0;
}
