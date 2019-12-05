/*******************************************************************************
 * File name    : Program4_04.c
 * Create time  : 2008-1-30 14:38
 * Description  :
 *   Program 4.4 Summing integers - compact version
 ******************************************************************************/

#include <stdio.h>

int program4_4(void) {
    long sum = 0L; /* Stores the sum of the integers */
    int count = 0; /* The number of integers to be summed */
    
    /* Read the number of integers to be summed */
    printf("\nEnter the number of integers you want to sum: ");
    scanf(" %d", &count);
    
    /* Sum integers from 1 to count */
    int i;
    for(i = 1 ; i<= count ; sum += i++ );
    printf("\nTotal of the first %d numbers is %ld\n", count, sum);
    return 0;
}
