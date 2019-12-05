// File: Destructor.hpp
// Description: How to use destructor.

#include <iostream>
using std::cout;
using std::endl;

///////////////////////////////////////
// Define Destructor class
class Destructor {
public:
	Destructor();
	~Destructor();
};

///////////////////////////////////////
// constructor
Destructor::Destructor() {
	cout << "Destructor's constructor method." << endl;
}

///////////////////////////////////////
// destructor
Destructor::~Destructor() {
	cout << "Destructor's destructor method." << endl;
}
