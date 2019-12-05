/////////////////////////////////////////////////////
// 文件名：caldistance.c
// 文件来自：《数据结构:1000个问题和解答》
// 编码格式：Unix(LF) + UTF-8-BOM
// 说明: ch0206-如何得到三维空间中两个点之间的距离
//
/////////////////////////////////////////////////////
// 注意事项:
//   1. 因为要引用math.h静态库，所以要增加lm
//   2. 因为pow有冲突，所以还要加上-O2
//
/////////////////////////////////////////////////////
// 编译示例：
//   gcc caldistance.c -O2 -lm
//   clang caldistance.c -O2 -lm
//
/////////////////////////////////////////////////////

#include <stdio.h>
#include <math.h>

typedef struct Point {
	double x_coordinate;
	double y_coordinate;
	double z_coordinate;
} Point;

double getPointsDistance(Point p1, Point p2) {
	double pow_x = pow(p1.x_coordinate - p2.x_coordinate, 2);
	double pow_y = pow(p1.y_coordinate - p2.y_coordinate, 2);
	double pow_z = pow(p1.z_coordinate - p2.z_coordinate, 2);
	return sqrt(pow_x + pow_y + pow_z);
}

int main()
{
	Point p1, p2;
	
	p1.x_coordinate = 1;
	p1.y_coordinate = 1;
	p1.z_coordinate = 1;
	
	p2.x_coordinate = 2;
	p2.y_coordinate = 2;
	p2.z_coordinate = 2;
	
	printf("Distance: %f\n", getPointsDistance(p1, p2));
	
	return 0;
}