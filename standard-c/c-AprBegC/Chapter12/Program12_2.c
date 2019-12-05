/*******************************************************************************
 * Filename     : Program12_2.c
 * Create time  : 2008/1/9 pm 6:25
 * Descripiton  :
 *  Program 12.2 As the saying goes ... it comes back!
 *
 *  You can exercise the functions to transfer strings to and from a text file
 *  in an example that also uses the append mode for writing a file:
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int program12_2_LENGTH = 80;      /* Maximum input length */

int program12_2(void){
    char *proverbs[] = {
        "Many a mickle makes a muckle.\n",
        "Too many cooks spoil the broth.\n",
        "He who laughs last didn't get the joke in"
                              " the first place.\n"
    };
    char more[program12_2_LENGTH];      /* Stores a new proverb */
    FILE *pfile = NULL;                 /* File pointer */
    char *filename = "c:\\myfile.txt";
    
    /* Create a new file (if myfile.txt does not exist */
    if(!(pfile = fopen(filename, "w"))){        /* Open the file to write it */
        printf("Error opening %s for writing. Program termined.", filename);
        exit(1);
    }
    
    /* Write out first three saying to the file */
    int count = sizeof proverbs/sizeof proverbs[0];
    int i = 0;      /* counter */
    for( i = 0 ; i < count ; i++)
        fputs(proverbs[i], pfile);
    fclose(pfile);      /* Close the file */
    
    /* Open the file to append more proverbs */
    if(!(pfile = fopen(filename, "a"))){
        printf("Error opening %s for writing. Program terminated.", filename);
        exit(1);
    }
    
    printf("Enter proverbs of less than 80 characters or press Enter to end:\n");
    while(true) {
        fgets(more, program12_2_LENGTH, stdin);     /* Read a proverb */
        if(more[0] == '\n')                         /* If its empty line */
            break;                                  /* end input operation */
        fputs(more, pfile);                         /* Write the new proverb */
    }
    fclose(pfile);                                  /* Close the file */
    
    if(!(pfile = fopen(filename, "r"))){        /* Open the file to read it */ 
        printf("Error opening %s for writing. Program terminated.", filename);
        exit(1);
    }
    
    /* Read and output the file contents */
    printf("The proverbs in the file are:\n\n");
    while(fgets(more, program12_2_LENGTH, pfile))       /* Read a proverb */
        printf("%s", more);                             /* and display it */
    fclose(pfile);                                      /* Close the file */
    remove(filename);                                   /* and remove it */
    
    return 0;    
}
