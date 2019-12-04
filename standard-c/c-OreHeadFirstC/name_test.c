/* head first c - name test
 * how to use scanf and some notices for char array
 */

#include <stdio.h>

int main(void)
{
	/* define variables */
	int age;
	char first_name[20], last_name[20];

	/* accept user input */
	printf("Please input u age:");
	scanf("%i", &age);
	printf("Please input u first name and last name:");
	scanf("%19s %19s", &first_name, &last_name);

	/* output message */
	printf("u age is %d.\n", age);
	printf("u name is %s %s\n", first_name, last_name);

	/* quit */
	return 0;
}
