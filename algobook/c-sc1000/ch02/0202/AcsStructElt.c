// 文件名：AcsStructElt.c
// 文件来自：《数据结构：1000个问题与解答》
// 编码格式：Unix(LF) + UTF-8-BOM
// 说明: 访问结构元素

/////////////////////////////////////
// 一个自定义元素
typedef struct Coordination
{
	int x_value;
	int y_value;
} Coordination;


#include <stdio.h>

int main()
{
	// 直接赋值
	Coordination a1;
	a1.x_value = 20;
	a1.y_value = 30;
	
	// 使用指针赋值
	Coordination a2;
	Coordination *pCoordination;
	pCoordination = &a2;
	pCoordination->x_value = 40;
	pCoordination->y_value = 50;
	
	// 直接获取元素值
	printf("%d\n", a1.x_value);
	printf("%d\n", a1.y_value);
	
	// 使用指针获取元素值
	printf("%d\n", pCoordination->x_value);
	printf("%d\n", pCoordination->y_value);
	
	return 0;
}
