// 4.7 整型变量的定义
#include <iostream>
using namespace std;
int main() {
    short int a, b;
    a = 32767;
    b = a + 1;
    cout << "a: " << a << "\n"
         << "b: " << b << endl;
    return 0;
}