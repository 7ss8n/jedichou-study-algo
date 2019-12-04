// file name: IEnum_foreach
// reference by: Pro Visual C++ and the .net 3.5 platform.pdf
using namespace System;
using namespace System::Collections;

int main(array<System::String ^> ^args)
{
    array<int>^ IntList = gcnew array<int> {1,2,3,4,5};
	IEnumerable ^collection = (IEnumerable^)IntList;
	IEnumerator ^enumerator = collection->GetEnumerator();
	
	Console::WriteLine("IEnumerator\n-------------");
	
	while (enumerator->MoveNext())
	{
		int i = (int)enumerator->Current;
		Console::WriteLine(i);
	}
	
	Console::WriteLine("\nfor each\n--------");
	
	for each (int i in IntList)
		Console::WriteLine(i);
	
    return 0;
}
