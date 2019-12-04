/*******************************************************************************
 * File name    : Program2_12.c
 * Create time  : 2008-1-28 13:52
 * Description  :
 *   Program 2.12 Finding the size of a type
 ******************************************************************************/

#include <stdio.h>

int program2_12(void) {
    printf("\nVariables of type char occupy %d bytes", sizeof(char));
    printf("\nVariables of type short occupy %d bytes", sizeof(short));
    printf("\nVariables of type int occupy %d bytes", sizeof(int));
    printf("\nVariables of type long occupy %d bytes", sizeof(long));
    printf("\nVariables of type float occupy %d bytes", sizeof(float));
    printf("\nVariables of type double occupy %d bytes", sizeof(double));
    printf("\nVariables of type long double occupy %d bytes", sizeof(long double));

    return 0;
}
