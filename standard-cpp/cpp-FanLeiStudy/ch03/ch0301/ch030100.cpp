// 3.1 一个简单的函数
#include <iostream>
void show() {std::cout << "hello world\n";}
int main() {
    std::cout << "main函数开始\n";
    show();
    std::cout << "main函数结束\n";
    return 0;
}