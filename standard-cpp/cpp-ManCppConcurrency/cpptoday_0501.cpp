#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

// trivial implemention of the unix uniq utility
// read lines from stdin
// write sorted unique lines to stdout
int main(int argc, char** argv) {
	using std::vector; using std::string; using std::sort;
	using std::unique; using std::cin; using std::cout;

	vector<string> lines;
	while(cin) {
		lines.emplace_back();
		getline(cin, lines.back());
	};

	sort(lines.begin(), lines.end());

	typedef typename vector<string>::const_iterator c_v_s_iter;
	c_v_s_iter const last = unqiue(lines.begin(), lines.end());
	lines.resize(last - lines.begin());

	for(c_v_s_iter i = lines.begin(), e = lines.end(); i < e; ++i) {
		cout << (*i) <<'\n';
	}
}
