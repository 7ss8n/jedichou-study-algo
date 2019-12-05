/*
 * Description: 有趣的C语言赋值问题
 * Jedi备注于2019.12.5
 */

#include <stdio.h>
int main(void)
{
	int i = (256, 512);
	printf("%d\n", i);
	return 0;
}
