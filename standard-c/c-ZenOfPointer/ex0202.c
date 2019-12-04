#include <stdio.h>
int main(void)
{
	char title[] = "LongMai C language pointer";
	char *p_title;
	printf("title : %s\n", title);
	p_title = title;
	printf("p_title->title: %s\n", p_title);
	printf("   &title = %p\n", &title);
	printf("  p_title = %p\n", p_title);
	printf("&title[0] = %p\n", &title[0]);

	return 0;
}
