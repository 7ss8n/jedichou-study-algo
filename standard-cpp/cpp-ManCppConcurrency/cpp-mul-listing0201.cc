// Profiessional Multicore Programming
// Design and Implementation for C++ Developers
// Program list: listing 2-1
// use sysconf() function to determin how many
// processor are available to the OS.

#include <unistd.h>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	cout << sysconf(_SC_NPROCESSORS_CONF) << endl;
	return(0);
}
