// 文件名：equTriangle
// 文件来自：《数据结构:1000个问题和解答》
// 编码格式：Unix(LF) + UTF-8-BOM
// 说明: 判断是否是等边三角形

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Point {
	double x;
	double y;
	double z;
} Point;

double distance(Point p1, Point p2) {
	double pow_x = pow(p1.x-p2.x, 2);
	double pow_y = pow(p1.y-p2.y, 2);
	double pow_z = pow(p1.z-p2.z, 2);
	return sqrt(pow_x+pow_y+pow_z);
}

int checkEquTriangle(Point p1, Point p2, Point p3) {
	double d1 = distance(p1, p2);
	double d2 = distance(p1, p3);
	double d3 = distance(p2, p3);
	return (d1 == d2 && d1 == d3 && d2 == d3) ? 1 : 0;
}

int main(void) {
	Point A, B, C;
	A.x = 1; A.y = 1; A.z = 1;
	B.x = 2; B.y = 2; B.z = 2;
	B.x = 0; B.y = 0; B.z = 3;

	printf("ABC is equal triangle: %s\n", 
			checkEquTriangle(A,B,C) == 1 ? "true": "false");

	return 0;
}
