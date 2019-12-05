#include <iostream>

using std::cout;
using std::endl;

class Human {
public:
	void SetWeight(int);
	int print();
private:
	int weight;
};

int main() {
	Human Tom, Mike;
	Tom.SetWeight(111);
	Mike.SetWeight(-1);

	return 0;
}

void Human::SetWeight(int w)
{
	if (w > 0 && w<100)
		weight = w;
	else {
		cout << "weight betweeen at 0-100" << endl;
		weight = 0;
	}
}

int Human::print()
{
	return weight;
}
