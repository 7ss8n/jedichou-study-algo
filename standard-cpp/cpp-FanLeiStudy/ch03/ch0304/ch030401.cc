// ch030401.cc
// 3.4 函数的声明与定义

#include <iostream>
using namespace std;

// 函数声明
int add(int x, int y);

int main() {
    int i = 3, j = 4;
    cout << add(i, j) << endl;
    return 0;
}

// 函数定义
int add(int x, int y) { return x+y; }