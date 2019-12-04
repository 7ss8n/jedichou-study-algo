/* MingJie C - list0316.c */

#include <stdio.h>

int main(void)
{
	/* input or exepcted out string
	 * 3,4,5 - spring
	 * 6,7,8 - summer
	 * 9,10,11 - autumn
	 * 12,1,2 - winter
	 */
	
	int month;

	printf("Pls input month number: ");
	scanf("%d", &month);

	if      (month >= 3 && month <= 5)  puts("Spring");
	else if (month >= 6 && month <= 8)  puts("Summer");
	else if (month >= 9 && month <= 11) puts("Autmn");
	else if (month == 1 || month == 2 || month == 12) puts("Winter");
	else                                              puts("Input wrong");

	return (0);
}
