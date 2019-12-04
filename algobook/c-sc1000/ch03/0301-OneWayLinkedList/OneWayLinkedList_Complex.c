#include <stdio.h>

typedef struct Book
{
	char *title;
	char *author;
	char *publisher;
	int month_of_publication;
	int year_of_publication;
}Book;

typedef struct A_Node_Of_Book_List
{
	Book book_of_this_node;
	struct A_Node_Of_Book_List *nextbookaddress;
}A_Node_Of_Book_List;

int main(void) { return 0;}
