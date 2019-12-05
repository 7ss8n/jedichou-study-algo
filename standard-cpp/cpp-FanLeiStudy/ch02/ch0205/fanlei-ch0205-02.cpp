#include <iostream>
namespace a { int b = 5; }
namespace c { int b = 8; }
int main() {
    using namespace std;
    using namespace a;
    using namespace c;
    cout << b << endl;
    return 0;
}

///////////////////////////////////////////////////
// 编译错误g++
// fanlei-ch0205-02.cpp: In function ‘int main()’:
// fanlei-ch0205-02.cpp:8:13: error: reference to ‘b’ is ambiguous
//     cout << b << endl;
//             ^
// fanlei-ch0205-02.cpp:3:19: note: candidates are: int c::b
//  namespace c { int b = 8; }
//                    ^
// fanlei-ch0205-02.cpp:2:19: note:                 int a::b
// namespace a { int b = 5; }
//                   ^

///////////////////////////////////////////////////
// 编译错误clang++
// fanlei-ch0205-02.cpp:8:13: error: reference to 'b' is ambiguous
//     cout << b << endl;
//             ^
// fanlei-ch0205-02.cpp:2:19: note: candidate found by name lookup is 'a::b'
// namespace a { int b = 5; }
//                   ^
// fanlei-ch0205-02.cpp:3:19: note: candidate found by name lookup is 'c::b'
// namespace c { int b = 8; }
//                   ^
// 1 error generated.