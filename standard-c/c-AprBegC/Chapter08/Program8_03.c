/*******************************************************************************
 *  Filename     : Program8_03.c
 *  Create time  : 2008/1/9 pm 4:07
 *  Descritpion  : 
 *  Program 8.3 Average of two float values
 *
 *  It's always easier to understand new concepts with an example, so let's
 *  start with a trivial illustration of a program that consists of two function.
 *  You'll write a function that will compute the average of two floating-point
 *  variables, and you'll call that functiona from main(). This is more to
 *  illustrate the mechanism of writing and calling functions than to present a
 *  good example of their practical use.
 ******************************************************************************/

#include <stdio.h>

/* Definition of the function to calculate an average */
float program8_3_average(float x, float y) {
    return (x + y)/2.0f;
}

/* main program - execution always starts here */
int program8_3(void) {
    float value1 = 0.0F;
    float value2 = 0.0F;
    float value3 = 0.0F;
    
    printf("Enter two floating-point values separated by blanks: ");
    scanf("%f %f", &value1, &value2);
    value3 = program8_3_average(value1, value2);
    printf("\nThe average is: %f\n", value3);
    
    return 0;
}
