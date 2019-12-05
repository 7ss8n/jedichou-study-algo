/*
 * 文件名：allinline.c
 * 文件来自：《数据结构:1000个问题和解答》
 * 编码格式：Unix(LF) + UTF-8-BOM
 * 说明: 如何测试三个点的共线性
 */

#include <stdio.h>
#include <math.h>

/* 点结构 */
typedef struct Point {
	double x_coordinate;
	double y_coordinate;
	double z_coordinate;
} Point;

/* 计算斜率 */
double slopeXY(Point m, Point n) {
	return (n.y_coordinate - m.y_coordinate) /
		   (n.x_coordinate - m.x_coordinate);
}

/* 判断是否在一条线上 */
int isColinearXY(Point p1, Point p2, Point p3) {
	return slopeXY(p1, p2) == slopeXY(p2, p3) ? 1 : 0;
}

int main(void) {
	
	/* 定义并赋值 */
	Point p1, p2, p3, p4;
	p1.x_coordinate = 1; p1.y_coordinate = 1; p1.z_coordinate = 1;
	p2.x_coordinate = 2; p2.y_coordinate = 2; p2.z_coordinate = 2;
	p3.x_coordinate = 3; p3.y_coordinate = 3; p3.z_coordinate = 3;
	p4.x_coordinate = 2; p4.y_coordinate = 2; p4.z_coordinate = 2;	

	/* 检查{p1,p2,p3},{p1,p2,p4} */
	printf("p1/p2/p3 all in line: %s\n", isColinearXY(p1, p2, p3) == 1 ? "true" : "false");
	printf("p1/p2/p4 all in line: %s\n", isColinearXY(p1, p2, p4) == 1 ? "true" : "false");

	return 0;
}
