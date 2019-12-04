/*******************************************************************************
 * File name    : Program4_05.c
 * Create time  : 2008-1-30 14:49
 * Description  :
 *   Program 4.5 Summing integers backward 
 ******************************************************************************/

#include <stdio.h>

int program4_5(void) {
    long sum = 0L;      /* Stores the sum of the integers */
    int count = 0;      /* The number of integers to be summed */
    
    /* Read the number of integers to be summed */
    printf("\nEnter the number of integers you want to sum: ");
    scanf(" %d", &count);
    
    /* Sum integers from count to 1 */
    int i;
    for( i = count ; i >= 1 ; sum += i--);
    printf("\nTotal of the first %d numbers is %ld\n", count, sum);
    return 0;
}
