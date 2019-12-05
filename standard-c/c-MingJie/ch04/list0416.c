/* MingJie C - list0416.c */

#include <stdio.h>

int main(void)
{
	int cont;

	do {

		int num, i;

		do {
			printf("Pls input an integer: ");
			scanf("%d", &num);
			if (num < 0)
				puts("the num must be great then 0.");
		} while (num < 0);


		/* output process result */
		for (i = 1; i <= num; i++)
			putchar('*');
		putchar('\n');


		/* check iteration condition */
		printf("Continue? [yes->0/No->9]: ");
		scanf("%d", &cont);

	} while (!cont);

	return (0);
}
