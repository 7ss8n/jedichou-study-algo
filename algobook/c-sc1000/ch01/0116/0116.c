/* Search array */
#include <stdio.h>

int Find(int array[], int start, int finish, int search)
{
    enum {NOT_FOUND, FOUND};
    int search_result = NOT_FOUND;
    int i;
    for ( i=start; i<finish; i++) {
        if (array[i] == search) {
            search_result = FOUND;
            break;
        }
    }
    return search_result;
}

int main()
{
    int adt[] = {1, 2, 3, 4, 5};
    int adtLength = sizeof(adt) / sizeof(adt[0]);
    int want[] =  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int wangLength = sizeof(want) / sizeof(want[0]);
    int i = 0;

    for(; i < wangLength; i++) {
        printf("%s [%d]\n",
               (Find(adt, 0, adtLength, want[i]) == 1) ? "Find it" : "No found",
               want[i]
        );
    }
    return 0;
}

