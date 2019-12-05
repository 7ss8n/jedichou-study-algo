/*******************************************************************************
 * File name    : Program5_01.c
 * Create time  : 2008-1-31 14:49
 * Description  :
 *   Program 5.1 Averaging ten numbers without storing the numbers 
 ******************************************************************************/

#include <stdio.h>

int program5_1(void) {
    int number = 0;             /* Stores a number */
    int count = 10;             /* Number of values to be read */
    long sum = 0L;              /* Sum of the numbers */
    float average = 0.0f;       /* Average of the numbers */
    int i;                      /* Loop counter */
    
    /* Read the ten numbers to be averaged */
    for(i = 0; i < count; i ++) {
        printf("Enter grade: ");
        scanf("%d", &number);   /* Read a number */
        sum += number;          /* Add it to sum */
    }
    
    average = (float)sum/count; /* Calculate the average */
    printf("\nAverage of the ten numbers entered is: %f\n", average);
    return 0;
}
