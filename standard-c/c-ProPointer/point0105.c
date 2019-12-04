/*
 * Author: Jedi Chou
 * Date: 2016-7-11 16:48 PM
 * Reference:
 *   OReiily Understanding and Using C Pointers, Page 14
 * Run: tcc -run .\point0105.c
 * Env: PowerShell, tcc 0.9.24
 */

#define NULL ((void *)0)

int main()
{
	int num;
	printf("without initial, num = %d\n", num);

	/* zero refers to the null pointer, NULL */
	/* It is not assign value. */
	int *pi = 0; 

	pi = &num;
	*pi = 0;  /* Zero refers to the integer zero. */

	/* Jedi: notice this output. */
	printf("*pi = 0, and *pi is %d\n", *pi);
	printf("num value is %d\n", num);

	return 0;
}
