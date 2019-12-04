// Example 4-25: text wrap
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cctype>
#include <functional>

using namespace std;

void textWrap(istream& in, ostream& out, size_t width)
{
	string tmp;
	char cur = '\0';
	char last = '\0';
	size_t i = 0;
	
	while( in.get(cur) )
	{
		if( ++i == width )
		{
			out << '\n' << tmp;
			i = tmp.length();
			tmp.clear();
		} 
		else if (isspace(cur) && !isspace(last))
		{
			out << tmp;
			tmp.clear();
		}
		tmp += cur;
		last = cur;
	}
}

int main(int argc, char** argv)
{
	if(argc < 3)
		return (EXIT_FAILURE);

	int w = 72;
	ifstream in(argv[1]);
	ofstream out(argv[2]);

	if(argc == 4)
		w = atoi(argv[3]);
	textWrap(in, out, w);
	out.close();

	return out ? EXIT_SUCCESS : EXIT_FAILURE;
}
