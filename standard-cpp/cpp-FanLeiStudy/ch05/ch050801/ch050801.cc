#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "请输入第一个数: "; cin >> a;
    cout << "请输入第二个数: "; cin >> b;

    if (a > b)
    {
        cout << "第一个数比第二个数大" << endl;
    }
    else
    {
        cout << "第二个数比第一个数大" << endl;
    }
    cout << "程序执行完毕!" << endl;

    return 0;
}