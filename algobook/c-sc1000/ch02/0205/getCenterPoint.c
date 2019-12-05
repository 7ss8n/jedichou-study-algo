// 文件名：getCenterPoint.c
// 文件来自：《数据结构:一千个问题和解答》
// 编码格式：Unix(LF) + UTF-8-BOM
// 说明: 如何使用点结构得到多边形的圆心

#include <stdio.h>
#include <stdlib.h>

#define MAX 20

typedef struct Point
{
	double x_coordinate;
	double y_coordinate;
	double z_coordinate;
} Point;

Point getCentroid(Point P[], double size)
{
	// 定义需用到的变量
	Point tmp;
	int i;
	static double x = 0;
	static double y = 0;
	static double z = 0;

	// 进行累加
	for (i = 0; i < size; i++)
	{
		x += P[i].x_coordinate;
		y += P[i].y_coordinate;
		z += P[i].z_coordinate;
	}

	// 进行点坐标的赋值
	tmp.x_coordinate = x / size;
	tmp.y_coordinate = y / size;
	tmp.z_coordinate = z / size;

	// 返回结果
	return tmp;
} 

int main(void)
{
	// 变量定义
	int coordinate_base = 10;
	int nums = MAX;
	Point pointArr[MAX];
	Point result;
	
	// 初始化所有点的坐标值(注意边界)
	for (int i = 0; i < MAX; i++)
	{
		pointArr[i].x_coordinate = coordinate_base * (i+2);
		pointArr[i].y_coordinate = coordinate_base * (i+3);
		pointArr[i].z_coordinate = coordinate_base * (i+4);
	}
	
	// 获得结果
	result = getCentroid(pointArr, MAX);
	printf("result.x: %f\n", result.x_coordinate);
	printf("result.y: %f\n", result.y_coordinate);
	printf("result.z: %f\n", result.z_coordinate);
	
	return 0;
}
