// Pro Visual C++/CLI and the .Net 3.5 Platform
// Listing 6-1. Simple Triple Slash Comments

using namespace System;

namespace SimpleTripleSlash
{
	/// <summary>
	/// This is a summary comment for Class1
	/// </summary>
	public ref class Class1
	{
	public:
		/// <summary>
		/// This is a summary comment for Method1
		/// </summary>
		void Method1() {}

		/// <summary>
		/// This is a summary comment for Variable1
		/// </summary>
		int Variable1;
	};
}
