/*******************************************************************************
 * File name    : Program2_9.c
 * Create time  : 2008-1-28 13:35 
 * Description  :
 *   Program 2.9 More round tables 
 ******************************************************************************/

#include <stdio.h>
#define PI 3.14159f /* Definition of the symbol PI */

int program2_9(void) {
    float radius = 0.0f;
    float diameter = 0.0f;
    float circumference = 0.0f;
    float area = 0.0f;
    
    printf("Input the diameter of a table:");
    scanf("%f", &diameter);
    radius = diameter/2.0f;
    circumference = 2.0f*PI*radius;
    area = PI*radius*radius;
    printf("\nThe circumference is %.2f", circumference);
    printf("\nThe area is %.2f", area);
    
    return 0;
}
