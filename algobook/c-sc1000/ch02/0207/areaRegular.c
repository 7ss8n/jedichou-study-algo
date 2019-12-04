// 文件名: areaRegular.c
// 文件来自：《数据结构-1000个问题和解答》
// 编码格式：Unix(LF) + UTF-8-BOM
// 说明: 如何得到任何正多边形的面积

#include <stdio.h>
#include <math.h>

typedef struct Point {
	double x_coordinate;
	double y_coordinate;
	double z_coordinate;
} Point;

double distance(Point p1, Point p2) {
	double pow_x = pow(p1.x_coordinate - p2.x_coordinate, 2);
	double pow_y = pow(p1.y_coordinate - p2.y_coordinate, 2);
	double pow_z = pow(p1.z_coordinate - p2.y_coordinate, 2);
	return sqrt(pow_x + pow_y + pow_z); 
}

double AreaRegular(Point edge_s, Point edge_e, int arms) {
	double edgelength = distance(edge_s, edge_e);
	double area = ((arms*pow(edgelength, 2))/4) * (1/tan(180/arms));
	return area;
}

int main()
{
	int edgenums = 8;
	Point edge_s, edge_e;
	edge_s.x_coordinate = 1;
	edge_s.y_coordinate = 1;
	edge_s.z_coordinate = 1;
	edge_e.x_coordinate = 3;
	edge_e.y_coordinate = 3;
	edge_e.z_coordinate = 3;

	printf("area: %f\n", AreaRegular(edge_s, edge_e, edgenums));

	return 0;
}
