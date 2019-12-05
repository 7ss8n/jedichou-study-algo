#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf(" sizeof \"ABC\" = %u\n", sizeof "ABC");
	printf(" \"ABC\" = %p \n & \"ABC\" + 1 = %p\n",
			  "ABC", &"ABC"+1);

	system("PAUSE");
	return 0;
}
