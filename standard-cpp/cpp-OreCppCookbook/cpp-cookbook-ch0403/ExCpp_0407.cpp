// Example 4-7: check overflow of vector index
#include <iostream>
#include <vector>
#include <exception>

using namespace std;

int main(void) {
	char carr[] = {'a', 'b', 'c', 'd', 'e'};
	cout << carr[10000] << '\n';

	vector<char> v;
	v.push_back('a');
	v.push_back('b');
	v.push_back('c');
	v.push_back('d');
	v.push_back('e');

	// TODO: can complie, but run will be pop a error.
	try {
		cout << v.at(10000) << '\n';
	} catch (out_of_range& e) {
		cerr << e.what() << '\n';
	}
}
