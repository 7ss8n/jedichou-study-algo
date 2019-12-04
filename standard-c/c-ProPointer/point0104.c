/*
 * Author: Jedi Chou
 * Date: 2016-7-9 14:44 PM
 * Reference: 
 *   OReilly Understanding and Using C Pointers, Page 11
 *   Sub title: Dereferencing a Pointer Using the Indrection Operation
 * Run: tcc -run .\point0104.c
 * Env: PowerShell, tcc 0.9.24
 */

int main()
{
	int num = 5;
	int *pi = &num;
	
	// Display
	printf("Before value change:\n");
	printf("1. num's address is %p, by &num\n", &num);
	printf("2. *pi's value is %p, by pi\n", pi);
	printf("3. num's value by point: %d, use *pi\n\n", *pi);

	// Change value
	*pi = 200;

	// Display after value change
	printf("After value change:\n");
	printf("1. num's address is %p, by &num\n", &num);
	printf("2. *pi's value is %p, by pi\n", pi);
	printf("3. num's value by point: %d, use *pi\n\n", *pi);

	return 0;
}
