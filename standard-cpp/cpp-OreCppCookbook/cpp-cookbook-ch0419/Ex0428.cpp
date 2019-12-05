// Ex0428.cpp
// OReilly C++ Cookbook, zh-cn, Page 184
// Description: format file (add whitespace character)

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;
const static char PAD_CHAR = '.';

// addMargins takes two streams and two numbers. The streams are for
// input and output. The first of two numbers represents the
// left margin width (i.e., the number of spaces to insert at the
// beginning of every line in the file). The second number represents
// the total line width to pad to.
void addMargins(istream& in, ostream& out, int left, int right)
{
	string tmp;
	while( !in.eof() )
	{
		// getline is defined in <string>
		getline(in, tmp, '\n');
		
		tmp.insert(tmp.begin(), left, PAD_CHAR);
		// rpad from recipe 4.2
		// TODO: can't complie
		rpad(tmp, right, PAD_CHAR);
		
		out << tmp << '\n';
	}
}

int main(int argc, char** argv)
{
	if (argc < 3)
	{
		cout << "Parameters wrong." << endl;
		return (EXIT_FAILURE);
	}
	
	ifstream in(argv[1]);
	ofstream out(argv[2]);
	
	if (!in || !out)
		return (EXIT_FAILURE);
}