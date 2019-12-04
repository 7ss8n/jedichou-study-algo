// Starting Out with CPP.pdf, page 164
// Description:
//   This program average 3 test scores. The braces
//   were indavertently left out of the if statement.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int HIGH_SCORE = 95;	// A high socre is 95 or greater
	int score1, score2, score3;	// To hola three test scores
	double average;				// To hold the average score

	// Get the three test scores.
	cout << "Enter 3 test scores and I will average them: ";
	cin >> score1 >> score2 >> score3;

	// ERROR! This if statement is missing its braces!
	if (average > HIGH_SCORE)
		cout << "Congratulations!\n";
		cout << "That's a high score.\n";
		cout << "You deserve a pat on the back!\n";
	return 0;
}
