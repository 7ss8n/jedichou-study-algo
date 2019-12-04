/*******************************************************************************
 * File name    : Program2_3.c
 * Create time  : 2008-1-28 11:05
 * Description  :
 *   Let¡¦s try a slightly larger example:
 *   Program 2.3 Using more variables
 *   If you run this program you should get the following output:
 *     7 brides for 7 brothers
 ******************************************************************************/

#include <stdio.h>

int program2_3(void) {
    int brothers;       /* Declare a variable called brothers */
    int brides;         /* and a variable called brides */
    
    brothers = 7;       /* Store 7 in the variable brothers */
    brides = 7;         /* Store 7 in the variable brides */
    
    /* Display some output */
    printf("%d brides for %d brothers", brides, brothers);
    return 0;
}
