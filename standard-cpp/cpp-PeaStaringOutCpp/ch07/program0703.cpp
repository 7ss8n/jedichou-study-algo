// program0703.cpp
// This program reads data from a file into an array.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const int ARRAY_SIZE = 10;
	int numbers[ARRAY_SIZE];
	int count = 0;
	ifstream inputFile;  // Input file stream object

	// Open the file
	inputFile.open("tenNums.txt");
	
	// Read the numbers from the file into array.
	while (count < ARRAY_SIZE && inputFile >> numbers[count])
		count++;

	// Close the file.
	inputFile.close();

	// Display the numbers read:
	for (count = 0; count < ARRAY_SIZE; count++)
		cout << numbers[count] << " ";
	cout << endl;

	return 0;
}
