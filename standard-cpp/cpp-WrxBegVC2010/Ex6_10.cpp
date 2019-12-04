// Ex6_10.cpp
// A program to implement a calculator
// Ref: Wrox Begin Visual C++ 2010
// Jedi Chou, 2016.3.13 19:44

#include <iostream>
#include <cstdlib>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;

void eatspaces(char* str);  // function to eliminate blanks
double expr(char* str);  // function evaluating an expression
double term(char* str, int& index);  // function analyzing a term
double number(char* str, int& index);  // function to recognize a number

const int MAX(80);

int main()
{
    char buffer[MAX] = {0};
    return 0;
}

// function to eliminate spaces from a string
void eatspaces(char* str)
{
    int i(0);
    int j(0);
    
    while((*(str+i) = *(str + j++)) != '\0')
        if(*(str+i) != ' ')
            i++;
    return ;
}

// function to evaluate an arithmetic expession
double expr(char* str)
{
    double value(0.0);
    int index(0);
    
    value = term(str, index);
    
    for(;;)
    {
        switch(*(str + index++))
        {
            case '\0':
                return value;
            case '+':
                value += term(str, index);
                break;
            case '-':
                value -= term(str, index);
                break;
            default:
                cout << endl
                     << "Arrrgh!*#!! There's an error"
                     << endl;
                exit(1);
        }
    }
}

// function to get the value of term
double term(char* str, int & index)
{
    double value(0.0);
    value = number(str, index);
    
    // loop as long as we have a good operator
    while(true)
    {
        if(*(str+index) == '*')
            value *= number(str, ++index);
        else if(*(str + index) == '/')
            value /= number(str, ++index);
        else
            break;
    }
    
    return value;
}