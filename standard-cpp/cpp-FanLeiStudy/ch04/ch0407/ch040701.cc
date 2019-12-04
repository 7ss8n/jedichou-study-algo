// 4.7 整型变量的定义
#include <iostream>
using namespace std;
int main() {
    int a=-1;
    unsigned b=-2;
    short c=-3;
    long d=-4;
    unsigned long e;
    e = a+b+c+c;
    cout << "a: " << a << "\n"
         << "b: " << b << "\n"
         << "c: " << c << "\n"
         << "d: " << d << "\n"
         << "e: " << e << endl;
    return 0;
}