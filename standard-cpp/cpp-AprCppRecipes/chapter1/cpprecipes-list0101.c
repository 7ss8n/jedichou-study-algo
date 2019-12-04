// C++ Recipes: A Problem Solution Approach
// Listing 1-1. Your first C++ 14 Program

#include <iostream>
#include <string>

int main(void)
{
	using namespace std::string_literals;

	auto output = "Hello World!"s;
	std::cout << output << std::endl;

	return 0;
}
