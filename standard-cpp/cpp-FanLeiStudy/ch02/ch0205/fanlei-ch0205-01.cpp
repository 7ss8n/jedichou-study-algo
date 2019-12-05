#include <iostream>
namespace a { int b = 5; }
namespace c { int b = 8; }
int main() {
    using namespace std;
    int b = 9;
    cout << "main.b ->" << b << endl;
    cout << "a::b ->" << a::b << endl;
    cout << "c::b ->" << c::b << endl;
    return 0;
}