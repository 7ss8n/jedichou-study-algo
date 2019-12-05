/*
 * Use switch comments.
 * File name: ExPage120.c
 */

#include <stdio.h>
#include <conio.h>

int main(void)
{
    enum Weekday {Monday, Tuesday, Wenesday,
         Tursday, Friday, Saturday, Sunday};
    enum Weekday today = Wenesday;
    
    switch(today)
    {
      case Sunday:
           printf("Today is Sunday.");
           break;
      case Monday:
           printf("Today is Monday.");
           break;
      case Tuesday:
           printf("Today is Tuesday.");
           break;
      case Wenesday:
           printf("Today is Wenesday.");
           break;
      case Tursday:
           printf("Today is Tursday.");
           break;
      case Friday:
           printf("Today is Friday.");
           break;
      case Saturday:
           printf("Today is Saturday.");
           break;
    }
    
    printf("\nPress any key to continue...");
    getch();
    
    return 0;
}
