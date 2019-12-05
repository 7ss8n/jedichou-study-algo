#include <iostream>
#include <thread>

void hello() { std::cout << "Hello Concurrent World\n"; }
int main() { std::thread t(hello); t.join();}

// compile line: g++ -std=c++11 man-cppcon-ex1.cpp
