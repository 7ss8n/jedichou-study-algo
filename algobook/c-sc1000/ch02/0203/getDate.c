// 文件名：getDate.c
// 文件来自：《数据结构：1000个问题与解答》
// 编码格式：Unix(LF) + UTF-8-BOM
// 说明: 使用结构获取日期

#include <stdio.h>
#include <time.h>

int main()
{
	time_t timer;
	char buffer[11];
	struct tm* tm_info;

	time(&timer);
	tm_info = localtime(&timer);

	strftime(buffer, 11, "%Y-%m-%d", tm_info);
	puts(buffer);

	return 0;
}