/*******************************************************************************
 * File name    : Program4_10.c
 * Create time  : 2008-1-31 14:02
 * Description  :
 *   Program 4.10 Sums of integers with a while loop nested in a for loop
 ******************************************************************************/

#include <stdio.h>

int program4_10(void) {
    long sum = 1L;          /* Store the sum of integers */
    int j =1;               /* Inner loop control variable */
    int count = 0;          /* Number of sums to be calculated */
    int i;                  /* Loop counter */
    
    /* Prompt for, and read the input and output*/
    printf("\nEnter the number of integers you want to sum: ");
    scanf(" %d", &count);
    
    for(i = 1;i<=count;i++){
        sum = 1L;           /* Initialize sum for the inner loop */
        j = 1;              /* Initialize integer to be added */
        printf("\n1");
        
        /* Calculate sum of integers from 1 to i */
        while(j < i) {
            sum += ++j;
            printf("+%d", j); /* Output +j ¡V on the same line */
        }
        printf(" = %ld\n", sum); /* Output = sum */
    }
    
    return 0;
}
