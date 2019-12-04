#include <stdio.h>
#include <stdlib.h>

/* Define Node point type */
typedef struct node * Node;

/* List Header */
static Node head;

/* Single link list struct */
struct node {
	int val;
	Node next;
};

/* Insert node to list */
int insert(int val)
{
	Node p, q;
	p = head;
	
	/* Get link list lasted element */
	if (p != NULL) {
		while (p->next != NULL) {
			p = p->next;
		}
	}
	
	/* Create a new node */
	q = (Node)malloc(sizeof(struct node));
	if (q == NULL)
		return -1;
	q->next = NULL;
	q->val = val;
	
	if (p == NULL) {
		head = q;
		return 1;
	}
	p->next = q;
	return 1;
}

/* Iterate node and print val */
void print()
{
	Node p = head;
	while( p != NULL) {
		printf("%d\n", p->val);
		p = p->next;
	}
}

/* Iterate node and free node */
void destory()
{
	Node p = head;
	while (p != NULL) {
		Node q;
		q = p;
		p = p->next;
		free(q);
	}
	head = NULL;
}