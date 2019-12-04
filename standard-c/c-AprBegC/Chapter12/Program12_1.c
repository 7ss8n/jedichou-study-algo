/*******************************************************************************
 * Filename     : Program12_1.c
 * Create time  : 2007/1/9 pm 4:55
 * Description  : 
 *  Program 12.1 Writing a file a character at a time
 *
 *  You now have enough knowledge of file input/ouput capabilities in C to write
 *  a file and reads it. So let's do just that:
 ******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int LENGTH = 80;      /* Maximum input length */

int program12_1(void) {
    char mystr[LENGTH];     /* Input string */
    int lstr = 0;           /* Length of input string */
    int mychar = 0;         /* Character for output */
    FILE *pfile = NULL;     /* File pointer */
    char *filename = "C:\\myfile.txt";
    int i=0;                /* Counter */
    
    printf("\nEnter an interesting string of less than 80 characters:\n");
    fgets(mystr, LENGTH, stdin); /* Read in a string */
   
    /* Create a new file we can write */
    if(!(pfile = fopen(filename, "w"))) {
        printf("Error opening %s for writing. Program terminated.", filename);
        exit(1);
    }
    lstr = strlen(mystr);
    for( i = lstr-1 ; i >= 0 ; i--)
        fputc(mystr[i], pfile);     /* Write string to file backward */
    fclose(pfile);                  /* Close the file */
    
    /* Open the file for reading */
    if(!(pfile = fopen(filename, "r"))) {
        printf("Error opening %s for reading. Program terminated.", filename);
        exit(1);
    }
    
    /* Read a character from the file and display it */
    while((mychar = fgetc(pfile)) != EOF)
        putchar(mychar);        /* Output character from the file */
    putchar('\n');              /* Write newline */
    
    fclose(pfile);              /* Close the file */
    remove(filename);           /* Delete the physical file */
    
    return 0;    
}
