// ch030402.cc
// 函数的声明与定义

#include <iostream>
using namespace std;

void A() { cout << "函数A" << endl; B(); }
void B() { cout << "函数B" << endl; A(); }
int main() { A(); B(); }

//////////////////////////////////////////////
// g++ 错误信息
//////////////////////////////////////////////
// ch030402.cc: In function ‘void A()’:
// ch030402.cc:7:39: error: ‘B’ was not declared in this scope
//  void A() { cout << "函数A" << endl; B(); }

//////////////////////////////////////////////
// clang++ 错误信息
//////////////////////////////////////////////
// ch030402.cc:7:39: error: use of undeclared identifier 'B'
// void A() { cout << "函数A" << endl; B(); }
//                                     ^
// 1 error generated.