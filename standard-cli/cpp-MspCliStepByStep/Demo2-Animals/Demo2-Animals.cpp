// Demo2-Animals.cpp: 主要專案檔。

#include "stdafx.h"
#include <stdio.h>

using namespace System;

ref class Animal
{
public:
	int legs;
	void SetName(String^ nm) { name = nm; }
	String^ GetName() { return name; }
private:
	String^ name;
};

int main(array<System::String ^> ^args)
{
	Animal^ cat = gcnew Animal();
	Animal^ dog = gcnew Animal();
	cat->SetName("Cat"); cat->legs = 4;
	dog->SetName("Dog"); dog->legs = 4;

	printf("Cat object, name is %s, legs is %d\n", cat->GetName(), cat->legs);
	printf("Dog object, name is %s, legs is %d\n", dog->GetName(), dog->legs);
    return 0;
}
