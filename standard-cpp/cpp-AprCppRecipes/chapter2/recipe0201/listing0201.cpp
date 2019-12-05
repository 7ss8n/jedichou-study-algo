// Listing 2-1. The C++ Most Vexing Parse Problem

class MyClass
{
private:
	int m_Member;

public:
	MyClass() = default;
	MyClass(const MyClass& rhs) = default;
};

int main()
{
	MyClass objectA;
	MyClass objectB(MyClass());
	return 0;
}
