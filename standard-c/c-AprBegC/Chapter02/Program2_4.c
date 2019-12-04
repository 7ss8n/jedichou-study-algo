/*******************************************************************************
 * File name    : Program2_4.c
 * Create time  : 2008-1-28 11:10
 * Description  :
 *   Program 2.3A Using more variables
 ******************************************************************************/

int program2_4(void) {
    int Total_Pets;
    int Cats;
    int Dogs;
    int Ponies;
    int Others;
    
    /* Set the number of each kind of pet */
    Cats = 2;
    Dogs = 1;
    Ponies = 1;
    Others = 46;
    
    /* Calculate the total number of pets */
    Total_Pets = Cats + Dogs + Ponies + Others;
    
    // TODO : Total_Pets don't display.
    printf("We have %d pets in total", Total_Pets); /* Output the result */
    return 0;
}
