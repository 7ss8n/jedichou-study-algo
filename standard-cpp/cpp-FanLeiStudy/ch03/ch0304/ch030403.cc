// ch030403.cc
// 函数的声明与定义

#include <iostream>
using namespace std;
void A(); void B();
int main() { A(); B(); }
void A() { cout << "函数A" << endl; B(); }
void B() { cout << "函数B" << endl; A(); }