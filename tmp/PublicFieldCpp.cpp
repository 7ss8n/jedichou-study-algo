#include <iostream>

using std::cout;
using std::endl;

class Human
{
public:
	int weight;
};

int main()
{
	Human Tom;
	Tom.weight = 5;

	// output
	cout << "Tom's weight is: " << Tom.weight << endl;

	// change public field
	Tom.weight = 20;

	// output again
	cout << "Current Tom's weight is: " << Tom.weight << endl;

	return (0);
}
