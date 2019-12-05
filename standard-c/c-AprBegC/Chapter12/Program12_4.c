/*******************************************************************************
 * Filename     : Program12_4.c
 * Create time  : 2008/1/10 am 9:57
 * Description  :
 *  Program 12.4  A primer example using binary files
 *
 *  You can apply the binary file operations to version of the Program 7.11 you
 *  saw in Chapter 7 for calculating primes. This time, you'll use a disk file
 *  as a buffer to calculate a larger number of primes. You can make the program
 *  automatically spill primes on to a disk file if the array assigned to store
 *  the primess in insuffcient for the number of primes requested. In this
 *  version of the program to find primes, you'll improve the checking process
 *  a little.
 *
 *  In addition to the main() function that will contain the prime finding loop,
 *  you'll write a function to test whether a values is prime called test_prime(),
 *  a helper function that will check a given value against a block of primes
 *  called check(), and function called put_primes(), which will retrieve the
 *  primes from the file and display them.
 *
 *  As the program consists of several functions and will work with variables at
 *  global scope, let's take a look at it piece by piece. We'll start with the
 *  function prototypes and global data before we look at detail of the fucntion:
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>       /* For square root function sqrt() */

/* Function prototypes */
int test_prime(unsigned long long N);
void put_primes(void);
int check(unsigned long long buffer[], size_t count, unsigned long long N);

/* Global data */
const unsigned int MEM_PRIMES = 100;    /* Count of number of primes in memory */

struct{
    char *filename;                             /* File name for primes     */
    FILE *pfile;                                /* File stream pointer      */
    int nrec;                                   /* Number of file records   */

    unsigned long long primes[MEM_PRIMES];      /* Array to store primes    */
    size_t index;                               /* Index of free location in array primes   */
} global = {
    "c:\\myfile.bin",           /* Physical file name   */
    NULL,                       /* File pointer value   */
    0,                          /* File record count    */
    {2ULL, 3ULL,5ULL},          /* primes array values  */
    3                           /* Number of primes     */
};

/* main function */
int program12_4(void){
    unsigned long long trial = 5ULL;        /* Prime candidate  */
    unsigned long num_primes = 3UL;         /* Primer count     */
    unsigned long total = 0UL;              /* Total required   */

    printf("How many primes would you like? ");
    scandf("%lu", &total);          /* Total is how any we need to find */
    total = total<4UL ? 4UL:total;  /* Make sure it is at least 4       */

    /* Prime finding and storing loop */
    while(num_primes < total){          /* Loop until we get total required */
        trial += 2ULL;                  /* Next value for checking          */
        if(test_prime(trial)){          /* Check if trial is prime          */
            global.primes[global.index++] = trial;      /* so store it      */
            num_primes++;               /* Increment total number of primes */

            if(global.index == MEM_PRIMES){     /* Check if array is full   */
                /* File Opened OK ? */
                if(!(global.pfile = fopen(global.filename, "ab"))){
                    /* No, so explain and end the program */
                    printf("\nUnable to Open %s to append\n", global, filename);
                    exit(1);
                }

                /* Write the array */
                fwrite(global.primes, sizeof(unsigned long long),
                        MEM_PRIMES, global.pfile);

                fclose(global.pfile);       /* Close the file                   */
                global.index = 0U;          /* Reset count of primes in memoery */
                global.nrec++;              /* Increment file record count      */
            }
        }
    }

    if( total > MEM_PRIMES)         /* If we wrote some to file         */
        put_primes();               /* Display the contents of the file */
    if( global.index )              /* Display any left in memory       */
        for(size_t i=0; i<global.index; i++){
            if( i%5 == 0)
                printf("\n");                       /* Newline after five   */
            printf("%12llu", global.primes[i]);     /* Output a prime       */
        }

    if ( total>MEM_PRIMES )                                         /* Did we need a file?  */
        if( remove(global.filename))                                /* the delete it.       */
            printf("\nFailed to delete %s\n", global.filename);     /* Delete failed        */
        else
            printf("\nFile %s deleted.\n", global.filename);        /* Delete OK            */

    return 0;
}

/*******************************************************************************
 * Function to test if a number, N, is prime using primes in
 * memory and on file
 * Fisrst parameter N - value to be tested
 * Return value - a postive value for a prime, zero otherwise
 ******************************************************************************/
int test_prime(unsigned long long N){
    /* Code for test_prime */
}

/*******************************************************************************
 * Function to check whether an integer, N, is divsible by any of the elements
 * in the array pbuffer up to square root of N.
 * First parameter count - an array of primes
 * Seoncde parameter count - number of elements in pbuffer
 * Third parameter N - the value to be checked
 * Return value - 1 if N is prime, zero if N is not a prime,
 *                -1 form more checks
 ******************************************************************************/
int check(unsigned long long buffer[], size_t count, unsigned long long N){
    /* Code for check... */
}
