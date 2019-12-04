// Ex0426.cpp
// OReilly C++ Cookbook

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>

using namespace std;

// countStuff method
// Known issue, TODO: can not count non-asiic characters.
void countStuff(istream& in,
	int& chars,
	int& words,
	int& lines
) {
	char cur  = '\0';
	char last = '\0';
	chars = words = lines = 0;
	
	while( in.get(cur) )
	{
		if( cur == '\n' || cur == '\f' && last == '\r')
			lines++;
		else
			chars++;
		
		// This is the end of a word
		if( !std::isalnum(cur) && std::isalnum(last))
			words++;
		last = cur;
	}
	
	// Adjust word and line counts for special
	if (chars > 0)
	{
		if( std::isalnum(last) )
			words++;
		lines++;
	}
}

int main(int argc, char** argv)
{
	if (argc < 2)
		return (EXIT_FAILURE);
	
	ifstream in(argv[1]);
	
	if(!in)
		exit(EXIT_FAILURE);
	
	int c, w, l;
	countStuff(in, c, w, l);
	
	cout << "chars: " << c << endl;
	cout << "words: " << w << endl;
	cout << "lines: " << l << endl;
}