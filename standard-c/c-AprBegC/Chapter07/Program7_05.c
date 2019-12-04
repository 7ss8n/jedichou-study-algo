/*******************************************************************************
 * File name    : Program7_05.c
 * Create time  : 2008-2-15 11:47
 * Description  :
 *   Program 7.5 Arrays and pointers taken further
 *   Description:
 *     This program demonstrates the effect of 
 *     adding an integer value to a pointer.
 ******************************************************************************/

#include <stdio.h>

int program7_5(void) {
    char multiple[] = "a string";
    char *p = multiple;
    int i = 0;
    
    /***************************************************
     * If use for(int i=0;;) to complie, gcc won't pass.
     * The message: 
     *  Program7_5.c:22: error: `for' loop initial declaration
     *  used outside C99 mode
     ****************************************************/
    for(i; i<strlen(multiple); i++){
        printf("\nmultiple[%d]=%c, *(p+%d)=%c, &multiple[%d]=%p, p+%d=%p",
                i, multiple[i], i, *(p+i), i, &multiple[i], i, p+i);
    }
    
    printf("\n");
    return 0;
}
