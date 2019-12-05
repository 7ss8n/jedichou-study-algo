// From Wrox Begining Visual C++ 2008, Page 192
// Ex4_12.cpp
// Searching a string

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::strlen;
using std::strstr;

int main()
{
	char* str = "Smith, where Jones had \"had had\" had had \"had\"."
			          "\n\"Had had\" had had the examiner's approval.";

	char* word = "had";
	cout << "The string to be searched is: "
		 << endl << str << endl;

	int count = 0;
	char* pstr = str;
	char* found = 0;

	while(true)
	{
		found = strstr(pstr, word);
		if(!found)
			break;
		++count;
		pstr = found + strlen(word);
	}

	cout << "\"" << word << "\" was found "
		 << count << " times in the string." << endl;
	return 0;
}
