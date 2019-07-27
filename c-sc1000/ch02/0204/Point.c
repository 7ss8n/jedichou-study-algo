// 文件名：Point.c
// 文件来自：《数据结构：1000个问题和解答》
// 编码格式：Unix(LF) + UTF-8-BOM
// 说明: 如何定义一个表示三维空间的点结构

typedef struct Point {
	double x_coordinate;
	double y_coordinate;
	double z_coordinate;
} Point;

int main()
{
	Point t;
	t.x_coordinate = 20;
	t.y_coordinate = 20;
	t.z_coordinate = 20;
	
	return 0;
}
