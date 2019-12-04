// program0610.cpp

#include <iostream>
#include <iomanip>

using namespace std;

// Function prototype
void showMenu();
void showFees(double, int);

int main()
{
	int choice;
	int months;

	const int ADULT_CHOICE = 1;
	const int CHILD_CHOICE = 2;
	const int SENIOR_CHOICE = 3;
	const int QUIT_CHOICE = 4;

	const double ADULT = 40.0;
	const double CHILD = 20.0;
	const double SENIOR = 30.0;

	cout << fixed << showpoint << setprecision(2);

	do 
	{
		// 1. Show menu
		showMenu();
		cin >> choice;

		// 2. Chocie a item
		while ( choice < ADULT_CHOICE || choice > QUIT_CHOICE)
		{
			cout << "Pls select a num: ";
			cin >> choice;
		}

		// 3. Process
		if (choice != QUIT_CHOICE)
		{
			cout << "Input your months: ";
			cin >> months;

			switch (choice)
			{
				case ADULT_CHOICE:
					 showFees(ADULT, months);
					 break;
				case CHILD_CHOICE:
					 showFees(CHILD_CHOICE, months);
					 break;
				case SENIOR_CHOICE:
					 showFees(SENIOR_CHOICE, months);
					 break;
			}
		}

	} while (choice != QUIT_CHOICE);

	return 0;
}

void showMenu()
{
	cout << "\nPls input a number\n"
		 << "1. ADULT.\n"
		 << "2. CHILD.\n"
		 << "3. SENIOR.\n"
		 << "4. QUIT.\n\n"
		 << "You choice is: ";
}

void showFees(double memberRate, int months)
{
	cout << "Your Fees is : "
		 << (memberRate * months) << endl;
}
