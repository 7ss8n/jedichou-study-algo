#include <stdio.h>
int main(void)
{
    int i, j;
    int date[4][5] = {
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5}
    };
    
    printf("date[4][5]:\n");
    for (i=0; i<4; i++)
    {
        for (j=0; j<5; j++)
            printf("%d ", date[i][j]);
        printf("\n");
    }
    
    return 0;
}