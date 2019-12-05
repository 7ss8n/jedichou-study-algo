/*
 * MingJie C - ex0312.c
 * Use switch modify list0316.c
 */

#include <stdio.h>

int main(void)
{
	int month;

	printf("Pls input month number: ");
	scanf("%d", &month);

	switch (month) {
		case  3: case  4: case  5:  puts("Spring");     break;
		case  6: case  7: case  8: 	puts("Summer");	    break;
		case  9: case 10: case 11: 	puts("Autumn");	    break;
		case 12: case  1: case  2: 	puts("Winter");	    break;
		default: puts("Month number does not exists.");	break;
	}

	return (0);
}
