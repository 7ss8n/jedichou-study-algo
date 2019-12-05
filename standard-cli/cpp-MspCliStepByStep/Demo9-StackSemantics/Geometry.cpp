using namespace System;

#include "Point.h"
#include "Rectangle.h"

Point::Point()
{
	Console::WriteLine("Point constructor called");
}

Point::~Point()
{
	Console::WriteLine("Point destructor called");
}

Rectangle::Rectangle()
{
	Console::WriteLine("Rectangle constructor called");
}

Rectangle::~Rectangle()
{
	Console::WriteLine("Rectangle destructor called");
}