/*
 * File name: cpdao0206.c
 * Description: C指针编程之道, Page 33-34
 * Author: Jedi Chou, 2016.7.12 20:11 PM
 */

#include <stdio.h>
#define LEN 26

int main(void)
{
	char str[LEN] = {
		'a','b','c','d','e','f','j','h','i','g','k','l','m',
		'n','o','p','q','r','s','t','u','v','w','x','y','z'
	}, *p_str;
	int idx;
	
	p_str = str;
	printf("Please input Idx(0-25) and Enter: \n");
	scanf("%d", &idx);
	
	idx < LEN && idx >= 0 ?
		printf("The character is: %c\n", *(p_str+idx)) :
		printf("The Idx is overflow\n");
	
	return 0;
}