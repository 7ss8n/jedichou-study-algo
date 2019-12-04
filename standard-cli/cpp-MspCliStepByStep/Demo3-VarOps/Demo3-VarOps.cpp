// Demo3-VarOps.cpp

#include "stdafx.h"
using namespace System;

// function prototype
void ClrTypes();
void DeclareVar();
void DeclareMultiVar();
void AssignValueToVar();
void HandlesAndPointer();
void Arrays();
void Constants();
void Typedefs();
void DonetStringObj();
void OperatorAndExpressions_AssignmentOperators();
void OperatorAndExpressions_ArithmeticOperators();
void OperatorAndExpressions_RelationalAndLogicalOperators();
void OperatorAndExpressions_BitwiseOperators();
void OperatorAndExpressions_TernaryOperator();
void OperatorAndExpressions_TypeCasting();

// main function, starting here!
int main(array<System::String ^> ^args)
{
	ClrTypes();
	DeclareVar();
	DeclareMultiVar();
	AssignValueToVar();
	HandlesAndPointer();
	Arrays();
	Constants();
	Typedefs();
	DonetStringObj();
	OperatorAndExpressions_AssignmentOperators();
	OperatorAndExpressions_ArithmeticOperators();
	OperatorAndExpressions_RelationalAndLogicalOperators();
	OperatorAndExpressions_BitwiseOperators();
	OperatorAndExpressions_TernaryOperator();
	OperatorAndExpressions_TypeCasting();

	Console::ReadLine();
    return 0;
}

// c++/cli basic types
void ClrTypes()
{
	Console::WriteLine("\n#####################");
	bool t;		Console::WriteLine("bool type initialize val: {0}", t);
	char c;		Console::WriteLine("char type initialize val: {0}", c);
	__int8 ic;	Console::WriteLine("__int8 type initialize val: {0}", ic);
	short s;	Console::WriteLine("short type initialize val: {0}", s);
	__int16 is;	Console::WriteLine("__int16 type initialize val: {0}", is);
	int i;		Console::WriteLine("int type initialize val: {0}", i);
	__int32 ii;	Console::WriteLine("__int32 initialize val: {0}", ii);
	long l;		Console::WriteLine("long initialize val: {0}", l);
	long long ll; Console::WriteLine("long long initialize val: {0}", ll);
	float f;	Console::WriteLine("float initialize val: {0}", f);
	double d;	Console::WriteLine("double initialize val: {0}", d);
	wchar_t wt;	Console::WriteLine("wchar_t initialize val: {0}", wt);
}

// c++/cli declare variables
void DeclareVar()
{
	Console::WriteLine("\n#####################");
	int primeNumber;
	double x, y, z;
	Console::WriteLine("primeNumber->{0}", primeNumber);
	Console::WriteLine("x->{0}, y->{1}, z->{2}", x, y, z);
}

// c++/cli declare multi-variables
void DeclareMultiVar()
{
	Console::WriteLine("\n#####################");
	int x = 10, y, z = 11;
	Console::WriteLine("x->{0}, y->{1}, z->{2}", x, y, z);
}

// c++/cli assign value to variable
void AssignValueToVar()
{
	Console::WriteLine("\n#####################");
	int x; float y; double z;
	x = 1; y = x; y = 3.56; x = y;
	Console::WriteLine("x->{0}, y->{1}, z->{2}", x, y, z);
}

// c++/cli handle and pointer
void HandlesAndPointer()
{
	Console::WriteLine("\n#####################");
	Object^ obj = gcnew Object();
	Console::WriteLine(obj);
}

// c++/cli how to declare c++/cli arrays
void Arrays()
{
	Console::WriteLine("\n#####################");
	array<int>^ arr = gcnew array<int>(10);
	int x;
	arr[0] = 23;
	arr[9] = 21;
	x = arr[9];
	Console::WriteLine("arr[0] val: {0}", arr[0]);
	Console::WriteLine("arr[9] val: {0}", arr[9]);
	Console::WriteLine("x val: {0}", x);
}

// c++/cli define constant variable
void Constants()
{
	Console::WriteLine("\n#####################");
	const unsigned long cul1 = 31.75;
	const unsigned long cul2 = 131.75;
	Console::WriteLine("cul1 val: {0}", cul1);
	Console::WriteLine("cul2 val: {0}", cul2);
}

// c++/cli use typedefs
void Typedefs()
{
	Console::WriteLine("\n#####################");
	typedef unsigned int positiveNumber;
	positiveNumber one, two;
	Console::WriteLine("one val: {0}", one);
	Console::WriteLine("two val: {0}", two);
}

// c++/cli use do net string object
void DonetStringObj()
{
	Console::WriteLine("\n#####################");
	String^ str = "Hello C++/Cli";
	Console::WriteLine(str);
}

// c++/cli assign operators
void OperatorAndExpressions_AssignmentOperators()
{
	Console::WriteLine("\n#####################");
	int x, y, z; x = y = z = 1; z = x + y;
	Console::WriteLine("x value is {0}", x);
	Console::WriteLine("y value is {0}", y);
	Console::WriteLine("z value is {0}", z);
}

void OperatorAndExpressions_ArithmeticOperators()
{
	Console::WriteLine("\n#####################");
	int result1 = 4 + 4 - 2;	Console::WriteLine("result1 val: {0}", result1);
	int result2 = 4 * 5;	Console::WriteLine("result2 val: {0}", result2);
	int mod = 7 % 3;		Console::WriteLine("mod val: {0}", mod);
	int a = 0; a++;			Console::WriteLine("a++ val: {0}", a);
	a += 5;					Console::WriteLine("a+5 val: {0}", a);
}

void OperatorAndExpressions_RelationalAndLogicalOperators()
{
	Console::WriteLine("\n#####################");
	int a = 4, b = 3;
	Console::WriteLine("a={0}, b={1}", a, b);
	Console::WriteLine("a>b -> {0}", a > b);
	Console::WriteLine("a>=b -> {0}", a >= b);
	Console::WriteLine("a<b -> {0}", a<b);
	Console::WriteLine("a<=b -> {0}", a<=b);
	Console::WriteLine("a==b -> {0}", a==b);
	Console::WriteLine("a!=b -> {0}", a!=b);
	Console::WriteLine("a&&b -> {0}", a&&b);
	Console::WriteLine("(a>b)&&(a<b) -> {0}", (a>b)&&(a<b));
	Console::WriteLine("a||b -> {0}", a||b);
	Console::WriteLine("(a>b)||(a<b) -> {0}", (a>b)||(a<b));
	Console::WriteLine("!a -> {0}", 	!a);
}

void OperatorAndExpressions_BitwiseOperators()
{
	Console::WriteLine("\n#####################");
	int a, b; a = 5; b = 5;
	Console::WriteLine("a>>2 -> {0}", a >> 2);
	Console::WriteLine("b<<2 -> {0}", b << 2);
}

void OperatorAndExpressions_TernaryOperator()
{
	Console::WriteLine("\n#####################");
	int a;
	bool b;
	Console::WriteLine("b is false, b ? 1 : 2 -> {0}", b ? 1 : 2);
	b = true;
	Console::WriteLine("b is true, b ? 1 : 2 -> {0}", b ? 1 : 2);
}

void OperatorAndExpressions_TypeCasting()
{
	Console::WriteLine("\n#####################");
	int a = 10; double b;
	b = (int) a; Console::WriteLine("old style, (int)a -> {0}", b);
	b = static_cast<double>(a); Console::WriteLine("c++ static cast, static_cast<double>(a) -> {0}", b);
}