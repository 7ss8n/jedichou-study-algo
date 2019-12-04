/*
 * File name: s2-stack.c
 * Debug ENV: Visual C++ 6.0
 * My ENV: gcc version 3.4.5 (mingw-vista special r3)
 *
 * From e-book. (ISBN 7-81082-782-0)
 * Bug: complie failed in My ENV.
 *   s2-stack.c:32: error: syntax error before '&' token
 *   s2-stack.c: In function `CreateTwo':
 *   s2-stack.c:38: error: `head' undeclared (first use in this function)
 *   s2-stack.c:38: error: (Each undeclared identifier is reported only once
 *   s2-stack.c:38: error: for each function it appears in.)
 *   s2-stack.c:42: error: `n' undeclared (first use in this function)
 *   s2-stack.c: At top level:
 *   s2-stack.c:62: error: syntax error before '&' token
 *   s2-stack.c: In function `Push':
 *   s2-stack.c:73: error: `e' undeclared (first use in this function)
 *   s2-stack.c:74: error: `top' undeclared (first use in this function)
 *   s2-stack.c: At top level:
 *   s2-stack.c:89: error: syntax error before '&' token
 *   s2-stack.c: In function `Pop':
 *   s2-stack.c:93: error: `top' undeclared (first use in this function)
 *   s2-stack.c:98: error: `e' undeclared (first use in this function)
 */

/* library and pre-define */
#include <stdlib.h>
#include <stdio.h>

#define Stack_Length 6
#define OK 1
#define ERROR 0

typedef int SElemType;
/* storage */
typedef struct SNode
{	SElemType data;
	struct SNode *next;
}SNode, *LinkStack;

/*
 * Function: CreateTwo(LNode * head, int n)
 * Parameter:
 *   LNode * head, a link table pointer
 *   int n, number of link table
 * Description: create a blank stack
 * Return value: null
 */
void CreateTwo(LinkStack &head, int n)
{
	int i;
	SNode *p;  /* pointer define for new node */

	/* create link table that it has node head */
	head = (LinkStack)malloc( sizeof(SNode) );
	head->next = NULL;

	printf("Please input the data for LinkList Nodes: \n");
	for( i=n; i>0; --i)
	{
		p = (SNode*)malloc(sizeof(SNode));
		scanf("%d", &p->data);

		/* insert new node to stack */
		p->next = head->next;
		head->next = p;
	}
}

/*
 * Function: Push(LinkStack &top, SElemType e)
 * Parameter:
 *   LinkStack &top, pointer of stack top.
 *   SElemType e, element that insert into.
 * Description: insert into stack.
 * Return:
 *   int, 1-success, 2-failed
 */
int Push(LinkStack &top, SElemType e)
{
	SNode *q;
	q = (LinkStack)malloc( sizeof(SNode) );

	/* process for create fail */
	if( !q )
	{
		printf("Overfolow !\n");
		return (ERROR);
	}
	q->data = e;
	q->next = top->next;
	top->next = q;

	return (OK);
}

/*
 * Function: Pop(LinkStack &top, SELemType &e)
 * Parameter:
 *   LinkStack &top, top's pointer
 *   SElemType e, pop element.
 * Description: pop up from stack
 * Return:
 *   1-Success, 0-Failed
 */
int Pop( LinkStack &top, SElemType &e)
{
	SNode *q;

	if( !top->next )
	{
		printf("error");
		return (ERROR);
	}
	e = top->next->data;
	q = top->next;
	top->next = q->next;
	free(q);
	return (OK);
}

/* main function, program start here */
int main(void)
{
	int e;
	LinkStack top;		/* create a stack */
	CreateTwo(top, 3);	/* use CreateTwo method */

	/* Display first element of stack */
	LinkStack p;
	printf("\nThe old LinkStack is (top to bottom) : \n");
	p = top;
	while( p->next )
	{
		p = p->next;
		printf("%d", p->data);
	}
	printf("\nPlease input the data to push : ");
	scanf("%d", &e);

	/* Insert into stack */
	if( Push(top, e) )
		printf("success to push");

	/* Display top element */
	printf("\nThe new LinkStack is : \n");
	while( top->next )
	{
		top = top->next;
		printf("%d", top->data);
	}

	return 0;
}
