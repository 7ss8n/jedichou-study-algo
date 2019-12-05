using namespace System;

ref class MyClass
{
	String^ name;
public:
	MyClass(String^ objectName);	// Constructor
	~MyClass();						// Destructor
	!MyClass();						// Finalizer
	void DoSomething();				// 'work' method
};