///////////////////////////////////////////////////////////////////////////////////
// Jedi: <iostream.h> 这种写法在Wind10 Ubuntu bash中g++,clang++都无法编译

///////////////////////////////////////////////////////////////////////////////////
// 错误1: 
//   fanlei-ch0203-04.cpp:4:10: fatal error: iostream.h: No such file or directory
//   #include <iostream.h>
//         ^~~~~~~~~~~~
// compilation terminated.

///////////////////////////////////////////////////////////////////////////////////
// 错误2:
//   fanlei-ch0203-04.cpp:1:10: fatal error: 'iostream.h' file not found
//   #include <iostream.h>
//         ^~~~~~~~~~~~
//   1 error generated.

#include <iostream.h>

int main()
{
	cout << "五年级一班数学成绩表\n" << endl;
	cout << "首先是第一名许凡的成绩：\t" << 100;
	cout << endl;
	cout << "其次是第一名张友的成绩：\t" << 90 + 9;
	cout << endl;
	cout << "其后是末一名林杰的成绩：\t" << (float)5/8;
	cout << endl;
	return 0;
}