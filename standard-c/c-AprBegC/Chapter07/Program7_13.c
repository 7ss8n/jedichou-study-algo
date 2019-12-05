/******************************************************************************* 
 * Filename     : Program7_13.c
 * Create time  : 2007/12/29 am 11:02
 * Description  :
 *   Program 7.13 Generalizing string input
 *
 *   Let¡¦s try rewriting the example to generalize string 
 *   input. You can extend the program to read an arbitrary
 *   number of strings up to a given limit and ensure that
 *   you don¡¦t read strings that are longer than youve 
 *   provided for. Heres the program:
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const size_t BUFFER_LEN_7_13 = 128;     /* Length of input buffer       */
const size_t NUM_P = 100;               /* maximum number of strings    */

int program7_13(void) {
    char buffer[BUFFER_LEN_7_13];       /* Input buffer                 */
    /********************************************************************************
     * TODO : Program7_13, there is a strange error. 
     * if key in char *pS[NUM_P] = {NULL}, compile will create a systanx error by gcc.
     * the message is:
     *   gcc.exe    -c -g -o build/Debug/Cygwin-Linux-x86/Program7_13.o Program7_13.c
     *   Program7_13.c: In function `program7_13':
     *   Program7_13.c:29: error: variable-sized object may not be initialized
     *   Program7_13.c:29: warning: excess elements in array initializer
     *   Program7_13.c:29: warning: (near initialization for `pS')
     *
     * this macro don't right ? Very puzzle.
     ********************************************************************************/
    char *pS[100] = { NULL };       /* Array of string pointers     */
    char *pbuffer = buffer;         /* Pointer to buffer            */
    int i = 0;                      /* Loop counter                 */
    
    printf("\nYou can enter up to %u messages each up to %u characters.",
            NUM_P, BUFFER_LEN_7_13-1);
    
    for(i = 0 ; i<NUM_P ; i++) {
        pbuffer = buffer ;          /* Set pointer to beginning of buffer */
        printf("\nEnter %s message, or press Enter to end\n", 
                i>0? "another" : "a");
        
        /* Read a string of up to BUFFER_LEN characters */
        while((pbuffer - buffer < BUFFER_LEN_7_13-1) &&
                ((*pbuffer++ = getchar()) != '\n'));
        
        /* check for empty line indicating end of input */
        if((pbuffer - buffer) < 2)
            break;
        
        /* Check for string too long */
        if((pbuffer - buffer) == BUFFER_LEN_7_13 && *(pbuffer-1)!= '\n') {
            printf("String too long ¡V maximum %d characters allowed.",
                    BUFFER_LEN_7_13);
            i--;
            continue;
        }
        *(pbuffer - 1) = '\0';                      /* Add terminator                  */
        
        pS[i] = (char*)malloc(pbuffer-buffer);      /* Get memory for string           */
        if(pS[i] == NULL){                          /* Check we actually got some¡K    */ 
            printf("\nOut of memory ¡V ending program.");
            return 1;                               /* ¡KExit if we didn't             */
        }
        
        /* Copy string from buffer to new memory */
        strcpy(pS[i], buffer);
    }
    
    /* Output all the strings */
    printf("\nIn reverse order, the strings you entered are:\n");
    while(--i >= 0) {
        printf("\n%s", pS[i] );     /* Display strings last to first        */
        free(pS[i]);                /* Release the memory we got            */
        pS[i] = NULL;               /* Set pointer back to NULL for safety  */
    }
    
    return 0;
}
