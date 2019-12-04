// 4.3 布尔型变量

#include <iostream>
using namespace std;

int main() {
    bool check;
    check = true;
    if (check == true) { cout << "hello world" << endl; }
    if (check) { cout << "hello world, too" << endl;    }
    if (check) cout << "hello world, again" << endl;
    return 0;
}