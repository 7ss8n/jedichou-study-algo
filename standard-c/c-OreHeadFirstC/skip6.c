/* head first c - page 62 */
#include <stdio.h>
void skip(char *msg);

int main(void)
{
	char * msg_from_amy = "Don't call me";
	skip(msg_from_amy);
	return 0;
}

void skip(char *msg) {
	puts(msg+6);
}
