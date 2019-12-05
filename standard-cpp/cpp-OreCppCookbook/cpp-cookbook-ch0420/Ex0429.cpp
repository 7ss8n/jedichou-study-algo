// Ex0429.cpp
// OReilly C++ Cookbook, zh-cn, Page 186
// Listing 4-29

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{
	// Check input parameter number
	if (argc < 3)
	{
		cout << "Parameter not enought is wrong" << endl;
		return EXIT_FAILURE;
	}
	
	// Create stream object from parameter
	ifstream in(argv[1]);
	ofstream out(argv[2]);
	
	// Create a width variable from parameter
	int w = 72;
	if (argc == 4)
		w = atoi(argv[4]);
	
	// Tell the stream to right-justify
	string temp;
	out.setf(ios_base::right);
	
	// Process: Reset width after each write
	while ( !in.eof() )
	{
		out.width(w);
		getline(in, temp, '\n');
		out << temp << '\n';
	}
	out.close();
}