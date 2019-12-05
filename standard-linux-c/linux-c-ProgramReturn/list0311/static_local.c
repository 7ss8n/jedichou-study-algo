// static_local.c
// The Linux C Program: the return of the King. list 3-11
// Jedi:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1024

/////////////////////////////////////////
// function: output
int output(char *file_name)
{
	FILE *fp;
	char buf[MAX];
	static int count= 0;  // 静态局部变量，保存输出的行数
	
	fp = fopen(file_name, "r");
	if (fp == NULL) {
		perror("fail to open");
		return -1;
	}
	
	////////////////////////////////////////////
	// while (fgets(fp, buf, MAX) != NULL) {
	// Jedi: 原书这里参数次序放错. (Bug-0311-1)
		
	while (fgets(buf, MAX, fp) != NULL)   // 每次读入文件的一行
	{ 
		int n = strlen(buf);              // Jedi: 原书这里未对n进行定义 (Bug-0311-2)
		buf[n-1] = '\0';                  // Jedi: 将buf的数据转为字符串
		printf("%s\n", buf);              // Jedi: 打印字符串
		
		// Jedi: 原书忽略了count等于0时的情况(0%5 =>0) (Bug-0311-3)
		if (count != 0 && count % 5 == 0)
			printf("\n");
		count++;
	}
	
	fclose(fp);
	return 0;
}

/////////////////////////////////////////
// function: main
int main(void)
{
	char file_name[][10] =
	{
		"test.txt",
		"test1.txt",
		"test2.txt"
	};
	
	int i = 0;
	while (i < 3) 
	{
		if (output(file_name[i]) == -1)
			exit(1);
		i++;
	}
	
	return 0;
}
