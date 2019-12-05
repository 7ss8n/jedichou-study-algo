#include <iostream>
#include <locale>
using namespace std;
int main()
{
	/////////////////////////////////
	// 在gcc, clang++上都无法正常显示
	// setlocale(LC_ALL, "chs");
	// wchar_t wt[] = L"中国文字";
	// wcout << wt;
	
	/////////////////////////////////
	// 在gcc, clang++上都能正常显示
	cout << "第二行文字" << endl;
	
	return 0;
}
