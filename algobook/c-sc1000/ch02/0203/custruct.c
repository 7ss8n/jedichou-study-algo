// 文件名：custruct.c
// 文件来自：《数据结构：1000个问题和答案》
// 编码格式：Unix(LF) + UTF-8-BOM
// 说明: 其他结构的定义

// 这个结构在TurboC中可用
struct date
{
	int da_year;
	char da_day;
	char da_mon;
};

struct time
{
	unsigned char ti_min;
	unsigned char ti_hour;
	unsigned char ti_hund;
	unsigned char ti_sec;
};

// 一个自定义的FILE结构，可理解为读取特殊文件时可用此结构
typedef struct FILE {
	short level;
	unsigned flags;
	char fd;
	unsigned char hold;
	short bsize;
	unsigned char *buffer, *cup;
	unsigned istemp;
	short token;
} FILE;

int main()
{
	struct date _date;
	struct time _time;
	FILE sfile;
	return 0;
}
