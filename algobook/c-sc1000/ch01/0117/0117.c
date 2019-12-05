/* Distinct output */
#include <stdio.h>
#include <conio.h>

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

void Distinct(int a[], int size)
{
    int flag = 0, i;
    printf("%\n", a[0]);
    for(i=0; i<size; i++)
    {
        if(!Find(a, 0, i-1, a[i]))
            printf("%d\n", a[i]);
    }
}

int main()
{
    int adt[] = {1, 1, 2, 2, 3, 3, 4, 4, 5};
    int len = sizeof(adt) / sizeof(adt[0]);
    Distinct(adt, len);
    return 0;
}

