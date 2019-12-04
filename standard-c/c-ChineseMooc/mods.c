/*
 * mods.c
 *
 * Description: mods compute
 * Quote: Chinses universty Mooc.
 * Guider: LiXiaoHong
 * Author: Jedi Chou, skyzhx@163.com
 * Date: 2019.2.15 10:18 AM
 */

#include <stdio.h>

int main()
{
	int integer = 5;
	printf("   integer %  2 = %d\n",   integer  %   2);  /*  1 */
	printf("   integer % -2 = %d\n",   integer  %  -2);  /*  1 */
	printf("-(integer) %  2 = %d\n", -(integer) %  2);   /* -1 */
	printf("-(integer) % -2 = %d\n", -(integer) % -2);   /* -1 */

	/* 
	 * Guider motice: 
	 * the result sign same as the first operate number
	 */

	return 0;
}
