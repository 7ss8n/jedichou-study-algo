// Listing 5-5. Adding a Second Object

#include <cinttypes>
#include <iostream>

using namespace std;

class Vehicle
{
public:
	uint32_t m_NumberOfWheels;
};

int main(int argc, char* argv[])
{
	Vehicle myCar;
	myCar.m_NumberOfWheels = 4;
	cout << "Number of myCar wheels: " << myCar.m_NumberOfWheels << endl;

	Vehicle myMotorcycle;
	myMotorcycle.m_NumberOfWheels = 2;
	cout << "Number of motocycle wheels: " << myMotorcycle.m_NumberOfWheels << endl;

	return 0;
}
