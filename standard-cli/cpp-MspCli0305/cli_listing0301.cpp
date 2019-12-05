// From Apress Pro Visual C++/CLI and the .NET Platform, Page 128
// Listing 3-1. Inheritance in Action

using namespace System;

// Base class
ref class Square
{
public:
	int Area()
	{
		return Dims * Dims;
	}

	int Dims;
};

// Child class
ref class Cube : public Square
{
public:
	int Volume()
	{
		return Area() * Dims;
	}
};

// Inheritance in action
void main()
{
	Cube ^cube = gcnew Cube();
	cube->Dims = 3;

	Console::WriteLine(cube->Dims);
	Console::WriteLine(cube->Area());
	Console::WriteLine(cube->Volume());
}
