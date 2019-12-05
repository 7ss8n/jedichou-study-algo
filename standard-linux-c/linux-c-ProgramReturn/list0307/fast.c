// fast.c
// 执行速度较快的函数调用版本

#include <stdio.h>
int add(int a) { return a+1; }
int main(void) {
	int res = 3 * add(1);
	printf("%d\n", res);
	return 0;
}
