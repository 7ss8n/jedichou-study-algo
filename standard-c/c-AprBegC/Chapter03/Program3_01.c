/*******************************************************************************
 * File name    : Program3_01.c
 * Creeate time : 2008-1-29 19:42
 * Description  :
 *   simple example of the if statement
 ******************************************************************************/

#include <stdio.h>

int program3_1(void) {
    int number = 0;
    
    printf("\nEnter an integer between 1 and 10: ");
    scanf("%d", &number);
    
    if(number > 5)
        printf("You entered %d which is greater than 5\n", number);
    if(number < 6)
        printf("You entered %d which is less than 6\n", number);
    
    return 0;
}
