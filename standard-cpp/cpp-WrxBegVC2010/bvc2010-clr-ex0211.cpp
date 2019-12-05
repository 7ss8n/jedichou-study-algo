// File: bvc2010-clr-ex0211.cpp
// Descript: A simple CLR demo

using namespace System;

int main () {
	// Define variables
	int apples, oranges;
	int fruit;

	// Value assign
	apples = 5; oranges = 6;
	fruit = apples + oranges;

	// Output
	Console::WriteLine("Orange are not the only fruit...");
	Console::Write("- and we have ");
	Console::Write(fruit);
	Console::Write(" fruit in all.\n");
	
	return 0;
}
