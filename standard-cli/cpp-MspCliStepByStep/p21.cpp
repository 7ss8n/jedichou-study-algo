using namespace System;

ref class Animal
{
public:
	int legs;

	void SetName(String ^nm)
	{ name = nm; }

	String^ GetName() { return name; }

private:
	String ^name;
};

int main(array<System::String ^> ^args)
{
	Animal cat, dog;

}
