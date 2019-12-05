/*
 * File name: cpdao0204.c
 * Description: C指针编程之道, Page 30
 * Author: Jedi Chou, 2016.7.12 19:37 PM
 */

#include <stdio.h>
#define WEEKNUM 7

int main(void)
{
	int temp;
	int week[WEEKNUM] = {1,2,3,4,5,6,7};
	
	printf("Please input today is: ");
	scanf("%d", &temp);
	
	if (temp <= WEEKNUM && temp >= 0)
		printf("Tomorrow is: %d\n", week[temp]);
	else
		printf("Error\n");
	
	/* short code */
	temp <= WEEKNUM && temp >= 0 ?
		printf("Tomorrow is: %d\n", week[temp]) :
		printf("Error\n");

	return 0;
}