///////////////////////////////////////////////////////////////
// Reference: [C++.编程思想（两卷合订本）].(Bruce等).刘宗田等.扫描版
// Study at 2016.3.2 14:19, Jedi Chou
///////////////////////////////////////////////////////////////

//: C08: StringStack.cpp
// Using Static const to create a
// com;ile-time constant inside a clas

#include <string>
#include <iostream>

using namespace std;

class StringStack {
    static const int size = 100;
    const string* stack[size];
    int index;
public:
    StringStack();
    void push(const string* s);
    const string* pop();
};

// Notice: do not forget ";"

StringStack::StringStack() : index(0) {
    memset(stack, 0, size * sizeof(string*));
}

void StringStack::push(const string* s) {
    if (index < size)
        stack[index++] = s;
}

const string* StringStack::pop() {
    if (index > 0 ) {
        const string* rv = stack[--index];
        stack[index] = 0;
        return rv;
    }
    return 0;
}

string iceCream[] = {
    "pralines & cream",
    "fudge ripple",
    "jamocha almond fudge",
    "wild mountain blackberry",
    "raspberry sorbet",
    "lemon swirl",
    "rocky road",
    "deep chocolate fudge"
};

const int iCsz =
    sizeof iceCream / sizeof *iceCream;

int main() {
    StringStack ss;
    for(int i = 0; i < iCsz; i++)
        ss.push(&iceCream[i]);
    const string* cp;
    while( (cp = ss.pop()) != 0)
        cout << *cp << endl;
}
