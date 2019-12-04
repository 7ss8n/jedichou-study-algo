// Listing 2-2. Using Uniform Initialization to Solve the Vexing Parse Problem

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
	MyClass objectB{MyClass{}};
	return 0;
}
