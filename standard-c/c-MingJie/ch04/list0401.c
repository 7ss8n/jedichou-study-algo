/* MingJie C - list0401.c */

#include <stdio.h>

int main(void)
{
	/* Define quit conditon variable */
	int condition;

	do {

		/* Process */
		int num;
		
		printf("Pls inputer an integer: ");
		scanf("%d", &num);

		switch (num % 2) {
			case 0: puts("Number is an even number"); break;
			case 1: puts("Number is an odd number");  break;
		}

		/* Re-write condition */
		printf("Again? [Yes->0, No->9]: ");
		scanf("%d", &condition);

	} while (condition == 0);

	return (0);
}
