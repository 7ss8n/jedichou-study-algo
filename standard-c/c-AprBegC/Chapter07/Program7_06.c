/*******************************************************************************
 * Filename     : Program7_6.c
 * Create time  : 2007/12/28
 * Description  :
 *   Program 7.6 Different types of arrays 
 *   That¡¦s interesting, but you already knew that the computer 
 *   could add numbers together without much problem. So let's 
 *   change to a different type of array and see what happens
 ******************************************************************************/

#include <stdio.h>

int program7_6(void) {
    long multiple[] = {15L, 25L, 35L, 45L};
    long * p = multiple;
    int i = 0;
    
    for( i ; i<sizeof(multiple)/sizeof(multiple[0]) ; i++)
        printf("\naddress p+%d (&multiple[%d]): %d *(p+%d) value: %d",
                i, i, p+i, i, *(p+i));
    printf("\n Type long occupies: %d bytes\n", sizeof(long));
    
    return 0;
}
