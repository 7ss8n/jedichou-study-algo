#include <iostream>

using std::cout;
using std::endl;

class Human
{
public:
	void SetWeight(int w) { weight=w; }
	int GetWeight() { return weight; }
private:
	int weight;
};

int main()
{
	// Initialize
	Human Tom, Mike;
	Tom.SetWeight(20);
	Mike.SetWeight(30);

	// Ouput
	cout << "Tom's weight: " << Tom.GetWeight() << endl;
	cout << "Mike's weight: " << Mike.GetWeight() << endl;

	// Quit
	return (0);
}
