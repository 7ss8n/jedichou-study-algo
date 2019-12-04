// program0720.cpp
// This program gets a series of test scores and
// calculates the average of the scores with the
// lowest score dropped.

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

// main function
int main()
{
	const int SIZE = 4;			// Array size
	double testScores[SIZE];	// Array of test scores
	double total;				// Total of the scores
	double lowestScore;			// Lowest test score
	double average;				// Average test score

	// Set up numeric output formatting.
	cout << fixed << showpoint << setprecision(1);

	// Get the test scores from the user
	getTestScores(testScores, SIZE);

	// Get the total of the test scores.
	total = getTotal(testScores, SIZE);

	// Get the lowest test score.
	lowestScore = getLowest(testScores, SIZE);

	// Subtract the lowest score from the total;
	total -= lowestScore;

	// Calculate the average. Divide by 3 because
	// the lowest test score was dropped.
	average = total / (SIZE - 1);

	// Display the average.
	cout << "The average with the lowest score "
		 << "dropped is " << average << ".\n";

	return 0;
}

// The getTestScores function accepts an array and its
// size as arguments. It prompts the user to enter test
// scores, which are stored in the array.
void getTestScores(double scores[] , int size)
{
	// Loop counter
	int index = 0;

	// Get each test score.
	for (index = 0; index <= size - 1; index++)
	{
		cout << "Enter test score number "
			 << (index + 1) << ": ";
		cin >> scores[index];
	}
}

// The getTotal function accepts a double array
// and its size as arguments. The sum of the array's
// elements is returned as a double.
double getTotal(const double scores[], int size)
{
	double total = 0;
	for (int count = 0; count < size; count++)
		total += scores[count];
	return total;
}

// The getLowest function accepts a double array and
// its size as arguments. The lowest value in the array
// is returned as a double;
double getLowest(const double scores[], int size)
{
	double lowest;
	lowest = scores[0];
	for (int count = 1; count < size; count++)
		if (scores[count] < lowest)
			lowest = scores[count];
	return lowest;
}
