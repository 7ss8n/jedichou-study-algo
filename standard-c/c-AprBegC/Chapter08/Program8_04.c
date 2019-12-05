/*******************************************************************************
 * File name    : Program8_04.c
 * Create time  : 2008-2-15 14:10
 * Description  :
 *   Program 8.4 The change that doesn't
 ******************************************************************************/

#include <stdio.h>

int program8_4_change(int number); /* Function prototype */

int program8_4(void) {
    int number = 10; /* Starting Value */
    int result = 0; /* Place to put the returned value */
    result = program8_4_change(number);

    printf("In main, result = %d\tnumber = %d", result, number);
    printf("\n");

    return 0;
}

/* Definition of the function change() */
int program8_4_change(int number) {
    number = 2 * number;
    printf("In function change, number = %d\n", number);
    return number;
}
