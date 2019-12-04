// From Apress Pro Visual C++/CLI and the .NET Platform, Page 166
// Listing 3-15. Type Casting in Action

using namespace System;

ref class A {};
ref class B : public A {};
ref class C {};

void main()
{
	Object ^v1 = gcnew A();
	Object ^v2 = gcnew B();
	Object ^v3 = gcnew C();

	A ^a1 = gcnew A();
	A ^a2 = gcnew B();
	A ^a3 = dynamic_cast<A^>(v1);	// downcast
	A ^a4 = dynamic_cast<A^>(v2);	// downcast
//	A ^a5 = static_cast<A^>(v3);	// a5 has invalid value of type C class

	B ^b1 = gcnew B();
	B ^b2 = dynamic_cast<B^>(v2);	// downcast
	B ^b3 = dynamic_cast<B^>(v3);	// Fails b3 = null. Miss match classes
	B ^b4 = dynamic_cast<B^>(a2);	// downcast

	C ^c1 = gcnew C();
	C ^c2 = dynamic_cast<C^>(v1);	// Fail c2 = null. Miss math classes
//	C ^c3 = static_cast<C^>(v2);	// c3 has invalid value of type B class
	C ^c4 = safe_cast<C^>(v3);		// downcast

//	B ^el = safe_cast<B^>(c1);		// does not compile as compiler knows
									// these are unrelated handles.

}
