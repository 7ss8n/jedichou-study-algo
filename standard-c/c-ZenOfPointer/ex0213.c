// ex0213.c
// run: tcc -run ex0213.c
#include <stdio.h>
int main(void)
{
	char *str = "I love LongMai";
	
	// 輸出str字符串的首地址
	printf("First char's address: %p\n", str);
	
	// 逐個輸出字符
	while (*str)
	{
		printf(" %c ", *str);
		printf(" : %p", str);
		printf("\n");
		str++;
	}
	
	return 0;
}

// Tips 2.6.3
// Tip 1: 字符串指針變量指向字符串的首地址
// Tip 2: 可以移動字符串指針變量，訪問字符串的各個字符