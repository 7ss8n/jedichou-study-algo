// ex0303.c
// run: tcc -run ex0303.c

// Description:
// 除了指向变量的指针变量可以作为函数参数外，
// 指向结构体的指针变量、指向函数的指针变量，
// 均可作为函数参数。下面看看指向结构体的指针
// 变量作为函数参数的应用例子。

#include <stdio.h>
#define BUF_LEN_MAX 3
#define DATA_LEN_MAX 3
typedef unsigned int uint8_t;
typedef struct
{
	uint8_t head;
	uint8_t len;
	uint8_t add;
	uint8_t data[DATA_LEN_MAX];
	uint8_t chk;
}RF_FRAME;

RF_FRAME txbuf[BUF_LEN_MAX] = {
	{0xAA,6,0x00,0x11,0x11,0xE3},
	{0xAA,6,0x01,0x22,0x22,0x17},
	{0xAA,6,0x02,0x33,0x33,0x4B}
};

void output(RF_FRAME *p_ptr);

int main(void)
{
	RF_FRAME *ptr_tmp;
	ptr_tmp = txbuf;
	output(ptr_tmp);
	return 0;
};

// Jedi: c-array style
void output(RF_FRAME *p_ptr)
{
	uint8_t i, j;
	
	for (i=0; i<BUF_LEN_MAX; i++)
	{
		printf(" %x", p_ptr[i].head);
		printf(" %x", p_ptr[i].len);
		printf(" %x", p_ptr[i].add);
		
		for (j=0; j<DATA_LEN_MAX; j++)
			printf(" %x", p_ptr[i].data[j]);
		
		printf(" %x\n", p_ptr[i].chk);
	}
}