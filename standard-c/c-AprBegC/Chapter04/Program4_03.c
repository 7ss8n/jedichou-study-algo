/*******************************************************************************
 * File name    : Program4_03.c
 * Create time  : 2008-1-30 14:18
 * Description  :
 *   Program 4.3 Sum the integers from 1 to a user-specified number 
 ******************************************************************************/

#include <stdio.h>

int program4_3(void) {
    long sum = 0L;      /* Stores the sum of the integers */
    int count = 0;      /* The number of integers to be summed */
    int i = 0;          /* Loop counter */
    
    /* Read the number of integers to be summed */
    printf("\nEnter the number of integers you want to sum: ");
    scanf(" %d", &count);
    
    /* Sum integers from 1 to count */
    for( i = 1 ; i <= count ; i++)
        sum += i;
    printf("\nTotal of the first %d numbers is %ld\n", count, sum);
   
    return 0;
}
