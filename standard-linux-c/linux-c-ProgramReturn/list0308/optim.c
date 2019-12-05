// optim.c
// 合并多次返回值相同的函数调用出错

#include <stdio.h>

////////////////////////////////////////
// 用于记录后面的函数调用次数 
int count = 0;

////////////////////////////////////////
// 一个简单无比的函数
int func(int var) {
	count++;  // 只要函数被调用，则计数器就记录一次
	return var + 1;
}

////////////////////////////////////////
// 主函数
int main(void) {
	int res;
	res = 3 * func(1);

	printf("the count: %d\n", count);
	printf("the result: %d\n", res);

	return 0;
}
