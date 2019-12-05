/******************************************************************************* 
 * Filename     : Program7_12.c
 * Create time  : 2007/12/29 am 10:52
 * Description  :
 *   Program 7.12 Arrays of Pointers to Strings. 
 *   
 *   The following example is a rewrite of the previous
 *   program, and it demonstrates how you could use 
 *   an array of pointers to achieve the same result
 ******************************************************************************/

#include <stdio.h>

const size_t BUFFER_LEN_7_12 = 512; /* Size of input buffer */

int program7_12(void) {
    char buffer[BUFFER_LEN_7_12];   /* Store for strings        */
    char *pS[3] = { NULL };         /* Array of string pointers */
    char *pbuffer = buffer;         /* Pointer to buffer        */
    size_t index = 0;               /* Available buffer position*/
    int i = 0;                      /* Loop counter             */
    
    printf("\nEnter 3 messages that total less than %u characters.",
            BUFFER_LEN_7_12-2);
    
    /* Read the strings from the keyboard */
    for( i=0 ; i<3 ; i++) {
        printf("\nEnter %s message\n", i>0? "another" : "a" );
        pS[i] = &buffer[index];                 /* Save start of string */
        /* Read up to the end of buffer if necessary */
        for( ; index<BUFFER_LEN_7_12 ; index++)      /* If you read \n ...   */
            if((*(pbuffer+index) = getchar()) == '\n') {
                *(pbuffer+index++) = '\0';      /* ...substitute \0     */
                break;
            }
        
        /* Check for buffer capacity exceeded */
        if((index == BUFFER_LEN_7_12) && ((*(pbuffer+index-1) != '\0') || (i<2))) {
            printf("\nYou ran out of space in the buffer.");
            return 1;
        }
    }
    
    printf("\nThe strings you entered are:\n\n");
    for( i=0 ; i<3 ; i++)
        printf("%s\n", pS[i]);
    
    printf("The buffer has %d characters unused.\n" , BUFFER_LEN_7_12-index);
    return 0;
}
