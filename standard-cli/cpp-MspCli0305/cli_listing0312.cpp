// From Apress Pro Visual C++/CLI and the .NET 3.5 Platform, Page 159
// Listing 3-12. Indexed Properties in Action

using namespace System;

ref class Student
{
public:
	Student(String^s, int g)
	{
		Name = s;
		Grade = 8;
	}

	property String^ Name;
	property int Grade;
};

ref class Course
{
	ref struct StuList
	{
		Student ^stu;
		StuList ^next;
	};
	StuList ^Stu;
	static StuList ^ReportCards = nullptr;

public:
	property Student^ ReportCard [String^]
	{
		Student^ get(String^ n)
		{
			for(Stu = ReportCards; Stu && (Stu->stu->Name != n); Stu = Stu->next)
				;
			if (Stu != nullptr)
				return Stu->stu;
			else
				return gcnew Student("", 0);  // empty student
		}

		void set(String^ n, Student^ s)
		{
			for(Stu = ReportCards; Stu && (Stu->stu->Name != n); Stu = Stu->next)
				;
			if( Stu == nullptr )
			{
				StuList ^stuList = gcnew StuList;
				stuList->stu = s;
				stuList->next = ReportCards;
				ReportCards = stuList;
			}
		}
	}
};

int main()
{
	Course EnglishList;
	Student Stephen("Stephen", 95);					// student as stack variable
	Student ^Sarah = gcnew Student("Sarah", 98);	// student as heap variable

	EnglishList.ReportCard["Stephen"] = %Stephen;	// index as String literal
	EnglishList.ReportCard[ Sarah->Name ] = Sarah;	// index as String^

	Console::WriteLine(EnglishList.ReportCard[Stephen.Name]->Grade);
	Console::WriteLine(EnglishList.ReportCard["Sarah"]->Grade);
}
