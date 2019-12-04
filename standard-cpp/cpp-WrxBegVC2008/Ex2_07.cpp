// Ex2_07.cpp
// Demonstrating variable scope

#include <iostream>

using std::cout;
using std::endl;

int ex0207()
{
	int count1 = 10;
	int count3 = 50;
	cout << endl
		 << "Value of outer cout1 = " << count1
		 << endl;

	{							// New scope starts here ...
		int count1 = 20;		// This hides the outer count1
		int count2 = 30;
		cout << "Value of inner count1 = " << count1
			 << endl;
		count1 += 3;			// This affects the inner count1
		count3 += count2;
	}

	cout << "Value of outer count1 = " << count1
		 << endl
		 << "Value of outer count3 = " << count3
		 << endl;

	// cout << count2 << endl;
	
	return 0;
}
