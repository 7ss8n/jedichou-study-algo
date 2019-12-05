// 3.2 函数的传参数

#include <iostream>
using namespace std;
int add(int x, int y) { return x+y; }
int main() {
    int a, b, c;
    cout << "请输入两个整数: ";
    cin >> a;
    cin >> b;
    c = add(a, b);
    cout << "a+b=" << c << endl;
}