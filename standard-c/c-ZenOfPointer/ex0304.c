// ex0304.c
// run: tcc -run ex0304.c
// 函数指针

#include <stdio.h>
void output(void);

int main(void)
{
	void (*p_output)();
	p_output = output;
	(*p_output)();
	return 0;
}

void output(void)
{
	printf("output method...\n");
}

// int (*p_fun)();  定义指针变量p_fun，让其指向某个函数，而且这个函数的返回值是int类型
// int *p_fun();    定义函数名为p_fun，返回一个指针，这个指针指向int类型的数据

// tip 1: 函数指针，就是函数的地址
// tip 2: 指针函数，就是返回值为指针的函数
// tip 3: “函数指针”和“指针函数”是两个完全不同的概念