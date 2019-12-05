#include <cinttypes>
#include <iostream>

using namespace std;

class Vechicle {
public:
	int mLunZiShu;
};

int main(int argc, char* argv[])
{
	Vechicle insVechicle;
	insVechicle.mLunZiShu = 4;

	cout << "insVechicle.mLunZiShu: " << insVechicle.mLunZiShu << endl;

	return 0;
}
