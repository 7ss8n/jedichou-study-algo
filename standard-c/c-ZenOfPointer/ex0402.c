/* file: ex0402.c */
#include <stdio.h>
int main(void)
{
	char *name[] = { "Sarah", "Xin", "Miki"};
	char **p_name;

	printf("name[0]: %p\n", name[0]);
	printf("name[1]: %p\n", name[1]);
	printf("name[2]: %p\n", name[2]);

	printf("\n");

	p_name = &name[0];
	printf("&name[0]: %p, value: %s\n", p_name, *p_name);

	p_name = &name[1];
	printf("&name[1]: %p, value: %s\n", p_name, *p_name);

	p_name = &name[2];
	printf("&name[2]: %p, value: %s\n", p_name, *p_name);

	return 0;
}
