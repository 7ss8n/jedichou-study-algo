// apress-cpp-recipe-list0801.cpp
// Ref: Apress C++ Recipses
// Jedi Chou, 2016.3.15 10:55 AM

/////////////////////////////////////////////////////////
// <Notice: Reference page 177>
// Recipe 8-1. Using an iterator to define a sequence
// with a container
//
// Problem:
// You have a STL container and would like to mark a
// sequence within than container that begins and ends
// at certain points.
//
// Solution:
// The STL providers iterators that work with all containers
// and be used to denote the beginning and end of a sequence
// within that container. The sequence can include every
// node in the container or it can include a subset of the
// nodes in the container.
/////////////////////////////////////////////////////////

#include <cinttypes>
#include <iostream>
#include <vector>

using namespace std;

int main(int arcg, char* argv[])
{
	using IntVector = vector<int32_t>;
	using IntVectorIterator = IntVector::iterator;

	IntVector myVector {0,1,2,3,4};
	for(IntVectorIterator iter = myVector.begin(); 
		iter != myVector.end();
		++iter)
	{
		cout << "The value is: " << *iter << endl;
	}

	return 0;
}
