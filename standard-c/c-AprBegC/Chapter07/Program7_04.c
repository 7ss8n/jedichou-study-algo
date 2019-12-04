/*******************************************************************************
 * File name    : Program7_04.c
 * Create time  : 2008-2-15 11:40
 * Description  :
 *   Program 7.4 Arrays and pointers - A simple program
 *   Description:
 *     Just to further illustrate that an array name by 
 *     itself refers to an address, try running the following 
 *     program.
 ******************************************************************************/

#include <stdio.h>

int program7_4(void) {
    char multiple[] = "My string";
    char *p = &multiple[0];
    
    printf("\nThe address of the first array element : %p", p);
    
    p = multiple;
    printf("\nThe address obtained from the array name: %p\n", p);
    
    return 0;
}
