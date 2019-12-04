// Microsoft Visual C++ CLI Step by Step
// PropertyInheritance
//
// Properties, inheritance, and interfaces
// Properties are first-class member of types, on the same
// level as member functions and data members. This means
// that you can use in inheritance and in interfaces. Properties
// can be virtual and even pure virtual, and isn't necessary
// for both get and set methods to have the save virtual specifier.
//
// This exercise shows you how to use a virtual property
// when inheriting from the class.
// 1. Create a new CLR console Appliction project named
//    PropertyInheritance.
// 2. Immediately after the using namespace System; line,
//    define an abstract class called Shape.
// 3. Add the definition fo a Circle class, which inherits
//    from Shape and which also implments the Area property.

using namespace System;

public ref class Shape abstract
{
public:
	virtual property double Area;
};

public ref class Circle : Shape
{
	double radius;
public:
	Circle(double r)
	{
		radius = r;
	}

	virtual property double Area
	{
		double get() override {
			return Math::PI * radius * radius;
		}
	}
};

void printArea(Shape ^s)
{
	Console::WriteLine("Area is {0}", s->Area);
}

int main(array<String ^> ^args)
{
	Circle ^c = gcnew Circle(4.0);
	printArea(c);
	return 0;
}
