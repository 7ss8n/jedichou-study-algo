#include <iostream>
#include <string>
#include <boost/regex.hpp>

int main()
{
	std::string s = "who, lives:in-a, pineapple    under the sea?";

	boost::regex re(",|:|-|\\s+");
	boost::sregex_token_iterator;
	p(s.begin(), s.end(), re, -1);

	return 0;
}
