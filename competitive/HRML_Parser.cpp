// {{{1 HRML Spec Sheet
// Sample Input
// 4 3
// <tag1 value = "HelloWorld">
// <tag2 name = "Name1">
// </tag2>
// </tag1>
// tag1.tag2~name
// tag1~name
// tag1~value
//
// Sample Output
// Name1
// Not Found!
// HelloWorld
//
// Spec
// <tag1 attr1="what am i">
// <tag2 attr2="ooh i am nested!">
// </tag2>
// </tag1>

// {{{1


#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

int main(void) {
	int line_count = 0;
	int query_count = 0;
	cin >> line_count;
	cin >> query_count;

	string line;
	vector<string> lines(line_count);
	vector<string> queries(query_count);

	std::getline(cin, line);
	for (int i = 0; i < line_count; i += 1) {
		std::getline(cin, line);
		line.push_back('\n');
		lines.emplace_back(line);
	}

	for (const auto& line: lines) {
		cout << line;
	}

	return 0;
}
