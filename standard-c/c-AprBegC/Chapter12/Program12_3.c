/*******************************************************************************
 * Filename     : Program12_3.c
 * Create time  : 2008/1/9  pm 6:52
 * Description  :
 *  Program 12.3 Messing about with formatted file I/O
 *
 *  You can demostrate the formatted input and output funcitons with an example
 *  that will also what's shappening to the data in thess operations:
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int program12_3(void){
    long num1 = 234567L;    /* Input values... */
    long num2 = 345123L;
    long num3 = 789234L;
    
    long num4 = 0L;         /* Values read from the file... */
    long num5 = 0L;
    long num6 = 0L;
    
    float fnum = 0.0f;      /* Value read from the file */
    int ival[6] = {0};      /* Vlaues read from the file */
    FILE *pfile = NULL;     /* File pointer */
    char *filename = "c:\\myfile.txt";
    
    int i = 0;              /* Counter */
    
    pfile = fopen(filename, "w");                           /* Create file to be written */
    if(pfile = NULL){
        printf("Error openning %s for writing. Program terminated.", filename);
        exit(1);
    }    
    fprintf(pfile, "%6ld%6ld%6ld", num1, num2, num3);       /* Write file */
    fclose(pfile);
    printf("\n %6ld %6ld %6ld", num1, num2, num3);          /* Display values written */
    
    pfile = fopen(filename, "r");                           /* Open file to read */
    fscanf(pfile, "%6ld%6ld%6ld", &num4, &num5, &num6);     /* Read back */
    printf("\n %6ld %6ld %6ld", num4, num5, num6);          /* Display what we got */
    
    rewind(pfile);      /* Go to the beginning of the file */
    fscanf(pfile, "%2d%3d%3d%3d%2d%2d%3f", &ival[0], &ival[1], 
            &ival[2], &ival[3], &ival[4], &ival[5], &fnum);
    fclose(pfile);      /* Close the file and */
    remove(filename);   /* delete physical file. */
    
    /* Output the results */
    printf("\n");
    for( i = 0; i < 6; i++ )
        printf("%sival[i] = %d", i == 4 ? "\n\t" : "\t", i, ival[i]);
    printf("\nfnum = %f\n", fnum);
    
    return 0;    
}
